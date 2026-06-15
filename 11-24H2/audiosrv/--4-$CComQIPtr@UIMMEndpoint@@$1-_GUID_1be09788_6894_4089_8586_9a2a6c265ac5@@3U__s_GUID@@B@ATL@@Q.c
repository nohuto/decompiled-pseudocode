/*
 * XREFs of ??4?$CComQIPtr@UIMMEndpoint@@$1?_GUID_1be09788_6894_4089_8586_9a2a6c265ac5@@3U__s_GUID@@B@ATL@@QEAAPEAUIMMEndpoint@@PEAUIUnknown@@@Z @ 0x180049998
 * Callers:
 *     ?Initialize@CVolumeControlBase@@MEAAJPEAUIMMDevice@@@Z @ 0x1800498A0 (-Initialize@CVolumeControlBase@@MEAAJPEAUIMMDevice@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void (__fastcall ***__fastcall ATL::CComQIPtr<IMMEndpoint,&__s_GUID const _GUID_1be09788_6894_4089_8586_9a2a6c265ac5>::operator=(
        __int64 *a1,
        void (__fastcall ***a2)(_QWORD, GUID *, __int64 *),
        __int64 a3))(_QWORD, GUID *, __int64 *)
{
  void (__fastcall ***v3)(_QWORD, GUID *, _QWORD); // r9
  __int64 v5; // rbx

  v3 = (void (__fastcall ***)(_QWORD, GUID *, _QWORD))a2;
  v5 = *a1;
  if ( (void (__fastcall ***)(_QWORD, GUID *, __int64 *))*a1 == a2 )
    return (void (__fastcall ***)(_QWORD, GUID *, __int64 *))*a1;
  *a1 = 0LL;
  if ( a2 )
    (**a2)(a2, &GUID_1be09788_6894_4089_8586_9a2a6c265ac5, a1);
  if ( v5 )
    (*(void (__fastcall **)(__int64, void (__fastcall ***)(_QWORD, GUID *, __int64 *), __int64, void (__fastcall ***)(_QWORD, GUID *, _QWORD)))(*(_QWORD *)v5 + 16LL))(
      v5,
      a2,
      a3,
      v3);
  return (void (__fastcall ***)(_QWORD, GUID *, __int64 *))*a1;
}
