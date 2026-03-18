/*
 * XREFs of PspWriteTebImpersonationInfo @ 0x140911080
 * Callers:
 *     NtOpenThreadTokenEx @ 0x1408553C0 (NtOpenThreadTokenEx.c)
 *     PsImpersonateClient @ 0x1409102D0 (PsImpersonateClient.c)
 *     PsRestoreImpersonation @ 0x1409D6E80 (PsRestoreImpersonation.c)
 * Callees:
 *     ExfReleaseRundownProtection @ 0x1402456A0 (ExfReleaseRundownProtection.c)
 *     KeStackAttachProcess @ 0x1402473F0 (KeStackAttachProcess.c)
 *     ExAcquireRundownProtection @ 0x1402792A0 (ExAcquireRundownProtection.c)
 *     KiUnstackDetachProcess @ 0x140321EC0 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 */

__int64 __fastcall PspWriteTebImpersonationInfo(__int64 a1, __int64 a2)
{
  _DWORD *v4; // rdi
  __int64 v5; // r15
  int v6; // eax
  bool v7; // dl
  BOOL v8; // ecx
  __int16 v9; // ax
  unsigned __int64 v10; // rtt
  signed __int32 v12[8]; // [rsp+0h] [rbp-A8h] BYREF
  char v13; // [rsp+20h] [rbp-88h]
  bool v14; // [rsp+21h] [rbp-87h]
  __int64 v15; // [rsp+28h] [rbp-80h]
  _DWORD *v16; // [rsp+30h] [rbp-78h]
  __int64 v17; // [rsp+38h] [rbp-70h]
  __int64 v18; // [rsp+40h] [rbp-68h]
  struct _KAPC_STATE ApcState; // [rsp+50h] [rbp-58h] BYREF

  v18 = a1;
  memset(&ApcState, 0, sizeof(ApcState));
  v4 = *(_DWORD **)(a1 + 240);
  v16 = v4;
  if ( v4 && (*(_DWORD *)(a1 + 116) & 0x400) == 0 )
  {
    v5 = *(_QWORD *)(a1 + 544);
    v17 = v5;
    if ( *(_QWORD *)(a2 + 184) == v5 )
    {
      v13 = 0;
    }
    else
    {
      KeStackAttachProcess((PRKPROCESS)v5, &ApcState);
      v13 = 1;
    }
    if ( a1 == a2 || ExAcquireRundownProtection((PEX_RUNDOWN_REF)(a1 + 1416)) )
    {
      do
      {
        v15 = a1 + 1440;
        v6 = *(_DWORD *)(a1 + 1440) & 8;
        v7 = v6 != 0;
        v14 = v6 != 0;
        v8 = v6 != 0;
        v4[1511] = v8;
        v4[1530] = 0;
        if ( *(_QWORD *)(v5 + 784) )
        {
          v9 = *(_WORD *)(v5 + 1772);
          if ( v9 == 332 || v9 == 452 )
          {
            v4[3047] = v8;
            v4[3057] = 0;
          }
        }
        _InterlockedOr(v12, 0);
      }
      while ( v7 != ((*(_DWORD *)(a1 + 1440) & 8) != 0) );
      if ( a1 != a2 )
      {
        _m_prefetchw((const void *)(a1 + 1416));
        v10 = *(_QWORD *)(a1 + 1416) & 0xFFFFFFFFFFFFFFFEuLL;
        if ( v10 != _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 1416), v10 - 2, v10) )
          ExfReleaseRundownProtection((PEX_RUNDOWN_REF)(a1 + 1416));
      }
    }
    if ( v13 )
      KiUnstackDetachProcess((__int64)&ApcState, 0);
  }
  return 0LL;
}
