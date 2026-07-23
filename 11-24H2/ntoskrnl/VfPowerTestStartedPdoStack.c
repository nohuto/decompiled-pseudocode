/*
 * XREFs of VfPowerTestStartedPdoStack @ 0x140BA7F00
 * Callers:
 *     <none>
 * Callees:
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     VfIrpSendSynchronousIrp @ 0x140B8FF00 (VfIrpSendSynchronousIrp.c)
 */

__int64 __fastcall VfPowerTestStartedPdoStack(struct _DEVICE_OBJECT *a1)
{
  __int64 v2; // r9
  __int64 result; // rax
  _WORD v4[44]; // [rsp+40h] [rbp-58h] BYREF

  memset_0(v4, 0, 0x48uLL);
  result = (unsigned int)MmVerifierData;
  if ( (MmVerifierData & 0x10) != 0 )
  {
    v4[0] = -234;
    return VfIrpSendSynchronousIrp(a1, (__int64)v4, 1, v2, 0LL, 0LL, 0LL);
  }
  return result;
}
