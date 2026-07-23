/*
 * XREFs of MiInsertLargeVadMapping @ 0x1404CE7F4
 * Callers:
 *     MiInPagePageTable @ 0x140391778 (MiInPagePageTable.c)
 * Callees:
 *     MiPteInShadowRange @ 0x140202630 (MiPteInShadowRange.c)
 *     MiCheckLinearProtectedPteAccessedBit @ 0x140203550 (MiCheckLinearProtectedPteAccessedBit.c)
 *     MiSanitizeShadowPxe @ 0x140203820 (MiSanitizeShadowPxe.c)
 *     MiWritePteShadow @ 0x1402038A0 (MiWritePteShadow.c)
 *     MiMakeValidPte @ 0x140212550 (MiMakeValidPte.c)
 *     MiUnlockProtoPoolPage @ 0x14029C7F0 (MiUnlockProtoPoolPage.c)
 *     MiLockProtoPoolPage @ 0x140302230 (MiLockProtoPoolPage.c)
 *     MiConvertWorkingSetLockExclusiveToShared @ 0x140685870 (MiConvertWorkingSetLockExclusiveToShared.c)
 *     MiConvertWorkingSetLockSharedToExclusive @ 0x140685934 (MiConvertWorkingSetLockSharedToExclusive.c)
 */

__int64 __fastcall MiInsertLargeVadMapping(
        unsigned __int64 a1,
        unsigned __int64 *a2,
        int a3,
        unsigned __int64 *a4,
        int a5)
{
  _KPROCESS *Process; // rsi
  __int64 v10; // rax
  unsigned __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  unsigned __int64 v14; // rbx
  __int64 v15; // rdx
  unsigned __int64 ValidPte; // rbx
  int v17; // ebp
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  int v21; // eax
  unsigned __int64 v23[5]; // [rsp+20h] [rbp-28h] BYREF

  Process = KeGetCurrentThread()->ApcState.Process;
  v10 = MiLockProtoPoolPage((unsigned __int64)a2, 0LL);
  if ( !v10 )
    return 0LL;
  v14 = *a2;
  LOBYTE(v11) = 17;
  MiUnlockProtoPoolPage(v10, v11, v12, v13);
  v15 = 0xFFFFFC0000LL;
  if ( a3 != 2 )
    v15 = 0xFFFFFFFE00LL;
  ValidPte = MiMakeValidPte(((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, (v14 >> 12) & v15, a5 | 0x84000000);
  if ( a3 != 1 && !(unsigned int)MiConvertWorkingSetLockSharedToExclusive(&Process[2].ReadyListHead.Blink) )
    return 0LL;
  v23[0] = ValidPte;
  v17 = 0;
  if ( MiPteInShadowRange((unsigned __int64)a4) )
  {
    v21 = MiSanitizeShadowPxe(v18, (__int64)v23, v19);
    ValidPte = v23[0];
    v17 = v21;
  }
  if ( _bittest64(&MiFlags, 0x24u) && (ValidPte & 0x20) == 0 && (unsigned __int64)a4 >= 0xFFFFF6C000000000uLL )
    MiCheckLinearProtectedPteAccessedBit((ULONG_PTR)a4, ValidPte, 128LL);
  *a4 = ValidPte;
  if ( v17 )
    MiWritePteShadow((__int64)a4, ValidPte, v19, v20);
  if ( a3 != 1 )
    MiConvertWorkingSetLockExclusiveToShared(&Process[2].ReadyListHead.Blink);
  return 1LL;
}
