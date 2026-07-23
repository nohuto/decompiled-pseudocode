/*
 * XREFs of RtlpFlsSetValueSlot @ 0x140A12A14
 * Callers:
 *     PsTlsSetValue @ 0x140A12950 (PsTlsSetValue.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     ?SetValue@?$RTL_BINARY_ARRAY@URTLP_FLS_SLOT@@$03$03@@SAJPEAU1@KURTLP_FLS_SLOT@@K@Z @ 0x140459DA8 (-SetValue@-$RTL_BINARY_ARRAY@URTLP_FLS_SLOT@@$03$03@@SAJPEAU1@KURTLP_FLS_SLOT@@K@Z.c)
 */

__int64 __fastcall RtlpFlsSetValueSlot(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  unsigned int v4; // ecx
  __int64 v8; // rdx
  __int64 v9; // r8
  unsigned __int64 *v10; // rbx
  int v11; // ecx
  __int64 v12; // r8
  _QWORD *v13; // rsi
  unsigned __int64 *v14; // rdi
  char *v15; // rax
  char *v16; // r14
  unsigned __int64 **v17; // rcx
  __int64 result; // rax
  int v19; // ecx
  __int64 v20; // r8
  char *v21; // rax
  char *v22; // r14
  unsigned __int64 v23; // rcx
  unsigned __int64 *v24; // rax
  _BYTE v25[24]; // [rsp+20h] [rbp-40h] BYREF
  __int128 v26; // [rsp+40h] [rbp-20h] BYREF
  __int64 v27; // [rsp+50h] [rbp-10h]

  _BitScanReverse(&v4, a3);
  *(_QWORD *)&v25[16] = &v25[8];
  *(_QWORD *)&v25[8] = &v25[8];
  v8 = a3 ^ (1 << v4);
  v9 = *(&PspTlsContext + v4 - 3);
  if ( v9 )
    v10 = (unsigned __int64 *)(v9 + 8 * ((unsigned int)v8 + 4 * v8 + 1));
  else
    v10 = 0LL;
  _BitScanReverse((unsigned int *)&v11, a3);
  v12 = *(_QWORD *)(a2 + 8LL * (unsigned int)(v11 - 4));
  if ( v12 )
  {
    v13 = (_QWORD *)(v12 + 8 * ((a3 ^ (1 << v11)) + 2LL * (a3 ^ (1 << v11)) + 1));
    goto LABEL_5;
  }
  *(_QWORD *)v25 = a4;
  *(_OWORD *)&v25[8] = 0LL;
  v26 = *(_OWORD *)v25;
  v27 = *(_OWORD *)&_mm_unpackhi_pd(*(__m128d *)&v25[8], *(__m128d *)&v25[8]);
  result = RTL_BINARY_ARRAY<RTLP_FLS_SLOT,4,4>::SetValue(a2, a3, (__int64)&v26);
  if ( (int)result >= 0 )
  {
    _BitScanReverse((unsigned int *)&v19, a3);
    v20 = *(_QWORD *)(a2 + 8LL * (unsigned int)(v19 - 4));
    if ( v20 )
      v13 = (_QWORD *)(v20 + 8 * ((a3 ^ (1 << v19)) + 2LL * (a3 ^ (1 << v19)) + 1));
    else
      v13 = 0LL;
    v13[2] = v13 + 1;
    v13[1] = v13 + 1;
LABEL_5:
    v14 = v13 + 1;
    if ( (unsigned __int64 *)*v14 == v14 )
    {
      if ( a4 )
      {
        v15 = (char *)KeAbPreAcquire((__int64)v10, 0LL);
        v16 = v15;
        if ( _interlockedbittestandset64((volatile signed __int32 *)v10, 0LL) )
          ExfAcquirePushLockExclusiveEx(v10, v15, (__int64)v10);
        if ( v16 )
          v16[10] = 1;
        v17 = (unsigned __int64 **)v10[4];
        if ( *v17 != v10 + 3 )
          goto LABEL_12;
        *v14 = (unsigned __int64)(v10 + 3);
        v13[2] = v17;
        *v17 = v14;
        v10[4] = (unsigned __int64)v14;
LABEL_15:
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v10, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)v10);
        KeAbPostRelease((ULONG_PTR)v10);
      }
    }
    else if ( !a4 )
    {
      v21 = (char *)KeAbPreAcquire((__int64)v10, 0LL);
      v22 = v21;
      if ( _interlockedbittestandset64((volatile signed __int32 *)v10, 0LL) )
        ExfAcquirePushLockExclusiveEx(v10, v21, (__int64)v10);
      if ( v22 )
        v22[10] = 1;
      *v13 = 0LL;
      v23 = *v14;
      v24 = (unsigned __int64 *)v13[2];
      if ( *(unsigned __int64 **)(*v14 + 8) != v14 || (unsigned __int64 *)*v24 != v14 )
LABEL_12:
        __fastfail(3u);
      *v24 = v23;
      *(_QWORD *)(v23 + 8) = v24;
      v13[2] = v13 + 1;
      *v14 = (unsigned __int64)v14;
      goto LABEL_15;
    }
    result = 0LL;
    *v13 = a4;
    *(_DWORD *)(a2 + 32) |= 1u;
  }
  return result;
}
