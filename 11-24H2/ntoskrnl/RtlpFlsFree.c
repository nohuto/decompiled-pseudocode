/*
 * XREFs of RtlpFlsFree @ 0x1407878FC
 * Callers:
 *     PsTlsFree @ 0x14077A620 (PsTlsFree.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     ?SlotFree@?$RTL_BINARY_ARRAY@URTLP_FLS_CALLBACK_ENTRY@@$03$03@@SAXPEAU1@K@Z @ 0x1405EF920 (-SlotFree@-$RTL_BINARY_ARRAY@URTLP_FLS_CALLBACK_ENTRY@@$03$03@@SAXPEAU1@K@Z.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall RtlpFlsFree(__int64 a1, int a2)
{
  unsigned int v2; // r13d
  unsigned int v3; // edi
  unsigned int v4; // ecx
  __int64 v5; // rdx
  __int64 v6; // r8
  unsigned __int64 *v7; // rsi
  unsigned __int64 v8; // r12
  unsigned __int64 v9; // r14
  char *v10; // rax
  char *v11; // rbp
  __int64 **v12; // r15
  __int64 *v13; // rdx
  unsigned int v14; // r8d
  __int64 v15; // r9
  __int64 *v16; // r10
  __int64 v17; // r11
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 **v20; // rax
  _QWORD *v21; // r14
  __int64 v22; // rbp
  __int64 v23; // rdx
  char *v24; // rax
  signed __int8 v25; // cf
  char *v26; // rbp
  unsigned __int64 v28; // [rsp+28h] [rbp-1C0h]
  _QWORD v30[47]; // [rsp+38h] [rbp-1B0h] BYREF

  if ( (unsigned int)(a2 - 1) <= 0xEE
    && (v2 = a2 + 16,
        v3 = 0,
        _BitScanReverse(&v4, a2 + 16),
        v5 = (a2 + 16) ^ (unsigned int)(1 << v4),
        (v6 = *(&PspTlsContext + v4 - 3)) != 0)
    && (v7 = (unsigned __int64 *)(v6 + 8 * ((unsigned int)v5 + 4 * v5 + 1)), (v8 = v7[1]) != 0) )
  {
    v9 = v7[2];
    v28 = v9;
    if ( v8 == -1LL )
      v8 = 0LL;
    v10 = (char *)KeAbPreAcquire(v6 + 8 * ((unsigned int)v5 + 4 * v5 + 1), 0LL);
    v11 = v10;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v7, 0LL) )
      ExfAcquirePushLockExclusiveEx(v7, v10, (__int64)v7);
    if ( v11 )
      v11[10] = 1;
    v12 = (__int64 **)(v7 + 3);
LABEL_11:
    v13 = *v12;
    v14 = 0;
    if ( *v12 != (__int64 *)v12 )
    {
      while ( 1 )
      {
        if ( v14 >= 0x10 )
        {
LABEL_22:
          if ( v14 )
          {
            v21 = v30;
            v22 = v14;
            do
            {
              v23 = v21[1];
              if ( *v21 )
                guard_dispatch_icall_no_overrides(*v21, v23);
              else
                guard_dispatch_icall_no_overrides(v21[1], v23);
              v21 += 3;
              --v22;
            }
            while ( v22 );
            v9 = v28;
            goto LABEL_11;
          }
          break;
        }
        v15 = *v13;
        v16 = v13 - 1;
        if ( v8 )
        {
          if ( v13 != (__int64 *)8 )
          {
            v17 = *v16;
            if ( *v16 )
            {
              v18 = v14++;
              v19 = 3 * v18;
              v30[v19 - 1] = v8;
              v30[v19] = v9;
              v30[v19 + 1] = v17;
LABEL_18:
              *v16 = 0LL;
              v20 = (__int64 **)v13[1];
              if ( *(__int64 **)(v15 + 8) != v13 || *v20 != v13 )
                __fastfail(3u);
              *v20 = (__int64 *)v15;
              *(_QWORD *)(v15 + 8) = v20;
              v13[1] = (__int64)v13;
              *v13 = (__int64)v13;
            }
          }
        }
        else if ( v13 != (__int64 *)8 )
        {
          goto LABEL_18;
        }
        v13 = (__int64 *)v15;
        if ( (__int64 **)v15 == v12 )
          goto LABEL_22;
      }
    }
    v7[1] = -2LL;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v7, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v7);
    KeAbPostRelease((ULONG_PTR)v7);
    v24 = (char *)KeAbPreAcquire((__int64)&PspTlsContext, 0LL);
    v25 = _interlockedbittestandset64((volatile signed __int32 *)&PspTlsContext, 0LL);
    v26 = v24;
    if ( v25 )
      ExfAcquirePushLockExclusiveEx(&PspTlsContext, v24, (__int64)&PspTlsContext);
    if ( v26 )
      v26[10] = 1;
    v7[1] = 0LL;
    RTL_BINARY_ARRAY<RTLP_FLS_CALLBACK_ENTRY,4,4>::SlotFree((__int64)(&PspTlsContext + 1), v2);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PspTlsContext, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&PspTlsContext);
    KeAbPostRelease((ULONG_PTR)&PspTlsContext);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v3;
}
