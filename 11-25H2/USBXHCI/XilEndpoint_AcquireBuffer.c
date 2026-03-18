/*
 * XREFs of XilEndpoint_AcquireBuffer @ 0x14000E5BC
 * Callers:
 *     Endpoint_OnCancelEndpointConfigure @ 0x14000DF14 (Endpoint_OnCancelEndpointConfigure.c)
 *     Endpoint_OnResetEndpointConfigure @ 0x14000E2D4 (Endpoint_OnResetEndpointConfigure.c)
 *     Endpoint_UcxEvtDefaultEndpointUpdate @ 0x1400392F0 (Endpoint_UcxEvtDefaultEndpointUpdate.c)
 *     Endpoint_Create @ 0x140080B84 (Endpoint_Create.c)
 * Callees:
 *     XilCommonBuffer_AcquireBufferEx @ 0x140003EB4 (XilCommonBuffer_AcquireBufferEx.c)
 */

__int64 __fastcall XilEndpoint_AcquireBuffer(_BYTE *a1, unsigned int a2, __int64 a3, unsigned int a4)
{
  return XilCommonBuffer_AcquireBufferEx(
           *(void **)(*(_QWORD *)a1 + 120LL),
           a2,
           a3,
           a4,
           (unsigned int)(a1[1344] != 0) + 1);
}
