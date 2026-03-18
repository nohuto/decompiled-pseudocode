/*
 * XREFs of ?SetLastAction@Usage@PTPTelemetry@@SAXW4tagPTP_ACTION@@@Z @ 0x1401136BC
 * Callers:
 *     ?OnTelemetryOutput@CPTPProcessor@@UEAAXPEBUPTPTelemetryOutput@@@Z @ 0x1401880E0 (-OnTelemetryOutput@CPTPProcessor@@UEAAXPEBUPTPTelemetryOutput@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U1@U1@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@334@Z @ 0x140002100 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U1@U1@U2@@-$_tlgWriteTemplate@$$A6AJP.c)
 *     _tlgKeywordOn @ 0x140096080 (_tlgKeywordOn.c)
 *     EtwTraceTouchpadGestureDetected @ 0x140113AC0 (EtwTraceTouchpadGestureDetected.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 */

int __fastcall PTPTelemetry::Usage::SetLastAction(__int64 a1)
{
  int v1; // edi
  __int64 v2; // rbx
  LARGE_INTEGER PerformanceCounter; // rax
  LONGLONG v4; // rcx
  __int64 UserSessionState; // rbx
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rcx
  _DWORD *v9; // rax
  unsigned int v10; // ebx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // r10
  __int64 v14; // r11
  __int64 v15; // rcx
  unsigned __int64 v16; // rax
  __int64 v17; // r8
  unsigned int v19; // [rsp+58h] [rbp-19h] BYREF
  int v20; // [rsp+5Ch] [rbp-15h] BYREF
  LONGLONG v21; // [rsp+60h] [rbp-11h] BYREF
  unsigned __int64 v22; // [rsp+68h] [rbp-9h] BYREF
  __int64 v23; // [rsp+70h] [rbp-1h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+78h] [rbp+7h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+88h] [rbp+17h] BYREF
  void *v26; // [rsp+98h] [rbp+27h]
  int v27; // [rsp+A0h] [rbp+2Fh]
  int v28; // [rsp+A4h] [rbp+33h]
  int *v29; // [rsp+A8h] [rbp+37h]
  __int64 v30; // [rsp+B0h] [rbp+3Fh]

  v1 = a1;
  v2 = W32GetUserSessionState(a1) + 3304;
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v4 = PerformanceCounter.QuadPart - _InterlockedCompareExchange64((volatile signed __int64 *)(v2 + 16), 0LL, 0LL);
  if ( (__int64)((unsigned __int64)(1000 * v4) / gliQpcFreq.QuadPart) <= 500 )
  {
    _InterlockedCompareExchange64((volatile signed __int64 *)v2, 0LL, 0LL);
    _InterlockedCompareExchange64((volatile signed __int64 *)(v2 + 8), 0LL, 0LL);
    v10 = *(_DWORD *)(v2 + 28);
    if ( (unsigned int)dword_14029AF48 > 5 && tlgKeywordOn((__int64)&dword_14029AF48, 0x400000000000LL) )
    {
      v19 = v10;
      v20 = v1;
      v15 = v11 - v14;
      v23 = v12;
      v16 = 1000 * (v11 - v14);
      v17 = v11 - v13;
      v21 = v16 / gliQpcFreq.QuadPart;
      v22 = (unsigned __int64)(1000 * v17) / gliQpcFreq.QuadPart;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
        v15,
        (__int64)&unk_14027D691,
        v17,
        v12,
        (__int64)&v23,
        (__int64)&v20,
        (__int64)&v22,
        (__int64)&v21,
        (__int64)&v19);
    }
  }
  UserSessionState = W32GetUserSessionState(v4);
  v7 = W32GetUserSessionState(v6);
  if ( *(_DWORD *)(v7 + 12272) || *(_QWORD *)(v7 + 12248) || *(__int64 *)(v7 + 12232) <= 0 )
    *(_DWORD *)(UserSessionState + 12276) = v1;
  else
    *(_DWORD *)(UserSessionState + 12272) = v1;
  v9 = (_DWORD *)W32GetUserSessionState(v8);
  if ( v1 > 16 )
  {
    if ( v1 <= 22 )
    {
      switch ( v1 )
      {
        case 22:
          ++v9[3027];
          break;
        case 17:
          ++v9[3030];
          break;
        case 18:
          ++v9[3024];
          break;
        case 19:
          ++v9[3025];
          break;
        case 20:
          ++v9[3028];
          break;
        default:
          ++v9[3029];
          break;
      }
    }
    else
    {
      switch ( v1 )
      {
        case 23:
          ++v9[3038];
          break;
        case 24:
          ++v9[3039];
          break;
        case 25:
          ++v9[3023];
          break;
        case 26:
          ++v9[3040];
          break;
        case 27:
          ++v9[3037];
          break;
        default:
          goto LABEL_21;
      }
    }
    goto LABEL_34;
  }
  if ( v1 == 16 )
  {
    ++v9[3026];
    goto LABEL_34;
  }
  if ( v1 <= 7 )
  {
    switch ( v1 )
    {
      case 7:
        ++v9[3021];
        break;
      case 1:
        ++v9[3033];
        break;
      case 2:
        ++v9[3034];
        break;
      case 3:
        ++v9[3035];
        break;
      case 4:
        ++v9[3036];
        break;
      case 5:
        ++v9[3031];
        break;
      case 6:
        ++v9[3032];
        break;
      default:
        goto LABEL_21;
    }
    goto LABEL_34;
  }
  switch ( v1 )
  {
    case 8:
      ++v9[3022];
      goto LABEL_34;
    case 9:
      ++v9[3020];
      ++v9[3045];
      LODWORD(v9) = EtwTraceTouchpadGestureDetected();
      break;
    case 10:
      ++v9[3043];
      return (int)v9;
    case 11:
      ++v9[3041];
      goto LABEL_34;
    case 12:
      ++v9[3042];
LABEL_34:
      ++v9[3045];
      break;
  }
LABEL_21:
  if ( (unsigned int)dword_14029AF48 > 5 )
  {
    v20 = v1;
    v29 = &v20;
    *(_DWORD *)&EventDescriptor.Level = 5;
    UserData.Ptr = (ULONGLONG)off_14029AF50;
    v30 = 4LL;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    EventDescriptor.Keyword = 0LL;
    UserData.Size = *(unsigned __int16 *)off_14029AF50;
    v26 = &unk_14027D705;
    UserData.Reserved = 2;
    v27 = 25;
    v28 = 1;
    v19 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    LODWORD(v9) = EtwWriteTransfer(qword_14029AF68, &EventDescriptor, 0LL, 0LL, 3u, &UserData);
  }
  return (int)v9;
}
