/*
 * XREFs of MiConvertContiguousPages @ 0x1403932BC
 * Callers:
 *     MiFindContiguousPagesEx @ 0x14030E840 (MiFindContiguousPagesEx.c)
 * Callees:
 *     MiIsFreeZeroPfnCold @ 0x140250EDC (MiIsFreeZeroPfnCold.c)
 *     MiMakeDemandZeroPte @ 0x140392C40 (MiMakeDemandZeroPte.c)
 *     MiPfnZeroingNeeded @ 0x1403934B0 (MiPfnZeroingNeeded.c)
 *     MiPageAttributeBatchChangeNeeded @ 0x140393500 (MiPageAttributeBatchChangeNeeded.c)
 *     MiGetPteLink @ 0x1403A7E10 (MiGetPteLink.c)
 *     MiChangePageAttributeBatch @ 0x1403A8860 (MiChangePageAttributeBatch.c)
 *     MiMakeLinkedListPte @ 0x1403F8EF0 (MiMakeLinkedListPte.c)
 *     MiSetFreeZeroPfnCold @ 0x140423EE0 (MiSetFreeZeroPfnCold.c)
 */

__int64 __fastcall MiConvertContiguousPages(__int64 *a1, __int64 a2, unsigned int a3, char a4)
{
  unsigned int v5; // ebp
  __int64 v7; // r9
  char v8; // r10
  __int64 v9; // rdx
  __int64 *v10; // r14
  __int64 PteLink; // rdi
  unsigned __int64 v12; // rsi
  int IsFreeZeroPfnCold; // r12d
  int v14; // eax
  unsigned int v15; // r9d
  unsigned int v16; // ecx
  int v17; // r15d
  int v18; // eax
  __int64 v20; // rdx
  __int64 v21; // rax
  __int64 *v22; // r11
  __int64 v23; // rax
  __int64 v24[9]; // [rsp+20h] [rbp-48h] BYREF
  __int64 DemandZeroPte; // [rsp+78h] [rbp+10h]

  v5 = 1;
  DemandZeroPte = MiMakeDemandZeroPte(4);
  v10 = &a1[6 * v9];
  v24[0] = 0x7FFFFFFFFFLL;
  PteLink = 0x7FFFFFFFFFLL;
  v12 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(a1 + 0x44000000000LL) >> 4);
  if ( a1 != v10 )
  {
    do
    {
      IsFreeZeroPfnCold = MiIsFreeZeroPfnCold((__int64)a1);
      v14 = MiPfnZeroingNeeded(a1, a3);
      v16 = v15;
      v17 = v14;
      if ( !v14 )
        v16 = v5;
      v5 = v16;
      v18 = MiPageAttributeBatchChangeNeeded(a1);
      v7 = 0LL;
      if ( v18 )
      {
        a1[2] = MiMakeLinkedListPte(PteLink);
        PteLink = v12;
        v24[0] = v12;
        v21 = (unsigned int)v20 | 1LL;
        if ( !v17 )
          v21 = v20;
        *a1 = v21;
      }
      else
      {
        a1[2] = DemandZeroPte & -(__int64)(v17 != 0);
        if ( IsFreeZeroPfnCold )
        {
          MiSetFreeZeroPfnCold(a1, 1LL);
          v7 = 0LL;
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
    MiChangePageAttributeBatch(v24, a3, -1LL, v7);
    do
    {
      PteLink = MiGetPteLink(*(_QWORD *)(48 * PteLink - 0x220000000000LL + 16));
      v23 = *v22;
      v22[2] = DemandZeroPte & -(__int64)((*v22 & 1) != 0);
      if ( (v23 & 2) != 0 )
        MiSetFreeZeroPfnCold(v22, 1LL);
      *v22 = 0LL;
    }
    while ( PteLink != 0x7FFFFFFFFFLL );
  }
  return v5;
}
