/*
 * XREFs of PspSyscallProviderOptIn @ 0x14077153C
 * Callers:
 *     NtSetInformationProcess @ 0x140947500 (NtSetInformationProcess.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140245670 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection @ 0x1402792A0 (ExAcquireRundownProtection.c)
 *     PspLockProcessExclusive @ 0x14045AB10 (PspLockProcessExclusive.c)
 *     PspUnlockProcessExclusive @ 0x140462E74 (PspUnlockProcessExclusive.c)
 *     PspDereferenceSyscallProvider @ 0x1405E4998 (PspDereferenceSyscallProvider.c)
 *     PspLookupSyscallProviderById @ 0x1405E4A2C (PspLookupSyscallProviderById.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     PspAttachProcessToSyscallProvider @ 0x14077110C (PspAttachProcessToSyscallProvider.c)
 */

__int64 __fastcall PspSyscallProviderOptIn(__int64 a1, __int64 a2)
{
  int v4; // ebx
  __int64 v5; // rax
  struct _EX_RUNDOWN_REF *v6; // rbx
  struct _EX_RUNDOWN_REF *v7; // rbp
  __int64 v8; // r8
  __int64 v9; // r9
  volatile signed __int32 *i; // rax
  __int64 v12; // [rsp+20h] [rbp-18h] BYREF
  int v13; // [rsp+28h] [rbp-10h]
  int v14; // [rsp+2Ch] [rbp-Ch]
  struct _EX_RUNDOWN_REF *v15; // [rsp+40h] [rbp+8h] BYREF

  v15 = 0LL;
  if ( (*(_DWORD *)(a1 + 1532) & 1) != 0 )
  {
    return (unsigned int)-1073741637;
  }
  else
  {
    v4 = PspLookupSyscallProviderById(a2, (__int64)&v15);
    if ( v4 >= 0 )
    {
      v5 = *(unsigned __int8 *)(a2 + 16);
      if ( (_BYTE)v5 || HIDWORD(v15[v5 + 11].Ptr) == -1 )
      {
        v4 = -1073741811;
      }
      else if ( _interlockedbittestandset((volatile signed __int32 *)(a1 + 1532), 0x19u) )
      {
        v4 = -1073741823;
      }
      else
      {
        if ( *(_QWORD *)(a1 + 1976) )
        {
          v4 = -1073741790;
        }
        else
        {
          v6 = v15;
          v7 = v15 + 7;
          if ( ExAcquireRundownProtection(v15 + 7) )
          {
            v14 = 0;
            if ( !v6[5].Count
              || (v12 = *(_QWORD *)(a1 + 720),
                  v13 = *(unsigned __int8 *)(a2 + 16),
                  v4 = guard_dispatch_icall_no_overrides(a1, &v12, v8, v9),
                  v4 >= 0) )
            {
              PspLockProcessExclusive(a1, (__int64)KeGetCurrentThread());
              PspAttachProcessToSyscallProvider((_QWORD *)a1, (__int64)v15, *(unsigned __int8 *)(a2 + 16));
              for ( i = *(volatile signed __int32 **)(a1 + 880);
                    i != (volatile signed __int32 *)(a1 + 880);
                    i = *(volatile signed __int32 **)i )
              {
                _interlockedbittestandset(i - 350, 0x1Du);
              }
              PspUnlockProcessExclusive(a1);
              v4 = 0;
            }
            ExReleaseRundownProtection_0(v7);
          }
          else
          {
            v4 = -1073741738;
          }
        }
        _interlockedbittestandreset((volatile signed __int32 *)(a1 + 1532), 0x19u);
      }
    }
    if ( v15 )
      PspDereferenceSyscallProvider((volatile signed __int64 *)v15);
  }
  return (unsigned int)v4;
}
