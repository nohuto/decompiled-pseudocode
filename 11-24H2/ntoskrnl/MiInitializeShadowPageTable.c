/*
 * XREFs of MiInitializeShadowPageTable @ 0x1407F6B9C
 * Callers:
 *     MiMakeShadowPageTableRange @ 0x1407F6DA8 (MiMakeShadowPageTableRange.c)
 * Callees:
 *     MiMakeValidPte @ 0x140212550 (MiMakeValidPte.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140246FA0 (MI_READ_PTE_LOCK_FREE.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x140293050 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiVaToPfnEx @ 0x140293EF0 (MiVaToPfnEx.c)
 *     MiReadWriteAnyLevelShadowPte @ 0x1402EE8E8 (MiReadWriteAnyLevelShadowPte.c)
 *     MiInitializePfnForOtherProcess @ 0x14038FF2C (MiInitializePfnForOtherProcess.c)
 *     MiGetPteAddress @ 0x140429FD0 (MiGetPteAddress.c)
 *     MI_IS_PTE_SHADOW_STACK @ 0x14043CB30 (MI_IS_PTE_SHADOW_STACK.c)
 *     MI_SET_PTE_SHADOW_STACK @ 0x140483C1C (MI_SET_PTE_SHADOW_STACK.c)
 *     MiReplicatePteChange @ 0x1404F4EFC (MiReplicatePteChange.c)
 *     MiMarkPxeAsShadowed @ 0x140680FF0 (MiMarkPxeAsShadowed.c)
 */

void __fastcall MiInitializeShadowPageTable(unsigned __int64 a1, _QWORD *a2, unsigned int a3)
{
  bool v3; // r15
  unsigned __int64 v6; // rbx
  signed __int64 v7; // rdx
  ULONG_PTR v8; // rbx
  unsigned __int64 PteAddress; // rax
  int v10; // edx
  __int64 v11; // rax
  int v12; // r8d
  int v13; // eax
  int v14; // r14d
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rdx
  ULONG_PTR v17; // rbp
  ULONG_PTR ValidPte; // rax
  ULONG_PTR v19; // rax
  ULONG_PTR BugCheckParameter2; // [rsp+68h] [rbp+20h] BYREF

  v3 = 0;
  if ( !a3 )
  {
    v6 = (__int64)(a1 << 25) >> 16;
    if ( (unsigned int)MI_IS_PHYSICAL_ADDRESS(v6) )
    {
      PteAddress = a1;
      do
        PteAddress = MiGetPteAddress(PteAddress);
      while ( v10 != 1 );
      BugCheckParameter2 = MI_READ_PTE_LOCK_FREE(PteAddress);
      v11 = MiVaToPfnEx(v6);
      v7 = BugCheckParameter2;
      v8 = v11;
    }
    else
    {
      BugCheckParameter2 = MI_READ_PTE_LOCK_FREE(a1);
      v7 = BugCheckParameter2;
      v8 = (BugCheckParameter2 >> 12) & 0xFFFFFFFFFFLL;
    }
    if ( (v7 & 0x800) != 0 )
    {
      v12 = 4;
    }
    else
    {
      LOBYTE(v13) = MI_IS_PTE_SHADOW_STACK(v7);
      v3 = v13 != 0;
    }
    v14 = v12 | 2;
    if ( v7 < 0 )
      v14 = v12;
    goto LABEL_14;
  }
  *a2 = 0LL;
  v14 = 6;
  v8 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(a2 + 0x44000000000LL) >> 4);
  if ( a3 != 3 )
  {
LABEL_14:
    v15 = MiGetPteAddress(a1);
    v17 = (MiReadWriteAnyLevelShadowPte(v15, v16, 0, CLFS_LSN_NULL_EXT) >> 12) & 0xFFFFFFFFFFLL;
    goto LABEL_16;
  }
  v17 = -1LL;
LABEL_16:
  ValidPte = MiMakeValidPte(a1, v8, v14 | (a3 != 0 ? -1744830464 : -1879048192));
  BugCheckParameter2 = ValidPte;
  if ( v3 )
  {
    MI_SET_PTE_SHADOW_STACK((ULONG_PTR)&BugCheckParameter2);
    ValidPte = BugCheckParameter2;
  }
  v19 = ValidPte & 0xFFFFFFFFFFFFFEFFuLL;
  BugCheckParameter2 = v19;
  if ( a3 )
  {
    if ( a3 == 3 )
      v17 = PsInitialSystemProcess->DirectoryTableBase >> 12;
    MiInitializePfnForOtherProcess(v8, a1, v17, 2560LL);
    v19 = BugCheckParameter2;
  }
  MiReadWriteAnyLevelShadowPte(a1, a3, 1, v19);
  if ( a3 == 3 )
  {
    MiMarkPxeAsShadowed(a1);
    MiReplicatePteChange(a1, 0);
  }
}
