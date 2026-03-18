/*
 * XREFs of MiLargePagePromote @ 0x1404384BC
 * Callers:
 *     MiCoalesceFreeLargePages @ 0x14034FBA4 (MiCoalesceFreeLargePages.c)
 *     MiCoalesceActivePagesIntoFree @ 0x1406813E4 (MiCoalesceActivePagesIntoFree.c)
 * Callees:
 *     MiGetPfnPageSizeIndex @ 0x140220DD0 (MiGetPfnPageSizeIndex.c)
 *     MiIsFreeZeroPfnCold @ 0x1402C80AC (MiIsFreeZeroPfnCold.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x140343510 (MiInsertPageInFreeOrZeroedList.c)
 *     MiUnlinkFreeOrZeroedPage @ 0x140344B60 (MiUnlinkFreeOrZeroedPage.c)
 *     MiPageToNode @ 0x140346EA0 (MiPageToNode.c)
 *     MiSetFreeZeroPfnCold @ 0x140438788 (MiSetFreeZeroPfnCold.c)
 *     MiDetermineCoalescedLargePageHeatState @ 0x140438804 (MiDetermineCoalescedLargePageHeatState.c)
 *     MiConvertBaseLargePage @ 0x140464978 (MiConvertBaseLargePage.c)
 */

void __fastcall MiLargePagePromote(ULONG_PTR a1, unsigned int a2, __int64 a3, int a4, _DWORD *a5)
{
  __int64 v5; // rbp
  int PfnPageSizeIndex; // eax
  __int64 v8; // rdi
  int v9; // r15d
  unsigned int v10; // esi
  int v11; // r14d
  unsigned __int64 v12; // r12
  __int64 v13; // rbx
  __int64 v14; // r9
  __int64 v15; // r8
  signed __int64 v16; // rax
  signed __int64 v17; // rtt
  unsigned int v18; // ebp
  unsigned __int64 v19; // r14
  __int16 v20; // bx
  int v21; // r10d
  int v22; // esi
  unsigned __int64 v23; // rdi
  int v24; // eax
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // [rsp+30h] [rbp-58h]
  int v28; // [rsp+40h] [rbp-48h]
  __int64 v29; // [rsp+48h] [rbp-40h]
  int v32; // [rsp+A0h] [rbp+18h]
  int v33; // [rsp+A0h] [rbp+18h]

  v5 = a2;
  *a5 = 0;
  v29 = 48 * a1 - 0x220000000000LL;
  PfnPageSizeIndex = MiGetPfnPageSizeIndex(v29);
  v8 = v29;
  v9 = 0;
  v10 = 0;
  v11 = MiLargePageShifts[PfnPageSizeIndex];
  v12 = MiPageSizes[v5];
  v27 = MiPageSizes[PfnPageSizeIndex];
  v13 = *((_QWORD *)qword_140E2FD48 + ((*(_QWORD *)(v29 + 40) >> 43) & 0x3FFLL));
  v14 = *(_QWORD *)(v13 + 16) + 57216LL * (unsigned int)MiPageToNode(a1);
  v28 = v14;
  v15 = (unsigned int)v5 < 2 ? 8 : 0;
  v16 = *(_QWORD *)(v15 + v14 + 15192);
  do
  {
    v17 = v16;
    v16 = _InterlockedCompareExchange64(
            (volatile signed __int64 *)(v15 + v14 + 15192),
            (v16 + 1) ^ (v16 ^ (v16 + 1)) & 0xFFFFFFFFFFFF0000uLL,
            v16);
  }
  while ( v17 != v16 );
  v18 = 0;
  v19 = v12 >> v11;
  v20 = 1;
  if ( v19 )
  {
    do
    {
      if ( !a4 )
        MiUnlinkFreeOrZeroedPage(0xAAAAAAAAAAAAAAABuLL * ((v8 + 0x220000000000LL) >> 4), 0LL, 0);
      v10 |= ((*(_QWORD *)(v8 + 16) & 0x3E0LL) != 0) + 1;
      if ( (unsigned int)MiIsFreeZeroPfnCold(v8) )
        v9 |= 1u;
      else
        v9 |= v21;
      if ( v18 )
      {
        *(_QWORD *)(v8 + 8) = 0LL;
        *(_DWORD *)(v8 + 36) &= 0xE7FFFFFF;
        v32 = *(_DWORD *)(v8 + 32);
        BYTE2(v32) = BYTE2(v32) & 0xF8 | 6;
        *(_DWORD *)(v8 + 32) = v32;
        if ( !a4 )
        {
          *(_QWORD *)(v8 + 24) = *(_QWORD *)(v8 + 24) & 0xC000000000000000uLL | 1;
          HIWORD(v33) = HIWORD(*(_DWORD *)(v8 + 32));
          LOWORD(v33) = v21;
          *(_DWORD *)(v8 + 32) = v33;
        }
      }
      else
      {
        *(_DWORD *)(v8 + 36) = ((unsigned __int8)~(_BYTE)a2 << 27) ^ (*(_DWORD *)(v8 + 36) ^ ((unsigned __int8)~(_BYTE)a2 << 27)) & 0xE7FFFFFF;
      }
      ++v18;
      v8 += 48 * v27;
    }
    while ( v18 < v19 );
    LODWORD(v14) = v28;
  }
  v22 = (v10 >> 1) & 1;
  v23 = v8 - 48 * v12;
  if ( a4 )
  {
    v24 = 1;
  }
  else
  {
    v24 = MiDetermineCoalescedLargePageHeatState(a2, v9, v22, v14, (__int64)a5);
    v20 = v22;
  }
  MiSetFreeZeroPfnCold(v23, v24 == 0);
  if ( a4 )
    MiConvertBaseLargePage(v29, 0LL, v25, v26);
  MiInsertPageInFreeOrZeroedList(a1, v20 + 8193);
}
