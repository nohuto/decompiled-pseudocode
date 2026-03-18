/*
 * XREFs of XilCommonBuffer_AcquireBufferEx @ 0x14001DE44
 * Callers:
 *     XilEndpoint_AcquireBuffer @ 0x14001D4EC (XilEndpoint_AcquireBuffer.c)
 *     XilCoreUsbDevice_Create @ 0x14001DAD8 (XilCoreUsbDevice_Create.c)
 *     XilEndpoint_AllocateStreamContextArray @ 0x140035038 (XilEndpoint_AllocateStreamContextArray.c)
 *     Interrupter_PrepareInterrupter @ 0x140082980 (Interrupter_PrepareInterrupter.c)
 * Callees:
 *     CommonBuffer_AcquireBuffer @ 0x14001F318 (CommonBuffer_AcquireBuffer.c)
 *     CommonBuffer_AcquireSecureBuffer @ 0x14003F1D8 (CommonBuffer_AcquireSecureBuffer.c)
 *     CommonBuffer_AcquireShadowBuffer @ 0x14003F2C0 (CommonBuffer_AcquireShadowBuffer.c)
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
