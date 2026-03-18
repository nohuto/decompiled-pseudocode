/*
 * XREFs of MiGetVadWakeList @ 0x14044CC20
 * Callers:
 *     MiFinishVadDeletion @ 0x14044C9BC (MiFinishVadDeletion.c)
 *     MiFreeRotateView @ 0x1407EDA3C (MiFreeRotateView.c)
 *     MiDeletePartialCloneVads @ 0x1408003E4 (MiDeletePartialCloneVads.c)
 *     MiReleaseVadEventBlocks @ 0x1409B0550 (MiReleaseVadEventBlocks.c)
 *     MiFreePlaceholderStorage @ 0x140A94A68 (MiFreePlaceholderStorage.c)
 *     MiDeleteVadHotPatchState @ 0x140AB2524 (MiDeleteVadHotPatchState.c)
 *     MiFreeVadEventBitmap @ 0x140AC24E4 (MiFreeVadEventBitmap.c)
 * Callees:
 *     MiLockVadCore @ 0x1403FD500 (MiLockVadCore.c)
 *     MiUnlockVadCore @ 0x140429670 (MiUnlockVadCore.c)
 */

unsigned __int64 __fastcall MiGetVadWakeList(__int64 a1, int a2)
{
  unsigned __int64 v4; // rsi
  _QWORD *v5; // rdi
  unsigned __int8 v6; // dl
  unsigned __int64 v7; // r8
  unsigned __int64 v8; // rcx

  v4 = 0LL;
  v5 = 0LL;
  v6 = MiLockVadCore(a1, 0);
  v7 = *(_QWORD *)(a1 + 56) & 0xFFFFFFFFFFFFFFF0uLL;
  if ( v7 )
  {
    do
    {
      v8 = *(_QWORD *)v7;
      if ( (a2 & *(_DWORD *)(v7 + 80)) != 0 )
      {
        *(_QWORD *)v7 = v4;
        v4 = v7;
        if ( v5 )
          *v5 = v8;
        else
          *(_QWORD *)(a1 + 56) = v8 | *(_QWORD *)(a1 + 56) & 0xFLL;
      }
      else
      {
        v5 = (_QWORD *)v7;
      }
      v7 = v8;
    }
    while ( v8 );
  }
  MiUnlockVadCore(a1, v6);
  return v4;
}
