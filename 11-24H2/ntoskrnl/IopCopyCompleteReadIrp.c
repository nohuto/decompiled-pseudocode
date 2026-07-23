/*
 * XREFs of IopCopyCompleteReadIrp @ 0x14025FA30
 * Callers:
 *     <none>
 * Callees:
 *     IopUnlockAndFreeMdl @ 0x14025FCC8 (IopUnlockAndFreeMdl.c)
 *     IopCopyCompleteReadRequest @ 0x14025FD20 (IopCopyCompleteReadRequest.c)
 *     KeReleaseSpinLock @ 0x14027E340 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeGetEffectiveIrql @ 0x1402883D0 (KeGetEffectiveIrql.c)
 *     IopFreeIrpExtension @ 0x1402C3EF0 (IopFreeIrpExtension.c)
 *     KeReleaseQueuedSpinLock @ 0x1402CB820 (KeReleaseQueuedSpinLock.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     ExQueueWorkItem @ 0x1402CE3E0 (ExQueueWorkItem.c)
 *     KeInsertQueueApc @ 0x1402DF360 (KeInsertQueueApc.c)
 *     KeAcquireQueuedSpinLock @ 0x140357D70 (KeAcquireQueuedSpinLock.c)
 *     IopDropIrp @ 0x1403B3CD0 (IopDropIrp.c)
 *     KeInitializeApc @ 0x1404163D0 (KeInitializeApc.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

char __fastcall IopCopyCompleteReadIrp(_QWORD *a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rbp
  _QWORD *v4; // r12
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
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rbp
  unsigned int v19; // ebx
  char EffectiveIrql; // al
  __int64 v22; // rdx
  __int64 v23; // rcx
  unsigned __int8 CurrentIrql; // bl
  __int64 v25; // rdx
  __int64 v26; // rax
  __int64 v27; // rcx
  char v28; // al
  __int64 v29; // rcx
  KIRQL v30; // al
  __int64 *v31; // rdx
  KIRQL v32; // r12
  unsigned int v33; // r8d
  __int64 v34; // r8
  __int64 *v35; // rax
  int v36; // [rsp+40h] [rbp-58h]
  __int64 v38; // [rsp+A8h] [rbp+10h] BYREF
  unsigned int v39; // [rsp+B0h] [rbp+18h]
  char v40; // [rsp+B8h] [rbp+20h]

  v39 = a3;
  v38 = a2;
  v3 = *a1;
  v4 = a1;
  v5 = 0;
  v6 = a3;
  v7 = *(_DWORD *)(*a1 + 48LL);
  v8 = *(struct _MDL **)(*a1 + 8LL);
  v9 = *(unsigned int *)(v3 + 56);
  v10 = *(_BYTE *)(v3 + 68);
  v11 = *(_QWORD *)(v3 + 152);
  v12 = *(_QWORD *)(v3 + 112);
  v36 = v7;
  v40 = *(_BYTE *)(v3 + 65);
  if ( v8 )
  {
    IopUnlockAndFreeMdl(v8);
    *(_QWORD *)(v3 + 8) = 0LL;
  }
  if ( v11 )
  {
    v13 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v11 + 1560));
    KeReleaseSpinLock((PKSPIN_LOCK)(v11 + 1560), v13);
    v6 = v39;
  }
  if ( (struct _KTHREAD *)v11 != KeGetCurrentThread()
    || KeGetCurrentThread()->SpecialApcDisable
    || (EffectiveIrql = KeGetEffectiveIrql(), v23 = 1LL, EffectiveIrql)
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
      v15 = v38;
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
      LOBYTE(v22) = 1;
      LOBYTE(v23) = CurrentIrql;
      KiRaiseIrqlProcessIrqlFlags(v23, v22);
    }
    IopCopyCompleteReadRequest(v3 + 120, 0LL, 0LL, &v38, 0LL);
    if ( KiIrqlFlags )
    {
      LOBYTE(v25) = CurrentIrql;
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v25);
    }
    __writecr8(CurrentIrql);
    goto LABEL_10;
  }
  v30 = KeAcquireQueuedSpinLock(0xBuLL);
  v31 = (__int64 *)IopDeadIrps;
  v32 = v30;
  while ( v31 != &IopDeadIrps )
  {
    v34 = *v31;
    if ( v31 - 4 == (__int64 *)v3 )
    {
      if ( *(__int64 **)(v34 + 8) != v31 || (v35 = (__int64 *)v31[1], (__int64 *)*v35 != v31) )
        __fastfail(3u);
      *v35 = v34;
      *(_QWORD *)(v34 + 8) = v35;
      v31[1] = (__int64)v31;
      *v31 = (__int64)v31;
      ObfDereferenceObjectWithTag((PVOID)v11, 0x746C6644u);
      goto LABEL_37;
    }
    v31 = (__int64 *)*v31;
  }
  if ( !v11 )
  {
LABEL_37:
    KeReleaseQueuedSpinLock(0xBuLL, v32);
    IopDropIrp((PIRP)v3);
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
  KeInsertQueueApc(v3 + 120, v38, 0LL, v39);
  KeReleaseQueuedSpinLock(0xBuLL, v32);
LABEL_38:
  v4 = a1;
LABEL_10:
  if ( v36 < 0 || v10 )
  {
    v26 = *(_QWORD *)(v12 - 48);
    v27 = *(_QWORD *)(v26 + 88);
    if ( (v27 & 1) != 0 )
    {
      *(_BYTE *)(v26 + 71) |= 0x10u;
      *(_QWORD *)(v26 + 88) = v27 & 0xFFFFFFFFFFFFFFFEuLL;
    }
    LOBYTE(v16) = 1;
    v28 = v40;
    *(_DWORD *)(*(_QWORD *)(v12 - 48) + 48LL) = v36;
    *(_BYTE *)(*(_QWORD *)(v12 - 48) + 65LL) = v28;
    v29 = *(_QWORD *)(v12 - 48);
    *v4 = v29;
    IopFreeIrpExtension(v29, 9LL, v16);
  }
  else
  {
    v17 = *(_QWORD *)(v12 - 48);
    v18 = *(_QWORD *)(v17 + 184);
    if ( (*(_DWORD *)(*(_QWORD *)(v12 - 32) + 80LL) & 8) != 0 )
    {
      v19 = *(_DWORD *)(v18 - 64);
      v33 = *(unsigned __int16 *)(*(_QWORD *)(v12 - 40) + 304LL);
      if ( !(_WORD)v33 )
        v33 = 4096;
      if ( v33 + v19 - 1 - (v33 + v19 - 1) % v33 < v19 )
        v19 = v33 + v19 - 1 - (v33 + v19 - 1) % v33;
      if ( (unsigned int)v9 < v19 )
        memset_0((void *)(*(_QWORD *)(v17 + 112) + v9), 0, v19 - (unsigned int)v9);
    }
    else
    {
      v19 = v9;
    }
    *(_DWORD *)(v18 - 64) = v19;
    *(_QWORD *)(v12 - 64) = IopQueueCopyWrite;
    *(_QWORD *)(v12 - 56) = v12 - 48;
    *(_QWORD *)(v12 - 80) = 0LL;
    ExQueueWorkItem((PWORK_QUEUE_ITEM)(v12 - 80), CriticalWorkQueue);
    return 1;
  }
  return v5;
}
