/*
 * XREFs of KeInitThread @ 0x140B6A948
 * Callers:
 *     KiAllocatePrcbThread @ 0x1405B52C0 (KiAllocatePrcbThread.c)
 *     KiInitializeAndStartInitialThread @ 0x1405C03D4 (KiInitializeAndStartInitialThread.c)
 *     PspAllocateThread @ 0x1408FAFD4 (PspAllocateThread.c)
 * Callees:
 *     MmDeleteKernelStack @ 0x14021FA40 (MmDeleteKernelStack.c)
 *     MmCreateKernelStack @ 0x1402207C0 (MmCreateKernelStack.c)
 *     KiInitializeContextThread @ 0x1403FF414 (KiInitializeContextThread.c)
 *     KeInitializeEvent @ 0x140402260 (KeInitializeEvent.c)
 *     KeInitializeApc @ 0x1404163D0 (KeInitializeApc.c)
 *     KeAbInitializeThreadState @ 0x140446B84 (KeAbInitializeThreadState.c)
 *     KeInitializeTimer @ 0x14044A0E0 (KeInitializeTimer.c)
 *     KiGetIdealNodeProcessByGroup @ 0x140486544 (KiGetIdealNodeProcessByGroup.c)
 *     KeCopyXfdMaskToTeb @ 0x140496918 (KeCopyXfdMaskToTeb.c)
 *     KiAllocateXStateStack @ 0x1404CCE4C (KiAllocateXStateStack.c)
 *     KiDeleteXStateStack @ 0x1405B5554 (KiDeleteXStateStack.c)
 *     KiCreateKernelShadowStack @ 0x140A0ABE0 (KiCreateKernelShadowStack.c)
 *     KiDeleteKernelShadowStack @ 0x140A12CA4 (KiDeleteKernelShadowStack.c)
 */

