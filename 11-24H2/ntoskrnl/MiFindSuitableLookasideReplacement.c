/*
 * XREFs of MiFindSuitableLookasideReplacement @ 0x140222B60
 * Callers:
 *     MiLockStandbyLookasidePage @ 0x140221890 (MiLockStandbyLookasidePage.c)
 *     MiReplaceStandbyLookaside @ 0x140222270 (MiReplaceStandbyLookaside.c)
 * Callees:
 *     MiSearchChannelTable @ 0x140224664 (MiSearchChannelTable.c)
 *     MiGetPfnSlabType @ 0x140300F20 (MiGetPfnSlabType.c)
 *     MiGetStandbyPageType @ 0x1403E78B0 (MiGetStandbyPageType.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 */

__int64 __fastcall MiFindSuitableLookasideReplacement(int a1, _QWORD *a2, int a3, __int64 a4, int a5)
{
  unsigned int v5; // r13d
  __int64 v7; // rsi
  int v8; // edi
  int v9; // r11d
  __int64 v10; // r12
  ULONG_PTR v11; // r10
  int v12; // r15d
  __int64 v13; // rcx
  unsigned __int64 v14; // r8
  __int64 v15; // rbx
  unsigned __int64 v16; // rbx
  __int64 v17; // rdx
  unsigned __int64 v18; // rcx
  unsigned int v19; // edx
  _QWORD *v20; // rcx
  __int64 v21; // rbx
  ULONG_PTR v22; // r8
  unsigned __int64 v23; // r10
  __int64 v24; // r14
  __int64 v25; // rcx
  __int64 v26; // r15
  __int64 v27; // r15
  unsigned __int64 v28; // rsi
  unsigned __int64 v29; // r11
  int v30; // edx
  ULONG_PTR *v31; // rax
  int i; // r9d
  int v33; // ecx
  ULONG_PTR *v34; // rax
  int v35; // eax
  __int64 v37; // rcx
  unsigned __int64 v38; // rbx
  __int64 v39; // rax
  __int64 v40; // rdx
  __int64 v41; // rcx
  ULONG_PTR v42; // rdx
  unsigned __int64 v43; // rbx
  int StandbyPageType; // [rsp+A0h] [rbp+8h]
  __int64 v46; // [rsp+B8h] [rbp+20h]

  v5 = 0;
  v7 = 0LL;
  v46 = 0LL;
  v8 = 0;
  v9 = a1;
  v10 = 0x3FFFFFFFFFLL;
  v11 = 0xAAAAAAAAAAAAAAABuLL * ((a4 + 0x220000000000LL) >> 4);
  if ( a1 )
  {
LABEL_6:
    v12 = 0;
    goto LABEL_7;
  }
  if ( v11 < qword_140E35C40 || v11 >= qword_140E35C40 + 2048 )
  {
    v13 = 16 * ((a4 + 0x220000000000LL) >> 4) - 0x220000000000LL;
    if ( (*(_DWORD *)(v13 + 32) & 0x8000000) != 0 && (unsigned int)MiGetPfnSlabType(v13) == 9 )
    {
      v12 = 2;
      goto LABEL_7;
    }
    goto LABEL_6;
  }
  v12 = 1;
LABEL_7:
  StandbyPageType = v12;
  v14 = 0LL;
  while ( v14 < 0x10 )
  {
    if ( v9 )
    {
      if ( v9 == 1 )
      {
        ++v14;
        if ( v8 )
          v21 = *(_QWORD *)a4;
        else
          v21 = *(_QWORD *)(a4 + 24);
        v16 = v21 & 0xFFFFFFFFFFLL;
      }
      else
      {
        if ( v8 )
        {
          v38 = ((*(_QWORD *)a4 >> 20) | *(_QWORD *)(a4 + 40) & 0xF80000000000000uLL) >> 20;
          v39 = 8LL * (*(_DWORD *)(a4 + 36) & 0xFFE00000);
        }
        else
        {
          v38 = (unsigned __int64)(*(_DWORD *)(a4 + 36) & 0x1FFFFF) << 19;
          v39 = (*(_QWORD *)(a4 + 24) >> 40) & 0x7FFFFLL;
        }
        v16 = v39 | v38;
        ++v14;
      }
    }
    else
    {
      ++v14;
      if ( v8 )
        v15 = *(_QWORD *)(a4 + 24);
      else
        v15 = *(_QWORD *)a4;
      v16 = v15 & 0xFFFFFFFFFFLL;
      if ( v16 == 0x3FFFFFFFFFLL )
      {
LABEL_67:
        if ( v8 )
          break;
        if ( v7 )
        {
          _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          v7 = 0LL;
          v46 = 0LL;
        }
        v8 = 1;
        StandbyPageType = v12;
        v16 = v11;
        v14 = 0LL;
        goto LABEL_30;
      }
      v17 = 48 * v16 - 0x220000000000LL;
      if ( v16 >= qword_140E35C40 && v16 < qword_140E35C40 + 2048 )
      {
        if ( !a5 || v14 > 1 )
        {
          if ( _interlockedbittestandset64((volatile signed __int32 *)(v17 + 24), 0x3FuLL) )
            goto LABEL_67;
          if ( v7 )
            _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          v7 = 48 * v16 - 0x220000000000LL;
          v46 = v7;
        }
        if ( StandbyPageType == 2 )
          goto LABEL_75;
        v43 = *(_QWORD *)(48 * v16 - 0x21FFFFFFFFF0LL);
        if ( qword_140E2DCC0 && (v43 & 0x10) == 0 )
          v43 &= ~qword_140E2DCC0;
        v16 = (v43 >> 12) & 0xFFFFFFFFFFLL;
        ++v14;
      }
      if ( v16 < qword_140E35C40 || v16 >= qword_140E35C40 + 2048 )
      {
        v37 = 48 * v16 - 0x220000000000LL;
        if ( (*(_DWORD *)(v37 + 32) & 0x8000000) != 0 && (unsigned int)MiGetPfnSlabType(v37) == 9 )
          StandbyPageType = 2;
        else
          StandbyPageType = 0;
      }
      else
      {
        StandbyPageType = 1;
      }
    }
    if ( v16 == 0x3FFFFFFFFFLL )
      goto LABEL_67;
    v17 = 48 * v16 - 0x220000000000LL;
    if ( !a5 || v14 > 1 )
    {
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v17 + 24), 0x3FuLL) )
        goto LABEL_67;
      if ( v7 )
        _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      v7 = 48 * v16 - 0x220000000000LL;
      v46 = v7;
    }
    if ( !v9 && v16 >= qword_140E35C40 && v16 < qword_140E35C40 + 2048 )
    {
LABEL_75:
      StandbyPageType = MiGetStandbyPageType(v16, v17);
      goto LABEL_30;
    }
    if ( v16 < qword_140E35C40 || v16 >= qword_140E35C40 + 2048 )
    {
      v18 = *(_QWORD *)(48 * v16 - 0x21FFFFFFFFF0LL);
      if ( (v18 & 0x400) != 0 )
      {
        if ( (~(v18 >> 3) & 1) != 0 )
          goto LABEL_39;
      }
      else if ( (v18 & 0x8000000) == 0 )
      {
LABEL_39:
        v22 = a2[a3];
        a2[a3] = v16;
        if ( v22 == -1LL || v22 >= qword_140E35C40 && v22 < qword_140E35C40 + 2048 )
        {
          v23 = 0xFFFFDE0000000010uLL;
        }
        else
        {
          v23 = 0xFFFFDE0000000010uLL;
          v24 = 48 * v22;
          v25 = *(_QWORD *)(48 * v22 - 0x21FFFFFFFFF0LL);
          v26 = -9LL;
          if ( (v25 & 0x400) == 0 )
            v26 = -134217729LL;
          v27 = v25 & v26;
          v28 = v24 - 0x220000000000LL;
          if ( v22 >= qword_140E35C40 && v22 < qword_140E35C40 + 2048 )
            v29 = 0xAAAAAAAAAAAAAAABuLL;
          else
            v29 = 0xAAAAAAAAAAAAAAABuLL;
          v30 = dword_140E2DC04;
          if ( dword_140E2DC00 > (unsigned int)dword_140E2DC04
            || (v31 = (ULONG_PTR *)((char *)qword_140E2DC60 + 16 * dword_140E2DC00), v22 < *v31)
            || dword_140E2DC00 != dword_140E2DC04 && v22 >= v31[2] )
          {
            for ( i = 0; ; i = v33 + 1 )
            {
              while ( 1 )
              {
                if ( v30 < i )
                  KeBugCheckEx(0x1Au, 0x5180uLL, v22, 0LL, 0LL);
                v33 = (i + v30) >> 1;
                v34 = (ULONG_PTR *)((char *)qword_140E2DC60 + 16 * v33);
                if ( v22 >= *v34 )
                  break;
                if ( !v33 )
                  KeBugCheckEx(0x1Au, 0x5180uLL, v22, (ULONG_PTR)qword_140E2DC60, 0LL);
                v30 = v33 - 1;
              }
              if ( v33 == dword_140E2DC04 || v22 < v34[2] )
                break;
            }
            dword_140E2DC00 = (i + v30) >> 1;
          }
          v35 = *(_DWORD *)(v28 + 32);
          if ( (v35 & 0x8000000) != 0 && v28 >= 0xFFFFDE0000000000uLL && v28 < 48 * qword_140E2DD20 - 0x21FFFFFFFFD0LL )
          {
            v42 = 0xAAAAAAAAAAAAAAABuLL * (v24 >> 4);
            if ( (v42 < qword_140E35C40 || v42 >= qword_140E35C40 + 2048) && (BYTE2(v35) & 7) != 6 )
              MiGetPfnSlabType(v24 - 0x220000000000LL);
          }
          if ( qword_140E2DC68 )
          {
            MiSearchChannelTable(v29 * (v24 >> 4));
            v23 = 0xFFFFDE0000000010uLL;
          }
          v7 = v46;
          *(_QWORD *)(v24 + v23) = v27;
        }
        v10 = v16;
        if ( v16 != -1LL && (v16 < qword_140E35C40 || v16 >= qword_140E35C40 + 2048) )
        {
          v40 = *(_QWORD *)(v23 + 48 * v16);
          v41 = 8LL;
          if ( (v40 & 0x400) == 0 )
            v41 = 0x8000000LL;
          *(_QWORD *)(v23 + 48 * v16) = v40 | v41;
        }
        break;
      }
    }
    v19 = 0;
    v20 = a2;
    do
    {
      if ( *v20 == v16 )
        break;
      ++v19;
      ++v20;
      if ( v19 == 64 )
        goto LABEL_39;
    }
    while ( v19 < 0x40 );
LABEL_30:
    a4 = 48 * v16 - 0x220000000000LL;
  }
  if ( v7 )
    _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  LOBYTE(v5) = v10 != 0x3FFFFFFFFFLL;
  return v5;
}
