/*
 * XREFs of MiConvertContiguousPages @ 0x140224560
 * Callers:
 *     MiFindContiguousPagesEx @ 0x14021E3E0 (MiFindContiguousPagesEx.c)
 * Callees:
 *     MiPfnZeroingNeeded @ 0x140224750 (MiPfnZeroingNeeded.c)
 *     MiPageAttributeBatchChangeNeeded @ 0x1402247A0 (MiPageAttributeBatchChangeNeeded.c)
 *     MiIsFreeZeroPfnCold @ 0x1402C80AC (MiIsFreeZeroPfnCold.c)
 *     MiMakeDemandZeroPte @ 0x140385190 (MiMakeDemandZeroPte.c)
 *     MiChangePageAttributeBatch @ 0x1403B70F4 (MiChangePageAttributeBatch.c)
 *     MiGetPteLink @ 0x1403B7C30 (MiGetPteLink.c)
 *     MiMakeLinkedListPte @ 0x1403B7F30 (MiMakeLinkedListPte.c)
 *     MiSetFreeZeroPfnCold @ 0x140438788 (MiSetFreeZeroPfnCold.c)
 */

__int64 __fastcall MiConvertContiguousPages(__int64 *a1, __int64 a2, unsigned int a3, char a4)
{
  unsigned int v5; // ebp
  __int64 v7; // rdx
  __int64 v8; // r9
  char v9; // r10
  __int64 *v10; // r14
  __int64 v11; // r8
  __int64 PteLink; // rdi
  unsigned __int64 v13; // rsi
  int IsFreeZeroPfnCold; // r12d
  int v15; // eax
  unsigned int v16; // r9d
  unsigned int v17; // ecx
  int v18; // r15d
  int v19; // eax
  __int64 v20; // r8
  __int64 v22; // rax
  __int64 *v23; // r11
  __int64 v24; // rax
  __int64 v25[9]; // [rsp+20h] [rbp-48h] BYREF
  unsigned int v26; // [rsp+70h] [rbp+8h]
  __int64 DemandZeroPte; // [rsp+78h] [rbp+10h]

  v5 = 1;
  DemandZeroPte = MiMakeDemandZeroPte(4LL);
  v10 = &a1[6 * v7];
  v11 = 16LL;
  v25[0] = 0x7FFFFFFFFFLL;
  PteLink = 0x7FFFFFFFFFLL;
  v13 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(a1 + 0x44000000000LL) >> 4);
  if ( v9 != 2 )
    v11 = (unsigned int)v8;
  v26 = v11;
  if ( a1 != v10 )
  {
    do
    {
      IsFreeZeroPfnCold = MiIsFreeZeroPfnCold(a1, v7, v11, v8);
      v15 = MiPfnZeroingNeeded(a1, a3);
      v17 = v16;
      v18 = v15;
      if ( !v15 )
        v17 = v5;
      v5 = v17;
      v19 = MiPageAttributeBatchChangeNeeded(a1);
      v8 = 0LL;
      if ( v19 )
      {
        a1[2] = MiMakeLinkedListPte(PteLink, IsFreeZeroPfnCold != 0 ? 2 : 0, v20, 0LL, v25[0]);
        PteLink = v13;
        v25[0] = v13;
        v22 = (unsigned int)v7 | 1LL;
        if ( !v18 )
          v22 = v7;
        *a1 = v22;
      }
      else
      {
        a1[2] = DemandZeroPte & -(__int64)(v18 != 0);
        if ( IsFreeZeroPfnCold )
        {
          MiSetFreeZeroPfnCold(a1, 1LL);
          v8 = 0LL;
        }
      }
      v11 = v26;
      a1 += 6;
      ++v13;
    }
    while ( a1 != v10 );
    v9 = a4;
  }
  if ( PteLink != 0x7FFFFFFFFFLL )
  {
    LOBYTE(v8) = v9 == 2;
    MiChangePageAttributeBatch(v25, a3, -1LL, v8);
    do
    {
      PteLink = MiGetPteLink(*(_QWORD *)(48 * PteLink - 0x220000000000LL + 16));
      v24 = *v23;
      v23[2] = DemandZeroPte & -(__int64)((*v23 & 1) != 0);
      if ( (v24 & 2) != 0 )
        MiSetFreeZeroPfnCold(v23, 1LL);
      *v23 = 0LL;
    }
    while ( PteLink != 0x7FFFFFFFFFLL );
  }
  return v5;
}
