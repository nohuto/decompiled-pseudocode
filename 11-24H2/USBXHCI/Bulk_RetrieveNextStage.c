/*
 * XREFs of Bulk_RetrieveNextStage @ 0x140038F50
 * Callers:
 *     Bulk_MappingLoop @ 0x140038CF0 (Bulk_MappingLoop.c)
 * Callees:
 *     WPP_RECORDER_SF_DDDD @ 0x140004124 (WPP_RECORDER_SF_DDDD.c)
 *     WPP_RECORDER_SF_DDDq @ 0x1400044D0 (WPP_RECORDER_SF_DDDq.c)
 *     Bulk_TransferData_Initialize @ 0x140014580 (Bulk_TransferData_Initialize.c)
 *     Bulk_Transfer_Complete @ 0x14001596C (Bulk_Transfer_Complete.c)
 *     Bulk_Transfer_CompleteCancelable @ 0x140015D30 (Bulk_Transfer_CompleteCancelable.c)
 *     Bulk_TransferData_DetermineTransferMechanism @ 0x14001F140 (Bulk_TransferData_DetermineTransferMechanism.c)
 *     Bulk_TransferData_ConfigureBuffer @ 0x1400216C0 (Bulk_TransferData_ConfigureBuffer.c)
 *     Bulk_Stage_Acquire @ 0x140021FA0 (Bulk_Stage_Acquire.c)
 *     WPP_RECORDER_SF_DDDqq @ 0x1400220F0 (WPP_RECORDER_SF_DDDqq.c)
 *     TR_ValidateSecureTransferType @ 0x140023BB0 (TR_ValidateSecureTransferType.c)
 *     WPP_RECORDER_SF_DDDqd @ 0x14002F368 (WPP_RECORDER_SF_DDDqd.c)
 *     WPP_RECORDER_SF_DDDd @ 0x14004B580 (WPP_RECORDER_SF_DDDd.c)
 *     _guard_dispatch_icall @ 0x140058B00 (_guard_dispatch_icall.c)
 */

