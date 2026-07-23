/*
 * XREFs of IopLiveDumpMirrorPhysicalMemoryCallback @ 0x140599120
 * Callers:
 *     <none>
 * Callees:
 *     RtlSetBitsEx @ 0x14026E120 (RtlSetBitsEx.c)
 *     IopLiveDumpGetMillisecondCounter @ 0x140495FD4 (IopLiveDumpGetMillisecondCounter.c)
 *     IopLiveDumpIsProcessPageIncluded @ 0x140598A2C (IopLiveDumpIsProcessPageIncluded.c)
 *     MmTryIdentifyPage @ 0x140673A4C (MmTryIdentifyPage.c)
 */

__int64 __fastcall IopLiveDumpMirrorPhysicalMemoryCallback(unsigned __int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  __int64 v3; // rbx
  unsigned __int64 v4; // rbp
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rsi
  __int64 v7; // r11
  unsigned __int64 v8; // r10
  unsigned __int64 v9; // r15
  unsigned __int64 v10; // r14
  unsigned __int64 v11; // r9
  _QWORD *v12; // rdx
  __int64 v13; // r8
  _QWORD *i; // rax
  unsigned __int64 v15; // r8
  __int64 v16; // rcx
  unsigned __int64 j; // rax
  unsigned __int64 *v18; // rax
  unsigned __int64 v19; // r15
  unsigned __int64 v20; // r12
  unsigned __int64 v21; // r13
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 MillisecondCounter; // [rsp+20h] [rbp-68h]
  __int128 v26; // [rsp+28h] [rbp-60h] BYREF
  unsigned __int64 v27; // [rsp+38h] [rbp-50h]
  unsigned __int64 v28; // [rsp+90h] [rbp+8h]
  __int64 v30; // [rsp+A8h] [rbp+20h]

  v2 = IopLiveDumpContext;
  v3 = a2;
  v4 = a1 >> 12;
  MillisecondCounter = IopLiveDumpGetMillisecondCounter(0);
  v5 = *(_QWORD *)(v2 + 576);
  v6 = (v3 >> 12) + ((v3 & 0xFFF) != 0);
  v28 = v6 + v4 - 1;
  if ( v4 < v5 )
  {
    if ( v6 + v4 - 1 >= v5 )
    {
      v28 = v5 - 1;
      v6 = v5 - v4;
    }
    if ( v6 )
    {
      v7 = *(_QWORD *)(v2 + 584);
      v30 = v7;
      v8 = v28 + 1;
      while ( 1 )
      {
        v9 = 0LL;
        if ( v8 <= v4 )
          break;
        v11 = v7 + 8 * (v28 >> 6);
        v12 = (_QWORD *)(v7 + 8 * (v4 >> 6));
        v13 = ((1LL << (v4 & 0x3F)) - 1) | *v12;
        for ( i = v12 + 1; ; ++i )
        {
          v15 = ~v13;
          if ( v15 )
            break;
          if ( (unsigned __int64)i > v11 )
            goto LABEL_13;
          v13 = *++v12;
        }
        _BitScanForward64((unsigned __int64 *)&v16, v15);
        v10 = (unsigned int)v16 + (((__int64)v12 - v7) >> 3 << 6);
        if ( v10 > v8 )
        {
LABEL_13:
          v10 = v8;
          goto LABEL_23;
        }
        for ( j = ~(v15 | ((1LL << v16) - 1)); !j; j = *v18 )
        {
          v18 = v12 + 1;
          if ( (unsigned __int64)(v12 + 1) > v11 )
          {
            j = 64LL;
            goto LABEL_20;
          }
          ++v12;
        }
        _BitScanForward64(&j, j);
LABEL_20:
        v19 = j + (((__int64)v12 - v7) >> 3 << 6);
        if ( v19 > v8 )
          v19 = v8;
        v9 = v19 - v10;
LABEL_23:
        if ( !v9 )
          goto LABEL_24;
        v20 = v10 - v4;
LABEL_26:
        if ( v20 )
        {
          v21 = v20;
          while ( 2 )
          {
            if ( (*(_DWORD *)(v2 + 40) & 4) != 0 )
            {
              v26 = 0LL;
              v27 = 0LL;
              if ( !(unsigned int)MmTryIdentifyPage(v4, &v26)
                || !(unsigned int)IopLiveDumpIsProcessPageIncluded(v2, &v26) )
              {
                goto LABEL_36;
              }
              if ( v27 < 0xFFFF800000000000uLL )
              {
                if ( v27 - 1 <= 0x7FFFFFFEFFFELL )
                {
                  v22 = v2 + 656;
LABEL_35:
                  RtlSetBitsEx(v22, v4, 1uLL);
                }
LABEL_36:
                ++v4;
                if ( !--v21 )
                {
                  v8 = v28 + 1;
                  v7 = v30;
                  goto LABEL_38;
                }
                continue;
              }
            }
            break;
          }
          v22 = v2 + 600;
          goto LABEL_35;
        }
LABEL_38:
        if ( v6 > v9 + v20 )
        {
          v4 = v9 + v10;
          v6 -= v9 + v20;
          if ( v6 )
            continue;
        }
        v3 = a2;
        goto LABEL_41;
      }
      v10 = v4;
LABEL_24:
      v20 = v6;
      goto LABEL_26;
    }
  }
LABEL_41:
  v23 = IopLiveDumpGetMillisecondCounter(0) - MillisecondCounter;
  if ( (*(_DWORD *)(v2 + 80) & 1) != 0 )
  {
    *(_QWORD *)(v2 + 472) += v3;
    *(_QWORD *)(v2 + 464) += v23;
  }
  else
  {
    *(_QWORD *)(v2 + 512) += v3;
    *(_QWORD *)(v2 + 504) += v23;
  }
  return 0LL;
}
