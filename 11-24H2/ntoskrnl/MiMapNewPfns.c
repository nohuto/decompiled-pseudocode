/*
 * XREFs of MiMapNewPfns @ 0x1407E9C7C
 * Callers:
 *     MiAddPhysicalMemory @ 0x1407E8C3C (MiAddPhysicalMemory.c)
 * Callees:
 *     MiPageToNode @ 0x140221770 (MiPageToNode.c)
 *     MiUnlockDynamicMemoryShared @ 0x140264630 (MiUnlockDynamicMemoryShared.c)
 *     MiLockDynamicMemoryShared @ 0x140264694 (MiLockDynamicMemoryShared.c)
 *     MiMakeZeroedPageTablesEx @ 0x14026D5D0 (MiMakeZeroedPageTablesEx.c)
 *     MiGetClosestImplicitNode @ 0x140391F4C (MiGetClosestImplicitNode.c)
 *     MiGetPteAddress @ 0x140429FD0 (MiGetPteAddress.c)
 *     MiInitializeDynamicPfns @ 0x14066EA90 (MiInitializeDynamicPfns.c)
 *     MiPhysicalMemoryEverRemoved @ 0x14066F818 (MiPhysicalMemoryEverRemoved.c)
 *     MiCreateIoPageExclusion @ 0x140676908 (MiCreateIoPageExclusion.c)
 *     MiRemoveIoPageExclusion @ 0x140677BDC (MiRemoveIoPageExclusion.c)
 *     MiZeroHotAddMemory @ 0x1407EA964 (MiZeroHotAddMemory.c)
 */

__int64 __fastcall MiMapNewPfns(__int64 a1)
{
  __int64 v1; // r8
  unsigned int v3; // esi
  __int64 PteAddress; // r14
  __int64 v5; // rdx
  __int64 v6; // rax
  __int64 v7; // r8
  unsigned __int64 v8; // r12
  __int64 v9; // r15
  unsigned int v10; // eax
  unsigned int v11; // edx
  __int64 result; // rax
  int v13; // eax
  unsigned int ClosestImplicitNode; // eax
  int v15; // edx
  unsigned int v16; // ebx
  unsigned int v17; // r13d
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v19; // rdx
  __int64 v20; // [rsp+30h] [rbp-58h] BYREF
  __int128 v21; // [rsp+38h] [rbp-50h]
  __int64 v22; // [rsp+48h] [rbp-40h]
  __int64 v23; // [rsp+50h] [rbp-38h]

  v1 = *(_QWORD *)(a1 + 16);
  v3 = 0;
  v20 = 0LL;
  v21 = 0LL;
  PteAddress = MiGetPteAddress(48 * v1 - 0x220000000000LL);
  v6 = MiGetPteAddress(v5 - 1 + 48LL * *(_QWORD *)(a1 + 24));
  v8 = *(_QWORD *)(a1 + 32);
  v9 = v6;
  v10 = *(_DWORD *)(a1 + 40);
  v11 = v10;
  if ( (v10 & 2) == 0 && (v10 & 0x400) != 0 )
  {
    result = MiZeroHotAddMemory(a1, v10);
    if ( (int)result < 0 )
      return result;
    *(_DWORD *)(a1 + 40) &= ~0x400u;
    v11 = *(_DWORD *)(a1 + 40);
    v7 = *(_QWORD *)(a1 + 16);
  }
  v22 = v7;
  v23 = v7 + v8 - 1;
  result = MiCreateIoPageExclusion(&v20, (v11 >> 1) & 1);
  if ( (int)result >= 0 )
  {
    if ( v8 >= 0x40000 && qword_140E3D590 >= 0x200000 )
    {
      if ( PteAddress != (PteAddress & 0xFFFFFFFFFFFFF000uLL) )
        PteAddress &= 0xFFFFFFFFFFFFF000uLL;
      if ( v9 != (v9 & 0xFFFFFFFFFFFFF000uLL) + 4088 )
        v9 = (v9 & 0xFFFFFFFFFFFFF000uLL) + 4088;
    }
    v13 = MiPageToNode(*(_QWORD *)(a1 + 16));
    ClosestImplicitNode = MiGetClosestImplicitNode(v13 + 1);
    v15 = *(_DWORD *)(a1 + 40);
    v16 = ClosestImplicitNode;
    v17 = ((v15 & 0x4000 | 0x2A10u) >> 4) | 0x100;
    if ( (v15 & 0x8000) == 0 )
      v17 = (*(_DWORD *)(a1 + 40) & 0x4000 | 0x2A10u) >> 4;
    if ( (v15 & 2) != 0 )
    {
      CurrentThread = KeGetCurrentThread();
      MiLockDynamicMemoryShared((__int64)&MiSystemPartition, (__int64)CurrentThread);
    }
    else
    {
      CurrentThread = 0LL;
    }
    if ( (unsigned int)MiMakeZeroedPageTablesEx(PteAddress, v9, v17, 3u, v16) )
    {
      if ( !(unsigned int)MiPhysicalMemoryEverRemoved(*(_QWORD *)(a1 + 16), v8, 1) )
        *(_DWORD *)(a1 + 40) |= 0x40000u;
      MiInitializeDynamicPfns(
        *(_QWORD *)(a1 + 16),
        v8,
        *(_QWORD *)(a1 + 48),
        *(_DWORD *)(a1 + 40),
        *(_QWORD *)(a1 + 56));
      if ( CurrentThread )
        MiUnlockDynamicMemoryShared((__int64)&MiSystemPartition, (__int64)CurrentThread);
    }
    else
    {
      if ( CurrentThread )
        MiUnlockDynamicMemoryShared((__int64)&MiSystemPartition, (__int64)CurrentThread);
      v3 = -1073741670;
    }
    MiRemoveIoPageExclusion((__int64)&v20, v19);
    return v3;
  }
  return result;
}
