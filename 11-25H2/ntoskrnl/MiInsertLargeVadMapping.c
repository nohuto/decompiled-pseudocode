/*
 * XREFs of MiInsertLargeVadMapping @ 0x1403EC828
 * Callers:
 *     MiInPagePageTable @ 0x1403EBC5C (MiInPagePageTable.c)
 * Callees:
 *     MiMakeValidPte @ 0x14020EF10 (MiMakeValidPte.c)
 *     MiUnlockProtoPoolPage @ 0x1402353A0 (MiUnlockProtoPoolPage.c)
 *     MiLockProtoPoolPage @ 0x140240A70 (MiLockProtoPoolPage.c)
 *     MiPteInShadowRange @ 0x1402480C0 (MiPteInShadowRange.c)
 *     MiCheckLinearProtectedPteAccessedBit @ 0x14037CB60 (MiCheckLinearProtectedPteAccessedBit.c)
 *     MiSanitizeShadowPxe @ 0x1403FDBDC (MiSanitizeShadowPxe.c)
 *     MiWritePteShadow @ 0x1403FDC5C (MiWritePteShadow.c)
 *     MiConvertWorkingSetLockExclusiveToShared @ 0x140678EB8 (MiConvertWorkingSetLockExclusiveToShared.c)
 *     MiConvertWorkingSetLockSharedToExclusive @ 0x140678F7C (MiConvertWorkingSetLockSharedToExclusive.c)
 */

__int64 __fastcall MiInsertLargeVadMapping(unsigned __int64 a1, unsigned __int64 *a2, int a3, ULONG_PTR *a4, int a5)
{
  _KPROCESS *Process; // rsi
  ULONG_PTR v10; // rax
  __int64 v11; // r8
  unsigned __int64 v12; // r9
  unsigned __int64 v13; // rbx
  __int64 v14; // rdx
  ULONG_PTR ValidPte; // rbx
  int v16; // ebp
  __int64 v17; // rcx
  int v18; // eax
  ULONG_PTR v20[5]; // [rsp+20h] [rbp-28h] BYREF

  Process = KeGetCurrentThread()->ApcState.Process;
  v10 = MiLockProtoPoolPage((unsigned __int64)a2, 0LL);
  if ( !v10 )
    return 0LL;
  v13 = *a2;
  MiUnlockProtoPoolPage(v10, 0x11u, v11, v12);
  v14 = 0xFFFFFC0000LL;
  if ( a3 != 2 )
    v14 = 0xFFFFFFFE00LL;
  ValidPte = MiMakeValidPte(((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, (v13 >> 12) & v14, a5 | 0x84000000);
  if ( a3 != 1 && !(unsigned int)MiConvertWorkingSetLockSharedToExclusive(&Process[2].ReadyListHead.Blink) )
    return 0LL;
  v20[0] = ValidPte;
  v16 = 0;
  if ( MiPteInShadowRange((unsigned __int64)a4) )
  {
    v18 = MiSanitizeShadowPxe(v17, v20);
    ValidPte = v20[0];
    v16 = v18;
  }
  if ( _bittest64(&MiFlags, 0x24u) && (ValidPte & 0x20) == 0 && (unsigned __int64)a4 >= 0xFFFFF6C000000000uLL )
    MiCheckLinearProtectedPteAccessedBit((ULONG_PTR)a4, ValidPte, 128);
  *a4 = ValidPte;
  if ( v16 )
    MiWritePteShadow(a4, ValidPte);
  if ( a3 != 1 )
    MiConvertWorkingSetLockExclusiveToShared(&Process[2].ReadyListHead.Blink);
  return 1LL;
}
