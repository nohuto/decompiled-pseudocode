/*
 * XREFs of XilCommonBuffer_AcquireBufferEx @ 0x140003EB4
 * Callers:
 *     XilCoreUsbDevice_Create @ 0x140003B48 (XilCoreUsbDevice_Create.c)
 *     XilEndpoint_AcquireBuffer @ 0x14000E5BC (XilEndpoint_AcquireBuffer.c)
 *     XilEndpoint_AllocateStreamContextArray @ 0x140036AE4 (XilEndpoint_AllocateStreamContextArray.c)
 *     Interrupter_PrepareInterrupter @ 0x140082C5C (Interrupter_PrepareInterrupter.c)
 * Callees:
 *     CommonBuffer_AcquireBuffer @ 0x140004238 (CommonBuffer_AcquireBuffer.c)
 *     CommonBuffer_AcquireSecureBuffer @ 0x14003F2E8 (CommonBuffer_AcquireSecureBuffer.c)
 *     CommonBuffer_AcquireShadowBuffer @ 0x14003F3EC (CommonBuffer_AcquireShadowBuffer.c)
 */

__int64 __fastcall XilCommonBuffer_AcquireBufferEx(void *a1, unsigned int a2, __int64 a3, unsigned int a4, int a5)
{
  switch ( a5 )
  {
    case 1:
      return CommonBuffer_AcquireBuffer(a1);
    case 2:
      return CommonBuffer_AcquireShadowBuffer(a2, a3, a4);
    case 3:
      return CommonBuffer_AcquireSecureBuffer();
  }
  return 0LL;
}
