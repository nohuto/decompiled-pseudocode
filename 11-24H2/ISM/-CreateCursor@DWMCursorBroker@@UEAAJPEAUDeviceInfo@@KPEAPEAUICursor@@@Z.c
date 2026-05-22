/*
 * XREFs of ?CreateCursor@DWMCursorBroker@@UEAAJPEAUDeviceInfo@@KPEAPEAUICursor@@@Z @ 0x18007C670
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000F254 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?lock@_Mutex_base@std@@QEAAXXZ @ 0x180015E94 (-lock@_Mutex_base@std@@QEAAXXZ.c)
 *     ?GetBamoServerConnection@ISMStatics@@SAPEAVInputSystemServerConnection@@XZ @ 0x18002461C (-GetBamoServerConnection@ISMStatics@@SAPEAVInputSystemServerConnection@@XZ.c)
 *     ??$_Insert_or_assign@UDWMPointerMapping@@AEAUCursorId@@@?$unordered_map@UDWMPointerMapping@@UCursorId@@UDWMMappingHash@@U?$equal_to@UDWMPointerMapping@@@std@@V?$allocator@U?$pair@$$CBUDWMPointerMapping@@UCursorId@@@std@@@5@@std@@AEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUDWMPointerMapping@@UCursorId@@@std@@@std@@@std@@@std@@_N@1@$$QEAUDWMPointerMapping@@AEAUCursorId@@@Z @ 0x180048A28 (--$_Insert_or_assign@UDWMPointerMapping@@AEAUCursorId@@@-$unordered_map@UDWMPointerMapping@@UCur.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E71C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Create@DWMCursor@@KAJPEAVDWMCursorBroker@@UCursorId@@W4InputType@@PEAPEAV1@@Z @ 0x18008F554 (-Create@DWMCursor@@KAJPEAVDWMCursorBroker@@UCursorId@@W4InputType@@PEAPEAV1@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008F754 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18009D650 (__security_check_cookie.c)
 *     ??$_Try_emplace@AEBW4InputType@@$$V@?$_Hash@V?$_Umap_traits@W4InputType@@UtagPOINT@@V?$_Uhash_compare@W4InputType@@U?$hash@W4InputType@@@std@@U?$equal_to@W4InputType@@@3@@std@@V?$allocator@U?$pair@$$CBW4InputType@@UtagPOINT@@@std@@@4@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CBW4InputType@@UtagPOINT@@@std@@PEAX@std@@_N@1@AEBW4InputType@@@Z @ 0x1800F6144 (--$_Try_emplace@AEBW4InputType@@$$V@-$_Hash@V-$_Umap_traits@W4InputType@@UtagPOINT@@V-$_Uhash_co.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall DWMCursorBroker::CreateCursor(
        DWMCursorBroker *this,
        struct DeviceInfo *a2,
        int a3,
        struct ICursor **a4)
{
  __int64 v8; // r8
  __int64 v10; // rcx
  unsigned __int64 i; // r9
  __int64 v12; // r9
  __int64 v13; // rcx
  __int64 v14; // rax
  struct ICursor *v15; // rdi
  int v16; // eax
  __int64 (__fastcall *v17)(DWMCursorBroker *, __int64 *); // rbx
  int v18; // eax
  _DWORD *v19; // rbx
  int v20; // eax
  int v21; // eax
  int v22; // eax
  struct InputSystemServerConnection *BamoServerConnection; // rax
  __int64 v24; // rax
  struct ICursor *v25; // rbx
  int v26; // eax
  __int64 v27; // rcx
  __int64 v28; // [rsp+20h] [rbp-50h] BYREF
  struct ICursor *v29; // [rsp+28h] [rbp-48h] BYREF
  __int64 v30; // [rsp+30h] [rbp-40h] BYREF
  int v31; // [rsp+38h] [rbp-38h] BYREF
  void *v32; // [rsp+40h] [rbp-30h]
  _BYTE v33[16]; // [rsp+48h] [rbp-28h] BYREF
  __int128 v34; // [rsp+58h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+38h]

  v32 = &DWMCursorBroker::s_lock;
  std::_Mutex_base::lock((std::_Mutex_base *)&DWMCursorBroker::s_lock);
  *a4 = 0LL;
  v29 = 0LL;
  v8 = *((unsigned int *)a2 + 1);
  if ( (v8 & 8) != 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x211,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\lib\\dwmcursorbroker.cpp",
      (const char *)0x80070057LL,
      v28);
    _Mtx_unlock((_Mtx_t)&DWMCursorBroker::s_lock);
    return 2147942487LL;
  }
  else
  {
    if ( (v8 & 2) != 0 )
    {
      v8 = 64LL;
      if ( (*((_DWORD *)a2 + 1) & 0x40) != 0 )
      {
        v28 = 2LL;
      }
      else
      {
        v8 = 2LL;
        v28 = 1LL;
      }
    }
    else
    {
      LODWORD(v28) = *((_DWORD *)this + 114);
      *((_DWORD *)this + 114) = v28 + 1;
      HIDWORD(v28) = 0;
    }
    v10 = 0xCBF29CE484222325uLL;
    for ( i = 0LL; i < 4; ++i )
      v10 = 0x100000001B3LL * (*((unsigned __int8 *)&v28 + i) ^ (unsigned __int64)v10);
    v12 = 2 * (v10 & *((_QWORD *)this + 12));
    v13 = *((_QWORD *)this + 9);
    v14 = *(_QWORD *)(v13 + 8 * v12 + 8);
    if ( v14 == *((_QWORD *)this + 7) )
    {
LABEL_14:
      v14 = 0LL;
    }
    else
    {
      while ( (_DWORD)v28 != *(_DWORD *)(v14 + 16) )
      {
        if ( v14 == *(_QWORD *)(v13 + 8 * v12) )
          goto LABEL_14;
        v14 = *(_QWORD *)(v14 + 8);
      }
    }
    if ( !v14 || v14 == *((_QWORD *)this + 7) )
    {
      v16 = DWMCursor::Create(this, v28, v8, &v29);
      if ( v16 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x231,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\lib\\dwmcursorbroker.cpp",
          (const char *)(unsigned int)v16,
          v28);
      v30 = 0LL;
      v17 = *(__int64 (__fastcall **)(DWMCursorBroker *, __int64 *))(*(_QWORD *)this + 40LL);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v30);
      v18 = v17(this, &v30);
      v15 = v29;
      if ( v18 >= 0 )
      {
        v29 = 0LL;
        v34 = 0LL;
        v19 = (_DWORD *)(*(__int64 (__fastcall **)(struct ICursor *, int *))(*(_QWORD *)v15 + 48LL))(v15, &v31);
        if ( *(_DWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v30 + 48LL))(v30, v33) == *v19 )
        {
          v29 = *(struct ICursor **)((char *)this + 460);
        }
        else
        {
          v21 = (*(__int64 (__fastcall **)(__int64, struct ICursor **, char *))(*(_QWORD *)v30 + 40LL))(
                  v30,
                  &v29,
                  (char *)&v29 + 4);
          if ( v21 < 0 )
            wil::details::in1diag3::FailFast_Hr(
              retaddr,
              (void *)0x241,
              (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\lib\\"
                            "dwmcursorbroker.cpp",
              (const char *)(unsigned int)v21,
              v28);
        }
        v20 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v30 + 104LL))(v30, &v34);
        if ( v20 < 0 )
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0x243,
            (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\lib\\dw"
                          "mcursorbroker.cpp",
            (const char *)(unsigned int)v20,
            v28);
        v22 = (*(__int64 (__fastcall **)(struct ICursor *, _QWORD, _QWORD))(*(_QWORD *)v15 + 24LL))(
                v15,
                (unsigned int)v29,
                HIDWORD(v29));
        if ( v22 < 0 )
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0x245,
            (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\lib\\dw"
                          "mcursorbroker.cpp",
            (const char *)(unsigned int)v22,
            v28);
        BamoServerConnection = ISMStatics::GetBamoServerConnection();
        v24 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*((_QWORD *)BamoServerConnection + 31) + 8LL) + 232LL))(*((_QWORD *)BamoServerConnection + 31) + 8LL);
        if ( v24 )
        {
          v31 = 2;
          v25 = v29;
          *(_QWORD *)(*(_QWORD *)std::_Hash<std::_Umap_traits<enum InputType,tagPOINT,std::_Uhash_compare<enum InputType,std::hash<enum InputType>,std::equal_to<enum InputType>>,std::allocator<std::pair<enum InputType const,tagPOINT>>,0>>::_Try_emplace<enum InputType const &,>(
                                   v24 + 96,
                                   v33,
                                   &v31)
                    + 20LL) = v25;
        }
        v26 = (*(__int64 (__fastcall **)(struct ICursor *, __int128 *))(*(_QWORD *)v15 + 96LL))(v15, &v34);
        if ( v26 < 0 )
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0x253,
            (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\lib\\dw"
                          "mcursorbroker.cpp",
            (const char *)(unsigned int)v26,
            v28);
      }
      v27 = v30;
      if ( v30 )
      {
        v30 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
      }
    }
    else
    {
      v15 = *(struct ICursor **)(v14 + 24);
      (*(void (__fastcall **)(struct ICursor *))(*(_QWORD *)v15 + 8LL))(v15);
    }
    if ( *(_DWORD *)a2 )
    {
      LODWORD(v30) = *(_DWORD *)a2;
      HIDWORD(v30) = a3;
      std::unordered_map<DWMPointerMapping,CursorId,DWMMappingHash,std::equal_to<DWMPointerMapping>,std::allocator<std::pair<DWMPointerMapping const,CursorId>>>::_Insert_or_assign<DWMPointerMapping,CursorId &>(
        (float *)this + 28,
        (__int64)&v34,
        &v30,
        &v28);
    }
    *a4 = v15;
    _Mtx_unlock((_Mtx_t)&DWMCursorBroker::s_lock);
    return 0LL;
  }
}
