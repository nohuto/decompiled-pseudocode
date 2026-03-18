/*
 * XREFs of PopWakeSourceGetDeviceProperty @ 0x1407457F8
 * Callers:
 *     PopProcessWakeSourceWork @ 0x140B5D998 (PopProcessWakeSourceWork.c)
 * Callees:
 *     IoGetDeviceProperty @ 0x140834450 (IoGetDeviceProperty.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void __fastcall PopWakeSourceGetDeviceProperty(__int64 a1, DEVICE_REGISTRY_PROPERTY a2, struct _DEVICE_OBJECT *a3)
{
  void *Pool2; // rbx
  __int64 v7; // rax
  ULONG BufferLength; // [rsp+68h] [rbp+20h] BYREF

  BufferLength = 0;
  if ( IoGetDeviceProperty(a3, a2, 0, 0LL, &BufferLength) == -1073741789 )
  {
    Pool2 = (void *)ExAllocatePool2(0x100uLL);
    if ( Pool2 )
    {
      if ( IoGetDeviceProperty(a3, a2, BufferLength, Pool2, &BufferLength) < 0 )
      {
        ExFreePoolWithTag(Pool2, 0x206D654Du);
      }
      else
      {
        *(_WORD *)(a1 + 2) = BufferLength;
        v7 = -1LL;
        do
          ++v7;
        while ( *((_WORD *)Pool2 + v7) );
        *(_QWORD *)(a1 + 8) = Pool2;
        *(_WORD *)a1 = 2 * v7;
      }
    }
  }
}
