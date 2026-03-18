/*
 * XREFs of MiInsertLargeVadMapping @ 0x1403F3B88
 * Callers:
 *     MiInPagePageTable @ 0x1403F2FCC (MiInPagePageTable.c)
 * Callees:
 *     MiLockProtoPoolPage @ 0x14022E920 (MiLockProtoPoolPage.c)
 *     MiCheckLinearProtectedPteAccessedBit @ 0x140232A20 (MiCheckLinearProtectedPteAccessedBit.c)
 *     MiSanitizeShadowPxe @ 0x140233C54 (MiSanitizeShadowPxe.c)
 *     MiWritePteShadow @ 0x140233CD4 (MiWritePteShadow.c)
 *     MiMakeValidPte @ 0x1402383C0 (MiMakeValidPte.c)
 *     MiPteInShadowRange @ 0x1402863E0 (MiPteInShadowRange.c)
 *     MiUnlockProtoPoolPage @ 0x14028CBF0 (MiUnlockProtoPoolPage.c)
 *     MiConvertWorkingSetLockExclusiveToShared @ 0x140684744 (MiConvertWorkingSetLockExclusiveToShared.c)
 *     MiConvertWorkingSetLockSharedToExclusive @ 0x140684808 (MiConvertWorkingSetLockSharedToExclusive.c)
 */

__int64 __fastcall MiInsertLargeVadMapping(unsigned __int64 a1, unsigned __int64 *a2, int a3, ULONG_PTR *a4, int a5)
{
  _KPROCESS *Process; // rsi
  ULONG_PTR v10; // rax
  unsigned __int64 v11; // rdx
  __int64 v12; // r8
  unsigned __int64 v13; // rbx
  __int64 v14; // rdx
  ULONG_PTR ValidPte; // rbx
  int v16; // ebp

  Process = KeGetCurrentThread()->ApcState.Process;
  v10 = MiLockProtoPoolPage((unsigned __int64)a2, 0LL);
  if ( !v10 )
    return 0LL;
  v13 = *a2;
  LOBYTE(v11) = 17;
  MiUnlockProtoPoolPage(v10, v11, v12);
  v14 = 0xFFFFFC0000LL;
  if ( a3 != 2 )
    v14 = 0xFFFFFFFE00LL;
  ValidPte = MiMakeValidPte(((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, (v13 >> 12) & v14, a5 | 0x84000000);
  if ( a3 != 1 && !(unsigned int)MiConvertWorkingSetLockSharedToExclusive(&Process[2].ReadyListHead.Blink) )
    return 0LL;
  v16 = 0;
  if ( MiPteInShadowRange((unsigned __int64)a4) )
    v16 = MiSanitizeShadowPxe();
  if ( _bittest64(&MiFlags, 0x24u) && (ValidPte & 0x20) == 0 && (unsigned __int64)a4 >= 0xFFFFF6C000000000uLL )
    MiCheckLinearProtectedPteAccessedBit((ULONG_PTR)a4, ValidPte, 128);
  *a4 = ValidPte;
  if ( v16 )
    MiWritePteShadow();
  if ( a3 != 1 )
    MiConvertWorkingSetLockExclusiveToShared(&Process[2].ReadyListHead.Blink);
  return 1LL;
}
