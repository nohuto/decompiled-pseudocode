/*
 * XREFs of MiUnmapLockedPagesInUserSpace @ 0x140A61744
 * Callers:
 *     MmUnmapLockedPages @ 0x14028D9C0 (MmUnmapLockedPages.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x14021A250 (MI_READ_PTE_LOCK_FREE.c)
 *     MiUnlockAndDereferenceVad @ 0x1402BAFA0 (MiUnlockAndDereferenceVad.c)
 *     MiObtainReferencedVadEx @ 0x1402FBE30 (MiObtainReferencedVadEx.c)
 *     MiDeleteVirtualAddresses @ 0x1403CC160 (MiDeleteVirtualAddresses.c)
 *     MiGetPteAddress @ 0x140437550 (MiGetPteAddress.c)
 *     MiLocateOldestSecure @ 0x1404F1BA4 (MiLocateOldestSecure.c)
 *     MiRemoveSecureEntry @ 0x1404F1C5C (MiRemoveSecureEntry.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     MiCheckSecuredVad @ 0x1408DD998 (MiCheckSecuredVad.c)
 *     MiDeleteVad @ 0x1408E5390 (MiDeleteVad.c)
 */

void __fastcall MiUnmapLockedPagesInUserSpace(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter4, __int64 a3)
{
  __int64 PteAddress; // r14
  _KPROCESS *Process; // r13
  __int64 v7; // rax
  ULONG_PTR v8; // rbx
  __int64 v9; // r8
  __int64 v10; // rcx
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // r15
  unsigned __int64 v13; // rbp
  __int64 v14; // r8
  unsigned __int64 v15; // rdx
  _QWORD *OldestSecure; // rax
  unsigned __int64 v17; // rax
  __int64 v18; // r10
  int v19; // edx
  _OWORD v20[3]; // [rsp+30h] [rbp-68h] BYREF
  __int64 v21; // [rsp+60h] [rbp-38h]
  int v22; // [rsp+B0h] [rbp+18h] BYREF
  int v23; // [rsp+B4h] [rbp+1Ch]

  v23 = HIDWORD(a3);
  v22 = 0;
  PteAddress = MiGetPteAddress(BugCheckParameter2);
  Process = KeGetCurrentThread()->ApcState.Process;
  v7 = MiObtainReferencedVadEx(BugCheckParameter2, 1LL, &v22);
  v8 = v7;
  if ( v7 )
  {
    if ( (*(_DWORD *)(v7 + 48) & 0x70) != 0x10 )
    {
LABEL_16:
      MiUnlockAndDereferenceVad((PVOID)v8);
      return;
    }
    v9 = *(unsigned int *)(v7 + 24);
    v10 = *(unsigned __int8 *)(v7 + 32);
    v11 = (unsigned __int64)*(unsigned __int8 *)(v7 + 33) << 32;
    v10 <<= 32;
    v12 = ((v11 | *(unsigned int *)(v8 + 28)) << 12) | 0xFFF;
    v13 = (v10 | v9) << 12;
    v14 = v10 | v9;
    v15 = v11 | *(unsigned int *)(v8 + 28);
    if ( (BugCheckParameter2 & 0xFFFFFFFFFFFFF000uLL) != v13 || BugCheckParameter4 != v15 - v14 + 1 )
    {
      if ( v13 + 4096 != (BugCheckParameter2 & 0xFFFFFFFFFFFFF000uLL)
        || BugCheckParameter4 != v15 - v14 - 1
        || (PteAddress & 0xFFF) != 0 && MI_READ_PTE_LOCK_FREE(PteAddress - 8)
        || (v17 = MiGetPteAddress(v12), (v17 & v18) != 0) && MI_READ_PTE_LOCK_FREE(v17) )
      {
        KeBugCheckEx(0x1Au, 0x1230uLL, v8, BugCheckParameter2, BugCheckParameter4);
      }
    }
    OldestSecure = MiLocateOldestSecure(v8);
    if ( !OldestSecure )
      KeBugCheckEx(0x1Au, 0x1231uLL, BugCheckParameter2, v8, 0LL);
    MiRemoveSecureEntry(v8, OldestSecure);
    if ( (*(_DWORD *)(v8 + 48) & 8) != 0 && (Process[1].DirectoryTableBase & 0x2000000000LL) == 0 )
    {
      v22 = MiCheckSecuredVad(
              v8,
              v13,
              ((*(unsigned int *)(v8 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v8 + 33) << 32))
             - (*(unsigned int *)(v8 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v8 + 32) << 32))
             + 1) << 12,
              0x55u,
              0,
              0LL);
      if ( v22 < 0 )
      {
        v21 = 0LL;
        v19 = (*(_DWORD *)(v8 + 28) << 12) | 0xFFF;
        v20[2] = v8;
        memset(v20, 0, 32);
        MiDeleteVirtualAddresses(v13, v19, 64, (__int64)v20);
        goto LABEL_16;
      }
    }
    MiDeleteVad((unsigned __int8 *)v8, 0LL);
  }
}
