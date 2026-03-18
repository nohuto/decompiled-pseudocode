/*
 * XREFs of Bulk_WdfEvtRequestCancel @ 0x140005BE0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_DDDq @ 0x1400044D0 (WPP_RECORDER_SF_DDDq.c)
 *     ESM_AddEvent @ 0x140006A44 (ESM_AddEvent.c)
 *     TR_QueueDpcForTransferCompletion @ 0x1400148B4 (TR_QueueDpcForTransferCompletion.c)
 *     _guard_dispatch_icall @ 0x140058B00 (_guard_dispatch_icall.c)
 */

void __fastcall Bulk_WdfEvtRequestCancel(__int64 a1)
{
  char v1; // bp
  char v2; // r14
  __int64 v3; // rdi
  __int64 v4; // rbx
  KIRQL v5; // al
  int v6; // ecx
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rax
  _QWORD *v11; // rcx
  __int64 *v12; // rcx
  int v13; // [rsp+20h] [rbp-38h]

  v1 = 0;
  v2 = 0;
  v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01033 + 1616))(
         WdfDriverGlobals,
         a1,
         off_14006AE88);
  v4 = *(_QWORD *)(v3 + 56);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_DDDq(
      *(_QWORD *)(*(_QWORD *)(v4 + 56) + 80LL),
      4u,
      *(unsigned __int8 *)(*(_QWORD *)(v4 + 48) + 143LL),
      0xDu,
      v13);
  v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v4 + 96));
  *(_BYTE *)(v4 + 104) = v5;
  if ( *(_DWORD *)(v3 + 64) == 1 )
  {
    v6 = *(_DWORD *)(v4 + 332);
    if ( (v6 & 0x20) != 0 )
    {
      v8 = v4 + 376;
      v9 = *(_QWORD *)(v4 + 376);
      if ( v9 != v4 + 376 )
      {
        **(_QWORD **)(v4 + 416) = v9;
        *(_QWORD *)(*(_QWORD *)v8 + 8LL) = *(_QWORD *)(v4 + 416);
        **(_QWORD **)(v4 + 384) = v4 + 408;
        *(_QWORD *)(v4 + 416) = *(_QWORD *)(v4 + 384);
        *(_QWORD *)(v4 + 384) = v4 + 376;
        *(_QWORD *)v8 = v8;
        v5 = *(_BYTE *)(v4 + 104);
      }
      v1 = 1;
    }
    else
    {
      v2 = 1;
      *(_DWORD *)(v4 + 332) = v6 | 0x10;
    }
  }
  KeReleaseSpinLock((PKSPIN_LOCK)(v4 + 96), v5);
  if ( v2 )
  {
    v7 = *(_QWORD *)(v4 + 56);
    _m_prefetchw((const void *)(v7 + 32));
    if ( (_InterlockedOr((volatile signed __int32 *)(v7 + 32), 1u) & 1) == 0 )
      ESM_AddEvent((PVOID)(v7 + 304));
  }
  *(_BYTE *)(v4 + 104) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v4 + 96));
  if ( *(_DWORD *)(v3 + 64) == 2 )
  {
    v10 = *(_QWORD *)v3;
    if ( *(_QWORD *)(*(_QWORD *)v3 + 8LL) != v3
      || (v11 = *(_QWORD **)(v3 + 8), *v11 != v3)
      || (*v11 = v10, *(_QWORD *)(v10 + 8) = v11, v12 = *(__int64 **)(v4 + 416), *v12 != v4 + 408) )
    {
      __fastfail(3u);
    }
    *(_QWORD *)v3 = v4 + 408;
    v1 = 1;
    *(_QWORD *)(v3 + 8) = v12;
    *v12 = v3;
    *(_QWORD *)(v4 + 416) = v3;
  }
  *(_DWORD *)(v3 + 64) = 3;
  KeReleaseSpinLock((PKSPIN_LOCK)(v4 + 96), *(_BYTE *)(v4 + 104));
  if ( v1 )
    TR_QueueDpcForTransferCompletion(v4);
}
