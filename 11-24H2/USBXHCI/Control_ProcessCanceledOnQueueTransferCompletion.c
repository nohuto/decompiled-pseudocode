/*
 * XREFs of Control_ProcessCanceledOnQueueTransferCompletion @ 0x14004B9C4
 * Callers:
 *     Control_WdfDpcForCanceledOnQueueTransferCompletion @ 0x14004BAB0 (Control_WdfDpcForCanceledOnQueueTransferCompletion.c)
 *     Control_WdfWorkItemForCanceledOnQueueTransferCompletion @ 0x14004BF60 (Control_WdfWorkItemForCanceledOnQueueTransferCompletion.c)
 * Callees:
 *     Control_Transfer_Complete @ 0x140023660 (Control_Transfer_Complete.c)
 *     _guard_dispatch_icall @ 0x140058B00 (_guard_dispatch_icall.c)
 */

void __fastcall Control_ProcessCanceledOnQueueTransferCompletion(__int64 a1)
{
  __int64 v1; // rbx
  KIRQL v2; // al
  bool v3; // zf
  KIRQL v4; // dl
  _QWORD **v5; // rdi
  _QWORD *v6; // rdx
  _QWORD *v7; // rax
  _QWORD v8[3]; // [rsp+20h] [rbp-18h] BYREF

  v1 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01033 + 1616))(
         WdfDriverGlobals,
         a1,
         off_14006B1F0);
  v8[1] = v8;
  v8[0] = v8;
  v2 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v1 + 96));
  v3 = *(_BYTE *)(v1 + 392) == 0;
  *(_BYTE *)(v1 + 104) = v2;
  if ( v3 )
  {
    *(_BYTE *)(v1 + 392) = 1;
    v5 = (_QWORD **)(v1 + 376);
    while ( 1 )
    {
      v6 = *v5;
      if ( *v5 == v5 )
        break;
      if ( (_QWORD **)v6[1] != v5 || (v7 = (_QWORD *)*v6, *(_QWORD **)(*v6 + 8LL) != v6) )
        __fastfail(3u);
      *v5 = v7;
      v7[1] = v5;
      v6[1] = v6;
      *v6 = v6;
      Control_Transfer_Complete(v1, (__int64)v6);
    }
    v4 = *(_BYTE *)(v1 + 104);
    *(_BYTE *)(v1 + 392) = 0;
  }
  else
  {
    v4 = v2;
  }
  KeReleaseSpinLock((PKSPIN_LOCK)(v1 + 96), v4);
}
