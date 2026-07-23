/*
 * XREFs of MiGetSingleHugeRangeToZero @ 0x1404EE3F4
 * Callers:
 *     MiGetBackgroundHugePageToZero @ 0x1403310D0 (MiGetBackgroundHugePageToZero.c)
 * Callees:
 *     MiInitializePageColorBase @ 0x140342940 (MiInitializePageColorBase.c)
 *     MiLockHugePfnInternal @ 0x1403EFAE4 (MiLockHugePfnInternal.c)
 *     MiBeginPageAccessor @ 0x140425C90 (MiBeginPageAccessor.c)
 *     MiGetColorHeadHugeRangeBase @ 0x1404ACA2C (MiGetColorHeadHugeRangeBase.c)
 */

unsigned __int64 __fastcall MiGetSingleHugeRangeToZero(unsigned __int64 a1, __int64 a2, volatile signed __int32 *a3)
{
  __int16 *v3; // rax
  unsigned __int64 v6; // rbx
  __int16 v7; // cx
  int v8; // r8d
  int v9; // r13d
  unsigned __int32 v10; // eax
  unsigned __int8 v11; // di
  __int64 ColorHeadHugeRangeBase; // rcx
  int v13; // r15d
  int v14; // r12d
  __int64 v15; // rax
  unsigned __int64 v16; // rdx
  __int64 *v17; // rsi
  __int64 v18; // rdx
  __int64 v20; // [rsp+20h] [rbp-58h]
  __int64 v21; // [rsp+28h] [rbp-50h]
  __int128 v22; // [rsp+30h] [rbp-48h] BYREF
  __int16 v24; // [rsp+88h] [rbp+10h]
  int v26; // [rsp+98h] [rbp+20h]

  v3 = *(__int16 **)(a2 + 14984);
  v6 = 0LL;
  v7 = *v3;
  v8 = -643764673 * ((a2 - *((_QWORD *)v3 + 2)) >> 7);
  v22 = 0LL;
  v24 = v7;
  MiInitializePageColorBase(0LL, 0, v8 + 1, (__int64)&v22);
  v9 = 0;
  v26 = dword_140E2DD00[0];
  v10 = _InterlockedExchangeAdd(a3, 1u);
  v21 = (*((_QWORD *)&v22 + 1) >> 16) & 3LL;
  v11 = v10 % dword_140E2DD00[v21];
  ColorHeadHugeRangeBase = MiGetColorHeadHugeRangeBase(a2, DWORD2(v22) ^ (v10 % dword_140E2DD00[v21]), 1);
  v20 = ColorHeadHugeRangeBase;
  v13 = 0;
  while ( 2 )
  {
    v14 = 0;
    do
    {
      v15 = *(_QWORD *)(ColorHeadHugeRangeBase + 8LL * v11) >> 37;
      v16 = v15 & 0x3FFFFF;
      v6 = v15 ^ (v15 ^ v6) & 0xFFFFFFFFFFC00000uLL;
      if ( (v15 & 0x3FFFFF) == 0 )
        goto LABEL_8;
      if ( !_bittest64((const signed __int64 *)stru_140E300F0.Buffer, v16) )
        goto LABEL_9;
      v17 = (__int64 *)(qword_140E30100 + 8 * v16);
      if ( !v13
        && ((*(int *)(qword_140E30108 + 4 * ((((__int64)(8 * v16) >> 3) & 0x3FFFFFuLL) >> 5)) >> (((__int64)(8 * v16) >> 3) & 0x1F)) & 1) != 0 )
      {
        v9 = 1;
LABEL_8:
        v11 = _InterlockedExchangeAdd(a3, 1u) % (unsigned int)dword_140E2DD00[v21];
        ++v14;
        goto LABEL_9;
      }
      MiLockHugePfnInternal((__int64)v17);
      v18 = *v17;
      if ( (((unsigned __int64)*v17 >> 4) & 0x7FF) == v24 && (v18 & 7) == 2 )
      {
        if ( (v18 & 0x800000000000000LL) == 0 && (unsigned int)MiBeginPageAccessor(a1, 0, (__int64)v17, 1) )
        {
          _InterlockedAnd(
            (volatile signed __int32 *)(qword_140E30108
                                      + 4 * (((((__int64)v17 - qword_140E30100) >> 3) & 0x3FFFFFuLL) >> 5)),
            ~(1 << ((((__int64)v17 - qword_140E30100) >> 3) & 0x1F)));
          return v6;
        }
        _InterlockedAnd(
          (volatile signed __int32 *)(qword_140E30108
                                    + 4 * (((((__int64)v17 - qword_140E30100) >> 3) & 0x3FFFFFuLL) >> 5)),
          ~(1 << ((((__int64)v17 - qword_140E30100) >> 3) & 0x1F)));
        goto LABEL_8;
      }
      _InterlockedAnd(
        (volatile signed __int32 *)(qword_140E30108 + 4 * (((((__int64)v17 - qword_140E30100) >> 3) & 0x3FFFFFuLL) >> 5)),
        ~(1 << ((((__int64)v17 - qword_140E30100) >> 3) & 0x1F)));
LABEL_9:
      ColorHeadHugeRangeBase = v20;
    }
    while ( v14 != v26 );
    if ( v9 )
    {
      if ( (unsigned int)++v13 < 2 )
        continue;
    }
    break;
  }
  v6 &= 0xFFFFFFFFFFC00000uLL;
  return v6;
}
