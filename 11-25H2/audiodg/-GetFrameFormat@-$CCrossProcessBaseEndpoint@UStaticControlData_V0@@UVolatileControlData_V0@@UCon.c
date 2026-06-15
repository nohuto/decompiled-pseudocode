/*
 * XREFs of ?GetFrameFormat@?$CCrossProcessBaseEndpoint@UStaticControlData_V0@@UVolatileControlData_V0@@UControlData_V0@@@@UEAAJPEAPEAUtWAVEFORMATEX@@@Z @ 0x140084040
 * Callers:
 *     <none>
 * Callees:
 *     ?CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z @ 0x140007BE8 (-CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z.c)
 *     ?AudCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x1400528A8 (-AudCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

__int64 __fastcall CCrossProcessBaseEndpoint<StaticControlData_V0,VolatileControlData_V0,ControlData_V0>::GetFrameFormat(
        __int64 a1,
        struct tWAVEFORMATEX **a2)
{
  int v2; // ebx

  if ( !*(_DWORD *)(a1 + 56) )
  {
    v2 = -2005139437;
LABEL_6:
    AudCPTraceLoggingErrorHelper(
      "CCrossProcessBaseEndpoint<struct StaticControlData_V0,struct VolatileControlData_V0,struct ControlData_V0>::GetFrameFormat");
    return (unsigned int)v2;
  }
  if ( !a2 )
  {
    v2 = -2147467261;
    goto LABEL_6;
  }
  v2 = CloneWaveFormat((const struct tWAVEFORMATEX *)(*(_QWORD *)(a1 + 96) + 180LL), a2);
  if ( v2 < 0 )
    goto LABEL_6;
  return (unsigned int)v2;
}
