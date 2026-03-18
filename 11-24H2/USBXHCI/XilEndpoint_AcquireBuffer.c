/*
 * XREFs of XilEndpoint_AcquireBuffer @ 0x14001D4EC
 * Callers:
 *     Endpoint_OnCancelEndpointConfigure @ 0x14001CE2C (Endpoint_OnCancelEndpointConfigure.c)
 *     Endpoint_OnResetEndpointConfigure @ 0x14001D204 (Endpoint_OnResetEndpointConfigure.c)
 *     Endpoint_UcxEvtDefaultEndpointUpdate @ 0x140038180 (Endpoint_UcxEvtDefaultEndpointUpdate.c)
 *     Endpoint_Create @ 0x140080F6C (Endpoint_Create.c)
 * Callees:
 *     XilCommonBuffer_AcquireBufferEx @ 0x14001DE44 (XilCommonBuffer_AcquireBufferEx.c)
 */

__int64 __fastcall XilEndpoint_AcquireBuffer(_BYTE *a1, int a2, int a3, int a4)
{
  return XilCommonBuffer_AcquireBufferEx(
           *(_QWORD *)(*(_QWORD *)a1 + 120LL),
           a2,
           a3,
           a4,
           (unsigned int)(a1[1352] != 0) + 1);
}
