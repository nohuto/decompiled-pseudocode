/*
 * XREFs of HalpDmaCvmMakeContiguousVirtualBufferPrivate @ 0x1406FD8C8
 * Callers:
 *     HalFreeCommonBufferV3 @ 0x14054DAE0 (HalFreeCommonBufferV3.c)
 * Callees:
 *     MmUnmapIoSpace @ 0x1402929D0 (MmUnmapIoSpace.c)
 *     MmGetPhysicalAddress @ 0x1402932D0 (MmGetPhysicalAddress.c)
 *     HalpDmaCvmSetPageShareability @ 0x1406FDBFC (HalpDmaCvmSetPageShareability.c)
 */

__int64 __fastcall HalpDmaCvmMakeContiguousVirtualBufferPrivate(PVOID BaseAddress, SIZE_T NumberOfBytes)
{
  PHYSICAL_ADDRESS PhysicalAddress; // rax
  __int64 result; // rax
  char v6; // [rsp+40h] [rbp+18h] BYREF

  PhysicalAddress = MmGetPhysicalAddress(BaseAddress);
  if ( byte_140FC0D41 )
    return 0LL;
  if ( (PhysicalAddress.QuadPart & qword_140FC0D48) == 0 )
    return 3221225711LL;
  result = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))HalpDmaCvmSetPageShareability)(
             (PHYSICAL_ADDRESS)PhysicalAddress.QuadPart,
             (NumberOfBytes >> 12) + ((NumberOfBytes & 0xFFF) != 0),
             0LL,
             &v6);
  if ( (int)result >= 0 )
  {
    MmUnmapIoSpace(BaseAddress, NumberOfBytes);
    return 0LL;
  }
  return result;
}
