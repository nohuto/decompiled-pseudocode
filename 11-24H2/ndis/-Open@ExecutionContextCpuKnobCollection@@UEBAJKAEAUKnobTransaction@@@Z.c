/*
 * XREFs of ?Open@ExecutionContextCpuKnobCollection@@UEBAJKAEAUKnobTransaction@@@Z @ 0x140149B90
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400075C0 (WPP_RECORDER_SF_d.c)
 *     ?reset@?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@QEAAXPEAUKString@Rtl@@@Z @ 0x140051410 (-reset@-$unique_ptr@UKString@Rtl@@U-$default_delete@UKString@Rtl@@@wistd@@@wistd@@QEAAXPEAUKStri.c)
 *     WPP_RECORDER_SF_Ld @ 0x140058010 (WPP_RECORDER_SF_Ld.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AJPEAX@Z$1?ZwClose@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x140064730 (-reset@-$unique_storage@U-$resource_policy@PEAXP6AJPEAX@Z$1-ZwClose@@YAJ0@ZU-$integral_constant@.c)
 *     __security_check_cookie @ 0x1400E70B0 (__security_check_cookie.c)
 *     ?Open@RegistryKnobCollection@@UEBAJKAEAUKnobTransaction@@@Z @ 0x14015B2E0 (-Open@RegistryKnobCollection@@UEBAJKAEAUKnobTransaction@@@Z.c)
 *     ?Open@KRegKey@@QEAAJKPEB_WPEAX@Z @ 0x14015BF20 (-Open@KRegKey@@QEAAJKPEB_WPEAX@Z.c)
 *     ?Open@KRegKey@@QEAAJKPEBU_UNICODE_STRING@@PEAX@Z @ 0x14015C2F0 (-Open@KRegKey@@QEAAJKPEBU_UNICODE_STRING@@PEAX@Z.c)
 *     ?Initialize@KString@Rtl@@SAPEAU12@PEB_W@Z @ 0x1401659F0 (-Initialize@KString@Rtl@@SAPEAU12@PEB_W@Z.c)
 *     ?QueryValueString@KRegKey@@QEAAJPEB_WAEAV?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@@Z @ 0x140167430 (-QueryValueString@KRegKey@@QEAAJPEB_WAEAV-$unique_ptr@UKString@Rtl@@U-$default_delete@UKString@R.c)
 */

__int64 __fastcall ExecutionContextCpuKnobCollection::Open(
        ExecutionContextCpuKnobCollection *this,
        unsigned int a2,
        KRegKey *a3)
{
  __int64 result; // rax
  void *m_ptr; // r9
  unsigned int v8; // r15d
  int ValueString; // edi
  int v10; // esi
  int v11; // edx
  struct Rtl::KString *v12; // rax
  KRegKey *v13; // rcx
  struct _UNICODE_STRING *v14[2]; // [rsp+40h] [rbp-C0h] BYREF
  wchar_t Dst[256]; // [rsp+50h] [rbp-B0h] BYREF

  result = RegistryKnobCollection::Open(this, a2, (struct KnobTransaction *)a3);
  if ( (int)result < 0 )
    return result;
  m_ptr = a3->m_ptr;
  LOBYTE(a3[2].m_ptr) = 0;
  v8 = *(_DWORD *)(*((_QWORD *)this + 3) + 12LL);
  ValueString = KRegKey::Open(a3, a2, L"Reserved\\ExecutionContextProfiles", m_ptr);
  if ( (int)(ValueString + 0x80000000) >= 0 && ValueString != -1073741772 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_Ld(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        3u,
        1u,
        0xAu,
        (struct _GUID *)&WPP_da913e0c9d2b3c6c30c213c9db82f56b_Traceguids,
        v8,
        ValueString);
    return (unsigned int)ValueString;
  }
  v10 = -1073741790;
  if ( (a2 & 2) != 0
    || (v10 = KRegKey::Open(a3 + 1, a2, L"Reserved\\ExecutionContextProfiles", a3[1].m_ptr), (int)(v10 + 0x80000000) < 0)
    || v10 == -1073741772 )
  {
    swprintf_s(Dst, 0x100uLL, L"cpu_%lu", v8);
    v14[0] = 0LL;
    if ( (ValueString == -1073741772
       || (ValueString = KRegKey::QueryValueString(a3, Dst, v14), ValueString == -1073741772)
       && (ValueString = KRegKey::QueryValueString(a3, L"Default", v14), ValueString == -1073741772))
      && (v10 < 0
       || (ValueString = KRegKey::QueryValueString(&a3[1], Dst, v14), ValueString == -1073741772)
       && (ValueString = KRegKey::QueryValueString(&a3[1], L"Default", v14), ValueString == -1073741772)) )
    {
      v12 = Rtl::KString::Initialize(L"Balanced");
      wistd::unique_ptr<Rtl::KString,wistd::default_delete<Rtl::KString>>::reset((void **)v14, v12);
    }
    else if ( ValueString < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v11) = 3;
        WPP_RECORDER_SF_d(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v11,
          1,
          12,
          (struct _GUID *)&WPP_da913e0c9d2b3c6c30c213c9db82f56b_Traceguids,
          ValueString);
      }
      goto LABEL_22;
    }
    ValueString = KRegKey::Open(a3, a2, v14[0], a3->m_ptr);
    if ( ValueString < 0 )
    {
      if ( (a2 & 2) != 0 )
      {
        wistd::unique_ptr<Rtl::KString,wistd::default_delete<Rtl::KString>>::reset((void **)v14, 0LL);
        return 3221225506LL;
      }
      ValueString = KRegKey::Open(a3 + 1, a2, v14[0], a3[1].m_ptr);
      if ( ValueString < 0 )
      {
        LOBYTE(a3[2].m_ptr) = 0;
        goto LABEL_22;
      }
      v13 = a3;
    }
    else
    {
      v13 = a3 + 1;
    }
    wil::details::unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::reset(
      &v13->m_ptr,
      0LL);
    LOBYTE(a3[2].m_ptr) = 1;
LABEL_22:
    wistd::unique_ptr<Rtl::KString,wistd::default_delete<Rtl::KString>>::reset((void **)v14, 0LL);
    return (unsigned int)ValueString;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_Ld(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      3u,
      (a2 & 2) + 1,
      (a2 & 2) + 11,
      (struct _GUID *)&WPP_da913e0c9d2b3c6c30c213c9db82f56b_Traceguids,
      v8,
      v10);
  return (unsigned int)v10;
}
