/*
 * XREFs of IvtAllocateScalableModePasidTables @ 0x14056A25C
 * Callers:
 *     IvtAllocateTranslationStructures @ 0x14056A5D8 (IvtAllocateTranslationStructures.c)
 *     IvtGrowPasidTable @ 0x14056B750 (IvtGrowPasidTable.c)
 *     IvtSetupScalableModeDefaultPasidTables @ 0x140B42A38 (IvtSetupScalableModeDefaultPasidTables.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14028A810 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x140300F20 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     ExtEnvAllocateMemory @ 0x14055D130 (ExtEnvAllocateMemory.c)
 *     ExtEnvAllocatePhysicalMemory @ 0x14055D1A4 (ExtEnvAllocatePhysicalMemory.c)
 *     IvtExtendScalableModePasidTables @ 0x14056B048 (IvtExtendScalableModePasidTables.c)
 *     IvtFreeScalableModePasidTables @ 0x14056B300 (IvtFreeScalableModePasidTables.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

__int64 __fastcall IvtAllocateScalableModePasidTables(
        __int64 a1,
        __int64 a2,
        int a3,
        unsigned int a4,
        unsigned int a5,
        int a6,
        int a7,
        _QWORD *a8,
        _QWORD *a9)
{
  _QWORD *v9; // r12
  _DWORD *v13; // rbx
  int v14; // esi
  __int64 v15; // rcx
  _DWORD *v16; // rdi
  int v17; // eax
  _QWORD *v18; // r14
  MEMORY_CACHING_TYPE v19; // r9d
  __int64 CurrentIrql; // rax
  _QWORD *v21; // rax
  __int64 v22; // rcx
  _QWORD *v23; // rax
  __int64 v24; // rcx
  void **v25; // r14
  __int64 v26; // rbp
  char *v27; // rbx
  unsigned __int8 v28; // bl
  _DWORD *v30; // [rsp+30h] [rbp-68h]
  LARGE_INTEGER v31; // [rsp+38h] [rbp-60h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-58h] BYREF
  __int64 v33; // [rsp+A8h] [rbp+10h] BYREF
  int v34; // [rsp+B0h] [rbp+18h]
  size_t Size; // [rsp+B8h] [rbp+20h]

  v34 = a3;
  v9 = a9;
  v31.QuadPart = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( !a9 )
  {
    if ( a2 )
      goto LABEL_25;
LABEL_5:
    LODWORD(Size) = -1;
    goto LABEL_6;
  }
  if ( !a2 )
  {
    *a9 = 0LL;
    goto LABEL_5;
  }
  *a9 = *(_QWORD *)(a2 + 64);
LABEL_25:
  LODWORD(Size) = **(_DWORD **)(a2 + 56);
LABEL_6:
  v33 = 0LL;
  v30 = 0LL;
  v13 = 0LL;
  v14 = -1073741823;
  if ( a4 >= 0x100000 )
    goto LABEL_50;
  if ( a5 >= 0x100000 )
    goto LABEL_50;
  if ( a5 < a4 )
    goto LABEL_50;
  v15 = a5 & 0xFFFFFFC0;
  LODWORD(a9) = v15 + 64;
  if ( (a4 & 0xFFFFFFC0) > 0xFFFC0 )
    goto LABEL_50;
  if ( (unsigned int)v15 > 0xFFFC0 )
    goto LABEL_50;
  v14 = ExtEnvAllocateMemory(v15, 8 * (((unsigned int)(v15 + 64) >> 6) & 0x3FFF) + 64, &v33);
  if ( v14 < 0 )
    goto LABEL_50;
  v16 = (_DWORD *)v33;
  v17 = Size;
  *(_QWORD *)(v33 + 8) = v33;
  v18 = v16 + 4;
  *(_QWORD *)v16 = v16;
  *((_QWORD *)v16 + 3) = v16 + 4;
  *((_QWORD *)v16 + 2) = v16 + 4;
  v16[10] = v17;
  v16[8] = 0;
  v16[9] = (_DWORD)a9;
  v16[11] = v34;
  v16[12] = a6;
  v19 = *(_DWORD *)(a1 + 272);
  LODWORD(Size) = (8 * ((v16[9] >> 6) & 0x3FFF) + 4095) & 0xFFFFF000;
  v14 = ExtEnvAllocatePhysicalMemory((__int64)&v31, Size, 0x1000u, v19, &v31, (PVOID *)v16 + 7);
  if ( v14 >= 0 )
  {
    memset_0(*((void **)v16 + 7), 0, (unsigned int)Size);
    v14 = IvtExtendScalableModePasidTables(a1);
  }
  CurrentIrql = KeGetCurrentIrql();
  v33 = CurrentIrql;
  __writecr8(0xFuLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 15);
  KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(a1 + 208), &LockHandle);
  if ( !a2 )
    goto LABEL_27;
  v13 = *(_DWORD **)(a2 + 64);
  if ( !v13 || v34 != v13[11] )
  {
    v13 = 0LL;
    goto LABEL_27;
  }
  if ( (unsigned int)a9 > v13[9] || a4 >= v13[8] )
    v13 = 0LL;
  if ( !v13 )
  {
LABEL_27:
    if ( v14 < 0 )
      goto LABEL_44;
    if ( a2 && *(_DWORD **)v16 == v16 )
    {
      v21 = (_QWORD *)(a1 + 56);
      v22 = *(_QWORD *)(a1 + 56);
      if ( *(_QWORD *)(v22 + 8) != a1 + 56 )
        goto LABEL_34;
      *(_QWORD *)v16 = v22;
      *((_QWORD *)v16 + 1) = v21;
      *(_QWORD *)(v22 + 8) = v16;
      *v21 = v16;
    }
    if ( (_QWORD *)*v18 != v18 )
      goto LABEL_36;
    v23 = (_QWORD *)(a1 + 88);
    v24 = *(_QWORD *)(a1 + 88);
    if ( *(_QWORD *)(v24 + 8) == a1 + 88 )
    {
      *v18 = v24;
      *((_QWORD *)v16 + 3) = v23;
      *(_QWORD *)(v24 + 8) = v18;
      *v23 = v18;
      goto LABEL_36;
    }
LABEL_34:
    __fastfail(3u);
  }
  v30 = v16;
  v14 = 0;
  v16 = v13;
LABEL_36:
  if ( a6 != v16[12] )
    v16[12] = 1;
  if ( v13 && v16 != v13 && v16[11] == v13[11] && ((v13[8] >> 6) & 0x3FFF) != 0 )
  {
    v25 = (void **)(v16 + 16);
    v26 = (v13[8] >> 6) & 0x3FFF;
    v27 = (char *)((char *)v13 - (char *)v16);
    do
    {
      memmove(*v25, *(const void **)((char *)v25 + (_QWORD)v27), 0x1000uLL);
      ++v25;
      --v26;
    }
    while ( v26 );
  }
LABEL_44:
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  v28 = v33;
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v33);
  __writecr8(v28);
  if ( v30 )
    IvtFreeScalableModePasidTables(a1, v30);
  if ( v14 >= 0 )
  {
    *a8 = v16;
    return (unsigned int)v14;
  }
LABEL_50:
  *a8 = 0LL;
  if ( v9 )
    *v9 = 0LL;
  return (unsigned int)v14;
}
