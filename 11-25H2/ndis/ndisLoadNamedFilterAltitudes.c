/*
 * XREFs of ndisLoadNamedFilterAltitudes @ 0x14015115C
 * Callers:
 *     ndisEnsureBindingInfoLoaded @ 0x140150C80 (ndisEnsureBindingInfoLoaded.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6AJPEAX@Z$1?ZwClose@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x14006D500 (--1-$unique_storage@U-$resource_policy@PEAXP6AJPEAX@Z$1-ZwClose@@YAJ0@ZU-$integral_constant@_K$0.c)
 *     RtlUnicodeStringInitWorker @ 0x1400A0BEC (RtlUnicodeStringInitWorker.c)
 *     __security_check_cookie @ 0x1400EDF40 (__security_check_cookie.c)
 *     KRegKey::QueryValueMultisz__lambda_145828208f54867cbf19e2ec96475ca0___lambda_669a078cee999b45033530b9c5ed1c6f___ @ 0x14014F1B4 (KRegKey--QueryValueMultisz__lambda_145828208f54867cbf19e2ec96475ca0___lambda_669a078cee999b45033.c)
 *     ?GetAtom@?$KStringAtomTableBase@$00@Rtl@@QEAAPEAU_KStringAtom@2@PEB_W@Z @ 0x14014FD10 (-GetAtom@-$KStringAtomTableBase@$00@Rtl@@QEAAPEAU_KStringAtom@2@PEB_W@Z.c)
 *     ?append@?$KArray@PEAU_KStringAtom@Rtl@@$00@Rtl@@QEAA_NAEBQEAU_KStringAtom@2@@Z @ 0x1401501A8 (-append@-$KArray@PEAU_KStringAtom@Rtl@@$00@Rtl@@QEAA_NAEBQEAU_KStringAtom@2@@Z.c)
 *     ?Open@KRegKey@@QEAAJKPEB_WPEAX@Z @ 0x140168E70 (-Open@KRegKey@@QEAAJKPEB_WPEAX@Z.c)
 */

__int64 ndisLoadNamedFilterAltitudes()
{
  NTSTATUS v0; // eax
  size_t v1; // r8
  ULONG v2; // r9d
  NTSTATUS inited; // ebx
  const _UNICODE_STRING *i; // rbx
  KRegKey v6; // [rsp+30h] [rbp-D0h] BYREF
  char *Atom; // [rsp+38h] [rbp-C8h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-C0h] BYREF
  wchar_t Dst[256]; // [rsp+50h] [rbp-B0h] BYREF

  v6.m_ptr = 0LL;
  wcscpy_s(Dst, 0x100uLL, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\NetworkSetup2\\Parameters");
  v0 = KRegKey::Open(&v6, 1u, Dst, 0LL);
  inited = v0;
  if ( v0 == -1073741772 )
  {
LABEL_11:
    inited = 0;
    goto LABEL_12;
  }
  if ( !v0 )
  {
    DestinationString = 0LL;
    inited = RtlUnicodeStringInitWorker(&DestinationString, L"NamedAltitudes", v1, v2);
    if ( inited >= 0 )
    {
      inited = KRegKey::QueryValueMultisz__lambda_145828208f54867cbf19e2ec96475ca0___lambda_669a078cee999b45033530b9c5ed1c6f___(
                 &v6.m_ptr,
                 &DestinationString);
      if ( !inited )
      {
        for ( i = (const _UNICODE_STRING *)&off_1400FDDE0;
              i != &DriverServiceName;
              i = (const _UNICODE_STRING *)((char *)i + 8) )
        {
          Atom = Rtl::KStringAtomTableBase<1>::GetAtom((__int64)qword_140127138, *(_WORD **)&i->Length);
          if ( !Atom || !Rtl::KArray<Rtl::_KStringAtom *,1>::append((__int64)qword_140127138 + 72, &Atom) )
          {
            inited = -1073741670;
            goto LABEL_12;
          }
        }
        goto LABEL_11;
      }
    }
  }
LABEL_12:
  wil::details::unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(&v6.m_ptr);
  return (unsigned int)inited;
}
