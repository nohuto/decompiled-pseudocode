/*
 * XREFs of ??1CAce@CAcl@ATL@@UEAA@XZ @ 0x1800468C8
 * Callers:
 *     ??1CAccessAce@CDacl@ATL@@UEAA@XZ @ 0x18004685C (--1CAccessAce@CDacl@ATL@@UEAA@XZ.c)
 *     ??1CAccessObjectAce@CDacl@ATL@@UEAA@XZ @ 0x180046874 (--1CAccessObjectAce@CDacl@ATL@@UEAA@XZ.c)
 *     ??_ECAccessAce@CDacl@ATL@@UEAAPEAXI@Z @ 0x180046910 (--_ECAccessAce@CDacl@ATL@@UEAAPEAXI@Z.c)
 *     ??_GCAce@CAcl@ATL@@UEAAPEAXI@Z @ 0x1800469A0 (--_GCAce@CAcl@ATL@@UEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall ATL::CAcl::CAce::~CAce(void **this)
{
  *this = &ATL::CAcl::CAce::`vftable';
  free(this[17]);
  ATL::CSid::~CSid((ATL::CSid *)(this + 1));
}
