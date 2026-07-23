/*
 * XREFs of MiRecordLargePageCandidate @ 0x1403135A4
 * Callers:
 *     MiUpdateLargePageCandidates @ 0x14021F840 (MiUpdateLargePageCandidates.c)
 *     MiUpdateLargePageCandidateValue @ 0x1402277A0 (MiUpdateLargePageCandidateValue.c)
 *     MiUnlinkFreeOrZeroedPage @ 0x14024E130 (MiUnlinkFreeOrZeroedPage.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x14024EF60 (MiInsertPageInFreeOrZeroedList.c)
 *     MiProcessLargeCoalesceBitmapCandidates @ 0x140313370 (MiProcessLargeCoalesceBitmapCandidates.c)
 * Callees:
 *     MiPageToNode @ 0x140221770 (MiPageToNode.c)
 *     KeSetEvent @ 0x140227B30 (KeSetEvent.c)
 */

__int64 __fastcall MiRecordLargePageCandidate(__int64 a1, ULONG_PTR a2, unsigned int a3, char a4)
{
  __int64 v5; // rsi
  __int64 v8; // rdx
  __int64 v9; // r10
  unsigned __int64 v11; // rdx
  ULONG_PTR v12; // rbx
  ULONG_PTR v13; // r11
  volatile signed __int32 *v14; // r10
  int v15; // ebx
  unsigned __int64 v16; // rcx

  v5 = a3;
  v8 = 57216LL * (unsigned int)MiPageToNode(a2);
  if ( (_DWORD)v5 == 2 )
    v9 = v8 + qword_140E38D50;
  else
    v9 = v8 + *(_QWORD *)(a1 + 16);
  if ( (a4 & 1) != 0 )
  {
    _InterlockedDecrement64((volatile signed __int64 *)(v9 + 8 * v5 + 57112));
    return 0LL;
  }
  else
  {
    _InterlockedAdd64((volatile signed __int64 *)(v8 + *(_QWORD *)(a1 + 16) + 8 * v5 + 57136), 1uLL);
    if ( (a4 & 2) == 0 )
      _InterlockedAdd64((volatile signed __int64 *)(v9 + 8 * v5 + 57112), 1uLL);
    LOBYTE(v11) = 1;
    v12 = a2 >> MiLargePageCoalesceCandidateBitmapShifts[v5];
    v13 = v12 & 0x1F;
    v14 = (volatile signed __int32 *)(*(_QWORD *)(a1 + 16 * (v5 + 1025)) + 4 * (v12 >> 5));
    if ( v13 + 1 > 0x20 )
    {
      if ( (v12 & 0x1F) == 0 )
        goto LABEL_15;
      v15 = v12 & 0x1F;
      _InterlockedOr(v14++, ((1 << (32 - v15)) - 1) << v13);
      v11 = 1LL - (unsigned int)(32 - v15);
      if ( v11 >= 0x20 )
      {
        v16 = v11 >> 5;
        v11 += -32LL * (v11 >> 5);
        do
        {
          *v14++ = -1;
          --v16;
        }
        while ( v16 );
      }
      if ( v11 )
LABEL_15:
        _InterlockedOr(v14, (1 << v11) - 1);
    }
    else
    {
      _InterlockedOr(v14, 1 << v13);
    }
    if ( (a4 & 8) == 0 && !*(_DWORD *)(a1 + 48 * v5 + 16484) )
      KeSetEvent((PRKEVENT)(a1 + 16480 + 48 * v5), 0, 0);
    return a1 + 16480 + 48 * v5;
  }
}
