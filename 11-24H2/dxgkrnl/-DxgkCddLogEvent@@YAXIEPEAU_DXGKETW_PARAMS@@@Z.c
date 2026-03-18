/*
 * XREFs of ?DxgkCddLogEvent@@YAXIEPEAU_DXGKETW_PARAMS@@@Z @ 0x14038D5B0
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     McTemplateK0p_EtwWriteTransfer @ 0x140011084 (McTemplateK0p_EtwWriteTransfer.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x140012444 (McTemplateK0q_EtwWriteTransfer.c)
 *     McTemplateK0qqqqqqqttQ3_EtwWriteTransfer @ 0x140044FCC (McTemplateK0qqqqqqqttQ3_EtwWriteTransfer.c)
 */

void __fastcall DxgkCddLogEvent(__int64 a1, char a2, struct _DXGKETW_PARAMS *a3)
{
  int v4; // ebp
  void *v5; // rdx

  v4 = a1;
  if ( (_DWORD)a1 == 8012 )
  {
    if ( !*(_QWORD *)a3 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 2757;
      DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"params->Adapter != NULL", 2757LL, 0LL, 0LL, 0LL, 0LL);
    }
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000000) != 0 )
      McTemplateK0p_EtwWriteTransfer(
        (__int64)&DxgkControlGuid_Context,
        (__int64)&EventGdiRenderDuringCS,
        (__int64)a3,
        *(_QWORD *)a3);
  }
  else
  {
    if ( (qword_14015E4B0 & 0x20) == 0 )
      return;
    if ( a3 )
    {
      if ( a2 == 1 )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
          McTemplateK0qqqqqqqttQ3_EtwWriteTransfer(
            a1,
            &EventExtendedProfilerEnter,
            (__int64)a3,
            a1,
            *(_DWORD *)a3,
            *((_DWORD *)a3 + 1),
            *((_DWORD *)a3 + 2),
            *((_DWORD *)a3 + 3),
            *((_DWORD *)a3 + 4),
            *((_DWORD *)a3 + 5),
            *((_DWORD *)a3 + 6),
            *((_DWORD *)a3 + 7),
            (__int64)a3 + 32);
      }
      else if ( a2 == 2 )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
          McTemplateK0qqqqqqqttQ3_EtwWriteTransfer(
            a1,
            &EventExtendedProfilerExit,
            (__int64)a3,
            a1,
            *(_DWORD *)a3,
            *((_DWORD *)a3 + 1),
            *((_DWORD *)a3 + 2),
            *((_DWORD *)a3 + 3),
            *((_DWORD *)a3 + 4),
            *((_DWORD *)a3 + 5),
            *((_DWORD *)a3 + 6),
            *((_DWORD *)a3 + 7),
            (__int64)a3 + 32);
      }
      else
      {
        if ( a2 )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 3198;
          DxgkLogInternalTriageEvent(
            0LL,
            262146LL,
            0xFFFFFFFFLL,
            L"EventType == EVENT_TRACE_TYPE_INFO",
            3198LL,
            0LL,
            0LL,
            0LL,
            0LL);
        }
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
          McTemplateK0qqqqqqqttQ3_EtwWriteTransfer(
            a1,
            &EventExtendedProfilerInfo,
            (__int64)a3,
            v4,
            *(_DWORD *)a3,
            *((_DWORD *)a3 + 1),
            *((_DWORD *)a3 + 2),
            *((_DWORD *)a3 + 3),
            *((_DWORD *)a3 + 4),
            *((_DWORD *)a3 + 5),
            *((_DWORD *)a3 + 6),
            *((_DWORD *)a3 + 7),
            (__int64)a3 + 32);
      }
      return;
    }
    if ( a2 == 1 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) == 0 )
        return;
      v5 = &EventProfilerEnter;
      goto LABEL_21;
    }
    if ( a2 == 2 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) == 0 )
        return;
      v5 = &EventProfilerExit;
LABEL_21:
      McTemplateK0q_EtwWriteTransfer(a1, (__int64)v5, (__int64)a3, v4);
      return;
    }
    if ( a2 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 3159;
      DxgkLogInternalTriageEvent(
        0LL,
        262146LL,
        0xFFFFFFFFLL,
        L"EventType == EVENT_TRACE_TYPE_INFO",
        3159LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    {
      v5 = &EventProfilerInfo;
      goto LABEL_21;
    }
  }
}
