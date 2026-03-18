/*
 * XREFs of Endpoint_OnCancelStopCompletion @ 0x140007D60
 * Callers:
 *     <none>
 * Callees:
 *     Controller_HwVerifierBreakIfEnabled @ 0x1400049B4 (Controller_HwVerifierBreakIfEnabled.c)
 *     ESM_AddEsmEvent @ 0x140005BC0 (ESM_AddEsmEvent.c)
 *     Controller_ReportFatalError @ 0x140006A08 (Controller_ReportFatalError.c)
 *     ESM_AddEvent @ 0x140006A44 (ESM_AddEvent.c)
 *     UsbDevice_GetEndpointState @ 0x140008140 (UsbDevice_GetEndpointState.c)
 *     UsbDevice_GetXhciEndpointDequeuePointer @ 0x140008180 (UsbDevice_GetXhciEndpointDequeuePointer.c)
 *     WPP_RECORDER_SF_dD @ 0x14001BF58 (WPP_RECORDER_SF_dD.c)
 *     WPP_RECORDER_SF_ddL @ 0x14001F9A4 (WPP_RECORDER_SF_ddL.c)
 *     WPP_RECORDER_SF_ddLLi @ 0x14002E178 (WPP_RECORDER_SF_ddLLi.c)
 */

void __fastcall Endpoint_OnCancelStopCompletion(__int64 a1, int a2, __int128 *a3)
{
  __int64 v3; // rbx
  int EndpointState; // edi
  int v7; // r9d
  char *v8; // rbp
  __int64 v9; // rcx
  int v10; // edx
  unsigned int v11; // eax
  char v12; // al
  int v13; // edx
  int v14; // edi
  int v15; // edi

  v3 = *(_QWORD *)(a1 + 48);
  if ( a2 == 3 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(a2) = 4;
      WPP_RECORDER_SF_dD(
        *(_QWORD *)(v3 + 80),
        a2,
        13,
        82,
        (__int64)&WPP_d3be1904650e34f1a39197b3dd99b0d4_Traceguids,
        *(_BYTE *)(*(_QWORD *)(v3 + 16) + 143LL),
        *(_DWORD *)(v3 + 152));
    }
    _m_prefetchw((const void *)(v3 + 32));
    v12 = _InterlockedOr((volatile signed __int32 *)(v3 + 32), 2u);
    goto LABEL_14;
  }
  EndpointState = UsbDevice_GetEndpointState(*(_QWORD *)(v3 + 16), *(unsigned int *)(v3 + 152));
  UsbDevice_GetXhciEndpointDequeuePointer(*(_QWORD *)(v3 + 16), *(unsigned int *)(v3 + 152));
  v8 = (char *)(a1 + 60);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_ddLLi(
      *(_QWORD *)(v3 + 80),
      (unsigned __int8)*v8,
      *(unsigned __int8 *)(*(_QWORD *)(v3 + 16) + 143LL),
      v7);
  v9 = *(_QWORD *)v3;
  if ( (*(_QWORD *)(*(_QWORD *)v3 + 744LL) & 0x20) != 0 && *v8 == 19 && EndpointState == 4 )
    goto LABEL_17;
  v10 = (unsigned __int8)*v8 - 1;
  if ( *v8 != 1 )
  {
    v13 = (unsigned __int8)*v8 - 11;
    if ( *v8 == 19 )
    {
      v14 = EndpointState - 1;
      if ( !v14 )
      {
        ++*(_DWORD *)(v9 + 904);
        ++*(_DWORD *)(v9 + 948);
        *(_BYTE *)(v9 + 872) = 1;
        goto LABEL_17;
      }
      v15 = v14 - 1;
      if ( v15 )
      {
        if ( v15 == 1 )
        {
          ++*(_DWORD *)(v9 + 904);
          ++*(_DWORD *)(v9 + 948);
          *(_BYTE *)(v9 + 872) = 1;
          goto LABEL_17;
        }
        Controller_ReportFatalError(v9, 2, 4100, 0, *(_QWORD *)(v3 + 16), v3, 0LL);
        _m_prefetchw((const void *)(v3 + 32));
        v12 = _InterlockedOr((volatile signed __int32 *)(v3 + 32), 2u);
      }
      else
      {
        if ( (*(_BYTE *)(v3 + 99) & 3) != 1 )
          goto LABEL_17;
        Controller_ReportFatalError(v9, 2, 4099, 0, *(_QWORD *)(v3 + 16), v3, 0LL);
        _m_prefetchw((const void *)(v3 + 32));
        v12 = _InterlockedOr((volatile signed __int32 *)(v3 + 32), 2u);
      }
    }
    else
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v13) = 2;
        WPP_RECORDER_SF_ddL(
          *(_QWORD *)(v3 + 80),
          v13,
          13,
          85,
          (__int64)&WPP_d3be1904650e34f1a39197b3dd99b0d4_Traceguids,
          *(_BYTE *)(*(_QWORD *)(v3 + 16) + 143LL),
          *(_DWORD *)(v3 + 152),
          *v8);
      }
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
      v12 = _InterlockedOr((volatile signed __int32 *)(v3 + 32), 2u);
    }
LABEL_14:
    if ( (v12 & 2) != 0 )
      return;
LABEL_17:
    ESM_AddEsmEvent(v3);
    return;
  }
  if ( EndpointState != 3 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v10) = 2;
      WPP_RECORDER_SF_ddL(
        *(_QWORD *)(v3 + 80),
        v10,
        13,
        84,
        (__int64)&WPP_d3be1904650e34f1a39197b3dd99b0d4_Traceguids,
        *(_BYTE *)(*(_QWORD *)(v3 + 16) + 143LL),
        *(_DWORD *)(v3 + 152),
        EndpointState);
    }
    Controller_ReportFatalError(*(_QWORD *)v3, 2, 4131, 0, *(_QWORD *)(v3 + 16), v3, 0LL);
    _m_prefetchw((const void *)(v3 + 32));
    v12 = _InterlockedOr((volatile signed __int32 *)(v3 + 32), 2u);
    goto LABEL_14;
  }
  v11 = *(_DWORD *)(v3 + 164);
  if ( v11 != 1 && v11 > *(_DWORD *)(v9 + 908) )
  {
    *(_DWORD *)(v9 + 908) = v11;
    *(_BYTE *)(v9 + 872) = 1;
  }
  ESM_AddEvent((KSPIN_LOCK *)(v3 + 304), 16);
}
