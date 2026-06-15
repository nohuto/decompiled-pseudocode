/*
 * XREFs of ?GetCompositeModuleInfo@@YAXPEBGW4APO_TYPE@@AEBV?$vector@U_GUID@@V?$allocator@U_GUID@@@std@@@std@@PEAUIComCatalog@@AEAV?$vector@EV?$allocator@E@std@@@3@PEAUIPropertyStore@@@Z @ 0x14004B7F8
 * Callers:
 *     ?PublishApoTelemetry@@YAJPEBGU_GUID@@@Z @ 0x1400469D0 (-PublishApoTelemetry@@YAJPEBGU_GUID@@@Z.c)
 * Callees:
 *     ?GetModuleInfo@@YAXPEBGW4APO_TYPE@@AEBU_GUID@@PEAUIComCatalog@@PEAPEAG44PEA_NPEAUIPropertyStore@@@Z @ 0x140016478 (-GetModuleInfo@@YAXPEBGW4APO_TYPE@@AEBU_GUID@@PEAUIComCatalog@@PEAPEAG44PEA_NPEAUIPropertyStore@.c)
 *     ??$make_unique_string_nothrow@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@0@PEBG_K@Z @ 0x140016858 (--$make_unique_string_nothrow@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x14001CEE8 (--1-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_constan.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x1400268A8 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ?make_cotaskmem_string_nothrow@wil@@YA@PEBG_K@Z @ 0x14004BB94 (-make_cotaskmem_string_nothrow@wil@@YA@PEBG_K@Z.c)
 *     ??$insert@PEBE$0A@@?$vector@EV?$allocator@E@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@E@std@@@std@@@1@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@E@std@@@std@@@1@PEBE1@Z @ 0x140056A50 (--$insert@PEBE$0A@@-$vector@EV-$allocator@E@std@@@std@@QEAA-AV-$_Vector_iterator@V-$_Vector_val@.c)
 *     ??$_Insert_counted_range@PEBE@?$vector@EV?$allocator@E@std@@@std@@AEAAXV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@E@std@@@std@@@1@PEBE_K@Z @ 0x140056AA8 (--$_Insert_counted_range@PEBE@-$vector@EV-$allocator@E@std@@@std@@AEAAXV-$_Vector_const_iterator.c)
 *     ??4?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x1400585C4 (--4-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall GetCompositeModuleInfo(
        __int64 a1,
        unsigned int a2,
        __int64 *a3,
        struct IComCatalog *a4,
        __int64 a5,
        struct IPropertyStore *a6)
{
  __int64 v6; // rsi
  __int64 v7; // rdx
  char *v8; // rbx
  _QWORD *v9; // r14
  const char *v10; // r9
  unsigned __int64 v11; // r8
  _WORD *v12; // rbx
  void **cotaskmem_string_nothrow; // r15
  __int64 v14; // rax
  __int64 v15; // r8
  const char *v16; // r9
  _WORD *v17; // r9
  __int64 v18; // rax
  __int64 v19; // r8
  const char *v20; // r9
  _WORD *v21; // r9
  __int64 v22; // rax
  const char *v23; // r9
  const char *v24; // r9
  __int16 v25; // [rsp+50h] [rbp-98h] BYREF
  char v26[6]; // [rsp+52h] [rbp-96h] BYREF
  LPVOID v27; // [rsp+58h] [rbp-90h] BYREF
  LPVOID v28; // [rsp+60h] [rbp-88h] BYREF
  _WORD *v29; // [rsp+68h] [rbp-80h] BYREF
  unsigned int v30; // [rsp+70h] [rbp-78h]
  _QWORD *v31; // [rsp+78h] [rbp-70h]
  void *v32; // [rsp+80h] [rbp-68h] BYREF
  void *v33; // [rsp+88h] [rbp-60h] BYREF
  LPVOID pv; // [rsp+90h] [rbp-58h] BYREF
  char v35; // [rsp+98h] [rbp-50h] BYREF
  char v36; // [rsp+A0h] [rbp-48h] BYREF
  char v37; // [rsp+A8h] [rbp-40h] BYREF
  char v38; // [rsp+B0h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+0h]

  v30 = 0;
  v6 = a5;
  while ( 1 )
  {
    v7 = *a3;
    if ( v30 >= (unsigned __int64)((a3[1] - *a3) >> 4) )
      break;
    try
    {
      v8 = (char *)(16LL * v30);
      v27 = v8;
      v9 = (_QWORD *)(v6 + 8);
      v31 = (_QWORD *)(v6 + 8);
      std::vector<unsigned char>::_Insert_counted_range<unsigned char const *>(v6, *(_QWORD *)(v6 + 8), &v8[v7], 16LL);
    }
    catch ( ... )
    {
      wil::details::in1diag3::Log_CaughtException(
        retaddr,
        (void *)0xFC,
        (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodgtelemetry.cpp",
        v10);
      v6 = a5;
      v8 = (char *)v27;
      v9 = v31;
    }
    v29 = 0LL;
    v27 = 0LL;
    v28 = 0LL;
    v25 = 0;
    wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
      &v28,
      0LL);
    wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
      &v27,
      0LL);
    wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
      (void **)&v29,
      0LL);
    GetModuleInfo(
      a1,
      a2,
      (const struct _GUID *)&v8[*a3],
      a4,
      &v29,
      (unsigned __int16 **)&v27,
      (unsigned __int16 **)&v28,
      &v25,
      a6);
    v12 = v29;
    if ( !v29 )
    {
      cotaskmem_string_nothrow = (void **)wil::make_cotaskmem_string_nothrow((wil *)&pv, word_1400A81BC, v11);
      if ( &v29 != (_WORD **)cotaskmem_string_nothrow )
      {
        wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
          (void **)&v29,
          *cotaskmem_string_nothrow);
        *cotaskmem_string_nothrow = 0LL;
        v12 = v29;
      }
      if ( pv )
        CoTaskMemFree(pv);
      if ( !v12 )
      {
        if ( v28 )
          CoTaskMemFree(v28);
        if ( v27 )
          CoTaskMemFree(v27);
        return;
      }
    }
    v14 = -1LL;
    do
      ++v14;
    while ( v12[v14] );
    try
    {
      std::vector<unsigned char>::insert<unsigned char const *,0>(
        v6,
        (unsigned int)&v35,
        *v9,
        (_DWORD)v12,
        (__int64)&v12[v14 + 1]);
    }
    catch ( ... )
    {
      wil::details::in1diag3::Log_CaughtException(
        retaddr,
        (void *)0x117,
        (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodgtelemetry.cpp",
        v16);
      v6 = a5;
      v9 = v31;
    }
    v17 = v27;
    if ( !v27 )
    {
      wil::make_unique_string_nothrow<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>>(
        &v32,
        (char *)word_1400A81BC,
        v15,
        0LL);
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::operator=(
        &v27,
        &v32);
      wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>(&v32);
      v17 = v27;
      if ( !v27 )
        goto LABEL_24;
    }
    v18 = -1LL;
    do
      ++v18;
    while ( v17[v18] );
    try
    {
      std::vector<unsigned char>::insert<unsigned char const *,0>(
        v6,
        (unsigned int)&v36,
        *v9,
        (_DWORD)v17,
        (__int64)&v17[v18 + 1]);
    }
    catch ( ... )
    {
      wil::details::in1diag3::Log_CaughtException(
        retaddr,
        (void *)0x12B,
        (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodgtelemetry.cpp",
        v20);
      v6 = a5;
      v9 = v31;
    }
    v21 = v28;
    if ( !v28 )
    {
      wil::make_unique_string_nothrow<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>>(
        &v33,
        (char *)word_1400A81BC,
        v19,
        0LL);
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::operator=(
        &v28,
        &v33);
      wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>(&v33);
      v21 = v28;
      if ( !v28 )
      {
LABEL_24:
        wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>(&v28);
        wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>(&v27);
        wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>((void **)&v29);
        return;
      }
    }
    v22 = -1LL;
    do
      ++v22;
    while ( v21[v22] );
    try
    {
      std::vector<unsigned char>::insert<unsigned char const *,0>(
        v6,
        (unsigned int)&v37,
        *v9,
        (_DWORD)v21,
        (__int64)&v21[v22 + 1]);
    }
    catch ( ... )
    {
      wil::details::in1diag3::Log_CaughtException(
        retaddr,
        (void *)0x13F,
        (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodgtelemetry.cpp",
        v23);
      v6 = a5;
      v9 = v31;
    }
    try
    {
      std::vector<unsigned char>::insert<unsigned char const *,0>(
        v6,
        (unsigned int)&v38,
        *v9,
        (unsigned int)&v25,
        (__int64)v26);
    }
    catch ( ... )
    {
      wil::details::in1diag3::Log_CaughtException(
        retaddr,
        (void *)0x148,
        (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodgtelemetry.cpp",
        v24);
      v6 = a5;
    }
    wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>(&v28);
    wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>(&v27);
    wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>((void **)&v29);
    ++v30;
  }
}
