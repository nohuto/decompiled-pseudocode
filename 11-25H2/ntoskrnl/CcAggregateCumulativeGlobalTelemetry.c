/*
 * XREFs of CcAggregateCumulativeGlobalTelemetry @ 0x140AAC008
 * Callers:
 *     CcPostVolumeTelemetry @ 0x140421068 (CcPostVolumeTelemetry.c)
 * Callees:
 *     <none>
 */

__int64 CcAggregateCumulativeGlobalTelemetry()
{
  __int64 result; // rax

  qword_140F8DDD8 += qword_140F8DD50;
  qword_140F8DDE0 += qword_140F8DD58;
  qword_140F8DDE8 += qword_140F8DD60;
  qword_140F8DDF0 += qword_140F8DD68;
  qword_140F8DDF8 += qword_140F8DD70;
  qword_140F8DE00 += qword_140F8DD78;
  qword_140F8DE08 += qword_140F8DD80;
  qword_140F8DE10 += qword_140F8DD88;
  qword_140F8DE18 += qword_140F8DD90;
  qword_140F8DE20 += qword_140F8DD98;
  qword_140F8DE28 += qword_140F8DDA0;
  qword_140F8DE30 += qword_140F8DDA8;
  qword_140F8DE38 += qword_140F8DDB0;
  qword_140F8DE40 += qword_140F8DDB8;
  qword_140F8DE48 += qword_140F8DDC0;
  qword_140F8DE50 += qword_140F8DDC8;
  result = qword_140F8DDD0;
  qword_140F8DE58 += qword_140F8DDD0;
  return result;
}
