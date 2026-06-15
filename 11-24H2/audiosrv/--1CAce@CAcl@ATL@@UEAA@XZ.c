/*
 * XREFs of ??1CAce@CAcl@ATL@@UEAA@XZ @ 0x1800A2EC8
 * Callers:
 *     ??_ECAccessAce@CDacl@ATL@@UEAAPEAXI@Z @ 0x18006BD70 (--_ECAccessAce@CDacl@ATL@@UEAAPEAXI@Z.c)
 *     ??_GCAce@CAcl@ATL@@UEAAPEAXI@Z @ 0x1800AAD10 (--_GCAce@CAcl@ATL@@UEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall ATL::CAcl::CAce::~CAce(void **this)
{
  *this = &ATL::CAcl::CAce::`vftable';
  free(this[17]);
  ATL::CSid::~CSid((ATL::CSid *)(this + 1));
}
