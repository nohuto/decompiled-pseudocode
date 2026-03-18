/*
 * XREFs of EtwpCapturePreviousRegistryData @ 0x14099B480
 * Callers:
 *     EtwpRegTraceCallback @ 0x14099AB00 (EtwpRegTraceCallback.c)
 * Callees:
 *     ZwClose @ 0x14069B320 (ZwClose.c)
 *     ZwQueryValueKey @ 0x14069B420 (ZwQueryValueKey.c)
 *     ObOpenObjectByPointer @ 0x140857EB0 (ObOpenObjectByPointer.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void __fastcall EtwpCapturePreviousRegistryData(__int64 a1)
{
  void *v2; // rcx
  void *Pool2; // rbx
  ULONG Length; // eax
  NTSTATUS v5; // eax
  UNICODE_STRING ValueName; // [rsp+40h] [rbp-18h] BYREF
  ULONG ResultLength; // [rsp+60h] [rbp+8h] BYREF
  HANDLE KeyHandle; // [rsp+68h] [rbp+10h] BYREF

  ResultLength = 0;
  v2 = *(void **)a1;
  KeyHandle = 0LL;
  Pool2 = 0LL;
  ValueName = 0LL;
  ValueName = *(UNICODE_STRING *)*(_QWORD *)(a1 + 8);
  if ( ObOpenObjectByPointer(v2, 0x200u, 0LL, 0x20019u, (POBJECT_TYPE)CmKeyObjectType, 0, &KeyHandle) >= 0 )
  {
    do
    {
      Length = ResultLength;
      if ( ResultLength )
      {
        if ( Pool2 )
          ExFreePoolWithTag(Pool2, 0);
        Pool2 = (void *)ExAllocatePool2(0x100uLL);
        if ( !Pool2 )
          goto LABEL_13;
        Length = ResultLength;
      }
      v5 = ZwQueryValueKey(KeyHandle, &ValueName, KeyValuePartialInformation, Pool2, Length, &ResultLength);
    }
    while ( v5 == -2147483643 || v5 == -1073741789 );
    if ( v5 < 0 )
    {
      if ( Pool2 )
        ExFreePoolWithTag(Pool2, 0);
    }
    else
    {
      *(_QWORD *)(a1 + 40) = Pool2;
    }
  }
LABEL_13:
  if ( KeyHandle )
    ZwClose(KeyHandle);
}
