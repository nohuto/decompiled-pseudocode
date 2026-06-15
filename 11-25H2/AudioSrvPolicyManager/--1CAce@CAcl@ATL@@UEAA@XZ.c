/*
 * XREFs of ??1CAce@CAcl@ATL@@UEAA@XZ @ 0x1800490E8
 * Callers:
 *     ??1CAccessAce@CDacl@ATL@@UEAA@XZ @ 0x18004907C (--1CAccessAce@CDacl@ATL@@UEAA@XZ.c)
 *     ??1CAccessObjectAce@CDacl@ATL@@UEAA@XZ @ 0x180049094 (--1CAccessObjectAce@CDacl@ATL@@UEAA@XZ.c)
 *     ??_ECAccessAce@CDacl@ATL@@UEAAPEAXI@Z @ 0x180049130 (--_ECAccessAce@CDacl@ATL@@UEAAPEAXI@Z.c)
 *     ??_GCAce@CAcl@ATL@@UEAAPEAXI@Z @ 0x1800491C0 (--_GCAce@CAcl@ATL@@UEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall ATL::CAcl::CAce::~CAce(void **this)
{
  *this = &ATL::CAcl::CAce::`vftable';
  free(this[17]);
  ATL::CSid::~CSid((ATL::CSid *)(this + 1));
}
