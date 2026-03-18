/*
 * XREFs of ?GetDeviceExecutionState@DXGDEVICE@@QEBAJPEAW4_D3DKMT_DEVICEEXECUTION_STATE@@@Z @ 0x1402DD110
 * Callers:
 *     DxgkGetDeviceStateInternal @ 0x1402A4C80 (DxgkGetDeviceStateInternal.c)
 *     ?IsExecutionStateErrorState@DXGDEVICE@@QEBAEXZ @ 0x1402DD084 (-IsExecutionStateErrorState@DXGDEVICE@@QEBAEXZ.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DXGDEVICE::GetDeviceExecutionState(DXGDEVICE *this, enum _D3DKMT_DEVICEEXECUTION_STATE *a2)
{
  int v4; // edi
  enum _D3DKMT_DEVICEEXECUTION_STATE v5; // ebp
  int v6; // edx
  unsigned int v7; // ecx
  int v8; // edx
  int v10; // edx
  int v11; // edx
  int v12; // edx
  int v13; // [rsp+70h] [rbp+8h] BYREF

  v13 = 0;
  v4 = 0;
  v5 = D3DKMT_DEVICEEXECUTION_ACTIVE;
  if ( !a2 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 10248;
    DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"pExecutionState != NULL", 10248LL, 0LL, 0LL, 0LL, 0LL);
  }
  v6 = *((_DWORD *)this + 152);
  if ( v6 == 1 )
  {
    if ( (*((_BYTE *)this + 1901) & 1) != 0 )
    {
      v10 = *(_DWORD *)(*((_QWORD *)this + 60) + 16LL);
      v7 = v10 & 0x80000000;
      v8 = v10 & 0x7FFFFFFF;
      v13 = v8;
    }
    else
    {
      v4 = (*(__int64 (__fastcall **)(_QWORD, int *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 736LL) + 8LL)
                                                    + 192LL))(
             *((_QWORD *)this + 100),
             &v13);
      v7 = v13 & 0x80000000;
      v13 &= ~0x80000000;
      v8 = v13;
      if ( v4 < 0 )
        return (unsigned int)v4;
    }
    if ( v8 )
    {
      switch ( v8 )
      {
        case 2:
        case 11:
        case 12:
        case 13:
          *a2 = D3DKMT_DEVICEEXECUTION_ERROR_OUTOFMEMORY;
          break;
        case 6:
          *a2 = D3DKMT_DEVICEEXECUTION_ERROR_DMAFAULT;
          break;
        case 7:
          goto LABEL_24;
        case 9:
        case 10:
        case 15:
        case 16:
        case 17:
        case 18:
        case 19:
        case 24:
          *a2 = D3DKMT_DEVICEEXECUTION_ERROR_DMAPAGEFAULT;
          break;
        case 14:
        case 22:
        case 25:
        case 26:
          goto LABEL_19;
        default:
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 10336;
          DxgkLogInternalTriageEvent(
            0LL,
            262146,
            0xFFFFFFFFLL,
            L"Unexpected device error!",
            10336LL,
            0LL,
            0LL,
            0LL,
            0LL);
          *a2 = D3DKMT_DEVICEEXECUTION_ERROR_OUTOFMEMORY;
          break;
      }
    }
    else
    {
      if ( v7 || *((_BYTE *)this + 73) )
        v5 = D3DKMT_DEVICEEXECUTION_RESET;
      *a2 = v5;
    }
  }
  else
  {
    v11 = v6 - 2;
    if ( v11 )
    {
      v12 = v11 - 1;
      if ( v12 )
      {
        if ( v12 != 1 )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 10348;
          DxgkLogInternalTriageEvent(
            0LL,
            262146,
            0xFFFFFFFFLL,
            L"Unexpected device execution state!",
            10348LL,
            0LL,
            0LL,
            0LL,
            0LL);
        }
LABEL_19:
        *a2 = D3DKMT_DEVICEEXECUTION_STOPPED;
      }
      else
      {
LABEL_24:
        *a2 = D3DKMT_DEVICEEXECUTION_HUNG;
      }
    }
    else
    {
      *a2 = D3DKMT_DEVICEEXECUTION_RESET;
    }
  }
  return (unsigned int)v4;
}
