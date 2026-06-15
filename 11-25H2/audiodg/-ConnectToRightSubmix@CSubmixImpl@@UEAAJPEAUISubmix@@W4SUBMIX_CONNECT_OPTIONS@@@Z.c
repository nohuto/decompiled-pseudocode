/*
 * XREFs of ?ConnectToRightSubmix@CSubmixImpl@@UEAAJPEAUISubmix@@W4SUBMIX_CONNECT_OPTIONS@@@Z @ 0x140028610
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x140006C80 (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14000ABF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$com_ptr_t@UISubmix@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUISubmix@@@Z @ 0x1400192CC (--4-$com_ptr_t@UISubmix@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUISubmix@@@Z.c)
 *     ?reset@?$unique_ptr@UKSMULTIPLE_ITEM@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@QEAAXPEAUKSMULTIPLE_ITEM@@@Z @ 0x140027A18 (-reset@-$unique_ptr@UKSMULTIPLE_ITEM@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@YAX0@Z@wil.c)
 *     ?CompareWaveFormat@@YAHPEBUtWAVEFORMATEX@@0@Z @ 0x140028A84 (-CompareWaveFormat@@YAHPEBUtWAVEFORMATEX@@0@Z.c)
 *     ?PublishDeviceGraphWnfState@@YAXXZ @ 0x1400298F4 (-PublishDeviceGraphWnfState@@YAXXZ.c)
 *     ??1?$CSAutoLock@$00@@QEAA@XZ @ 0x14002CC20 (--1-$CSAutoLock@$00@@QEAA@XZ.c)
 *     ?CreateFormatConverterPipe@CSubmixImpl@@IEAAJPEAUtWAVEFORMATEX@@_J@Z @ 0x140042128 (-CreateFormatConverterPipe@CSubmixImpl@@IEAAJPEAUtWAVEFORMATEX@@_J@Z.c)
 *     ?DeleteExistingFormatConverter@CSubmixImpl@@IEAAJXZ @ 0x140045DD4 (-DeleteExistingFormatConverter@CSubmixImpl@@IEAAJXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CSubmixImpl::ConnectToRightSubmix(
        __int64 a1,
        __int64 (__fastcall ***a2)(_QWORD, GUID *, __int64 *),
        char a3)
{
  struct _RTL_CRITICAL_SECTION *v6; // rsi
  int v7; // eax
  unsigned int v8; // edi
  __int64 v9; // rdx
  __int64 v11; // rax
  int v12; // eax
  int v13; // eax
  void *v14; // rcx
  __int64 v15; // rax
  int v16; // eax
  __int64 v17; // rax
  int FormatConverterPipe; // eax
  unsigned __int64 v19; // r9
  __int64 v20; // rdx
  void *v21; // rcx
  void *v22; // rcx
  int v23; // eax
  struct _RTL_CRITICAL_SECTION *v24; // [rsp+20h] [rbp-20h] BYREF
  void **p_pv; // [rsp+28h] [rbp-18h]
  void *v26; // [rsp+30h] [rbp-10h] BYREF
  char v27; // [rsp+38h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+28h]
  __int64 *v29; // [rsp+70h] [rbp+30h] BYREF
  LPVOID pv; // [rsp+88h] [rbp+48h] BYREF

  if ( *(_BYTE *)(a1 + 313) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1FF,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
      (const char *)0x8000FFFFLL);
    return 2147549183LL;
  }
  v6 = (struct _RTL_CRITICAL_SECTION *)(a1 + 176);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 176));
  v24 = v6;
  v29 = 0LL;
  v7 = (**a2)(a2, &GUID_57386a31_7482_4b2f_89c9_c3dcf849c66d, (__int64 *)&v29);
  v8 = v7;
  if ( v7 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x203,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
      (const char *)(unsigned int)v7);
    if ( v29 )
      (*(void (__fastcall **)(__int64 *))(*v29 + 16))(v29);
    goto LABEL_30;
  }
  if ( *(_QWORD *)(a1 + 304) )
  {
    v8 = -2005139410;
    v9 = 520LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
      (const char *)v8);
LABEL_6:
    ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&v29);
    CSAutoLock<1>::~CSAutoLock<1>(&v24);
    return v8;
  }
  if ( (a3 & 1) == 0 && *(_QWORD *)(a1 + 232) < (*(__int64 (__fastcall **)(__int64 *))(*v29 + 48))(v29) )
  {
    v8 = -2005139386;
    v9 = 525LL;
    goto LABEL_5;
  }
  pv = 0LL;
  v11 = *v29;
  p_pv = &pv;
  v26 = 0LL;
  v27 = 1;
  v8 = (*(__int64 (__fastcall **)(__int64 *, void **))(v11 + 64))(v29, &v26);
  if ( v27 )
    wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
      p_pv,
      v26);
  if ( (v8 & 0x80000000) != 0 )
  {
    v19 = v8;
    v20 = 529LL;
    goto LABEL_27;
  }
  if ( !(unsigned int)CompareWaveFormat(*(const struct tWAVEFORMATEX **)(a1 + 216), (const struct tWAVEFORMATEX *)pv) )
  {
    v15 = (*(__int64 (__fastcall **)(__int64 *))(*v29 + 48))(v29);
    if ( *(_QWORD *)(a1 + 272)
      && *(_QWORD *)(a1 + 288) == v15
      && (unsigned int)CompareWaveFormat(*(const struct tWAVEFORMATEX **)(a1 + 280), (const struct tWAVEFORMATEX *)pv) )
    {
      goto LABEL_14;
    }
    v16 = CSubmixImpl::DeleteExistingFormatConverter((CSubmixImpl *)a1);
    v8 = v16;
    if ( v16 < 0 )
    {
      v19 = (unsigned int)v16;
      v20 = 537LL;
    }
    else
    {
      v17 = (*(__int64 (__fastcall **)(__int64 *))(*v29 + 48))(v29);
      FormatConverterPipe = CSubmixImpl::CreateFormatConverterPipe((CSubmixImpl *)a1, (struct tWAVEFORMATEX *)pv, v17);
      v8 = FormatConverterPipe;
      if ( FormatConverterPipe >= 0 )
        goto LABEL_14;
      v19 = (unsigned int)FormatConverterPipe;
      v20 = 539LL;
    }
LABEL_27:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v20,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
      (const char *)v19);
LABEL_52:
    wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
      &pv,
      0LL);
    goto LABEL_6;
  }
  v12 = CSubmixImpl::DeleteExistingFormatConverter((CSubmixImpl *)a1);
  v8 = v12;
  if ( v12 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x220,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
      (const char *)(unsigned int)v12);
    v22 = pv;
    pv = 0LL;
    if ( v22 )
      CoTaskMemFree(v22);
    if ( v29 )
      (*(void (__fastcall **)(__int64 *))(*v29 + 16))(v29);
    goto LABEL_30;
  }
LABEL_14:
  v13 = (*(__int64 (__fastcall **)(__int64, __int64 *, _QWORD))(*(_QWORD *)a1 + 136LL))(a1, v29, 0LL);
  v8 = v13;
  if ( v13 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x22A,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
      (const char *)(unsigned int)v13);
    (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)a1 + 144LL))(a1, v29);
    v21 = pv;
    pv = 0LL;
    if ( v21 )
      CoTaskMemFree(v21);
    if ( v29 )
      (*(void (__fastcall **)(__int64 *))(*v29 + 16))(v29);
LABEL_30:
    if ( v6 )
      LeaveCriticalSection(v6);
    return v8;
  }
  (*(void (__fastcall **)(__int64 *, __int64))(*v29 + 72))(v29, a1);
  if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a1 + 128LL))(a1) )
  {
    v23 = (*(__int64 (__fastcall **)(__int64 *, __int64))(*v29 + 88))(v29, a1);
    v8 = v23;
    if ( v23 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x238,
        (int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
        (const char *)(unsigned int)v23);
      (*(void (__fastcall **)(__int64 *, __int64))(*v29 + 80))(v29, a1);
      (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)a1 + 144LL))(a1, v29);
      goto LABEL_52;
    }
  }
  wil::com_ptr_t<ISubmix,wil::err_returncode_policy>::operator=((__int64 *)(a1 + 304), (__int64)a2);
  PublishDeviceGraphWnfState();
  v14 = pv;
  pv = 0LL;
  if ( v14 )
    CoTaskMemFree(v14);
  if ( v29 )
    (*(void (__fastcall **)(__int64 *))(*v29 + 16))(v29);
  if ( v6 )
    LeaveCriticalSection(v6);
  return 0LL;
}
