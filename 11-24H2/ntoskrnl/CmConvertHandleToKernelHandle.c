/*
 * XREFs of CmConvertHandleToKernelHandle @ 0x14092D980
 * Callers:
 *     CmUnloadKey @ 0x14092B0F8 (CmUnloadKey.c)
 *     CmLoadDifferencingKey @ 0x14092C750 (CmLoadDifferencingKey.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140325680 (ObfDereferenceObject.c)
 *     ObReferenceObjectByHandle @ 0x14084AF40 (ObReferenceObjectByHandle.c)
 *     ObOpenObjectByPointer @ 0x140854F10 (ObOpenObjectByPointer.c)
 */

__int64 __fastcall CmConvertHandleToKernelHandle(
        void *a1,
        void *a2,
        KPROCESSOR_MODE a3,
        ACCESS_MASK a4,
        PHANDLE Handle)
{
  POBJECT_TYPE *v5; // rsi
  NTSTATUS v8; // ebx
  PVOID Object; // [rsp+58h] [rbp+10h] BYREF

  Object = a2;
  v5 = CmKeyObjectType;
  if ( a1 )
  {
    Object = 0LL;
    v8 = ObReferenceObjectByHandle(a1, a4, (POBJECT_TYPE)CmKeyObjectType, a3, &Object, 0LL);
    if ( v8 >= 0 )
    {
      v8 = ObOpenObjectByPointer(Object, 0x200u, 0LL, a4, (POBJECT_TYPE)v5, 0, Handle);
      ObfDereferenceObject(Object);
    }
    return (unsigned int)v8;
  }
  else
  {
    *Handle = 0LL;
    return 0LL;
  }
}
