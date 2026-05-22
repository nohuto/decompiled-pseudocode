/*
 * XREFs of ?Initialize@GazeProcessor@@IEAAJXZ @ 0x1801B0EC8
 * Callers:
 *     ?Create@GazeProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z @ 0x1801B0D70 (-Create@GazeProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000EAF4 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?GetInstance@InputConfigContextProvider@@SAPEAV1@XZ @ 0x18000F1DC (-GetInstance@InputConfigContextProvider@@SAPEAV1@XZ.c)
 *     ?_Destroy@?$_Variant_base@Umonostate@std@@UInputConfigContextMessage@@UDisplayOcclusionContextMessage@@UVirtualTouchpadContextMessage@@UMIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE@@@std@@QEAAXXZ @ 0x18007AA64 (-_Destroy@-$_Variant_base@Umonostate@std@@UInputConfigContextMessage@@UDisplayOcclusionContextMe.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008EFF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?4VInputConfigContextProvider@@@?$ComPtr@UISystemContextProvider@@@WRL@Microsoft@@QEAAAEAV012@PEAVInputConfigContextProvider@@@Z @ 0x180097A78 (--$-4VInputConfigContextProvider@@@-$ComPtr@UISystemContextProvider@@@WRL@Microsoft@@QEAAAEAV012.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall GazeProcessor::Initialize(GazeProcessor *this)
{
  __int64 *v2; // r14
  struct InputConfigContextProvider *Instance; // rax
  int v4; // eax
  unsigned int v5; // ebx
  int v6; // eax
  __int64 v7; // rdx
  __int64 (__fastcall ***v8)(_QWORD, GUID *, __int64 *); // rdi
  __int64 (__fastcall *v9)(_QWORD, GUID *, __int64 *); // rbx
  _BYTE v11[32]; // [rsp+20h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  __int64 v13; // [rsp+60h] [rbp+20h] BYREF

  v13 = 0LL;
  v2 = (__int64 *)((char *)this + 344);
  Instance = InputConfigContextProvider::GetInstance();
  Microsoft::WRL::ComPtr<ISystemContextProvider>::operator=<InputConfigContextProvider>(v2, (__int64)Instance);
  v4 = (*(__int64 (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)*v2 + 24LL))(
         *v2,
         ((unsigned __int64)this + 8) & -(__int64)(this != 0LL));
  v5 = v4;
  if ( v4 >= 0 )
  {
    v11[24] = 0;
    if ( (*(int (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)*v2 + 40LL))(*v2, v11) < 0
      || (v6 = (*(__int64 (__fastcall **)(char *, _BYTE *))(*((_QWORD *)this + 1) + 24LL))((char *)this + 8, v11),
          v5 = v6,
          v6 >= 0) )
    {
      v8 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 7)
                                                                                                  + 64LL))(*((_QWORD *)this + 7));
      v9 = **v8;
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v13);
      v6 = v9(v8, &GUID_f8a5030e_f489_4cf1_9395_60d6eaf4b21f, &v13);
      v5 = v6;
      if ( v6 >= 0 )
      {
        v6 = (*(__int64 (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v13 + 24LL))(
               v13,
               ((unsigned __int64)this + 16) & -(__int64)(this != 0LL));
        v5 = v6;
        if ( v6 >= 0 )
        {
          std::_Variant_base<std::monostate,InputConfigContextMessage,DisplayOcclusionContextMessage,VirtualTouchpadContextMessage,MIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE>::_Destroy((__int64)v11);
          v5 = 0;
          goto LABEL_12;
        }
        v7 = 86LL;
      }
      else
      {
        v7 = 84LL;
      }
    }
    else
    {
      v7 = 80LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\gaze\\lib\\gazeprocessor.cpp",
      (const char *)(unsigned int)v6);
    std::_Variant_base<std::monostate,InputConfigContextMessage,DisplayOcclusionContextMessage,VirtualTouchpadContextMessage,MIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE>::_Destroy((__int64)v11);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4A,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\gaze\\lib\\gazeprocessor.cpp",
      (const char *)(unsigned int)v4);
  }
LABEL_12:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v13);
  return v5;
}
