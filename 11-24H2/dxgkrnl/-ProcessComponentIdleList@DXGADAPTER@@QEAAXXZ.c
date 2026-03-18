/*
 * XREFs of ?ProcessComponentIdleList@DXGADAPTER@@QEAAXXZ @ 0x140010398
 * Callers:
 *     ?DxgkpComponentIdleListTimerDpc@@YAXPEAU_KDPC@@PEAX11@Z @ 0x140010380 (-DxgkpComponentIdleListTimerDpc@@YAXPEAU_KDPC@@PEAX11@Z.c)
 * Callees:
 *     McTemplateK0_EtwWriteTransfer @ 0x1400105C8 (McTemplateK0_EtwWriteTransfer.c)
 *     McTemplateK0pqq_EtwWriteTransfer @ 0x1400118A8 (McTemplateK0pqq_EtwWriteTransfer.c)
 *     ?ScheduleComponentIdleListTimer@DXGADAPTER@@QEAAX_J@Z @ 0x14003DD40 (-ScheduleComponentIdleListTimer@DXGADAPTER@@QEAAX_J@Z.c)
 */

void __fastcall DXGADAPTER::ProcessComponentIdleList(DXGADAPTER *this)
{
  __int64 v2; // rbx
  _QWORD *v3; // r15
  _QWORD *v4; // rax
  _QWORD *v5; // rcx
  _QWORD *v6; // r8
  _QWORD *v7; // rdx
  _QWORD *v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  int v11; // r8d
  _QWORD *i; // rsi
  _QWORD *v13; // rcx
  __int64 v14; // rdx
  unsigned int v15; // r14d
  __int64 v16; // rdx
  _QWORD v17[2]; // [rsp+30h] [rbp-30h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-20h] BYREF

  if ( !*((_BYTE *)this + 3662) )
  {
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x20000) != 0 )
      McTemplateK0_EtwWriteTransfer(this, &Dxgk_ProcessComponentIdleList);
    v2 = MEMORY[0xFFFFF78000000014];
    memset(&LockHandle, 0, sizeof(LockHandle));
    KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)this + 470, &LockHandle);
    v17[1] = v17;
    v3 = (_QWORD *)((char *)this + 3712);
    v17[0] = v17;
    v4 = (_QWORD *)*((_QWORD *)this + 464);
    while ( 1 )
    {
      v5 = v4;
      v6 = v4;
      if ( v4 == v3 )
        break;
      v4 = (_QWORD *)*v4;
      if ( v6[6] > v2 )
        break;
      if ( (_QWORD *)v4[1] != v5
        || (v7 = (_QWORD *)v5[1], (_QWORD *)*v7 != v5)
        || (*v7 = v4, v4[1] = v7, *v5 = 0LL, v8 = v6 + 2, v9 = v17[0], *(_QWORD **)(v17[0] + 8LL) != v17) )
      {
        __fastfail(3u);
      }
      *v8 = v17[0];
      v6[3] = v17;
      *(_QWORD *)(v9 + 8) = v8;
      v17[0] = v6 + 2;
    }
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    for ( i = (_QWORD *)v17[0]; i != v17; i = (_QWORD *)*i )
    {
      v15 = *((_DWORD *)i - 114);
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x20000) != 0 )
        McTemplateK0pqq_EtwWriteTransfer(v10, (unsigned int)&Dxgk_ReportPowerComponentState, v11, (_DWORD)this, v15, 0);
      v10 = *((_QWORD *)this + 404);
      if ( v10 )
        PoFxIdleComponent(v10, v15, 0LL);
    }
    KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)this + 470, &LockHandle);
    *((_BYTE *)this + 3661) = 0;
    v13 = (_QWORD *)*v3;
    if ( (_QWORD *)*v3 != v3 )
    {
      if ( v13[5] > v2 )
      {
        v16 = v13[7];
        v13[5] = v2;
        v13[6] = v16 + v2;
        DXGADAPTER::ScheduleComponentIdleListTimer(this, v16);
      }
      else
      {
        v14 = v13[6] - v2;
        *((_BYTE *)this + 3661) = 1;
        KeSetTimer((PKTIMER)this + 59, (LARGE_INTEGER)-v14, (PKDPC)this + 60);
      }
    }
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  }
}
