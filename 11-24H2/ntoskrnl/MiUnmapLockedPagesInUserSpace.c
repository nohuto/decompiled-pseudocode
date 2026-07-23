/*
 * XREFs of MiUnmapLockedPagesInUserSpace @ 0x140A59F24
 * Callers:
 *     MmUnmapLockedPages @ 0x14029D5C0 (MmUnmapLockedPages.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140246FA0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiDeleteVirtualAddresses @ 0x140266330 (MiDeleteVirtualAddresses.c)
 *     MiObtainReferencedVadEx @ 0x140344D30 (MiObtainReferencedVadEx.c)
 *     MiUnlockAndDereferenceVad @ 0x1403626E0 (MiUnlockAndDereferenceVad.c)
 *     MiGetPteAddress @ 0x140429FD0 (MiGetPteAddress.c)
 *     MiLocateOldestSecure @ 0x1404EF644 (MiLocateOldestSecure.c)
 *     MiRemoveSecureEntry @ 0x1404EF6FC (MiRemoveSecureEntry.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     MiDeleteVad @ 0x140895840 (MiDeleteVad.c)
 *     MiCheckSecuredVad @ 0x1408DBE18 (MiCheckSecuredVad.c)
 */

void __fastcall MiUnmapLockedPagesInUserSpace(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter4, __int64 a3)
{
  __int64 PteAddress; // r14
  _KPROCESS *Process; // r13
  __int64 v7; // r9
  __int64 v8; // rax
  ULONG_PTR v9; // rbx
  __int64 v10; // r8
  __int64 v11; // rcx
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // r15
  unsigned __int64 v14; // rbp
  __int64 v15; // r8
  unsigned __int64 v16; // rdx
  _QWORD *OldestSecure; // rax
  unsigned __int64 v18; // rax
  __int64 v19; // r10
  int v20; // edx
  _OWORD v21[3]; // [rsp+30h] [rbp-68h] BYREF
  __int64 v22; // [rsp+60h] [rbp-38h]
  int v23; // [rsp+B0h] [rbp+18h] BYREF
  int v24; // [rsp+B4h] [rbp+1Ch]

  v24 = HIDWORD(a3);
  v23 = 0;
  PteAddress = MiGetPteAddress(BugCheckParameter2);
  Process = KeGetCurrentThread()->ApcState.Process;
  v8 = MiObtainReferencedVadEx(BugCheckParameter2, 1LL, &v23, v7);
  v9 = v8;
  if ( v8 )
  {
    if ( (*(_DWORD *)(v8 + 48) & 0x70) != 0x10 )
    {
LABEL_16:
      MiUnlockAndDereferenceVad((PVOID)v9);
      return;
    }
    v10 = *(unsigned int *)(v8 + 24);
    v11 = *(unsigned __int8 *)(v8 + 32);
    v12 = (unsigned __int64)*(unsigned __int8 *)(v8 + 33) << 32;
    v11 <<= 32;
    v13 = ((v12 | *(unsigned int *)(v9 + 28)) << 12) | 0xFFF;
    v14 = (v11 | v10) << 12;
    v15 = v11 | v10;
    v16 = v12 | *(unsigned int *)(v9 + 28);
    if ( (BugCheckParameter2 & 0xFFFFFFFFFFFFF000uLL) != v14 || BugCheckParameter4 != v16 - v15 + 1 )
    {
      if ( v14 + 4096 != (BugCheckParameter2 & 0xFFFFFFFFFFFFF000uLL)
        || BugCheckParameter4 != v16 - v15 - 1
        || (PteAddress & 0xFFF) != 0 && MI_READ_PTE_LOCK_FREE(PteAddress - 8)
        || (v18 = MiGetPteAddress(v13), (v18 & v19) != 0) && MI_READ_PTE_LOCK_FREE(v18) )
      {
        KeBugCheckEx(0x1Au, 0x1230uLL, v9, BugCheckParameter2, BugCheckParameter4);
      }
    }
    OldestSecure = MiLocateOldestSecure(v9);
    if ( !OldestSecure )
      KeBugCheckEx(0x1Au, 0x1231uLL, BugCheckParameter2, v9, 0LL);
    MiRemoveSecureEntry(v9, OldestSecure);
    if ( (*(_DWORD *)(v9 + 48) & 8) != 0 && (Process[1].DirectoryTableBase & 0x2000000000LL) == 0 )
    {
      v23 = MiCheckSecuredVad(
              v9,
              v14,
              ((*(unsigned int *)(v9 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v9 + 33) << 32))
             - (*(unsigned int *)(v9 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v9 + 32) << 32))
             + 1) << 12,
              0x55u,
              0,
              0LL);
      if ( v23 < 0 )
      {
        v22 = 0LL;
        v20 = (*(_DWORD *)(v9 + 28) << 12) | 0xFFF;
        v21[2] = v9;
        memset(v21, 0, 32);
        MiDeleteVirtualAddresses(v14, v20, 64, (__int64)v21);
        goto LABEL_16;
      }
    }
    MiDeleteVad((unsigned __int8 *)v9, 0LL);
  }
}
