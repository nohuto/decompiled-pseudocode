/*
 * XREFs of ??0CResource@@IEAA@XZ @ 0x180026744
 * Callers:
 *     ?WrapExistingResource@CResource@@SAJPEAUIDwmChannel@@W4Enum@DwmResourceType@@IPEAPEAV1@@Z @ 0x180023798 (-WrapExistingResource@CResource@@SAJPEAUIDwmChannel@@W4Enum@DwmResourceType@@IPEAPEAV1@@Z.c)
 *     ?Create@CResource@@SAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAPEAV1@@Z @ 0x180026680 (-Create@CResource@@SAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAPEAV1@@Z.c)
 * Callees:
 *     ??0CBaseObject@@QEAA@XZ @ 0x180026794 (--0CBaseObject@@QEAA@XZ.c)
 */

CResource *__fastcall CResource::CResource(CResource *this)
{
  CResource *v1; // rcx

  CBaseObject::CBaseObject(this);
  *((_QWORD *)v1 + 2) = 0LL;
  *(_QWORD *)v1 = &CResource::`vftable';
  return v1;
}
