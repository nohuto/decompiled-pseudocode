/*
 * XREFs of MiGetVadWakeList @ 0x140443B20
 * Callers:
 *     MiFinishVadDeletion @ 0x1404438BC (MiFinishVadDeletion.c)
 *     MiFreeRotateView @ 0x1407EE00C (MiFreeRotateView.c)
 *     MiDeletePartialCloneVads @ 0x140800B24 (MiDeletePartialCloneVads.c)
 *     MiReleaseVadEventBlocks @ 0x14099A250 (MiReleaseVadEventBlocks.c)
 *     MiFreePlaceholderStorage @ 0x140A91218 (MiFreePlaceholderStorage.c)
 *     MiDeleteVadHotPatchState @ 0x140AAD494 (MiDeleteVadHotPatchState.c)
 *     MiFreeVadEventBitmap @ 0x140ABD7CC (MiFreeVadEventBitmap.c)
 * Callees:
 *     MiLockVadCore @ 0x1403DAE20 (MiLockVadCore.c)
 *     MiUnlockVadCore @ 0x14041D7C0 (MiUnlockVadCore.c)
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
