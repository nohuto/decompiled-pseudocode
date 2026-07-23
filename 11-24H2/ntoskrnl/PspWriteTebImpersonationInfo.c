/*
 * XREFs of PspWriteTebImpersonationInfo @ 0x1408E87D0
 * Callers:
 *     NtOpenThreadTokenEx @ 0x140851680 (NtOpenThreadTokenEx.c)
 *     PsImpersonateClient @ 0x1408E7A20 (PsImpersonateClient.c)
 *     PsRestoreImpersonation @ 0x1409C74E0 (PsRestoreImpersonation.c)
 * Callees:
 *     ExfReleaseRundownProtection @ 0x14020DE80 (ExfReleaseRundownProtection.c)
 *     ExAcquireRundownProtection_0 @ 0x14022E830 (ExAcquireRundownProtection_0.c)
 *     KiUnstackDetachProcess @ 0x1402CAA50 (KiUnstackDetachProcess.c)
 *     KeStackAttachProcess @ 0x1402E1C90 (KeStackAttachProcess.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

__int64 __fastcall PspWriteTebImpersonationInfo(__int64 a1, __int64 a2)
{
  _DWORD *v4; // rdi
  __int64 v5; // r15
  __int64 v6; // r9
  _DWORD *v7; // r8
  int v8; // eax
  bool v9; // dl
  BOOL v10; // ecx
  __int16 v11; // ax
  unsigned __int64 v12; // rtt
  signed __int32 v14[8]; // [rsp+0h] [rbp-A8h] BYREF
  char v15; // [rsp+20h] [rbp-88h]
  bool v16; // [rsp+21h] [rbp-87h]
  __int64 v17; // [rsp+28h] [rbp-80h]
  _DWORD *v18; // [rsp+30h] [rbp-78h]
  __int64 v19; // [rsp+38h] [rbp-70h]
  __int64 v20; // [rsp+40h] [rbp-68h]
  struct _KAPC_STATE ApcState; // [rsp+50h] [rbp-58h] BYREF

  v20 = a1;
  memset(&ApcState, 0, sizeof(ApcState));
  v4 = *(_DWORD **)(a1 + 240);
  v18 = v4;
  if ( v4 && (*(_DWORD *)(a1 + 116) & 0x400) == 0 )
  {
    v5 = *(_QWORD *)(a1 + 544);
    v19 = v5;
    if ( *(_QWORD *)(a2 + 184) == v5 )
    {
      v15 = 0;
    }
    else
    {
      KeStackAttachProcess((PRKPROCESS)v5, &ApcState);
      v15 = 1;
    }
    if ( a1 == a2 || ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(a1 + 1416)) )
    {
      v6 = 332LL;
      do
      {
        v7 = (_DWORD *)(a1 + 1440);
        v17 = a1 + 1440;
        v8 = *(_DWORD *)(a1 + 1440) & 8;
        v9 = v8 != 0;
        v16 = v8 != 0;
        v10 = v8 != 0;
        v4[1511] = v10;
        v4[1530] = 0;
        if ( *(_QWORD *)(v5 + 784) )
        {
          v11 = *(_WORD *)(v5 + 1772);
          if ( v11 == 332 || v11 == 452 )
          {
            v4[3047] = v10;
            v4[3057] = 0;
          }
        }
        _InterlockedOr(v14, 0);
      }
      while ( v9 != ((*v7 & 8) != 0) );
      if ( a1 != a2 )
      {
        _m_prefetchw((const void *)(a1 + 1416));
        v12 = *(_QWORD *)(a1 + 1416) & 0xFFFFFFFFFFFFFFFEuLL;
        if ( v12 != _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 1416), v12 - 2, v12) )
          ExfReleaseRundownProtection((PEX_RUNDOWN_REF)(a1 + 1416));
      }
    }
    if ( v15 )
      KiUnstackDetachProcess((__int64)&ApcState, 0, (__int64)v7, v6);
  }
  return 0LL;
}
