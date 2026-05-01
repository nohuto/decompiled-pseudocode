/*
 * XREFs of ?UnrequestPrivilegedHotkeys@PrivilegedHotkeyOperations@@UEAAJK@Z @ 0x18005F140
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIInspectable@@@WRL@Microsoft@@@Details@12@@Z @ 0x18005F300 (--$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIInspectable@@@WRL@Mic.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall PrivilegedHotkeyOperations::UnrequestPrivilegedHotkeys(
        PrivilegedHotkeyOperations *this,
        unsigned int a2)
{
  __int64 (__fastcall ***v3)(_QWORD, _QWORD, _QWORD); // rbx
  __int64 (__fastcall *v4)(_QWORD, GUID *, __int64 *); // rdi
  int v5; // eax
  unsigned int v6; // ebx
  __int64 v7; // rbx
  __int64 (__fastcall *v8)(__int64, GUID *, GUID *, __int64 *); // rdi
  int v9; // eax
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 (__fastcall ***v12)(_QWORD, _QWORD, _QWORD); // rcx
  __int64 (__fastcall ***v14)(_QWORD, _QWORD, _QWORD); // rcx
  __int64 v15; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  __int64 v17; // [rsp+50h] [rbp+20h] BYREF
  __int64 (__fastcall ***v18)(_QWORD, GUID *, __int64 *); // [rsp+60h] [rbp+30h] BYREF
  __int64 v19; // [rsp+68h] [rbp+38h] BYREF

  v18 = 0LL;
  Microsoft::WRL::WeakRef::As<IInspectable>((char *)this + 56, &v18);
  v3 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v18;
  if ( !v18 )
  {
    v6 = -2147023728;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x216,
      (int)"pcshell\\twinui\\privilegedoperations\\lib\\privilegedoperations.cpp",
      (const char *)0x80070490LL);
    v14 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v18;
    if ( v18 )
    {
      v18 = 0LL;
      ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD)))(*v14)[2])(v14);
    }
    return v6;
  }
  v19 = 0LL;
  v4 = **v18;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v19);
  v5 = v4(v3, &GUID_6d5140c1_7436_11ce_8034_00aa006009fa, &v19);
  v6 = v5;
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x218,
      (int)"pcshell\\twinui\\privilegedoperations\\lib\\privilegedoperations.cpp",
      (const char *)(unsigned int)v5);
LABEL_19:
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v19);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v18);
    return v6;
  }
  v17 = 0LL;
  v7 = v19;
  v8 = *(__int64 (__fastcall **)(__int64, GUID *, GUID *, __int64 *))(*(_QWORD *)v19 + 24LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v17);
  v9 = v8(v7, &IID_IImmersiveWindowMessageService, &GUID_fc62ce95_8396_401a_b74f_88df0d75e112, &v17);
  v6 = v9;
  if ( v9 < 0 )
  {
    v15 = 539LL;
LABEL_18:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v15,
      (int)"pcshell\\twinui\\privilegedoperations\\lib\\privilegedoperations.cpp",
      (const char *)(unsigned int)v9);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v17);
    goto LABEL_19;
  }
  v9 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v17 + 64LL))(v17, a2);
  v6 = v9;
  if ( v9 < 0 )
  {
    v15 = 542LL;
    goto LABEL_18;
  }
  v10 = v17;
  if ( v17 )
  {
    v17 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
  v11 = v19;
  if ( v19 )
  {
    v19 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  }
  v12 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v18;
  if ( v18 )
  {
    v18 = 0LL;
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD)))(*v12)[2])(v12);
  }
  return 0LL;
}
