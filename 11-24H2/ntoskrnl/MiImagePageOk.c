/*
 * XREFs of MiImagePageOk @ 0x140349970
 * Callers:
 *     MiSoftFaultMappedView @ 0x1403491DC (MiSoftFaultMappedView.c)
 *     MiWaitForCollidedFaultComplete @ 0x1404270E4 (MiWaitForCollidedFaultComplete.c)
 * Callees:
 *     MiLockVadTree @ 0x140240750 (MiLockVadTree.c)
 *     MiUnlockVadTree @ 0x140291980 (MiUnlockVadTree.c)
 *     MiLocateAddress @ 0x140344F70 (MiLocateAddress.c)
 */

_BOOL8 __fastcall MiImagePageOk(unsigned __int64 a1, __int64 a2, __int64 a3, struct _LIST_ENTRY *a4)
{
  struct _LIST_ENTRY *Address; // rsi
  __int64 v6; // rdi
  __int64 v7; // rdi
  __int64 v8; // rbx
  int Flink; // ecx

  Address = a4;
  if ( *(__int64 *)(a2 + 40) >= 0 )
    return 1LL;
  v6 = *(_QWORD *)(a2 + 16);
  if ( (v6 & 0x400) == 0 || ((*(_QWORD *)(a2 + 40) >> 60) & 7) == 3 )
    return 1LL;
  if ( qword_140E2DCC0 && (v6 & 0x10) == 0 )
    v6 &= ~qword_140E2DCC0;
  v7 = v6 >> 16;
  if ( (*(_DWORD *)(*(_QWORD *)v7 + 56LL) & 0x20) == 0 )
    return 1LL;
  v8 = *(_QWORD *)((*(_QWORD *)(*(_QWORD *)v7 + 96LL) & 0xFFFFFFFFFFFFFFF8uLL) + 40);
  if ( !v8 || (v8 & 0xFFFFFFFFFFFFFFF8uLL) <= 0x7FFFFFFFFFFFFFF8LL || (v8 & 3) == 2 )
    return 1LL;
  if ( a1 < 0xFFFF800000000000uLL )
  {
    if ( a4 )
    {
LABEL_19:
      Flink = (int)Address[3].Flink;
      return (Flink & 0x70) == 0x20
          && ((Flink & 0xF80) == 0x80
           || ((__int64)Address[4].Flink & 8) != 0 && (v8 & 4) == 0
           || (MiFlags & 0x400) != 0 && (*(_DWORD *)(v7 + 32) & 0x20000) != 0);
    }
    MiLockVadTree(1, a2, a3, 0LL);
    Address = MiLocateAddress(a1);
    MiUnlockVadTree(1, 0x11u);
  }
  else if ( (MiFlags & 0x8000) == 0 || (*(_BYTE *)(a2 + 16) & 0x40) == 0 )
  {
    return 1LL;
  }
  if ( Address )
    goto LABEL_19;
  return 0LL;
}
