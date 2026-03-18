/*
 * XREFs of IopParseFile @ 0x1409F4690
 * Callers:
 *     ObpLookupObjectName @ 0x14089D210 (ObpLookupObjectName.c)
 * Callees:
 *     IoGetRelatedDeviceObject @ 0x140373C70 (IoGetRelatedDeviceObject.c)
 *     IopParseDevice @ 0x14089F880 (IopParseDevice.c)
 */

__int64 __fastcall IopParseFile(
        struct _FILE_OBJECT *a1,
        POBJECT_TYPE *a2,
        struct _ACCESS_STATE *a3,
        unsigned __int8 a4,
        unsigned int a5,
        UNICODE_STRING *a6,
        const UNICODE_STRING *a7,
        __int64 a8,
        __int64 a9,
        _QWORD *a10,
        _QWORD *a11)
{
  unsigned int *RelatedDeviceObject; // rax

  if ( a2 != IoFileObjectType || !a8 || *(_WORD *)a8 != 8 || *(_WORD *)(a8 + 2) != 224 )
    return 3221225508LL;
  RelatedDeviceObject = (unsigned int *)IoGetRelatedDeviceObject(a1);
  *(_QWORD *)(a8 + 40) = a1;
  return IopParseDevice(RelatedDeviceObject, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
}
