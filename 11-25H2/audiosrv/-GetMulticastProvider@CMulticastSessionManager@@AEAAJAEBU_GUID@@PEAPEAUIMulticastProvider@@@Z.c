/*
 * XREFs of ?GetMulticastProvider@CMulticastSessionManager@@AEAAJAEBU_GUID@@PEAPEAUIMulticastProvider@@@Z @ 0x1800FCF50
 * Callers:
 *     ?GetCompatibleMulticastProvider@CMulticastSessionManager@@AEAAJAEAV?$vector@V?$com_ptr_t@VCEndpointCharacteristics@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCEndpointCharacteristics@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@PEAPEAUIMulticastProvider@@@Z @ 0x1800FCA14 (-GetCompatibleMulticastProvider@CMulticastSessionManager@@AEAAJAEAV-$vector@V-$com_ptr_t@VCEndpo.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001AC8C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$copy_to@UISubmixProxy@@@?$com_ptr_t@UISubmixProxy@@Uerr_returncode_policy@wil@@@wil@@QEBAJPEAPEAUISubmixProxy@@@Z @ 0x18008503C (--$copy_to@UISubmixProxy@@@-$com_ptr_t@UISubmixProxy@@Uerr_returncode_policy@wil@@@wil@@QEBAJPEA.c)
 *     __security_check_cookie @ 0x1800A7AB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CMulticastSessionManager::GetMulticastProvider(
        CMulticastSessionManager *this,
        const struct _GUID *a2,
        struct IMulticastProvider **a3)
{
  _QWORD *v3; // rbx
  __int64 v5; // rdi
  __int64 v6; // r14
  _QWORD *v7; // rax
  int v9[4]; // [rsp+20h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v3 = (_QWORD *)*((_QWORD *)this + 3);
  *(struct _GUID *)v9 = *a2;
  v5 = *(_QWORD *)&v9[2];
  v6 = *(_QWORD *)v9;
  while ( v3 )
  {
    v7 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, int *))(*(_QWORD *)v3[1] + 32LL))(v3[1], v9);
    if ( *v7 == v6 && v7[1] == v5 )
      return wil::com_ptr_t<ISubmixProxy,wil::err_returncode_policy>::copy_to<ISubmixProxy>(v3 + 1, a3);
    v3 = (_QWORD *)*v3;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1DC,
    (int)"avcore\\audiocore\\server\\audiosrv\\dll\\multicastsessionmanager.cpp",
    (const char *)0x80070490LL);
  return 2147943568LL;
}
