/*
 * XREFs of ??_GAssignedAccessConfigStoreV1@AssignedAccess@Internal@Windows@@UEAAPEAXI@Z @ 0x18004A870
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180010D60 (--3@YAXPEAX@Z.c)
 *     ??1AssignedAccessConfigStoreV1@AssignedAccess@Internal@Windows@@UEAA@XZ @ 0x18004A83C (--1AssignedAccessConfigStoreV1@AssignedAccess@Internal@Windows@@UEAA@XZ.c)
 */

Windows::Internal::AssignedAccess::AssignedAccessConfigStoreV1 *__fastcall Windows::Internal::AssignedAccess::AssignedAccessConfigStoreV1::`scalar deleting destructor'(
        Windows::Internal::AssignedAccess::AssignedAccessConfigStoreV1 *this,
        char a2)
{
  Windows::Internal::AssignedAccess::AssignedAccessConfigStoreV1::~AssignedAccessConfigStoreV1(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
