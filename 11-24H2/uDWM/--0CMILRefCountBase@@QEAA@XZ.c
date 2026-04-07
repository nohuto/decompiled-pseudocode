/*
 * XREFs of ??0CMILRefCountBase@@QEAA@XZ @ 0x180057570
 * Callers:
 *     ??0CDWMDXGIEnumeration@@AEAA@XZ @ 0x180056C4C (--0CDWMDXGIEnumeration@@AEAA@XZ.c)
 *     ??0CDWMDXGIAdapter@@AEAA@IPEAUIDXGIAdapter@@@Z @ 0x18005750C (--0CDWMDXGIAdapter@@AEAA@IPEAUIDXGIAdapter@@@Z.c)
 * Callees:
 *     <none>
 */

CMILRefCountBase *__fastcall CMILRefCountBase::CMILRefCountBase(CMILRefCountBase *this)
{
  CMILRefCountBase *result; // rax

  *(_QWORD *)this = &CMILRefCountBase::`vftable';
  result = this;
  *((_DWORD *)this + 2) = 0;
  return result;
}
