/*
 * XREFs of CcAggregateCumulativeGlobalTelemetry @ 0x140AB1508
 * Callers:
 *     CcPostVolumeTelemetry @ 0x1404C405C (CcPostVolumeTelemetry.c)
 * Callees:
 *     <none>
 */

__int64 CcAggregateCumulativeGlobalTelemetry()
{
  __int64 result; // rax

  qword_140F8E598 += qword_140F8E510;
  qword_140F8E5A0 += qword_140F8E518;
  qword_140F8E5A8 += qword_140F8E520;
  qword_140F8E5B0 += qword_140F8E528;
  qword_140F8E5B8 += qword_140F8E530;
  qword_140F8E5C0 += qword_140F8E538;
  qword_140F8E5C8 += qword_140F8E540;
  qword_140F8E5D0 += qword_140F8E548;
  qword_140F8E5D8 += qword_140F8E550;
  qword_140F8E5E0 += qword_140F8E558;
  qword_140F8E5E8 += qword_140F8E560;
  qword_140F8E5F0 += qword_140F8E568;
  qword_140F8E5F8 += qword_140F8E570;
  qword_140F8E600 += qword_140F8E578;
  qword_140F8E608 += qword_140F8E580;
  qword_140F8E610 += qword_140F8E588;
  result = qword_140F8E590;
  qword_140F8E618 += qword_140F8E590;
  return result;
}
