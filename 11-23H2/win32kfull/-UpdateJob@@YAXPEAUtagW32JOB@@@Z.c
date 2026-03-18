/*
 * XREFs of ?UpdateJob@@YAXPEAUtagW32JOB@@@Z @ 0x1C007B990
 * Callers:
 *     UserJobCallout @ 0x1C0042820 (UserJobCallout.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1C0044D3C (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     ?JobCalloutAddProcess@@YAHPEAUtagW32JOB@@PEAUtagPROCESSINFO@@@Z @ 0x1C00809FC (-JobCalloutAddProcess@@YAHPEAUtagW32JOB@@PEAUtagPROCESSINFO@@@Z.c)
 *     ?SetProcessFlags@@YAXPEAUtagW32JOB@@PEAUtagPROCESSINFO@@@Z @ 0x1C0080B2C (-SetProcessFlags@@YAXPEAUtagW32JOB@@PEAUtagPROCESSINFO@@@Z.c)
 */

void __fastcall UpdateJob(struct tagW32JOB *a1, __int64 a2, __int64 a3)
{
  struct tagPROCESSINFO *i; // rbx

  LOBYTE(a2) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80u) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_q(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      a2,
      a3,
      17LL,
      4u,
      8u,
      0x11u,
      (__int64)&WPP_090d4d5f29eb3fcb74eab38ddd0f4c5f_Traceguids,
      a1);
  for ( i = (struct tagPROCESSINFO *)gppiList; i; i = (struct tagPROCESSINFO *)*((_QWORD *)i + 47) )
  {
    if ( PsGetProcessJob(*(_QWORD *)i, a2, a3) == *((_QWORD *)a1 + 1) )
    {
      if ( *((_QWORD *)i + 96) )
        SetProcessFlags(a1, i);
      else
        JobCalloutAddProcess(a1, i);
    }
  }
}
