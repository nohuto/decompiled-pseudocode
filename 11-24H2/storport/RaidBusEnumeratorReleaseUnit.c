/*
 * XREFs of RaidBusEnumeratorReleaseUnit @ 0x14002E230
 * Callers:
 *     RaidBusEnumeratorVisitUnit @ 0x140017A7C (RaidBusEnumeratorVisitUnit.c)
 *     StorAdapterNVMeEnumerateZNS @ 0x1401B8B44 (StorAdapterNVMeEnumerateZNS.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401436D0 (_guard_dispatch_icall.c)
 */

void __fastcall RaidBusEnumeratorReleaseUnit(__int64 *a1, __int64 a2)
{
  __int64 v2; // r13
  __int64 v3; // rdi
  KIRQL v4; // r12
  __int64 v5; // rbx
  unsigned int i; // esi
  __int64 (__fastcall *v7)(_QWORD *); // r14
  __int64 (__fastcall *v8)(__int64, unsigned __int64); // r15
  unsigned __int64 v9; // rbp
  _QWORD **v10; // rsi
  _QWORD *j; // rbx
  __int64 v12; // rax
  int v13; // eax
  _QWORD *v14; // rcx
  _QWORD *v15; // rax
  __int64 v16; // rsi
  unsigned int v17; // ebx
  struct _KINTERRUPT *v18; // rcx
  __int64 v19; // rdx
  _QWORD *v20; // rcx
  PKINTERRUPT *v21; // r14
  struct _KINTERRUPT *v22; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-58h] BYREF
  struct _KINTERRUPT **v24; // [rsp+80h] [rbp+8h]

  v2 = *(_QWORD *)(a2 + 8);
  v3 = *a1;
  if ( *(_BYTE *)(a2 + 92) )
  {
    v4 = 0;
    memset(&LockHandle, 0, sizeof(LockHandle));
    if ( *(_BYTE *)(v3 + 4369) )
    {
      v5 = *(_QWORD *)(v3 + 4352);
      v4 = KeAcquireInterruptSpinLock(*(PKINTERRUPT *)(v5 + 24));
      if ( *(_DWORD *)(v3 + 4336) == 2 )
      {
        for ( i = 1; i < *(_DWORD *)(v5 + 4); ++i )
          KeAcquireInterruptSpinLock(*(PKINTERRUPT *)(v5 + 48LL * i + 24));
      }
      v24 = (struct _KINTERRUPT **)(v3 + 848);
    }
    else
    {
      v22 = *(struct _KINTERRUPT **)(v3 + 848);
      v24 = (struct _KINTERRUPT **)(v3 + 848);
      if ( v22 )
      {
        v4 = KeAcquireInterruptSpinLock(v22);
        v24 = (struct _KINTERRUPT **)(v3 + 848);
      }
    }
    v7 = *(__int64 (__fastcall **)(_QWORD *))(v3 + 192);
    v8 = *(__int64 (__fastcall **)(__int64, unsigned __int64))(v3 + 200);
    v9 = (unsigned __int8)BYTE2(*(_DWORD *)(v2 + 104)) | ((((unsigned __int64)(unsigned __int8)*(_DWORD *)(v2 + 104) << 8) | (unsigned __int8)BYTE1(*(_DWORD *)(v2 + 104))) << 8);
    v10 = (_QWORD **)(*(_QWORD *)(v3 + 184)
                    + 16LL * ((*(unsigned int (__fastcall **)(unsigned __int64))(v3 + 208))(v9) % *(_DWORD *)(v3 + 172)));
    for ( j = *v10; ; j = (_QWORD *)*j )
    {
      if ( j == v10 )
        goto LABEL_12;
      v12 = v7(j);
      v13 = v8(v12, v9);
      if ( !v13 )
        break;
      if ( v13 < 0 )
        goto LABEL_12;
    }
    v14 = (_QWORD *)*j;
    if ( *(_QWORD **)(*j + 8LL) != j )
      goto LABEL_30;
    v15 = (_QWORD *)j[1];
    if ( (_QWORD *)*v15 != j )
      goto LABEL_30;
    *v15 = v14;
    v14[1] = v15;
    --*(_DWORD *)(v3 + 168);
LABEL_12:
    if ( *(_BYTE *)(v3 + 4369) )
    {
      v16 = *(_QWORD *)(v3 + 4352);
      if ( *(_DWORD *)(v3 + 4336) == 2 )
      {
        v17 = *(_DWORD *)(v16 + 4) - 1;
        if ( *(_DWORD *)(v16 + 4) != 1 )
        {
          v21 = (PKINTERRUPT *)(v16 + 48LL * v17 + 24);
          do
          {
            KeReleaseInterruptSpinLock(*v21, *(_BYTE *)v16);
            v21 -= 6;
            --v17;
          }
          while ( v17 );
        }
      }
      v18 = *(struct _KINTERRUPT **)(v16 + 24);
    }
    else
    {
      v18 = *v24;
      if ( !*v24 )
        goto LABEL_17;
    }
    KeReleaseInterruptSpinLock(v18, v4);
LABEL_17:
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v3 + 136), &LockHandle);
    v19 = *(_QWORD *)(v2 + 64);
    if ( *(_QWORD *)(v19 + 8) == v2 + 64 )
    {
      v20 = *(_QWORD **)(v2 + 72);
      if ( *v20 == v2 + 64 )
      {
        *v20 = v19;
        *(_QWORD *)(v19 + 8) = v20;
        --*(_DWORD *)(v3 + 160);
        KeReleaseInStackQueuedSpinLock(&LockHandle);
        KeCancelTimer((PKTIMER)(v2 + 1184));
        *(_DWORD *)(*(_QWORD *)(a2 + 8) + 744LL) = 0;
        return;
      }
    }
LABEL_30:
    __fastfail(3u);
  }
}