__int64 __fastcall KeInitThread(__int64 a1, __int64 a2)
{
  unsigned int v4; // r14d
  __int64 *v5; // rax
  __int64 v6; // rcx
  unsigned int *v7; // r12
  unsigned int v8; // edx
  _QWORD *v9; // rax
  __int64 v10; // rbx
  __int64 v11; // rcx
  int v12; // edx
  unsigned __int16 AffinityPrimaryGroup; // dx
  unsigned __int16 IdealNodeProcessByGroup; // r13
  __int64 v15; // r10
  __int64 v16; // rdx
  int KernelStack; // ebx
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  bool v21; // al
  unsigned int v23; // ecx
  int v24; // eax
  __int64 v25; // rax
  __int128 v26; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v27; // [rsp+60h] [rbp-A8h]
  int v28[4]; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v29; // [rsp+78h] [rbp-90h]
  __int128 v30; // [rsp+80h] [rbp-88h]
  __int64 v31; // [rsp+90h] [rbp-78h]
  int v32[2]; // [rsp+98h] [rbp-70h] BYREF
  __int64 v33; // [rsp+A0h] [rbp-68h]
  __int64 v34; // [rsp+A8h] [rbp-60h]
  __int64 v35; // [rsp+B0h] [rbp-58h]
  __int128 v36; // [rsp+B8h] [rbp-50h]
  char v37; // [rsp+118h] [rbp+10h]
  char v38; // [rsp+120h] [rbp+18h]

  v33 = 0LL;
  v36 = 0LL;
  *(_QWORD *)&v26 = 0LL;
  v38 = 0;
  v4 = 5;
  *(_QWORD *)(a1 + 16) = a1 + 8;
  *(_QWORD *)(a1 + 8) = a1 + 8;
  *(_QWORD *)(a1 + 784) = a1 + 776;
  *(_QWORD *)(a1 + 776) = a1 + 776;
  v5 = (__int64 *)(a1 + 344);
  v6 = 4LL;
  do
  {
    *v5 = a1;
    v5 += 6;
    --v6;
  }
  while ( v6 );
  *(_DWORD *)(a1 + 120) = *(_DWORD *)(a1 + 120) ^ ((unsigned __int8)*(_DWORD *)(a1 + 120) ^ (unsigned __int8)(4 * *(_DWORD *)(*(_QWORD *)(a2 + 48) + 136LL))) & 4 | 0x20040;
  *(_DWORD *)(a1 + 84) = 16 * KiShortExecutionCycles;
  *(_QWORD *)(a1 + 160) = a1 + 152;
  *(_QWORD *)(a1 + 152) = a1 + 152;
  *(_QWORD *)(a1 + 176) = a1 + 168;
  *(_QWORD *)(a1 + 168) = a1 + 168;
  *(_QWORD *)(a1 + 184) = *(_QWORD *)(a2 + 48);
  *(_QWORD *)(a1 + 544) = *(_QWORD *)(a2 + 48);
  v7 = (unsigned int *)(a1 + 116);
  v27 = a1 + 116;
  v8 = *(_DWORD *)(a1 + 116) & 0xFFFFBFFF;
  if ( (*(_BYTE *)(a2 + 60) & 2) == 0 )
    v8 = *(_DWORD *)(a1 + 116) | 0x4000;
  *v7 = v8;
  *(_BYTE *)(a1 + 390) = ((*(_DWORD *)(a2 + 60) & 2) != 0) + 1;
  if ( !*(_QWORD *)(a2 + 32) )
  {
    if ( (*(_DWORD *)(a2 + 60) & 0x10) != 0 )
      v12 = v8 | 0x100;
    else
      v12 = v8 | 0x400;
    *v7 = v12;
  }
  KeInitializeApc(
    a1 + 648,
    a1,
    0,
    (__int64)xHalTimerWatchdogStop,
    (__int64)xHalTimerWatchdogStop,
    (__int64)KiSchedulerApc,
    0,
    a1);
  KeInitializeEvent((PRKEVENT)(a1 + 736), NotificationEvent, 1u);
  KeInitializeTimer((PKTIMER)(a1 + 256));
  *(_QWORD *)(a1 + 304) = KiWaitNever ^ __ROR8__((a1 + 256) ^ _byteswap_uint64(KiWaitAlways), KiWaitNever);
  v9 = (_QWORD *)(a1 + 464);
  *(_DWORD *)(a1 + 480) = 16909313;
  v10 = a1 + 264;
  v11 = *(_QWORD *)(a1 + 264);
  if ( *(_QWORD *)(*(_QWORD *)v10 + 8LL) != v10 )
    __fastfail(3u);
  *v9 = v11;
  *(_QWORD *)(a1 + 472) = v10;
  *(_QWORD *)(v11 + 8) = v9;
  *(_QWORD *)v10 = v9;
  *(_QWORD *)(a1 + 240) = *(_QWORD *)(a2 + 40);
  *(_BYTE *)a1 = 6;
  AffinityPrimaryGroup = KeGetCurrentThread()->AffinityPrimaryGroup;
  if ( *(_DWORD *)(a2 + 56) )
    IdealNodeProcessByGroup = *(_WORD *)(a2 + 56) - 1;
  else
    IdealNodeProcessByGroup = KiGetIdealNodeProcessByGroup(*(_QWORD *)(a2 + 48), AffinityPrimaryGroup);
  v15 = 0LL;
  if ( (*(_DWORD *)(a2 + 60) & 2) == 0 )
    v15 = a1;
  *((_QWORD *)&v26 + 1) = v15;
  v37 = 0;
  v16 = *(_QWORD *)a2;
  if ( !*(_QWORD *)a2 )
  {
    v28[3] = 0;
    v30 = 0LL;
    v31 = 0LL;
    v28[0] = 8;
    v28[1] = 5;
    v28[2] = IdealNodeProcessByGroup;
    v29 = v15;
    KernelStack = MmCreateKernelStack(v28);
    if ( KernelStack < 0 )
      goto LABEL_25;
    v16 = v30;
    v37 = 1;
    v15 = *((_QWORD *)&v26 + 1);
  }
  *(_QWORD *)(a1 + 40) = v16;
  *(_QWORD *)(a1 + 56) = v16;
  *(_QWORD *)(a1 + 48) = v16 - (unsigned int)KeKernelStackSize;
  if ( (_BYTE)KiKernelCetEnabled )
  {
    v23 = *v7;
    *v7 |= 0x400000u;
    v24 = *(_DWORD *)(a2 + 60);
    if ( (v24 & 1) == 0 )
    {
      if ( (v24 & 8) != 0 )
      {
        v4 = 2;
      }
      else if ( (v23 & 0x400) != 0 )
      {
        v4 = 1;
      }
      else
      {
        v4 = (v23 >> 8) & 1;
      }
      KernelStack = KiCreateKernelShadowStack(v15, v4, 0, IdealNodeProcessByGroup, &v26);
      if ( KernelStack < 0 )
        goto LABEL_25;
      v38 = 1;
      *(_QWORD *)(a1 + 1032) = 0LL;
      *(_QWORD *)(a1 + 1040) = 8LL;
      v25 = v26;
      *(_QWORD *)(a1 + 1048) = v26;
      *(_QWORD *)(a1 + 1056) = v4 | *(_QWORD *)(a1 + 1056) & 0xFFFFFFFFFFFFFFF8uLL ^ (*(_QWORD *)(a1 + 1056) ^ (v25 - 12288)) & 0xFFFFFFFFFFFFF000uLL;
    }
  }
  KeAbInitializeThreadState(a1);
  *(_QWORD *)(a1 + 880) = 1LL;
  *(_QWORD *)(a1 + 1008) = 1LL;
  if ( _bittest64(&KeFeatureBits, 0x37u) )
  {
    *(_QWORD *)(a1 + 1064) = MEMORY[0xFFFFF780000003D8] & ~(unsigned int)*(_QWORD *)(a2 + 64) & 0x40000;
    if ( (*v7 & 0x400) == 0 )
      KeCopyXfdMaskToTeb((_QWORD *)a1, v18, v19, v20);
    v21 = *(_QWORD *)(a2 + 64) != 0LL;
  }
  else
  {
    v21 = 0;
  }
  if ( !v21 || (KernelStack = KiAllocateXStateStack(a1, IdealNodeProcessByGroup), KernelStack >= 0) )
  {
    if ( (*(_DWORD *)(a2 + 60) & 4) == 0 )
      KiInitializeContextThread(a1, a2);
    *(_DWORD *)(a1 + 1100) = (*v7 & 0x400) == 0 ? 0xAAAAAAAA : 0;
    KeInitializeApc(a1 + 1824, a1, 0, (__int64)xHalTimerWatchdogStop, 0LL, (__int64)KiUpdateTebApc, 0, a1);
    KernelStack = 0;
  }
LABEL_25:
  if ( KernelStack < 0 )
  {
    if ( v37 )
    {
      v33 = 0LL;
      v36 = 0LL;
      v32[0] = 2;
      v32[1] = 5;
      v35 = *(_QWORD *)(a1 + 56);
      v34 = a1;
      MmDeleteKernelStack(v32);
      *(_QWORD *)(a1 + 40) = 0LL;
    }
    if ( (*v7 & 0x800000) != 0 )
      KiDeleteXStateStack(a1);
    if ( v38 )
    {
      KiDeleteKernelShadowStack(a1, *(_QWORD *)(a1 + 1048), v4, 0, *(_QWORD *)(a1 + 1032));
      *(_QWORD *)(a1 + 1032) = 0LL;
    }
  }
  return (unsigned int)KernelStack;
}
