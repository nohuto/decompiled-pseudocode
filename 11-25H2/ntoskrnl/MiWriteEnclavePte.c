/*
 * XREFs of MiWriteEnclavePte @ 0x1403FD570
 * Callers:
 *     MiAddPagesToEnclave @ 0x1403FCE98 (MiAddPagesToEnclave.c)
 *     MiProtectEnclavePages @ 0x1404CAFB0 (MiProtectEnclavePages.c)
 *     MiCopyPagesIntoEnclave @ 0x1409CB268 (MiCopyPagesIntoEnclave.c)
 * Callees:
 *     MiLockWorkingSetShared @ 0x140212A90 (MiLockWorkingSetShared.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140231F50 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1402480C0 (MiPteInShadowRange.c)
 *     MiUnlockPageTable @ 0x14028B6B0 (MiUnlockPageTable.c)
 *     MiMakeSystemAddressValid @ 0x1402B67C0 (MiMakeSystemAddressValid.c)
 *     MiWriteValidPteNewProtection @ 0x1402B83C0 (MiWriteValidPteNewProtection.c)
 *     MiUnlockWorkingSetShared @ 0x1402B9D50 (MiUnlockWorkingSetShared.c)
 *     MiCheckLinearProtectedPteAccessedBit @ 0x14037CB60 (MiCheckLinearProtectedPteAccessedBit.c)
 *     MiUpdateAwePageTable @ 0x1403FD730 (MiUpdateAwePageTable.c)
 *     MiSanitizeShadowPxe @ 0x1403FDBDC (MiSanitizeShadowPxe.c)
 *     MiWritePteShadow @ 0x1403FDC5C (MiWritePteShadow.c)
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
  __int64 v12; // rax
  __int64 v13; // rdi
  int v14; // r15d
  __int64 v15; // rcx
  _BOOL8 v16; // rdx
  __int64 v17; // r8
  char result; // al
  int v19; // eax
  ULONG_PTR v20; // [rsp+50h] [rbp+8h] BYREF

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
    v20 = BugCheckParameter3;
    v13 = v12;
    v14 = 0;
    if ( MiPteInShadowRange(BugCheckParameter2) )
    {
      v19 = MiSanitizeShadowPxe(v15, &v20);
      BugCheckParameter3 = v20;
      v14 = v19;
    }
    if ( _bittest64(&MiFlags, 0x24u) && (BugCheckParameter3 & 0x20) == 0 && BugCheckParameter2 >= 0xFFFFF6C000000000uLL )
      MiCheckLinearProtectedPteAccessedBit(BugCheckParameter2, BugCheckParameter3, 128);
    *(_QWORD *)BugCheckParameter2 = BugCheckParameter3;
    if ( v14 )
      MiWritePteShadow(BugCheckParameter2, BugCheckParameter3);
    v16 = 1LL;
    v17 = 0LL;
    if ( v13 )
      v16 = (v13 & 0xC00) != 2048;
    else
      v17 = 1LL;
    if ( v16 | (unsigned int)v17 )
      MiUpdateAwePageTable(v10, v16, v17);
  }
  result = 0;
  if ( a5 )
  {
    MiUnlockPageTable((__int64)p_Blink, v10);
    return MiUnlockWorkingSetShared((__int64)p_Blink, v11);
  }
  return result;
}
