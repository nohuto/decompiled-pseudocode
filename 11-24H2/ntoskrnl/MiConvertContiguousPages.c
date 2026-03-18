/*
 * XREFs of MiConvertContiguousPages @ 0x140268C24
 * Callers:
 *     MiFindContiguousPagesEx @ 0x140304960 (MiFindContiguousPagesEx.c)
 * Callees:
 *     MiIsFreeZeroPfnCold @ 0x14022418C (MiIsFreeZeroPfnCold.c)
 *     MiChangePageAttributeBatch @ 0x1402668E4 (MiChangePageAttributeBatch.c)
 *     MiGetPteLink @ 0x140268350 (MiGetPteLink.c)
 *     MiPfnZeroingNeeded @ 0x140268E10 (MiPfnZeroingNeeded.c)
 *     MiPageAttributeBatchChangeNeeded @ 0x140268E60 (MiPageAttributeBatchChangeNeeded.c)
 *     MiMakeLinkedListPte @ 0x1402D1A40 (MiMakeLinkedListPte.c)
 *     MiMakeDemandZeroPte @ 0x1402E3CC0 (MiMakeDemandZeroPte.c)
 *     MiSetFreeZeroPfnCold @ 0x1404319A0 (MiSetFreeZeroPfnCold.c)
 */

__int64 __fastcall MiConvertContiguousPages(__int64 *a1, __int64 a2, unsigned int a3, char a4)
{
  unsigned int v5; // ebp
  int v7; // r9d
  char v8; // r10
  __int64 v9; // rdx
  __int64 *v10; // r14
  unsigned __int64 PteLink; // rdi
  unsigned __int64 v12; // rsi
  int IsFreeZeroPfnCold; // r12d
  __int64 v14; // r8
  int v15; // eax
  unsigned int v16; // r9d
  unsigned int v17; // ecx
  int v18; // r15d
  int v19; // eax
  __int64 v20; // r8
  __int64 v22; // rdx
  __int64 v23; // rax
  __int64 *v24; // r11
  __int64 v25; // rax
  unsigned __int64 v26[9]; // [rsp+20h] [rbp-48h] BYREF
  __int64 DemandZeroPte; // [rsp+78h] [rbp+10h]

  v5 = 1;
  DemandZeroPte = MiMakeDemandZeroPte(4LL);
  v10 = &a1[6 * v9];
  v26[0] = 0x7FFFFFFFFFLL;
  PteLink = 0x7FFFFFFFFFLL;
  v12 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(a1 + 0x44000000000LL) >> 4);
  if ( a1 != v10 )
  {
    do
    {
      IsFreeZeroPfnCold = MiIsFreeZeroPfnCold((__int64)a1);
      v15 = MiPfnZeroingNeeded(a1, a3, v14);
      v17 = v16;
      v18 = v15;
      if ( !v15 )
        v17 = v5;
      v5 = v17;
      v19 = MiPageAttributeBatchChangeNeeded(a1);
      v7 = 0;
      if ( v19 )
      {
        a1[2] = MiMakeLinkedListPte(PteLink, IsFreeZeroPfnCold != 0 ? 2 : 0, v20, 0LL, v26[0]);
        PteLink = v12;
        v26[0] = v12;
        v23 = (unsigned int)v22 | 1LL;
        if ( !v18 )
          v23 = v22;
        *a1 = v23;
      }
      else
      {
        a1[2] = DemandZeroPte & -(__int64)(v18 != 0);
        if ( IsFreeZeroPfnCold )
        {
          MiSetFreeZeroPfnCold(a1, 1LL);
          v7 = 0;
        }
      }
      a1 += 6;
      ++v12;
    }
    while ( a1 != v10 );
    v8 = a4;
  }
  if ( PteLink != 0x7FFFFFFFFFLL )
  {
    LOBYTE(v7) = v8 == 2;
    MiChangePageAttributeBatch((__int64 *)v26, a3, -1LL, v7);
    do
    {
      PteLink = MiGetPteLink(*(_QWORD *)(48 * PteLink - 0x220000000000LL + 16));
      v25 = *v24;
      v24[2] = DemandZeroPte & -(__int64)((*v24 & 1) != 0);
      if ( (v25 & 2) != 0 )
        MiSetFreeZeroPfnCold(v24, 1LL);
      *v24 = 0LL;
    }
    while ( PteLink != 0x7FFFFFFFFFLL );
  }
  return v5;
}
