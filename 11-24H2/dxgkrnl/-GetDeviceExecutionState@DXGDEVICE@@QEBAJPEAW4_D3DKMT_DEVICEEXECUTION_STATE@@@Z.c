/*
 * XREFs of ?GetDeviceExecutionState@DXGDEVICE@@QEBAJPEAW4_D3DKMT_DEVICEEXECUTION_STATE@@@Z @ 0x1402ABBB0
 * Callers:
 *     DxgkGetDeviceStateInternal @ 0x1402AB150 (DxgkGetDeviceStateInternal.c)
 *     ?IsExecutionStateErrorState@DXGDEVICE@@QEBAEXZ @ 0x140347590 (-IsExecutionStateErrorState@DXGDEVICE@@QEBAEXZ.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     Feature_3694358843__private_IsEnabledDeviceUsageNoInline @ 0x14006CA48 (Feature_3694358843__private_IsEnabledDeviceUsageNoInline.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DXGDEVICE::GetDeviceExecutionState(DXGDEVICE *this, enum _D3DKMT_DEVICEEXECUTION_STATE *a2)
{
  unsigned int v4; // ebp
  enum _D3DKMT_DEVICEEXECUTION_STATE v5; // edi
  int v6; // ecx
  unsigned int v7; // edx
  int v8; // ecx
  int v10; // [rsp+70h] [rbp+8h] BYREF

  v10 = 0;
  v4 = 0;
  v5 = D3DKMT_DEVICEEXECUTION_ACTIVE;
  if ( !a2 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 10517;
    DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"pExecutionState != NULL", 10517LL, 0LL, 0LL, 0LL, 0LL);
  }
  switch ( *((_DWORD *)this + 152) )
  {
    case 1:
      if ( (*((_BYTE *)this + 1917) & 1) != 0 )
      {
        v6 = *(_DWORD *)(*((_QWORD *)this + 60) + 16LL);
        v7 = v6 & 0x80000000;
        v8 = v6 & 0x7FFFFFFF;
        v10 = v8;
      }
      else
      {
        v4 = (*(__int64 (__fastcall **)(_QWORD, int *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 736LL) + 8LL)
                                                      + 192LL))(
               *((_QWORD *)this + 100),
               &v10);
        v7 = v10 & 0x80000000;
        v10 &= ~0x80000000;
        v8 = v10;
        if ( (v4 & 0x80000000) != 0 )
          return v4;
      }
      switch ( v8 )
      {
        case 0:
          if ( v7 || *((_BYTE *)this + 73) )
            v5 = D3DKMT_DEVICEEXECUTION_RESET;
          *a2 = v5;
          return v4;
        case 2:
        case 11:
        case 12:
        case 13:
          goto LABEL_23;
        case 6:
          *a2 = D3DKMT_DEVICEEXECUTION_ERROR_DMAFAULT;
          return v4;
        case 7:
          goto LABEL_20;
        case 9:
        case 10:
        case 15:
        case 16:
        case 17:
        case 18:
        case 19:
        case 24:
          *a2 = D3DKMT_DEVICEEXECUTION_ERROR_DMAPAGEFAULT;
          return v4;
        case 14:
        case 22:
        case 25:
        case 26:
          goto LABEL_8;
        case 27:
          if ( (unsigned int)Feature_3694358843__private_IsEnabledDeviceUsageNoInline() )
            goto LABEL_8;
          goto LABEL_22;
        default:
LABEL_22:
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 10616;
          DxgkLogInternalTriageEvent(
            0LL,
            262146LL,
            0xFFFFFFFFLL,
            L"Unexpected device error!",
            10616LL,
            0LL,
            0LL,
            0LL,
            0LL);
LABEL_23:
          *a2 = D3DKMT_DEVICEEXECUTION_ERROR_OUTOFMEMORY;
          break;
      }
      break;
    case 2:
      *a2 = D3DKMT_DEVICEEXECUTION_RESET;
      break;
    case 3:
LABEL_20:
      *a2 = D3DKMT_DEVICEEXECUTION_HUNG;
      break;
    default:
      if ( *((_DWORD *)this + 152) != 4 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 10628;
        DxgkLogInternalTriageEvent(
          0LL,
          262146LL,
          0xFFFFFFFFLL,
          L"Unexpected device execution state!",
          10628LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
LABEL_8:
      *a2 = D3DKMT_DEVICEEXECUTION_STOPPED;
      break;
  }
  return v4;
}
