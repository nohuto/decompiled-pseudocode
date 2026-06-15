/*
 * XREFs of ?GetControl@CSecurityDesc@ATL@@QEBA_NPEAG@Z @ 0x18001F994
 * Callers:
 *     ?MakeAbsolute@CSecurityDesc@ATL@@QEAAXXZ @ 0x18004978C (-MakeAbsolute@CSecurityDesc@ATL@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall ATL::CSecurityDesc::GetControl(ATL::CSecurityDesc *this, unsigned __int16 *a2)
{
  void *v2; // rcx
  bool result; // al
  DWORD dwRevision; // [rsp+38h] [rbp+10h] BYREF

  result = a2
        && (*a2 = 0, v2 = (void *)*((_QWORD *)this + 1), dwRevision = 0, v2)
        && GetSecurityDescriptorControl(v2, a2, &dwRevision);
  return result;
}
