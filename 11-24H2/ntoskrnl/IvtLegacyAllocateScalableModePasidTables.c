/*
 * XREFs of IvtLegacyAllocateScalableModePasidTables @ 0x14056CC30
 * Callers:
 *     IvtLegacyAllocateTranslationStructures @ 0x14056CF38 (IvtLegacyAllocateTranslationStructures.c)
 *     IvtLegacyGrowPasidTable @ 0x14056DDB0 (IvtLegacyGrowPasidTable.c)
 *     IvtLegacySetupScalableModeDefaultPasidTables @ 0x140B54674 (IvtLegacySetupScalableModeDefaultPasidTables.c)
 * Callees:
 *     KxReleaseQueuedSpinLock @ 0x1402CA740 (KxReleaseQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x140359760 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     ExtEnvAllocateMemory @ 0x14055D660 (ExtEnvAllocateMemory.c)
 *     ExtEnvAllocatePhysicalMemory @ 0x14055D6D4 (ExtEnvAllocatePhysicalMemory.c)
 *     IvtFreeScalableModePasidTables @ 0x14056BA90 (IvtFreeScalableModePasidTables.c)
 *     IvtLegacyExtendScalableModePasidTables @ 0x14056D45C (IvtLegacyExtendScalableModePasidTables.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall IvtLegacyAllocateScalableModePasidTables(
        __int64 a1,
        __int64 a2,
        int a3,
        unsigned int a4,
        unsigned int a5,
        int a6,
        _QWORD *a7,
        _QWORD *a8)
{
  _QWORD *v8; // r14
  int v12; // r13d
  int v13; // ebx
  __int64 v14; // rcx
  __int64 v15; // rcx
  _QWORD *v16; // rdi
  _QWORD *v17; // r12
  unsigned int v18; // r13d
  unsigned __int8 CurrentIrql; // r13
  __int64 v20; // rdx
  _DWORD *v21; // rax
  _QWORD *v22; // rax
  __int64 v23; // rcx
  _QWORD *v24; // rax
  __int64 v25; // rcx
  LARGE_INTEGER v27; // [rsp+30h] [rbp-58h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+38h] [rbp-50h] BYREF
  unsigned __int64 v29; // [rsp+98h] [rbp+10h]
  unsigned int v31; // [rsp+A8h] [rbp+20h]

  v8 = a8;
  v27.QuadPart = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( a8 )
  {
    if ( a2 )
    {
      *a8 = *(_QWORD *)(a2 + 64);
LABEL_25:
      v12 = **(_DWORD **)(a2 + 56);
      goto LABEL_6;
    }
    *a8 = 0LL;
  }
  else if ( a2 )
  {
    goto LABEL_25;
  }
  v12 = -1;
LABEL_6:
  a8 = 0LL;
  v29 = 0LL;
  v13 = -1073741823;
  if ( a4 >= 0x100000 )
    goto LABEL_43;
  if ( a5 >= 0x100000 )
    goto LABEL_43;
  if ( a5 < a4 )
    goto LABEL_43;
  v14 = a5 & 0xFFFFFFC0;
  v31 = v14 + 64;
  if ( (a4 & 0xFFFFFFC0) > 0xFFFC0 )
    goto LABEL_43;
  if ( (unsigned int)v14 > 0xFFFC0 )
    goto LABEL_43;
  v13 = ExtEnvAllocateMemory(v14, 8 * (((unsigned int)(v14 + 64) >> 6) & 0x3FFF) + 64, &a8);
  if ( v13 < 0 )
    goto LABEL_43;
  v16 = a8;
  a8[1] = a8;
  v17 = v16 + 2;
  *v16 = v16;
  v16[3] = v16 + 2;
  v16[2] = v16 + 2;
  *((_DWORD *)v16 + 10) = v12;
  *((_DWORD *)v16 + 8) = 0;
  *((_DWORD *)v16 + 9) = v31;
  *((_DWORD *)v16 + 11) = a3;
  *((_DWORD *)v16 + 12) = a6;
  v18 = (8 * ((*((_DWORD *)v16 + 9) >> 6) & 0x3FFF) + 4095) & 0xFFFFF000;
  v13 = ExtEnvAllocatePhysicalMemory(
          v15,
          v18,
          0x1000u,
          (MEMORY_CACHING_TYPE)*(_DWORD *)(a1 + 272),
          &v27,
          (PVOID *)v16 + 7);
  if ( v13 >= 0 )
  {
    memset_0((void *)v16[7], 0, v18);
    v13 = IvtLegacyExtendScalableModePasidTables(a1, v16, a4);
  }
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 15);
  KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(a1 + 208), &LockHandle);
  if ( !a2 )
    goto LABEL_26;
  v21 = *(_DWORD **)(a2 + 64);
  if ( !v21 || a3 != v21[11] )
    goto LABEL_26;
  if ( v31 > v21[9] || a4 >= v21[8] )
    v21 = 0LL;
  if ( !v21 )
  {
LABEL_26:
    if ( v13 < 0 )
      goto LABEL_37;
    if ( a2 )
    {
      v22 = (_QWORD *)(a1 + 56);
      v23 = *(_QWORD *)(a1 + 56);
      if ( *(_QWORD *)(v23 + 8) != a1 + 56 )
        goto LABEL_31;
      *v16 = v23;
      v16[1] = v22;
      *(_QWORD *)(v23 + 8) = v16;
      *v22 = v16;
    }
    v24 = (_QWORD *)(a1 + 88);
    v25 = *(_QWORD *)(a1 + 88);
    if ( *(_QWORD *)(v25 + 8) == a1 + 88 )
    {
      *v17 = v25;
      v16[3] = v24;
      *(_QWORD *)(v25 + 8) = v17;
      *v24 = v17;
      goto LABEL_33;
    }
LABEL_31:
    __fastfail(3u);
  }
  v29 = (unsigned __int64)v16;
  v13 = 0;
  v16 = v21;
LABEL_33:
  if ( a6 != *((_DWORD *)v16 + 12) )
    *((_DWORD *)v16 + 12) = 1;
  if ( a2 )
    *(_QWORD *)(a2 + 64) = v16;
LABEL_37:
  KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle, v20);
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  __writecr8(CurrentIrql);
  if ( v29 )
    IvtFreeScalableModePasidTables(a1, v29);
  if ( v13 >= 0 )
  {
    *a7 = v16;
    return (unsigned int)v13;
  }
LABEL_43:
  *a7 = 0LL;
  if ( v8 )
    *v8 = 0LL;
  return (unsigned int)v13;
}
