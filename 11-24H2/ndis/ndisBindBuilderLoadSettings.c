/*
 * XREFs of ndisBindBuilderLoadSettings @ 0x14018DE7C
 * Callers:
 *     ?ndisBindBuilderInitialize@@YAJXZ @ 0x14018DDB8 (-ndisBindBuilderInitialize@@YAJXZ.c)
 * Callees:
 *     ?reset@?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@QEAAXPEAUKString@Rtl@@@Z @ 0x140051410 (-reset@-$unique_ptr@UKString@Rtl@@U-$default_delete@UKString@Rtl@@@wistd@@@wistd@@QEAAXPEAUKStri.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6AJPEAX@Z$1?ZwClose@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x140052980 (--1-$unique_storage@U-$resource_policy@PEAXP6AJPEAX@Z$1-ZwClose@@YAJ0@ZU-$integral_constant@_K$0.c)
 *     ?QueryValueBoolean@KRegKey@@QEAAJPEB_WPEAEW4BooleanDisposition@1@@Z @ 0x140135F90 (-QueryValueBoolean@KRegKey@@QEAAJPEB_WPEAEW4BooleanDisposition@1@@Z.c)
 *     ?GetAtom@?$KStringAtomTableBase@$00@Rtl@@QEAAPEAU_KStringAtom@2@PEB_W@Z @ 0x140145050 (-GetAtom@-$KStringAtomTableBase@$00@Rtl@@QEAAPEAU_KStringAtom@2@PEB_W@Z.c)
 *     ?Open@KRegKey@@QEAAJKPEB_WPEAX@Z @ 0x14015BF20 (-Open@KRegKey@@QEAAJKPEB_WPEAX@Z.c)
 *     ?QueryValueString@KRegKey@@QEAAJPEB_WAEAV?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@@Z @ 0x140167430 (-QueryValueString@KRegKey@@QEAAJPEB_WAEAV-$unique_ptr@UKString@Rtl@@U-$default_delete@UKString@R.c)
 */

__int64 __fastcall ndisBindBuilderLoadSettings(_WORD **a1)
{
  _BYTE *v1; // rdi
  unsigned int v2; // ebx
  NTSTATUS v3; // eax
  ULONG v4; // r9d
  bool v5; // zf
  unsigned int ValueString; // edi
  char *Atom; // rax
  _WORD **v9; // [rsp+30h] [rbp+10h] BYREF
  KRegKey v10; // [rsp+38h] [rbp+18h] BYREF

  v9 = a1;
  v1 = qword_14011D088;
  v2 = 0;
  v10.m_ptr = 0LL;
  v3 = KRegKey::Open(
         &v10,
         1u,
         L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\NetworkSetup2\\Parameters",
         0LL);
  if ( v3 == -1073741772 )
    goto LABEL_12;
  if ( v3
    || (LOBYTE(v9) = 0,
        (v3 = KRegKey::QueryValueBoolean(&v10, L"StateSeparatedRegistryLayout", (unsigned __int8 *)&v9, 1u)) != 0)
    || (v1[96] = (_BYTE)v9 != 0,
        (v3 = KRegKey::QueryValueBoolean(&v10, L"DoNotWriteBindingsToRegistry", (unsigned __int8 *)&v9, 1u)) != 0) )
  {
    v2 = v3;
LABEL_12:
    wil::details::unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(&v10.m_ptr);
    return v2;
  }
  v5 = (_BYTE)v9 == 0;
  v9 = 0LL;
  v1[97] = !v5;
  ValueString = KRegKey::QueryValueString((__int64)&v10, L"UpperRangeReplacementToken", (size_t)&v9, v4);
  if ( ValueString == -1073741772 )
  {
    *((_QWORD *)qword_14011D088 + 11) = 0LL;
LABEL_8:
    wistd::unique_ptr<Rtl::KString,wistd::default_delete<Rtl::KString>>::reset((void **)&v9, 0LL);
    wil::details::unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(&v10.m_ptr);
    return 0LL;
  }
  if ( !ValueString )
  {
    Atom = Rtl::KStringAtomTableBase<1>::GetAtom((__int64)qword_14011D088, v9[1]);
    *((_QWORD *)qword_14011D088 + 11) = Atom;
    if ( Atom )
      goto LABEL_8;
    wistd::unique_ptr<Rtl::KString,wistd::default_delete<Rtl::KString>>::reset((void **)&v9, 0LL);
    v2 = -1073741670;
    goto LABEL_12;
  }
  wistd::unique_ptr<Rtl::KString,wistd::default_delete<Rtl::KString>>::reset((void **)&v9, 0LL);
  wil::details::unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(&v10.m_ptr);
  return ValueString;
}
