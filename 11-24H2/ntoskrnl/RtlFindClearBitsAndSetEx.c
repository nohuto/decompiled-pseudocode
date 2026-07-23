/*
 * XREFs of RtlFindClearBitsAndSetEx @ 0x14026DCA0
 * Callers:
 *     RtlpHpFixedVsAllocate @ 0x14026C140 (RtlpHpFixedVsAllocate.c)
 *     ExpSaPageGroupAllocateMemory @ 0x14026DBA0 (ExpSaPageGroupAllocateMemory.c)
 *     MiAllocateFromSubAllocatedRegion @ 0x1408DE814 (MiAllocateFromSubAllocatedRegion.c)
 *     MiObtainRelocationBits @ 0x140A1A244 (MiObtainRelocationBits.c)
 * Callees:
 *     RtlSetBitsEx @ 0x14026E120 (RtlSetBitsEx.c)
 */

unsigned __int64 __fastcall RtlFindClearBitsAndSetEx(unsigned __int64 *a1, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // rbp
  unsigned __int64 v5; // r14
  unsigned __int64 v8; // r9
  unsigned __int64 v9; // rbx
  unsigned __int64 i; // r15
  unsigned __int64 v12; // rsi
  unsigned __int64 v13; // rdi
  unsigned __int64 *v14; // rdx
  __int64 v15; // r8
  unsigned __int64 v16; // r9
  unsigned __int64 v17; // rax
  unsigned int v18; // r10d
  unsigned __int64 *v19; // rbx
  bool v20; // zf
  __int64 v21; // rax
  unsigned int v22; // r10d
  unsigned __int64 v23; // r9
  __int64 v24; // rbx
  unsigned __int64 v25; // r9
  __int64 v26; // rax
  unsigned int v27; // ecx
  unsigned __int64 *v28; // r8
  unsigned __int64 *v29; // rax
  __int64 v30; // r8
  unsigned int v31; // r8d
  __int64 v32; // rcx
  __int64 v33; // rcx
  unsigned int v34; // eax
  unsigned __int64 v35; // rcx
  unsigned __int64 v36; // rax
  __int64 v37; // rax

  v3 = *a1;
  v5 = a1[1];
  v8 = *a1 - 1;
  if ( !a2 )
  {
    v9 = a3 & -(__int64)(a3 < *a1) & 0xFFFFFFFFFFFFFFF8uLL;
    goto LABEL_3;
  }
  for ( i = a3 & -(__int64)(a3 < *a1); ; i = 0LL )
  {
    if ( v8 - i + 1 < a2 )
    {
LABEL_13:
      v9 = -1LL;
      goto LABEL_14;
    }
    v12 = v8 - a2 + 1;
    v13 = v5 + 8 * (v12 >> 6);
    v14 = (unsigned __int64 *)(v5 + 8 * (i >> 6));
    v15 = *v14 | ((1LL << (i & 0x3F)) - 1);
    if ( a2 > 0x7F )
    {
      v25 = v13 + 8;
      if ( (v12 & 0x3F) == 0 )
        v25 = v5 + 8 * (v12 >> 6);
      if ( !v15 )
      {
        v27 = 0;
        goto LABEL_46;
      }
      if ( *++v14 )
        goto LABEL_50;
      v20 = !_BitScanReverse64((unsigned __int64 *)&v26, v15);
      if ( !v20 )
      {
        v27 = 63 - v26;
        goto LABEL_46;
      }
LABEL_78:
      v27 = 64;
LABEL_46:
      while ( 1 )
      {
        v9 = ((__int64)((__int64)v14 - v5) >> 3 << 6) - v27;
        if ( v9 > v12 )
          goto LABEL_13;
        v28 = &v14[(a2 - v27) >> 6];
        while ( ++v14 != v28 )
        {
          if ( *v14 )
            goto LABEL_50;
        }
        v31 = ((_BYTE)a2 - (_BYTE)v27) & 0x3F;
        if ( (((_BYTE)a2 - (_BYTE)v27) & 0x3F) == 0 )
          goto LABEL_21;
        v20 = !_BitScanForward64((unsigned __int64 *)&v32, *v14);
        if ( v20 )
          LODWORD(v32) = 64;
        if ( (unsigned int)v32 >= v31 )
          goto LABEL_21;
        do
        {
LABEL_50:
          v29 = v14;
          if ( (unsigned __int64)v14 > v25 )
            goto LABEL_13;
          ++v14;
        }
        while ( *v14 );
        v20 = !_BitScanReverse64((unsigned __int64 *)&v30, *v29);
        if ( v20 )
          goto LABEL_78;
        v27 = 63 - v30;
      }
    }
    if ( a2 >= 0x40 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          while ( v15 < 0 )
          {
            if ( (unsigned __int64)++v14 > v13 )
              goto LABEL_13;
            v15 = *v14;
          }
          v20 = !_BitScanReverse64((unsigned __int64 *)&v33, v15);
          if ( v20 )
            v34 = 64;
          else
            v34 = 63 - v33;
          v9 = ((((__int64)((__int64)v14 - v5) >> 3) + 1) << 6) - v34;
          if ( v9 > v12 )
            goto LABEL_13;
          v35 = a2 - v34;
          if ( a2 == v34 )
            goto LABEL_21;
          v15 = *++v14;
          if ( v35 >= 0x40 )
            break;
LABEL_68:
          v20 = !_BitScanForward64(&v36, v15);
          if ( v20 )
            v36 = 64LL;
          if ( v36 >= v35 )
            goto LABEL_21;
        }
        if ( !*v14 )
        {
          v35 -= 64LL;
          if ( !v35 )
            goto LABEL_21;
          v15 = *++v14;
          goto LABEL_68;
        }
      }
    }
    if ( a2 > 1 )
    {
      v18 = 0;
      v19 = (unsigned __int64 *)(v5 + 8 * (v8 >> 6));
      while ( v15 != -1 )
      {
LABEL_25:
        v20 = !_BitScanForward64((unsigned __int64 *)&v21, v15);
        if ( v20 )
          LODWORD(v21) = 64;
        if ( v18 + (unsigned int)v21 >= a2 )
        {
          v24 = -(__int64)v18;
LABEL_32:
          v9 = ((__int64)((__int64)v14 - v5) >> 3 << 6) + v24;
          goto LABEL_20;
        }
        v22 = a2;
        v23 = ~v15;
        while ( 1 )
        {
          v23 &= v23 >> (v22 >> 1);
          if ( !v23 )
            break;
          v22 -= v22 >> 1;
          if ( v22 <= 1 )
          {
            _BitScanForward64((unsigned __int64 *)&v24, v23);
            goto LABEL_32;
          }
        }
        if ( v14 == v19 )
          goto LABEL_13;
        v20 = !_BitScanReverse64((unsigned __int64 *)&v37, v15);
        if ( v20 )
          v18 = 64;
        else
          v18 = 63 - v37;
        v15 = *++v14;
      }
      while ( 1 )
      {
        if ( (unsigned __int64)++v14 > v13 )
          goto LABEL_13;
        v15 = *v14;
        if ( *v14 != -1LL )
        {
          v18 = 0;
          goto LABEL_25;
        }
      }
    }
    while ( v15 == -1 )
    {
      if ( (unsigned __int64)++v14 > v13 )
        goto LABEL_13;
      v15 = *v14;
    }
    _BitScanForward64(&v17, ~v15);
    v9 = v17 + ((__int64)((__int64)v14 - v5) >> 3 << 6);
LABEL_20:
    if ( v9 > v12 )
      goto LABEL_13;
LABEL_21:
    if ( v9 != -1LL )
      goto LABEL_4;
LABEL_14:
    if ( !i )
      break;
    v16 = a2 + a3;
    if ( a2 + a3 > v3 )
      v16 = v3;
    v8 = v16 - 1;
  }
LABEL_3:
  if ( v9 != -1LL )
LABEL_4:
    RtlSetBitsEx(a1, v9, a2);
  return v9;
}
