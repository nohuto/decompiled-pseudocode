/*
 * XREFs of Endpoint_OnCancelStopCompletion @ 0x1400144F0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ddL @ 0x140001D34 (WPP_RECORDER_SF_ddL.c)
 *     WPP_RECORDER_SF_dD @ 0x14000D338 (WPP_RECORDER_SF_dD.c)
 *     Controller_HwVerifierBreakIfEnabled @ 0x14001103C (Controller_HwVerifierBreakIfEnabled.c)
 *     ESM_AddEsmEvent @ 0x140012218 (ESM_AddEsmEvent.c)
 *     Controller_ReportFatalError @ 0x140013068 (Controller_ReportFatalError.c)
 *     ESM_AddEvent @ 0x1400130A4 (ESM_AddEvent.c)
 *     UsbDevice_GetEndpointState @ 0x1400148D0 (UsbDevice_GetEndpointState.c)
 *     UsbDevice_GetXhciEndpointDequeuePointer @ 0x140014910 (UsbDevice_GetXhciEndpointDequeuePointer.c)
 *     WPP_RECORDER_SF_ddLLi @ 0x14002EE24 (WPP_RECORDER_SF_ddLLi.c)
 */

void __fastcall Endpoint_OnCancelStopCompletion(__int64 a1, int a2, __int128 *a3)
{
  __int64 v3; // rbx
  int EndpointState; // edi
  int v7; // r9d
  unsigned __int8 *v8; // rbp
  __int64 v9; // rcx
  unsigned int v10; // eax
  char v11; // al
  int v12; // edi
  int v13; // edi

  v3 = *(_QWORD *)(a1 + 48);
  if ( a2 == 3 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_dD(
        *(_QWORD *)(v3 + 80),
        4u,
        0xDu,
        0x4Fu,
        (__int64)&WPP_0e51d3b82fdb347dedaae242937bad3f_Traceguids,
        *(unsigned __int8 *)(*(_QWORD *)(v3 + 16) + 135LL),
        *(_DWORD *)(v3 + 144));
    _m_prefetchw((const void *)(v3 + 32));
    v11 = _InterlockedOr((volatile signed __int32 *)(v3 + 32), 2u);
    goto LABEL_14;
  }
  EndpointState = UsbDevice_GetEndpointState(*(_QWORD *)(v3 + 16), *(unsigned int *)(v3 + 144));
  UsbDevice_GetXhciEndpointDequeuePointer(*(_QWORD *)(v3 + 16), *(unsigned int *)(v3 + 144));
  v8 = (unsigned __int8 *)(a1 + 60);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_ddLLi(*(_QWORD *)(v3 + 80), *v8, *(unsigned __int8 *)(*(_QWORD *)(v3 + 16) + 135LL), v7);
  v9 = *(_QWORD *)v3;
  if ( (*(_QWORD *)(*(_QWORD *)v3 + 744LL) & 0x20) != 0 && *v8 == 19 && EndpointState == 4 )
    goto LABEL_17;
  if ( *v8 != 1 )
  {
    if ( *v8 == 19 )
    {
      v12 = EndpointState - 1;
      if ( !v12 )
      {
        ++*(_DWORD *)(v9 + 904);
        ++*(_DWORD *)(v9 + 948);
        *(_BYTE *)(v9 + 872) = 1;
        goto LABEL_17;
      }
      v13 = v12 - 1;
      if ( v13 )
      {
        if ( v13 == 1 )
        {
          ++*(_DWORD *)(v9 + 904);
          ++*(_DWORD *)(v9 + 948);
          *(_BYTE *)(v9 + 872) = 1;
          goto LABEL_17;
        }
        Controller_ReportFatalError(v9, 2, 4100, 0, *(_QWORD *)(v3 + 16), v3, 0LL);
        _m_prefetchw((const void *)(v3 + 32));
        v11 = _InterlockedOr((volatile signed __int32 *)(v3 + 32), 2u);
      }
      else
      {
        if ( (*(_BYTE *)(v3 + 99) & 3) != 1 )
          goto LABEL_17;
        Controller_ReportFatalError(v9, 2, 4099, 0, *(_QWORD *)(v3 + 16), v3, 0LL);
        _m_prefetchw((const void *)(v3 + 32));
        v11 = _InterlockedOr((volatile signed __int32 *)(v3 + 32), 2u);
      }
    }
    else
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_ddL(
          *(_QWORD *)(v3 + 80),
          2u,
          0xDu,
          0x52u,
          (__int64)&WPP_0e51d3b82fdb347dedaae242937bad3f_Traceguids,
          *(unsigned __int8 *)(*(_QWORD *)(v3 + 16) + 135LL),
          *(_DWORD *)(v3 + 144),
          *v8);
      Controller_HwVerifierBreakIfEnabled(
        *(_QWORD *)v3,
        *(_QWORD *)(v3 + 8),
        *(_QWORD *)(v3 + 24),
        0x800000LL,
        "Stop Endpoint Command failed",
        (__int128 *)(a1 + 24),
        a3);
      Controller_ReportFatalError(*(_QWORD *)v3, 2, 4099, 0, *(_QWORD *)(v3 + 16), v3, 0LL);
      _m_prefetchw((const void *)(v3 + 32));
      v11 = _InterlockedOr((volatile signed __int32 *)(v3 + 32), 2u);
    }
LABEL_14:
    if ( (v11 & 2) != 0 )
      return;
LABEL_17:
    ESM_AddEsmEvent(v3);
    return;
  }
  if ( EndpointState != 3 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_ddL(
        *(_QWORD *)(v3 + 80),
        2u,
        0xDu,
        0x51u,
        (__int64)&WPP_0e51d3b82fdb347dedaae242937bad3f_Traceguids,
        *(unsigned __int8 *)(*(_QWORD *)(v3 + 16) + 135LL),
        *(_DWORD *)(v3 + 144),
        EndpointState);
    Controller_ReportFatalError(*(_QWORD *)v3, 2, 4131, 0, *(_QWORD *)(v3 + 16), v3, 0LL);
    _m_prefetchw((const void *)(v3 + 32));
    v11 = _InterlockedOr((volatile signed __int32 *)(v3 + 32), 2u);
    goto LABEL_14;
  }
  v10 = *(_DWORD *)(v3 + 156);
  if ( v10 != 1 && v10 > *(_DWORD *)(v9 + 908) )
  {
    *(_DWORD *)(v9 + 908) = v10;
    *(_BYTE *)(v9 + 872) = 1;
  }
  ESM_AddEvent((KSPIN_LOCK *)(v3 + 296), 16);
}
