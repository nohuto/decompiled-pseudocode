/*
 * XREFs of MiImagePageOk @ 0x1402E8330
 * Callers:
 *     MiWaitForCollidedFaultComplete @ 0x14023B89C (MiWaitForCollidedFaultComplete.c)
 *     MiSoftFaultMappedView @ 0x1402E7B9C (MiSoftFaultMappedView.c)
 * Callees:
 *     MiUnlockVadTree @ 0x140261370 (MiUnlockVadTree.c)
 *     MiLockVadTree @ 0x1402DEE70 (MiLockVadTree.c)
 *     MiLocateAddress @ 0x1402FC070 (MiLocateAddress.c)
 */

_BOOL8 __fastcall MiImagePageOk(unsigned __int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 Address; // rsi
  __int64 v6; // rdi
  __int64 v7; // rdi
  __int64 v8; // rbx
  int v10; // ecx

  Address = a4;
  if ( *(__int64 *)(a2 + 40) >= 0 )
    return 1LL;
  v6 = *(_QWORD *)(a2 + 16);
  if ( (v6 & 0x400) == 0 || ((*(_QWORD *)(a2 + 40) >> 60) & 7) == 3 )
    return 1LL;
  if ( qword_140E2DB80 && (v6 & 0x10) == 0 )
    v6 &= ~qword_140E2DB80;
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
      v10 = *(_DWORD *)(Address + 48);
      return (v10 & 0x70) == 0x20
          && ((v10 & 0xF80) == 0x80
           || (*(_DWORD *)(Address + 64) & 8) != 0 && (v8 & 4) == 0
           || (MiFlags & 0x400) != 0 && (*(_DWORD *)(v7 + 32) & 0x20000) != 0);
    }
    MiLockVadTree(1, a2, a3);
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
