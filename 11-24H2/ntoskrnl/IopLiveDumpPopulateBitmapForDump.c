/*
 * XREFs of IopLiveDumpPopulateBitmapForDump @ 0x140599870
 * Callers:
 *     IopLiveDumpCollectPages @ 0x1405971E8 (IopLiveDumpCollectPages.c)
 * Callees:
 *     RtlSetBitsEx @ 0x14026E120 (RtlSetBitsEx.c)
 *     IopLiveDumpGetMillisecondCounter @ 0x140495FD4 (IopLiveDumpGetMillisecondCounter.c)
 *     IopLiveDumpRemoveSystemCacheFromDump @ 0x14059A070 (IopLiveDumpRemoveSystemCacheFromDump.c)
 *     IopLiveDumpTracePopulateBitmapForDumpDuration @ 0x14059B018 (IopLiveDumpTracePopulateBitmapForDumpDuration.c)
 */

__int64 __fastcall IopLiveDumpPopulateBitmapForDump(__int64 a1, __int64 a2)
{
  __int64 v3; // r14
  unsigned __int64 *v4; // r12
  unsigned __int64 v5; // rdx
  __int64 *v6; // rcx
  __int64 *v7; // rbx
  __int64 i; // rax
  __int64 v9; // rax
  unsigned __int64 v10; // rbx
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // r15
  unsigned __int64 v13; // r9
  unsigned __int64 v14; // r11
  unsigned __int64 v15; // r10
  _QWORD *v16; // rdx
  __int64 v17; // r8
  _QWORD *j; // rax
  unsigned __int64 v19; // r8
  __int64 v20; // rcx
  unsigned __int64 v21; // rsi
  unsigned __int64 k; // rax
  unsigned __int64 *v23; // rax
  unsigned __int64 v24; // r15
  unsigned __int64 v25; // rsi
  __int64 v26; // r10
  unsigned __int64 v27; // r13
  unsigned __int64 v28; // rcx
  unsigned __int64 v29; // rbp
  unsigned __int64 v30; // r9
  _QWORD *v31; // rdx
  __int64 v32; // r8
  _QWORD *m; // rax
  unsigned __int64 v34; // r8
  __int64 v35; // rcx
  unsigned __int64 v36; // r14
  unsigned __int64 n; // rax
  unsigned __int64 *v38; // rax
  unsigned __int64 v39; // rbp
  unsigned __int64 v40; // rax
  __int64 result; // rax
  __int64 v42; // rax
  __int64 v43; // [rsp+20h] [rbp-68h]
  __int128 v44; // [rsp+28h] [rbp-60h] BYREF
  unsigned __int64 v45; // [rsp+98h] [rbp+10h]
  __int64 MillisecondCounter; // [rsp+A0h] [rbp+18h]
  __int64 v47; // [rsp+A8h] [rbp+20h] BYREF

  v47 = 0LL;
  MillisecondCounter = 0LL;
  v44 = 0LL;
  if ( (*(_DWORD *)(a1 + 80) & 0x80u) != 0 )
    MillisecondCounter = IopLiveDumpGetMillisecondCounter(0);
  v3 = a1 + 544;
  v45 = *(_QWORD *)(a1 + 544);
  IopLiveDumpRemoveSystemCacheFromDump(a1, a2, &v47);
  v4 = (unsigned __int64 *)(a1 + 600);
  while ( v4 )
  {
    v5 = *v4 - 1;
    v6 = (__int64 *)v4[1];
    if ( *v4 )
    {
      v7 = (__int64 *)v4[1];
      for ( i = *v6; ; i = *v7 )
      {
        v9 = ~i;
        if ( v9 != -1 )
          break;
        if ( ++v7 > &v6[v5 >> 6] )
          goto LABEL_60;
      }
      _BitScanForward64((unsigned __int64 *)&v9, ~v9);
      v10 = v9 + ((v7 - v6) << 6);
      if ( v10 <= v5 && v10 != -1LL )
      {
        v11 = v45;
        do
        {
          v12 = 0LL;
          v13 = *v4;
          if ( *v4 > v10 )
          {
            v14 = v4[1];
            v15 = v14 + 8 * ((v13 - 1) >> 6);
            v16 = (_QWORD *)(v14 + 8 * (v10 >> 6));
            v17 = ((1LL << (v10 & 0x3F)) - 1) | *v16;
            for ( j = v16 + 1; ; ++j )
            {
              v19 = ~v17;
              if ( v19 )
                break;
              if ( (unsigned __int64)j > v15 )
                goto LABEL_19;
              v17 = *++v16;
            }
            _BitScanForward64((unsigned __int64 *)&v20, v19);
            v21 = (unsigned int)v20 + ((__int64)((__int64)v16 - v14) >> 3 << 6);
            if ( v21 > v13 )
            {
LABEL_19:
              v21 = *v4;
              goto LABEL_29;
            }
            for ( k = ~(v19 | ((1LL << v20) - 1)); !k; k = *v23 )
            {
              v23 = v16 + 1;
              if ( (unsigned __int64)(v16 + 1) > v15 )
              {
                k = 64LL;
                goto LABEL_26;
              }
              ++v16;
            }
            _BitScanForward64(&k, k);
LABEL_26:
            v24 = k + ((__int64)((__int64)v16 - v14) >> 3 << 6);
            if ( v24 > v13 )
              v24 = *v4;
            v12 = v24 - v21;
LABEL_29:
            if ( v12 )
              goto LABEL_32;
            v11 = v45;
          }
          v21 = v11;
LABEL_32:
          v25 = v21 - v10;
          if ( (*(_DWORD *)(a1 + 80) & 1) != 0 )
          {
            RtlSetBitsEx(v3, v10, v25);
          }
          else
          {
            v26 = *(_QWORD *)(a1 + 552);
            v27 = v10 + v25;
            *(_QWORD *)&v44 = v10 + v25;
            v28 = v10;
            v43 = v26;
            *((_QWORD *)&v44 + 1) = v26;
            do
            {
              if ( v27 <= v28 )
                break;
              v29 = 0LL;
              v30 = v26 + 8 * ((v27 - 1) >> 6);
              v31 = (_QWORD *)(v26 + 8 * (v28 >> 6));
              v32 = ((1LL << (v28 & 0x3F)) - 1) | *v31;
              for ( m = v31 + 1; ; ++m )
              {
                v34 = ~v32;
                if ( v34 )
                  break;
                if ( (unsigned __int64)m > v30 )
                  goto LABEL_41;
                v32 = *++v31;
              }
              _BitScanForward64((unsigned __int64 *)&v35, v34);
              v36 = (unsigned int)v35 + (((__int64)v31 - v26) >> 3 << 6);
              if ( v36 > v27 )
              {
LABEL_41:
                v36 = v10 + v25;
                goto LABEL_51;
              }
              for ( n = ~(v34 | ((1LL << v35) - 1)); !n; n = *v38 )
              {
                v38 = v31 + 1;
                if ( (unsigned __int64)(v31 + 1) > v30 )
                {
                  n = 64LL;
                  goto LABEL_48;
                }
                ++v31;
              }
              _BitScanForward64(&n, n);
LABEL_48:
              v39 = n + (((__int64)v31 - v26) >> 3 << 6);
              if ( v39 > v27 )
                v39 = v10 + v25;
              v29 = v39 - v36;
LABEL_51:
              if ( !v29 )
                break;
              v40 = *(_QWORD *)(a1 + 688);
              if ( v29 > v40 )
              {
                *(_DWORD *)(a1 + 80) |= 2u;
                v29 = v40;
              }
              if ( v29 )
              {
                RtlSetBitsEx((__int64)&v44, v36, v29);
                *(_QWORD *)(a1 + 688) -= v29;
                v26 = v43;
              }
              result = *(unsigned int *)(a1 + 80);
              if ( (result & 2) != 0 )
                return result;
              v28 = v36 + v29;
            }
            while ( v36 + v29 < v27 );
            v3 = a1 + 544;
          }
          v10 += v12 + v25;
          v11 = v45;
        }
        while ( v10 < v45 );
      }
    }
LABEL_60:
    if ( v4 == (unsigned __int64 *)(a1 + 600) && (*(_DWORD *)(a1 + 40) & 4) != 0 )
      v4 = (unsigned __int64 *)(a1 + 656);
    else
      v4 = 0LL;
  }
  result = *(unsigned int *)(a1 + 80);
  if ( (result & 0x80u) != 0LL )
  {
    v42 = IopLiveDumpGetMillisecondCounter(0);
    return IopLiveDumpTracePopulateBitmapForDumpDuration(a1, v42 - MillisecondCounter, v47);
  }
  return result;
}
