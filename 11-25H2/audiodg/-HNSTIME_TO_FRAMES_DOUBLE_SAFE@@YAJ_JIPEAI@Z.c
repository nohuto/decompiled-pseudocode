/*
 * XREFs of ?HNSTIME_TO_FRAMES_DOUBLE_SAFE@@YAJ_JIPEAI@Z @ 0x140058508
 * Callers:
 *     ?Initialize@?$CCrossProcessBaseServerEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@UEAAJPEAUtWAVEFORMATEX@@IIIKI_J1W4__MIDL___MIDL_itf_audioengineendpointp_0000_0001_0001@@PEAUICrossProcessMemoryManager@@PEAUICrossProcessEventManager@@PEAPEAUICrossProcessMemory@@PEAPEAUICrossProcessEvent@@@Z @ 0x140053370 (-Initialize@-$CCrossProcessBaseServerEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UC.c)
 *     ?Initialize@?$CCrossProcessBaseServerEndpoint@UStaticControlData_V0@@UVolatileControlData_V0@@UControlData_V0@@@@UEAAJPEAUtWAVEFORMATEX@@IIIKI_J1W4__MIDL___MIDL_itf_audioengineendpointp_0000_0001_0001@@PEAUICrossProcessMemoryManager@@PEAUICrossProcessEventManager@@PEAPEAUICrossProcessMemory@@PEAPEAUICrossProcessEvent@@@Z @ 0x140084790 (-Initialize@-$CCrossProcessBaseServerEndpoint@UStaticControlData_V0@@UVolatileControlData_V0@@UC.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HNSTIME_TO_FRAMES_DOUBLE_SAFE(int a1, int a2, unsigned int *a3)
{
  double v3; // xmm1_8

  v3 = (double)a1 * (double)a2 / 10000000.0 + 0.5;
  if ( v3 >= 4294967295.0 )
    return 2147942934LL;
  *a3 = (int)v3;
  return 0LL;
}
