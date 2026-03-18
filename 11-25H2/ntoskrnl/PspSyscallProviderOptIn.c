/*
 * XREFs of PspSyscallProviderOptIn @ 0x140761B7C
 * Callers:
 *     NtSetInformationProcess @ 0x1408BA860 (NtSetInformationProcess.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140324280 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x140326750 (ExAcquireRundownProtection_0.c)
 *     PspUnlockProcessExclusive @ 0x1403D76DC (PspUnlockProcessExclusive.c)
 *     PspLockProcessExclusive @ 0x14045AFE0 (PspLockProcessExclusive.c)
 *     PspDereferenceSyscallProvider @ 0x1405D89FC (PspDereferenceSyscallProvider.c)
 *     PspLookupSyscallProviderById @ 0x1405D8A90 (PspLookupSyscallProviderById.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     PspAttachProcessToSyscallProvider @ 0x14076174C (PspAttachProcessToSyscallProvider.c)
 */

__int64 __fastcall PspSyscallProviderOptIn(__int64 a1, __int64 a2)
{
  int v4; // ebx
  __int64 v5; // rax
  struct _EX_RUNDOWN_REF *v6; // rbx
  struct _EX_RUNDOWN_REF *v7; // rbp
  struct _KTHREAD *CurrentThread; // rbx
  volatile signed __int32 *i; // rax
  struct _EX_RUNDOWN_REF *v11; // [rsp+40h] [rbp+8h] BYREF

  v11 = 0LL;
  if ( (*(_DWORD *)(a1 + 1532) & 1) != 0 )
  {
    return (unsigned int)-1073741637;
  }
  else
  {
    v4 = PspLookupSyscallProviderById(a2, (__int64)&v11);
    if ( v4 >= 0 )
    {
      v5 = *(unsigned __int8 *)(a2 + 16);
      if ( (_BYTE)v5 || HIDWORD(v11[v5 + 11].Ptr) == -1 )
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
          v6 = v11;
          v7 = v11 + 7;
          if ( ExAcquireRundownProtection_0(v11 + 7) )
          {
            if ( !v6[5].Count || (v4 = guard_dispatch_icall_no_overrides(a1), v4 >= 0) )
            {
              CurrentThread = KeGetCurrentThread();
              PspLockProcessExclusive(a1, (__int64)CurrentThread);
              PspAttachProcessToSyscallProvider((_QWORD *)a1, (__int64)v11, *(unsigned __int8 *)(a2 + 16));
              for ( i = *(volatile signed __int32 **)(a1 + 880);
                    i != (volatile signed __int32 *)(a1 + 880);
                    i = *(volatile signed __int32 **)i )
              {
                _interlockedbittestandset(i - 350, 0x1Du);
              }
              PspUnlockProcessExclusive(a1, (__int64)CurrentThread);
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
    if ( v11 )
      PspDereferenceSyscallProvider((volatile signed __int64 *)v11);
  }
  return (unsigned int)v4;
}
