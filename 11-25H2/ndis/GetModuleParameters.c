/*
 * XREFs of GetModuleParameters @ 0x140155B00
 * Callers:
 *     CreateKModule @ 0x140155974 (CreateKModule.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x140036F70 (WPP_RECORDER_SF_.c)
 *     ?reset@?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@QEAAXPEAUKString@Rtl@@@Z @ 0x14006CDB0 (-reset@-$unique_ptr@UKString@Rtl@@U-$default_delete@UKString@Rtl@@@wistd@@@wistd@@QEAAXPEAUKStri.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6AJPEAX@Z$1?ZwClose@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x14006D500 (--1-$unique_storage@U-$resource_policy@PEAXP6AJPEAX@Z$1-ZwClose@@YAJ0@ZU-$integral_constant@_K$0.c)
 *     ?RtlUnicodeStringPrintf@@YAJPEAU_UNICODE_STRING@@PEB_WZZ @ 0x140070000 (-RtlUnicodeStringPrintf@@YAJPEAU_UNICODE_STRING@@PEB_WZZ.c)
 *     WPP_RECORDER_SF__guid_ @ 0x1400812F0 (WPP_RECORDER_SF__guid_.c)
 *     ??4?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@QEAAAEAV01@$$QEAV01@@Z @ 0x14008DE80 (--4-$unique_ptr@UKString@Rtl@@U-$default_delete@UKString@Rtl@@@wistd@@@wistd@@QEAAAEAV01@$$QEAV0.c)
 *     __security_check_cookie @ 0x1400EDF40 (__security_check_cookie.c)
 *     ?Open@KRegKey@@QEAAJKPEB_WPEAX@Z @ 0x140168E70 (-Open@KRegKey@@QEAAJKPEB_WPEAX@Z.c)
 *     ?Open@KRegKey@@QEAAJKPEBU_UNICODE_STRING@@PEAX@Z @ 0x140169240 (-Open@KRegKey@@QEAAJKPEBU_UNICODE_STRING@@PEAX@Z.c)
 *     ?QueryValueString@KRegKey@@QEAAJPEB_WAEAV?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@@Z @ 0x140173E10 (-QueryValueString@KRegKey@@QEAAJPEB_WAEAV-$unique_ptr@UKString@Rtl@@U-$default_delete@UKString@R.c)
 */

__int64 __fastcall GetModuleParameters(unsigned int *a1, void **a2)
{
  int v4; // edx
  unsigned int v5; // ebx
  int v6; // ecx
  int v7; // edx
  int v8; // r8d
  int v9; // r10d
  int v10; // r11d
  int v11; // ebx
  int v12; // edi
  int v13; // esi
  __int64 v14; // r9
  __int64 v15; // r8
  int v17; // [rsp+20h] [rbp-B9h]
  int v18; // [rsp+28h] [rbp-B1h]
  int v19; // [rsp+30h] [rbp-A9h]
  int v20; // [rsp+38h] [rbp-A1h]
  int v21; // [rsp+40h] [rbp-99h]
  int v22; // [rsp+48h] [rbp-91h]
  int v23; // [rsp+50h] [rbp-89h]
  int v24; // [rsp+58h] [rbp-81h]
  int v25; // [rsp+60h] [rbp-79h]
  KRegKey v26; // [rsp+70h] [rbp-69h] BYREF
  KRegKey v27; // [rsp+78h] [rbp-61h] BYREF
  void *v28; // [rsp+80h] [rbp-59h] BYREF
  struct _UNICODE_STRING v29; // [rsp+88h] [rbp-51h] BYREF
  char v30; // [rsp+A0h] [rbp-39h] BYREF

  v26.m_ptr = 0LL;
  v5 = KRegKey::Open(&v26, 1u, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\KLoader\\Modules", 0LL);
  if ( v5 )
  {
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v4) = 2;
      WPP_RECORDER_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v4,
        1,
        17,
        (struct _GUID *)&WPP_ef150b59fbd93ec88cf27400477d67dd_Traceguids);
    }
  }
  else
  {
    v6 = *((unsigned __int8 *)a1 + 14);
    v7 = *((unsigned __int8 *)a1 + 13);
    v8 = *((unsigned __int8 *)a1 + 12);
    v9 = *((unsigned __int8 *)a1 + 11);
    v10 = *((unsigned __int8 *)a1 + 10);
    v11 = *((unsigned __int8 *)a1 + 9);
    v12 = *((unsigned __int8 *)a1 + 8);
    v13 = *((unsigned __int16 *)a1 + 3);
    v14 = *((unsigned __int16 *)a1 + 2);
    v29.Buffer = (wchar_t *)&v30;
    v25 = *((unsigned __int8 *)a1 + 15);
    v24 = v6;
    v23 = v7;
    v22 = v8;
    v15 = *a1;
    v21 = v9;
    v20 = v10;
    v19 = v11;
    v18 = v12;
    v17 = v13;
    *(_QWORD *)&v29.Length = 5111808LL;
    v5 = RtlUnicodeStringPrintf(
           &v29,
           L"{%08x-%04x-%04x-%02x%02x-%02x%02x%02x%02x%02x%02x}",
           v15,
           v14,
           v17,
           v18,
           v19,
           v20,
           v21,
           v22,
           v23,
           v24,
           v25);
    if ( v5 )
    {
      if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF__guid_(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          2u,
          1u,
          0x12u,
          (struct _GUID *)&WPP_ef150b59fbd93ec88cf27400477d67dd_Traceguids,
          (__int64)a1);
    }
    else
    {
      v27.m_ptr = 0LL;
      v5 = KRegKey::Open(&v27, 1u, &v29, v26.m_ptr);
      if ( v5 )
      {
        if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF__guid_(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            2u,
            1u,
            0x13u,
            (struct _GUID *)&WPP_ef150b59fbd93ec88cf27400477d67dd_Traceguids,
            (__int64)a1);
      }
      else
      {
        v28 = 0LL;
        v5 = KRegKey::QueryValueString(&v27, L"ServiceName", &v28);
        if ( v5 )
        {
          if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF__guid_(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              2u,
              1u,
              0x14u,
              (struct _GUID *)&WPP_ef150b59fbd93ec88cf27400477d67dd_Traceguids,
              (__int64)a1);
        }
        else
        {
          wistd::unique_ptr<Rtl::KString,wistd::default_delete<Rtl::KString>>::operator=(a2, &v28);
          v5 = 0;
        }
        wistd::unique_ptr<Rtl::KString,wistd::default_delete<Rtl::KString>>::reset(&v28, 0LL);
      }
      wil::details::unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(&v27.m_ptr);
    }
  }
  wil::details::unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(&v26.m_ptr);
  return v5;
}
