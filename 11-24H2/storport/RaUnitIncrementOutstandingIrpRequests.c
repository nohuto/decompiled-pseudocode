/*
 * XREFs of RaUnitIncrementOutstandingIrpRequests @ 0x14000A98C
 * Callers:
 *     RaUnitIoIrp @ 0x14000A870 (RaUnitIoIrp.c)
 * Callees:
 *     RaUnitAcquireRemoveLock @ 0x140004540 (RaUnitAcquireRemoveLock.c)
 *     RaUnitCheckRemoveState @ 0x14000B160 (RaUnitCheckRemoveState.c)
 *     RaUnitDecrementOutstandingIrpRequests @ 0x14000C170 (RaUnitDecrementOutstandingIrpRequests.c)
 */

__int64 __fastcall RaUnitIncrementOutstandingIrpRequests(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // r12
  __int64 v4; // r14
  signed __int32 **v6; // r8
  __int64 v7; // r12
  signed __int32 **v8; // rsi
  signed __int32 v10; // eax
  signed __int32 v11; // ett
  signed __int32 v12; // eax
  int v13; // edi
  signed __int32 *v15; // rdx
  signed __int32 v16; // ett
  KIRQL v17; // r8
  signed __int32 v18; // r13d
  __int64 v19; // rax
  _QWORD *v20; // rdx
  _QWORD *v21; // rcx
  __int64 v22; // rax
  int v23; // eax
  __int64 v24; // rcx
  int v25; // esi
  KIRQL v26; // r9
  __int64 v27; // r8
  _QWORD *v28; // rdx
  _QWORD *v29; // rcx
  __int64 v30; // rax
  _QWORD *v31; // rax
  __int64 v32; // rcx
  __int64 v33; // rax
  IRP *v34; // rcx
  __int128 v35; // [rsp+20h] [rbp-10h] BYREF

  v3 = a3;
  v4 = a3;
  v6 = (signed __int32 **)(a1 + 32);
  v7 = v3 << 6;
  v8 = (signed __int32 **)(a1 + 32);
  v35 = 0LL;
  while ( 2 )
  {
    v10 = *(_DWORD *)(*(_QWORD *)(a1 + 40) + v7 + 4);
    while ( (v10 & 1) == 0 && (v10 || ((*v8)[20] & 1) == 0) )
    {
      v11 = v10;
      v10 = _InterlockedCompareExchange((volatile signed __int32 *)(*(_QWORD *)(a1 + 40) + v7 + 4), v10 + 2, v10);
      if ( v11 == v10 )
      {
LABEL_9:
        v13 = RaUnitCheckRemoveState(a1, a2);
        if ( v13 < 0 )
          RaUnitDecrementOutstandingIrpRequests(a1, (unsigned int)v4);
        return (unsigned int)v13;
      }
      v8 = v6;
    }
    v12 = **v8;
    while ( 1 )
    {
      v15 = *v8;
      if ( (v12 & 1) != 0 )
        break;
      v16 = v12;
      v12 = _InterlockedCompareExchange(v15, v12 + 4, v12);
      if ( v16 == v12 )
      {
        if ( (*(_DWORD *)(*(_QWORD *)(a1 + 32) + 80LL) & 1) != 0 )
          _InterlockedAdd((volatile signed __int32 *)((v4 << 6) + *(_QWORD *)(a1 + 40) + 4), 2u);
        goto LABEL_9;
      }
    }
    v17 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v15 + 3);
    v18 = _InterlockedCompareExchange(*(volatile signed __int32 **)(a1 + 32), 3, 1);
    v19 = *(_QWORD *)(a1 + 32);
    if ( (v18 & 1) == 0 )
    {
      KeReleaseSpinLock((PKSPIN_LOCK)(v19 + 24), v17);
      v6 = (signed __int32 **)(a1 + 32);
      continue;
    }
    break;
  }
  v20 = *(_QWORD **)(v19 + 40);
  v21 = (_QWORD *)(a2 + 168);
  v22 = v19 + 32;
  if ( *v20 != v22 )
LABEL_34:
    __fastfail(3u);
  *(_QWORD *)(a2 + 176) = v20;
  *v21 = v22;
  *v20 = v21;
  *(_QWORD *)(v22 + 8) = v21;
  KeReleaseSpinLock((PKSPIN_LOCK)(*(_QWORD *)(a1 + 32) + 24LL), v17);
  if ( v18 == 1 )
  {
    v23 = RaUnitAcquireRemoveLock(a1, a2, 1);
    v24 = *(_QWORD *)(a1 + 32);
    v25 = v23;
    if ( v23 < 0 )
    {
      *((_QWORD *)&v35 + 1) = &v35;
      *(_QWORD *)&v35 = &v35;
      v26 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v24 + 24));
      _InterlockedExchange(*(volatile __int32 **)(a1 + 32), 1);
      while ( 1 )
      {
        v27 = *(_QWORD *)(a1 + 32);
        v28 = (_QWORD *)(v27 + 32);
        v29 = *(_QWORD **)(v27 + 32);
        if ( v29 == (_QWORD *)(v27 + 32) )
          break;
        if ( (_QWORD *)v29[1] != v28 )
          goto LABEL_34;
        v30 = *v29;
        if ( *(_QWORD **)(*v29 + 8LL) != v29 )
          goto LABEL_34;
        *v28 = v30;
        *(_QWORD *)(v30 + 8) = v28;
        v31 = (_QWORD *)*((_QWORD *)&v35 + 1);
        if ( **((__int128 ***)&v35 + 1) != &v35 )
          goto LABEL_34;
        v29[1] = *((_QWORD *)&v35 + 1);
        *v29 = &v35;
        *v31 = v29;
        *((_QWORD *)&v35 + 1) = v29;
      }
      KeReleaseSpinLock((PKSPIN_LOCK)(v27 + 24), v26);
      while ( 1 )
      {
        v32 = v35;
        if ( (__int128 *)v35 == &v35 )
          break;
        if ( *(__int128 **)(v35 + 8) != &v35 )
          goto LABEL_34;
        v33 = *(_QWORD *)v35;
        if ( *(_QWORD *)(*(_QWORD *)v35 + 8LL) != (_QWORD)v35 )
          goto LABEL_34;
        *(_QWORD *)&v35 = *(_QWORD *)v35;
        *(_QWORD *)(v33 + 8) = &v35;
        v34 = (IRP *)(v32 - 168);
        v34->IoStatus.Information = 0LL;
        v34->IoStatus.Status = v25;
        IofCompleteRequest(v34, 0);
      }
    }
    else
    {
      *(_QWORD *)(v24 + 72) = 0LL;
      IoQueueWorkItem(
        *(PIO_WORKITEM *)(*(_QWORD *)(a1 + 32) + 64LL),
        RaAcquirePowerRefWorkRoutine,
        CriticalWorkQueue,
        (PVOID)(*(_QWORD *)(a1 + 32) + 64LL));
    }
  }
  return 259LL;
}
