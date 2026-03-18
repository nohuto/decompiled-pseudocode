/*
 * XREFs of IopCopyCompleteReadIrp @ 0x1402D3280
 * Callers:
 *     IopfCompleteRequest @ 0x140251740 (IopfCompleteRequest.c)
 * Callees:
 *     IopFreeIrpExtension @ 0x140252920 (IopFreeIrpExtension.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402535A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     ObGetCurrentIrql @ 0x140256C10 (ObGetCurrentIrql.c)
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     IopDropIrp @ 0x140283AE0 (IopDropIrp.c)
 *     KeReleaseQueuedSpinLock @ 0x14028B980 (KeReleaseQueuedSpinLock.c)
 *     IopUnlockAndFreeMdl @ 0x1402D3518 (IopUnlockAndFreeMdl.c)
 *     IopCopyCompleteReadRequest @ 0x1402D3570 (IopCopyCompleteReadRequest.c)
 *     KeReleaseSpinLock @ 0x1402EA780 (KeReleaseSpinLock.c)
 *     KeInsertQueueApc @ 0x1402EFFB0 (KeInsertQueueApc.c)
 *     KeAcquireQueuedSpinLock @ 0x140301270 (KeAcquireQueuedSpinLock.c)
 *     ExQueueWorkItem @ 0x140309660 (ExQueueWorkItem.c)
 *     KeInitializeApc @ 0x140429EA0 (KeInitializeApc.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

char __fastcall IopCopyCompleteReadIrp(__int64 *a1, ULONG_PTR a2, unsigned int a3)
{
  __int64 v3; // rbp
  __int64 *v4; // r12
  char v5; // di
  unsigned int v6; // ebx
  int v7; // eax
  struct _MDL *v8; // rcx
  __int64 v9; // r15
  char v10; // r13
  __int64 v11; // r14
  __int64 v12; // rsi
  KIRQL v13; // al
  char v14; // al
  ULONG_PTR v15; // rdx
  __int64 v16; // r9
  __int64 v17; // rbp
  unsigned int v18; // ebx
  unsigned __int8 v20; // al
  __int64 v21; // rcx
  unsigned __int8 CurrentIrql; // bl
  __int64 v23; // rdx
  __int64 v24; // rax
  __int64 v25; // rcx
  char v26; // al
  __int64 v27; // rcx
  KIRQL v28; // al
  __int64 *v29; // rdx
  KIRQL v30; // r12
  unsigned int v31; // r8d
  __int64 v32; // r8
  __int64 *v33; // rax
  int v34; // [rsp+40h] [rbp-58h]
  ULONG_PTR v36; // [rsp+A8h] [rbp+10h] BYREF
  unsigned int v37; // [rsp+B0h] [rbp+18h]
  char v38; // [rsp+B8h] [rbp+20h]

  v37 = a3;
  v36 = a2;
  v3 = *a1;
  v4 = a1;
  v5 = 0;
  v6 = a3;
  v7 = *(_DWORD *)(*a1 + 48);
  v8 = *(struct _MDL **)(*a1 + 8);
  v9 = *(unsigned int *)(v3 + 56);
  v10 = *(_BYTE *)(v3 + 68);
  v11 = *(_QWORD *)(v3 + 152);
  v12 = *(_QWORD *)(v3 + 112);
  v34 = v7;
  v38 = *(_BYTE *)(v3 + 65);
  if ( v8 )
  {
    IopUnlockAndFreeMdl(v8);
    *(_QWORD *)(v3 + 8) = 0LL;
  }
  if ( v11 )
  {
    v13 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v11 + 1560));
    KeReleaseSpinLock((PKSPIN_LOCK)(v11 + 1560), v13);
    v6 = v37;
  }
  if ( (struct _KTHREAD *)v11 != KeGetCurrentThread()
    || KeGetCurrentThread()->SpecialApcDisable
    || (v20 = ObGetCurrentIrql(), v21 = 1LL, v20)
    || KeGetCurrentThread()->ApcStateIndex == 1 )
  {
    if ( !v10 )
    {
      v14 = *(_BYTE *)(v3 + 70);
      *(_BYTE *)(v3 + 120) = 18;
      *(_BYTE *)(v3 + 122) = 88;
      if ( v14 == 2 )
        v14 = *(_BYTE *)(v11 + 586);
      *(_BYTE *)(v3 + 200) = v14;
      *(_QWORD *)(v3 + 128) = v11;
      *(_QWORD *)(v3 + 152) = IopCopyCompleteReadRequest;
      *(_QWORD *)(v3 + 168) = 0LL;
      *(_QWORD *)(v3 + 160) = IopCopyAbortCopyReadRequest;
      *(_WORD *)(v3 + 201) = 0;
      *(_QWORD *)(v3 + 176) = 0LL;
      v15 = v36;
      *(_BYTE *)(v3 + 121) = 0;
      KeInsertQueueApc(v3 + 120, v15, 0LL, v6);
      goto LABEL_10;
    }
  }
  else if ( !v10 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(1uLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(v21) = CurrentIrql;
      KiRaiseIrqlProcessIrqlFlags(v21);
    }
    IopCopyCompleteReadRequest(v3 + 120, 0LL, 0LL, &v36, 0LL);
    if ( KiIrqlFlags )
    {
      LOBYTE(v23) = CurrentIrql;
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v23);
    }
    __writecr8(CurrentIrql);
    goto LABEL_10;
  }
  v28 = KeAcquireQueuedSpinLock(0xBuLL);
  v29 = (__int64 *)IopDeadIrps;
  v30 = v28;
  while ( v29 != &IopDeadIrps )
  {
    v32 = *v29;
    if ( v29 - 4 == (__int64 *)v3 )
    {
      if ( *(__int64 **)(v32 + 8) != v29 || (v33 = (__int64 *)v29[1], (__int64 *)*v33 != v29) )
        __fastfail(3u);
      *v33 = v32;
      *(_QWORD *)(v32 + 8) = v33;
      v29[1] = (__int64)v29;
      *v29 = (__int64)v29;
      ObfDereferenceObjectWithTag((PVOID)v11, 0x746C6644u);
      goto LABEL_37;
    }
    v29 = (__int64 *)*v29;
  }
  if ( !v11 )
  {
LABEL_37:
    KeReleaseQueuedSpinLock(0xBuLL, v30);
    IopDropIrp((PIRP)v3, v36);
    goto LABEL_38;
  }
  KeInitializeApc(
    v3 + 120,
    v11,
    *(char *)(v3 + 70),
    (unsigned int)IopCopyCompleteReadRequest,
    (__int64)IopCopyAbortCopyReadRequest,
    0LL,
    0,
    0LL);
  KeInsertQueueApc(v3 + 120, v36, 0LL, v37);
  KeReleaseQueuedSpinLock(0xBuLL, v30);
LABEL_38:
  v4 = a1;
LABEL_10:
  if ( v34 < 0 || v10 )
  {
    v24 = *(_QWORD *)(v12 - 40);
    v25 = *(_QWORD *)(v24 + 88);
    if ( (v25 & 1) != 0 )
    {
      *(_BYTE *)(v24 + 71) |= 0x10u;
      *(_QWORD *)(v24 + 88) = v25 & 0xFFFFFFFFFFFFFFFEuLL;
    }
    v26 = v38;
    *(_DWORD *)(*(_QWORD *)(v12 - 40) + 48LL) = v34;
    *(_BYTE *)(*(_QWORD *)(v12 - 40) + 65LL) = v26;
    v27 = *(_QWORD *)(v12 - 40);
    *v4 = v27;
    IopFreeIrpExtension(v27, 9, 1);
  }
  else
  {
    v16 = *(_QWORD *)(v12 - 40);
    v17 = *(_QWORD *)(v16 + 184);
    if ( (*(_DWORD *)(*(_QWORD *)(v12 - 24) + 80LL) & 8) != 0 )
    {
      v18 = *(_DWORD *)(v17 - 64);
      v31 = *(unsigned __int16 *)(*(_QWORD *)(v12 - 32) + 304LL);
      if ( !(_WORD)v31 )
        v31 = 4096;
      if ( v31 + v18 - 1 - (v31 + v18 - 1) % v31 < v18 )
        v18 = v31 + v18 - 1 - (v31 + v18 - 1) % v31;
      if ( (unsigned int)v9 < v18 )
        memset_0((void *)(*(_QWORD *)(v16 + 112) + v9), 0, v18 - (unsigned int)v9);
    }
    else
    {
      v18 = v9;
    }
    *(_DWORD *)(v17 - 64) = v18;
    *(_QWORD *)(v12 - 56) = IopQueueCopyWrite;
    *(_QWORD *)(v12 - 48) = v12 - 40;
    *(_QWORD *)(v12 - 72) = 0LL;
    ExQueueWorkItem((PWORK_QUEUE_ITEM)(v12 - 72), CriticalWorkQueue);
    return 1;
  }
  return v5;
}
