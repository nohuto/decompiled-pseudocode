/*
 * XREFs of MiWriteEnclavePte @ 0x14046E030
 * Callers:
 *     MiAddPagesToEnclave @ 0x14046D958 (MiAddPagesToEnclave.c)
 *     MiProtectEnclavePages @ 0x1404C420C (MiProtectEnclavePages.c)
 *     MiCopyPagesIntoEnclave @ 0x140A29D18 (MiCopyPagesIntoEnclave.c)
 * Callees:
 *     MiPteInShadowRange @ 0x140202630 (MiPteInShadowRange.c)
 *     MiCheckLinearProtectedPteAccessedBit @ 0x140203550 (MiCheckLinearProtectedPteAccessedBit.c)
 *     MiSanitizeShadowPxe @ 0x140203820 (MiSanitizeShadowPxe.c)
 *     MiWritePteShadow @ 0x1402038A0 (MiWritePteShadow.c)
 *     MiLockWorkingSetShared @ 0x140241250 (MiLockWorkingSetShared.c)
 *     MiUnlockWorkingSetShared @ 0x140241CF0 (MiUnlockWorkingSetShared.c)
 *     MiMakeSystemAddressValid @ 0x140244700 (MiMakeSystemAddressValid.c)
 *     MiWriteValidPteNewProtection @ 0x140245FB0 (MiWriteValidPteNewProtection.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140246FA0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiUnlockPageTableInternal @ 0x1402C9C00 (MiUnlockPageTableInternal.c)
 *     MiUpdateAwePageTable @ 0x14046E1F0 (MiUpdateAwePageTable.c)
 */

char __fastcall MiWriteEnclavePte(
        ULONG_PTR BugCheckParameter2,
        __int64 BugCheckParameter3,
        __int64 a3,
        __int64 a4,
        int a5)
{
  int v5; // edi
  ULONG_PTR v7; // rbx
  struct _LIST_ENTRY **p_Blink; // r14
  unsigned __int64 v10; // rbp
  unsigned __int8 v11; // r12
  __int64 v12; // rax
  __int64 v13; // rdi
  int v14; // r15d
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  _BOOL8 v18; // rdx
  __int64 v19; // r8
  char result; // al
  int v21; // eax
  ULONG_PTR v22; // [rsp+50h] [rbp+8h] BYREF

  v5 = a4;
  v7 = BugCheckParameter3;
  p_Blink = &KeGetCurrentThread()->ApcState.Process[2].ReadyListHead.Blink;
  v10 = ((BugCheckParameter2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  if ( a5 )
  {
    v11 = MiLockWorkingSetShared((__int64)p_Blink, BugCheckParameter3, a3, a4);
    MiMakeSystemAddressValid(BugCheckParameter2, (*(_DWORD *)(a3 + 48) >> 12) & 0x7F, v11, 0);
  }
  else
  {
    v11 = 17;
  }
  if ( v5 )
  {
    MiWriteValidPteNewProtection(BugCheckParameter2, v7, a3);
  }
  else
  {
    v12 = MI_READ_PTE_LOCK_FREE(BugCheckParameter2);
    v22 = v7;
    v13 = v12;
    v14 = 0;
    if ( MiPteInShadowRange(BugCheckParameter2) )
    {
      v21 = MiSanitizeShadowPxe(v15, (__int64)&v22, v16);
      v7 = v22;
      v14 = v21;
    }
    if ( _bittest64(&MiFlags, 0x24u) && (v7 & 0x20) == 0 && BugCheckParameter2 >= 0xFFFFF6C000000000uLL )
      MiCheckLinearProtectedPteAccessedBit(BugCheckParameter2, v7, 128LL);
    *(_QWORD *)BugCheckParameter2 = v7;
    if ( v14 )
      MiWritePteShadow(BugCheckParameter2, v7, v16, v17);
    v18 = 1LL;
    v19 = 0LL;
    if ( v13 )
      v18 = (v13 & 0xC00) != 2048;
    else
      v19 = 1LL;
    if ( v18 | (unsigned int)v19 )
      MiUpdateAwePageTable(v10, v18, v19);
  }
  result = 0;
  if ( a5 )
  {
    MiUnlockPageTableInternal((__int64)p_Blink, v10);
    return MiUnlockWorkingSetShared((__int64)p_Blink, v11);
  }
  return result;
}
