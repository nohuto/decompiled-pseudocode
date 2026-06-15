/*
 * XREFs of ?LogSetGrantedCount@CSpatialCrossProcessEndpointTraceLogger@@QEAAXI_J@Z @ 0x14008CED4
 * Callers:
 *     ?SetGrantedObjectCount@CSpatialCrossProcessBaseEndpoint@@UEAAJI_J@Z @ 0x14008EE60 (-SetGrantedObjectCount@CSpatialCrossProcessBaseEndpoint@@UEAAJI_J@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x140031F80 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x140058CF0 (__security_check_cookie.c)
 */

void __fastcall CSpatialCrossProcessEndpointTraceLogger::LogSetGrantedCount(
        CSpatialCrossProcessEndpointTraceLogger *this,
        int a2,
        __int64 a3)
{
  int v3; // [rsp+30h] [rbp-19h] BYREF
  __int64 v4; // [rsp+38h] [rbp-11h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v5; // [rsp+40h] [rbp-9h] BYREF
  char *v6; // [rsp+60h] [rbp+17h]
  __int64 v7; // [rsp+68h] [rbp+1Fh]
  int *v8; // [rsp+70h] [rbp+27h]
  __int64 v9; // [rsp+78h] [rbp+2Fh]
  __int64 *v10; // [rsp+80h] [rbp+37h]
  __int64 v11; // [rsp+88h] [rbp+3Fh]

  if ( (unsigned int)dword_1400C34B0 > 5 )
  {
    v4 = a3;
    v6 = (char *)this + 8;
    v10 = &v4;
    v3 = a2;
    v8 = &v3;
    v11 = 8LL;
    v9 = 4LL;
    v7 = 16LL;
    tlgWriteTransfer_EventWriteTransfer((__int64)&dword_1400C34B0, byte_1400B140F, 0LL, 0LL, 5u, &v5);
  }
}
