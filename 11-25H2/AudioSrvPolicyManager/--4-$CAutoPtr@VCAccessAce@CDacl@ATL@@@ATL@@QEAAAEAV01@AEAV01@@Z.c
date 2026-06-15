/*
 * XREFs of ??4?$CAutoPtr@VCAccessAce@CDacl@ATL@@@ATL@@QEAAAEAV01@AEAV01@@Z @ 0x180014020
 * Callers:
 *     ?PrepareAcesForACL@CDacl@ATL@@EEBAXXZ @ 0x180013D90 (-PrepareAcesForACL@CDacl@ATL@@EEBAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18004F010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void (__fastcall ****__fastcall ATL::CAutoPtr<ATL::CDacl::CAccessAce>::operator=(
        void (__fastcall ****a1)(_QWORD, __int64),
        _QWORD *a2))(_QWORD, __int64)
{
  void (__fastcall ***v4)(_QWORD, __int64); // rcx
  void (__fastcall ****result)(_QWORD, __int64); // rax
  void (__fastcall ***v6)(_QWORD, __int64); // rax

  v4 = *a1;
  if ( v4 == (void (__fastcall ***)(_QWORD, __int64))*a2 )
  {
    result = a1;
    if ( a1 != a2 )
      *a2 = 0LL;
  }
  else
  {
    if ( v4 )
      (**v4)(v4, 1LL);
    *a1 = 0LL;
    v6 = (void (__fastcall ***)(_QWORD, __int64))*a2;
    *a2 = 0LL;
    *a1 = v6;
    return a1;
  }
  return result;
}
