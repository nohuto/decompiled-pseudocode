/*
 * XREFs of ??_GCCrossProcessEndpointTraceLogger@@UEAAPEAXI@Z @ 0x140086290
 * Callers:
 *     <none>
 * Callees:
 *     ??1CCrossProcessEndpointTraceLogger@@UEAA@XZ @ 0x140045084 (--1CCrossProcessEndpointTraceLogger@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1400591B4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

CCrossProcessEndpointTraceLogger *__fastcall CCrossProcessEndpointTraceLogger::`scalar deleting destructor'(
        CCrossProcessEndpointTraceLogger *this,
        char a2)
{
  CCrossProcessEndpointTraceLogger::~CCrossProcessEndpointTraceLogger(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
