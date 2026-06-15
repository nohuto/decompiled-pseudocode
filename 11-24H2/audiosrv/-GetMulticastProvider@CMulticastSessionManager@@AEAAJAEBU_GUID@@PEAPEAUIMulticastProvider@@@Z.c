/*
 * XREFs of ?GetMulticastProvider@CMulticastSessionManager@@AEAAJAEBU_GUID@@PEAPEAUIMulticastProvider@@@Z @ 0x1801003A4
 * Callers:
 *     ?GetCompatibleMulticastProvider@CMulticastSessionManager@@AEAAJAEAV?$vector@V?$com_ptr_t@VCEndpointCharacteristics@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCEndpointCharacteristics@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@PEAPEAUIMulticastProvider@@@Z @ 0x1800FFE04 (-GetCompatibleMulticastProvider@CMulticastSessionManager@@AEAAJAEAV-$vector@V-$com_ptr_t@VCEndpo.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180014EAC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1800A3DA0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CMulticastSessionManager::GetMulticastProvider(
        CMulticastSessionManager *this,
        const struct _GUID *a2,
        struct IMulticastProvider **a3)
{
  __int64 **v3; // rbx
  __int64 v5; // rsi
  __int64 v6; // rbp
  _QWORD *v7; // rax
  struct IMulticastProvider *v8; // rcx
  int v10[4]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v3 = (__int64 **)*((_QWORD *)this + 3);
  *(struct _GUID *)v10 = *a2;
  v5 = *(_QWORD *)&v10[2];
  v6 = *(_QWORD *)v10;
  while ( 1 )
  {
    if ( !v3 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1C7,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\multicastsessionmanager.cpp",
        (const char *)0x80070490LL);
      return 2147943568LL;
    }
    v7 = (_QWORD *)(*(__int64 (__fastcall **)(__int64 *, int *))(*v3[1] + 32))(v3[1], v10);
    if ( *v7 == v6 && v7[1] == v5 )
      break;
    v3 = (__int64 **)*v3;
  }
  v8 = (struct IMulticastProvider *)v3[1];
  if ( v8 )
  {
    *a3 = v8;
    (*(void (__fastcall **)(struct IMulticastProvider *))(*(_QWORD *)v8 + 8LL))(v8);
  }
  else
  {
    *a3 = 0LL;
  }
  return 0LL;
}
