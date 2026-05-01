/*
 * XREFs of ?ToStringImpl@TraceLoggingCorrelationVector@@AEAA_N_KPEAD@Z @ 0x180178A84
 * Callers:
 *     ?StartActivity@MeetAndChatManagerOperation@MeetAndChatTelemetry@@QEAAXW4MeetAndChatManagerOperationKind@2@AEBVCorrelationVector@@@Z @ 0x18017817C (-StartActivity@MeetAndChatManagerOperation@MeetAndChatTelemetry@@QEAAXW4MeetAndChatManagerOperat.c)
 *     ?Increment@TraceLoggingCorrelationVector@@QEAA_NPEAD@Z @ 0x18017863C (-Increment@TraceLoggingCorrelationVector@@QEAA_NPEAD@Z.c)
 *     ?ToString@CorrelationVector@@QEBAPEADAEAY0IB@D@Z @ 0x180178670 (-ToString@CorrelationVector@@QEBAPEADAEAY0IB@D@Z.c)
 *     ?Increment@CorrelationVector@@QEAAAEBV1@XZ @ 0x1801786A0 (-Increment@CorrelationVector@@QEAAAEBV1@XZ.c)
 *     ?ToStringW@TraceLoggingCorrelationVector@@QEAA_NPEAG@Z @ 0x180334848 (-ToStringW@TraceLoggingCorrelationVector@@QEAA_NPEAG@Z.c)
 *     ?Extend@CorrelationVector@@QEBA?AV1@XZ @ 0x1805F83B4 (-Extend@CorrelationVector@@QEBA-AV1@XZ.c)
 * Callees:
 *     sprintf_s @ 0x1802D29D4 (sprintf_s.c)
 *     memcpy_s_3 @ 0x1802DFCA8 (memcpy_s_3.c)
 */

bool __fastcall TraceLoggingCorrelationVector::ToStringImpl(
        TraceLoggingCorrelationVector *this,
        unsigned __int64 a2,
        char *a3)
{
  unsigned __int64 v4; // rbp
  int v5; // esi
  __int64 v7; // rax
  size_t v8; // rdx
  char *v9; // rcx

  v4 = a2 >> 63;
  v5 = a2;
  if ( a3 )
  {
    *a3 = 0;
    if ( !memcpy_s_3(a3, *((unsigned __int8 *)this + 130), this, WORD2(a2)) )
    {
      if ( (_BYTE)v4 && !v5 )
      {
        a3[*((unsigned __int8 *)this + 129)] = 33;
        a3[*((unsigned __int8 *)this + 129) + 1] = 0;
        return 1;
      }
      v7 = *((unsigned __int8 *)this + 129);
      v8 = *((unsigned __int8 *)this + 130) - v7;
      v9 = &a3[v7];
      if ( !(_BYTE)v4 )
        return sprintf_s(v9, v8, "%u", v5) != -1;
      if ( sprintf_s(v9, v8, "%u!", v5) != -1 )
        return 1;
    }
  }
  return 0;
}