_BOOL8 __fastcall Bulk_RetrieveNextStage(__int64 a1)
{
  __int16 v1; // r15
  int v3; // esi
  signed __int32 v4; // eax
  signed __int32 v5; // ett
  int v6; // r8d
  unsigned __int16 v7; // r9
  _DWORD *v8; // r11
  unsigned int v9; // ecx
  int v10; // r8d
  __int64 v11; // rdi
  __int64 v12; // rax
  __int64 v13; // r8
  __int64 v14; // rdx
  int v15; // r8d
  int v16; // r8d
  __int64 v17; // rax
  signed __int32 v18; // eax
  signed __int32 v19; // ett
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 *v22; // rdx
  int v23; // edx
  __int64 v25; // [rsp+20h] [rbp-48h]
  __int64 v26; // [rsp+70h] [rbp+8h] BYREF

  v1 = 0;
  *(_QWORD *)(a1 + 368) = 0LL;
  v3 = 0;
  v26 = 0LL;
  *(_BYTE *)(a1 + 104) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
  if ( *(_BYTE *)(*(_QWORD *)(a1 + 40) + 1004LL) == 1 )
  {
    _m_prefetchw((const void *)(a1 + 356));
    v4 = *(_DWORD *)(a1 + 356);
    do
    {
      v5 = v4;
      v4 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 356), v4, v4);
    }
    while ( v5 != v4 );
    v6 = *(_DWORD *)(a1 + 352);
    if ( v4 == v6 )
    {
      v3 = -1073741823;
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
        goto LABEL_9;
      v7 = 20;
      goto LABEL_8;
    }
  }
  else
  {
    v6 = *(_DWORD *)(a1 + 352);
    if ( *(_DWORD *)(a1 + 356) == v6 )
    {
      v3 = -1073741823;
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
        goto LABEL_9;
      v7 = 21;
LABEL_8:
      WPP_RECORDER_SF_DDDD(
        *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
        5u,
        0xEu,
        v7,
        (__int64)&WPP_b35432f3067b3bf93fefc5589952cfde_Traceguids,
        *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 143LL),
        *(_DWORD *)(*(_QWORD *)(a1 + 56) + 152LL),
        *(_DWORD *)(a1 + 64),
        v6);
LABEL_9:
      KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), *(_BYTE *)(a1 + 104));
      return v3 >= 0;
    }
  }
  if ( *(_QWORD *)(a1 + 376) != a1 + 376 )
  {
    v8 = *(_DWORD **)(a1 + 384);
    v9 = v8[26];
    if ( v8[28] < v9 )
    {
      if ( *(_DWORD *)(a1 + 340) != 3 )
      {
        v12 = Bulk_Stage_Acquire(*(_QWORD *)(a1 + 384));
        *(_QWORD *)(a1 + 368) = v12;
        if ( v12 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_DDDqq(
              *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
              4u,
              *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 143LL),
              0x16u,
              v25);
        }
        else
        {
          v3 = -1073741823;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
            && LOWORD(WPP_GLOBAL_Control->DeviceType) )
          {
            WPP_RECORDER_SF_DDDq(*(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL), 5u, v13, 0x17u, v25);
          }
        }
        goto LABEL_9;
      }
      if ( v8[30] != v8[29] )
      {
        v8[28] = v9;
        goto LABEL_9;
      }
      Bulk_Transfer_CompleteCancelable(a1, *(__int64 **)(a1 + 384), -1073737728, 1);
    }
  }
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), *(_BYTE *)(a1 + 104));
  while ( 1 )
  {
    v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64 *))(WdfFunctions_01033 + 1264))(
           WdfDriverGlobals,
           *(_QWORD *)(a1 + 72),
           &v26);
    if ( v3 < 0 )
      break;
    v11 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01033 + 1616))(
            WdfDriverGlobals,
            v26,
            off_14006AE88);
    Bulk_TransferData_Initialize(a1, v11, v26);
    if ( (int)TR_ValidateSecureTransferType(a1, *(_QWORD *)(v11 + 48)) < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_DDDqd(
          *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
          2u,
          *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 143LL),
          0x19u,
          v25);
      goto LABEL_24;
    }
    Bulk_TransferData_DetermineTransferMechanism(v11);
    if ( (int)Bulk_TransferData_ConfigureBuffer(v11) >= 0 )
    {
      v14 = *(_QWORD *)(v11 + 24);
      *(_DWORD *)(v11 + 64) = 1;
      v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void (__fastcall *)(__int64)))(WdfFunctions_01033
                                                                                                 + 3144))(
             WdfDriverGlobals,
             v14,
             Bulk_WdfEvtRequestCancel);
      if ( v3 >= 0 )
      {
        *(_QWORD *)(a1 + 368) = Bulk_Stage_Acquire(v11);
        v17 = *(_QWORD *)(a1 + 40);
        if ( *(_BYTE *)(v17 + 1004) == 1 )
        {
          _m_prefetchw((const void *)(a1 + 356));
          v18 = *(_DWORD *)(a1 + 356);
          do
          {
            v19 = v18;
            v18 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 356), v18, v18);
          }
          while ( v19 != v18 );
          if ( !v18 )
          {
            v17 = *(_QWORD *)(a1 + 40);
LABEL_46:
            v20 = *(_QWORD *)(v17 + 128);
            if ( *(_DWORD *)(v20 + 24) > 1u )
            {
              v21 = *(unsigned int *)(*(_QWORD *)(v11 + 48) + 64LL);
              if ( (unsigned int)v21 < *(_DWORD *)(v20 + 48) )
                v1 = *(_WORD *)(*(_QWORD *)(v20 + 56) + 2 * v21);
            }
            *(_WORD *)(a1 + 112) = v1;
          }
        }
        else if ( !*(_DWORD *)(a1 + 356) )
        {
          goto LABEL_46;
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_DDDqq(*(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL), 4u, v16, 0x1Cu, v25);
        *(_BYTE *)(a1 + 104) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
        v22 = *(__int64 **)(a1 + 384);
        if ( *v22 != a1 + 376 )
          __fastfail(3u);
        *(_QWORD *)v11 = a1 + 376;
        *(_QWORD *)(v11 + 8) = v22;
        *v22 = v11;
        *(_QWORD *)(a1 + 384) = v11;
        goto LABEL_9;
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_DDDqd(*(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL), 3u, v15, 0x1Bu, v25);
      *(_DWORD *)(v11 + 64) = 3;
      Bulk_Transfer_Complete(a1, v11);
    }
    else
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_DDDqd(
          *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
          3u,
          *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 143LL),
          0x1Au,
          v25);
LABEL_24:
      Bulk_Transfer_Complete(a1, v11);
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    v23 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 143LL);
    LOBYTE(v23) = 5;
    WPP_RECORDER_SF_DDDd(
      *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
      v23,
      v10,
      24,
      (__int64)&WPP_b35432f3067b3bf93fefc5589952cfde_Traceguids,
      *(_BYTE *)(*(_QWORD *)(a1 + 48) + 143LL),
      *(_DWORD *)(*(_QWORD *)(a1 + 56) + 152LL),
      *(_DWORD *)(a1 + 64),
      v3);
  }
  return v3 >= 0;
}
