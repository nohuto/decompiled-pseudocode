/*
 * XREFs of AlpcpCaptureDirectAttribute32 @ 0x140A155F8
 * Callers:
 *     AlpcpCaptureAttributes @ 0x140899420 (AlpcpCaptureAttributes.c)
 * Callees:
 *     ObReferenceObjectByHandle @ 0x140847200 (ObReferenceObjectByHandle.c)
 */

__int64 __fastcall AlpcpCaptureDirectAttribute32(unsigned int *a1, void *a2, __int64 a3, int a4, int a5)
{
  NTSTATUS v6; // edx
  void *v8; // [rsp+30h] [rbp-18h]
  PVOID Object; // [rsp+58h] [rbp+10h] BYREF

  Object = a2;
  if ( (a4 & 0x10010) != 0 || (a5 & 0x20000000) == 0 )
    v6 = -1073741811;
  else
    v6 = 0;
  if ( v6 >= 0 )
  {
    v8 = (void *)*a1;
    Object = 0LL;
    v6 = ObReferenceObjectByHandle(v8, 2u, (POBJECT_TYPE)ExEventObjectType, 1, &Object, 0LL);
    if ( v6 >= 0 )
      *(_QWORD *)(a3 + 56) = (unsigned __int64)Object | 3;
  }
  return (unsigned int)v6;
}
