/*
 * XREFs of CcAggregateCumulativeGlobalTelemetry @ 0x140AAC478
 * Callers:
 *     CcPostVolumeTelemetry @ 0x14040C990 (CcPostVolumeTelemetry.c)
 * Callees:
 *     <none>
 */

__int64 CcAggregateCumulativeGlobalTelemetry()
{
  __int64 result; // rax

  qword_140F8E778 += qword_140F8E6F0;
  qword_140F8E780 += qword_140F8E6F8;
  qword_140F8E788 += qword_140F8E700;
  qword_140F8E790 += qword_140F8E708;
  qword_140F8E798 += qword_140F8E710;
  qword_140F8E7A0 += qword_140F8E718;
  qword_140F8E7A8 += qword_140F8E720;
  qword_140F8E7B0 += qword_140F8E728;
  qword_140F8E7B8 += qword_140F8E730;
  qword_140F8E7C0 += qword_140F8E738;
  qword_140F8E7C8 += qword_140F8E740;
  qword_140F8E7D0 += qword_140F8E748;
  qword_140F8E7D8 += qword_140F8E750;
  qword_140F8E7E0 += qword_140F8E758;
  qword_140F8E7E8 += qword_140F8E760;
  qword_140F8E7F0 += qword_140F8E768;
  result = qword_140F8E770;
  qword_140F8E7F8 += qword_140F8E770;
  return result;
}
