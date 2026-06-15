/*
 * XREFs of ?RegisterObjectCount@CSpatialCrossProcessEndpointTraceLogger@@QEAAXII@Z @ 0x14003F394
 * Callers:
 *     ?LogAsarUsageReporting@CSpatialCrossProcessEndpointTraceLogger@@QEAAXII@Z @ 0x14003A4A8 (-LogAsarUsageReporting@CSpatialCrossProcessEndpointTraceLogger@@QEAAXII@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CSpatialCrossProcessEndpointTraceLogger::RegisterObjectCount(
        CSpatialCrossProcessEndpointTraceLogger *this,
        unsigned int a2,
        unsigned int a3,
        __int64 a4)
{
  char *v4; // rbx
  __int64 v6; // r9
  char v7; // [rsp+20h] [rbp-18h]
  int v8; // [rsp+20h] [rbp-18h]

  v4 = (char *)this + 448;
  v7 = 1;
  LOBYTE(a4) = 1;
  (*(void (__fastcall **)(char *, _QWORD, _QWORD, __int64, char))(*((_QWORD *)this + 56) + 56LL))(
    (char *)this + 448,
    0LL,
    a2,
    a4,
    v7);
  LOBYTE(v6) = 1;
  LOBYTE(v8) = 1;
  (*(void (__fastcall **)(char *, __int64, _QWORD, __int64, int))(*(_QWORD *)v4 + 56LL))(v4, 1LL, a3, v6, v8);
}
