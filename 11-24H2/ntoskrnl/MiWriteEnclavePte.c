/*
 * XREFs of MiWriteEnclavePte @ 0x1404743C4
 * Callers:
 *     MiAddPagesToEnclave @ 0x140473CEC (MiAddPagesToEnclave.c)
 *     MiProtectEnclavePages @ 0x1404CACEC (MiProtectEnclavePages.c)
 *     MiCopyPagesIntoEnclave @ 0x1408DA288 (MiCopyPagesIntoEnclave.c)
 * Callees:
 *     MiMakeSystemAddressValid @ 0x1402176A0 (MiMakeSystemAddressValid.c)
 *     MiWriteValidPteNewProtection @ 0x140219260 (MiWriteValidPteNewProtection.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021A250 (MI_READ_PTE_LOCK_FREE.c)
 *     MiCheckLinearProtectedPteAccessedBit @ 0x140232A20 (MiCheckLinearProtectedPteAccessedBit.c)
 *     MiSanitizeShadowPxe @ 0x140233C54 (MiSanitizeShadowPxe.c)
 *     MiWritePteShadow @ 0x140233CD4 (MiWritePteShadow.c)
 *     MiPteInShadowRange @ 0x1402863E0 (MiPteInShadowRange.c)
 *     MiLockWorkingSetShared @ 0x1402DF970 (MiLockWorkingSetShared.c)
 *     MiUnlockWorkingSetShared @ 0x1402E0410 (MiUnlockWorkingSetShared.c)
 *     MiUnlockPageTableInternal @ 0x140321070 (MiUnlockPageTableInternal.c)
 *     MiUpdateAwePageTable @ 0x140474584 (MiUpdateAwePageTable.c)
 */

char __fastcall MiWriteEnclavePte(
        ULONG_PTR BugCheckParameter2,
        ULONG_PTR BugCheckParameter3,
        __int64 a3,
        int a4,
        int a5)
{
  struct _LIST_ENTRY **p_Blink; // r14
  unsigned __int64 v10; // rbp
  unsigned __int8 v11; // r12
  __int64 v12; // rdi
  int v13; // r15d
  _BOOL8 v14; // rdx
  __int64 v15; // r8
  char result; // al

  p_Blink = &KeGetCurrentThread()->ApcState.Process[2].ReadyListHead.Blink;
  v10 = ((BugCheckParameter2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  if ( a5 )
  {
    v11 = MiLockWorkingSetShared((__int64)p_Blink);
    MiMakeSystemAddressValid(BugCheckParameter2, (*(_DWORD *)(a3 + 48) >> 12) & 0x7F, v11, 0);
  }
  else
  {
    v11 = 17;
  }
  if ( a4 )
  {
    MiWriteValidPteNewProtection(BugCheckParameter2, BugCheckParameter3);
  }
  else
  {
    v12 = MI_READ_PTE_LOCK_FREE(BugCheckParameter2);
    v13 = 0;
    if ( MiPteInShadowRange(BugCheckParameter2) )
      v13 = MiSanitizeShadowPxe();
    if ( _bittest64(&MiFlags, 0x24u) && (BugCheckParameter3 & 0x20) == 0 && BugCheckParameter2 >= 0xFFFFF6C000000000uLL )
      MiCheckLinearProtectedPteAccessedBit(BugCheckParameter2, BugCheckParameter3, 128);
    *(_QWORD *)BugCheckParameter2 = BugCheckParameter3;
    if ( v13 )
      MiWritePteShadow();
    v14 = 1LL;
    v15 = 0LL;
    if ( v12 )
      v14 = (v12 & 0xC00) != 2048;
    else
      v15 = 1LL;
    if ( v14 | (unsigned int)v15 )
      MiUpdateAwePageTable(v10, v14, v15);
  }
  result = 0;
  if ( a5 )
  {
    MiUnlockPageTableInternal((__int64)p_Blink, v10);
    return MiUnlockWorkingSetShared((__int64)p_Blink, v11);
  }
  return result;
}
