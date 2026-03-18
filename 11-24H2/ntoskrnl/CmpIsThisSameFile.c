/*
 * XREFs of CmpIsThisSameFile @ 0x14092E898
 * Callers:
 *     CmpIsHiveAlreadyLoaded @ 0x1407DA6B4 (CmpIsHiveAlreadyLoaded.c)
 *     CmLoadAppKey @ 0x14092DB9C (CmLoadAppKey.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140325680 (ObfDereferenceObject.c)
 *     ObReferenceObjectByHandle @ 0x14084AF40 (ObReferenceObjectByHandle.c)
 */

bool __fastcall CmpIsThisSameFile(__int64 a1, void *a2)
{
  bool v2; // bl
  __int64 v4; // r8
  __int64 v5; // rdx
  PVOID Object; // [rsp+50h] [rbp+18h] BYREF

  v2 = 0;
  Object = 0LL;
  if ( ObReferenceObjectByHandle(a2, 0, *(POBJECT_TYPE *)CmIoFileObjectType, 0, &Object, 0LL) < 0 )
    return 0;
  v4 = *(_QWORD *)(a1 + 40);
  if ( v4 )
  {
    v5 = *((_QWORD *)Object + 5);
    if ( v5 )
      v2 = v4 == v5;
  }
  ObfDereferenceObject(Object);
  return v2;
}
