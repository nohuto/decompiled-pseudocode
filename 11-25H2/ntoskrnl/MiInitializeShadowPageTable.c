/*
 * XREFs of MiInitializeShadowPageTable @ 0x1407E6598
 * Callers:
 *     MiMakeShadowPageTableRange @ 0x1407E67A4 (MiMakeShadowPageTableRange.c)
 * Callees:
 *     MiMakeValidPte @ 0x14020EF10 (MiMakeValidPte.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140231F50 (MI_READ_PTE_LOCK_FREE.c)
 *     MiVaToPfnEx @ 0x1402AB010 (MiVaToPfnEx.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x1402AC190 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiInitializePfnForOtherProcess @ 0x1402D0D28 (MiInitializePfnForOtherProcess.c)
 *     MiReadWriteAnyLevelShadowPte @ 0x14040FC0C (MiReadWriteAnyLevelShadowPte.c)
 *     MiGetPteAddress @ 0x140419EE0 (MiGetPteAddress.c)
 *     MI_IS_PTE_SHADOW_STACK @ 0x1404432F0 (MI_IS_PTE_SHADOW_STACK.c)
 *     MI_SET_PTE_SHADOW_STACK @ 0x140489418 (MI_SET_PTE_SHADOW_STACK.c)
 *     MiReplicatePteChange @ 0x1404F4ED8 (MiReplicatePteChange.c)
 *     MiMarkPxeAsShadowed @ 0x1406745D0 (MiMarkPxeAsShadowed.c)
 */

void __fastcall MiInitializeShadowPageTable(unsigned __int64 a1, _QWORD *a2, unsigned int a3)
{
  bool v3; // r15
  unsigned __int64 v6; // rbx
  __int64 v7; // rdx
  unsigned __int64 v8; // rbx
  unsigned __int64 PteAddress; // rax
  int v10; // edx
  __int64 v11; // rax
  int v12; // r8d
  int v13; // eax
  int v14; // r14d
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rdx
  ULONG_PTR v17; // rbp
  unsigned __int64 ValidPte; // rax
  ULONG_PTR v19; // rax
  unsigned __int64 v20; // [rsp+68h] [rbp+20h] BYREF

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
      v20 = MI_READ_PTE_LOCK_FREE(PteAddress);
      v11 = MiVaToPfnEx(v6);
      v7 = v20;
      v8 = v11;
    }
    else
    {
      v20 = MI_READ_PTE_LOCK_FREE(a1);
      v7 = v20;
      v8 = (v20 >> 12) & 0xFFFFFFFFFFLL;
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
  v20 = ValidPte;
  if ( v3 )
  {
    MI_SET_PTE_SHADOW_STACK((unsigned __int64)&v20);
    ValidPte = v20;
  }
  v19 = ValidPte & 0xFFFFFFFFFFFFFEFFuLL;
  v20 = v19;
  if ( a3 )
  {
    if ( a3 == 3 )
      v17 = PsInitialSystemProcess->DirectoryTableBase >> 12;
    MiInitializePfnForOtherProcess(v8, a1, v17, 2560);
    v19 = v20;
  }
  MiReadWriteAnyLevelShadowPte(a1, a3, 1, v19);
  if ( a3 == 3 )
  {
    MiMarkPxeAsShadowed(a1);
    MiReplicatePteChange(a1, 0);
  }
}
