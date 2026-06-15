/*
 * XREFs of ?Initialize@?$CCrossProcessServerInputEndpoint@UStaticControlData_V0@@UVolatileControlData_V0@@UControlData_V0@@@@UEAAJPEAUtWAVEFORMATEX@@IIIKI_J1W4__MIDL___MIDL_itf_audioengineendpointp_0000_0001_0001@@PEAUICrossProcessMemoryManager@@PEAUICrossProcessEventManager@@PEAPEAUICrossProcessMemory@@PEAPEAUICrossProcessEvent@@@Z @ 0x1400869F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Initialize@?$CCrossProcessBaseServerEndpoint@UStaticControlData_V0@@UVolatileControlData_V0@@UControlData_V0@@@@UEAAJPEAUtWAVEFORMATEX@@IIIKI_J1W4__MIDL___MIDL_itf_audioengineendpointp_0000_0001_0001@@PEAUICrossProcessMemoryManager@@PEAUICrossProcessEventManager@@PEAPEAUICrossProcessMemory@@PEAPEAUICrossProcessEvent@@@Z @ 0x140084790 (-Initialize@-$CCrossProcessBaseServerEndpoint@UStaticControlData_V0@@UVolatileControlData_V0@@UC.c)
 */

__int64 __fastcall CCrossProcessServerInputEndpoint<StaticControlData_V0,VolatileControlData_V0,ControlData_V0>::Initialize(
        __int64 a1,
        unsigned __int16 *a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int a6,
        unsigned int a7,
        __int64 a8,
        __int64 a9,
        int a10,
        __int64 a11,
        __int64 a12,
        _QWORD *a13,
        _QWORD *a14)
{
  __int64 result; // rax

  result = CCrossProcessBaseServerEndpoint<StaticControlData_V0,VolatileControlData_V0,ControlData_V0>::Initialize(
             a1,
             a2,
             a3,
             a4,
             a5,
             a6,
             a7,
             a8,
             a9,
             a10,
             a11,
             a12,
             a13,
             a14);
  *(_BYTE *)(a1 + 140) = a10 & 1;
  return result;
}
