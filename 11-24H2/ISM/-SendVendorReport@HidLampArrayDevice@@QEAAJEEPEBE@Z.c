/*
 * XREFs of ?SendVendorReport@HidLampArrayDevice@@QEAAJEEPEBE@Z @ 0x1800EB320
 * Callers:
 *     ?ProcessVendorMessages@LampArrayDevice@@AEAAXPEAUViewClientListEntry@1@@Z @ 0x180069BF8 (-ProcessVendorMessages@LampArrayDevice@@AEAAXPEAUViewClientListEntry@1@@Z.c)
 * Callees:
 *     ??1?$VariableSizedPayloadStorage@UInputInfo@@@@QEAA@XZ @ 0x180030A30 (--1-$VariableSizedPayloadStorage@UInputInfo@@@@QEAA@XZ.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapSz@G@@@Z @ 0x180064B88 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPE.c)
 *     ?load@?$_Atomic_storage@_K$07@std@@QEBA_KW4memory_order@2@@Z @ 0x18008D5A4 (-load@-$_Atomic_storage@_K$07@std@@QEBA_KW4memory_order@2@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008F754 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x18009D598 (memset_0.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18009E878 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memcpy_0 @ 0x1801CF19C (memcpy_0.c)
 */

__int64 __fastcall HidLampArrayDevice::SendVendorReport(
        HidLampArrayDevice *this,
        char a2,
        __int64 a3,
        const unsigned __int8 *a4)
{
  size_t v5; // rbx
  size_t v8; // r15
  ULONG v9; // ebp
  __int64 i; // rax
  __int64 v11; // rdx
  int v12; // eax
  void *v13; // rax
  _BYTE *v14; // rbx
  unsigned int v15; // ebx
  const struct std::nothrow_t *v16; // rdx
  void *v17; // rax
  const struct std::nothrow_t *v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  signed int LastError; // eax
  const char *v23; // [rsp+30h] [rbp-38h] BYREF
  const char *v24; // [rsp+38h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  void *v26; // [rsp+70h] [rbp+8h] BYREF

  v5 = (unsigned __int8)a3;
  if ( (unsigned int)dword_18024E248 > 5 )
  {
    v26 = (char *)this + 24;
    v23 = "Started";
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapSz<unsigned short>>(
      (__int64)&dword_18024E248,
      byte_180213AE2,
      a3,
      (__int64)a4,
      (const unsigned __int16 **)&v23,
      (const WCHAR **)&v26);
  }
  if ( a2 == *(_BYTE *)(*((_QWORD *)this + 73) + 16LL)
    || a2 == *(_BYTE *)(*((_QWORD *)this + 74) + 16LL)
    || a2 == *(_BYTE *)(*((_QWORD *)this + 75) + 16LL)
    || a2 == *(_BYTE *)(*((_QWORD *)this + 76) + 16LL)
    || a2 == *(_BYTE *)(*((_QWORD *)this + 77) + 16LL)
    || a2 == *(_BYTE *)(*((_QWORD *)this + 78) + 16LL) )
  {
    return 2147942487LL;
  }
  v8 = v5;
  v9 = v5 + 1;
  for ( i = 0LL; ; i = (unsigned int)(i + 1) )
  {
    if ( (unsigned int)i >= *((_DWORD *)this + 160) )
      return 2147942487LL;
    v11 = *((_QWORD *)this + 79);
    if ( *(_BYTE *)(v11 + 8 * i) == a2 )
      break;
  }
  v12 = *(_DWORD *)(v11 + 8 * i + 4);
  if ( v12 != v9 || (unsigned int)v12 > 0x40 || v12 <= 0 )
    return 2147942487LL;
  v13 = operator new[](v9, (const struct std::nothrow_t *)&std::nothrow);
  v26 = v13;
  v14 = v13;
  if ( !v13 )
  {
    v15 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1C1,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\hidlamparraydevice.cpp",
      (const char *)0x8007000ELL);
LABEL_21:
    VariableSizedPayloadStorage<InputInfo>::~VariableSizedPayloadStorage<InputInfo>(&v26, v16);
    return v15;
  }
  memset_0(v13, 0, v9);
  *v14 = a2;
  memcpy_0(v14 + 1, a4, v8);
  v17 = (void *)std::_Atomic_storage<unsigned __int64,8>::load(*((_QWORD *)this + 2) + 40LL);
  if ( !HidD_SetFeature(v17, v14, v9) )
  {
    LastError = GetLastError();
    v15 = LastError;
    if ( LastError > 0 )
      v15 = (unsigned __int16)LastError | 0x80070000;
    goto LABEL_21;
  }
  if ( (unsigned int)dword_18024E248 > 5 )
  {
    v23 = (char *)this + 24;
    v24 = "Completed successfully";
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapSz<unsigned short>>(
      (__int64)&dword_18024E248,
      byte_180213AE2,
      v19,
      v20,
      (const unsigned __int16 **)&v24,
      (const WCHAR **)&v23);
  }
  VariableSizedPayloadStorage<InputInfo>::~VariableSizedPayloadStorage<InputInfo>(&v26, v18);
  return 0LL;
}
