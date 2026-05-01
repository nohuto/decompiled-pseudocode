/*
 * XREFs of ?Increment@TraceLoggingCorrelationVector@@QEAA_NPEAD@Z @ 0x18017863C
 * Callers:
 *     ?IncrementW@TraceLoggingCorrelationVector@@QEAA_NPEAG@Z @ 0x180330EFC (-IncrementW@TraceLoggingCorrelationVector@@QEAA_NPEAG@Z.c)
 * Callees:
 *     ?IncrementImpl@TraceLoggingCorrelationVector@@AEAA_KXZ @ 0x1801789A8 (-IncrementImpl@TraceLoggingCorrelationVector@@AEAA_KXZ.c)
 */

bool __fastcall TraceLoggingCorrelationVector::Increment(TraceLoggingCorrelationVector *this, char *a2)
{
  unsigned __int64 v4; // rax

  v4 = TraceLoggingCorrelationVector::IncrementImpl(this);
  return TraceLoggingCorrelationVector::ToStringImpl(this, v4, a2);
}
