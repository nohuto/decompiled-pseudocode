/*
 * XREFs of ?InformTargetOfAttachedDevices@DWMInputRouter@@IEAAJPEAUIInputTarget@@@Z @ 0x18003F054
 * Callers:
 *     ?RegisterInputHost@DWMInputRouter@@UEAAJUtagMsgRoutingInfo@@KK@Z @ 0x18003EA30 (-RegisterInputHost@DWMInputRouter@@UEAAJUtagMsgRoutingInfo@@KK@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000EAF4 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008DFBC (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008EFF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall DWMInputRouter::InformTargetOfAttachedDevices(
        DWMInputRouter *this,
        __int64 (__fastcall ***a2)(struct IInputTarget *, GUID *, __int64 **))
{
  __int64 (__fastcall *v4)(struct IInputTarget *, GUID *, __int64 **); // rbx
  int v5; // eax
  __int64 *v6; // rcx
  _QWORD *v7; // rdi
  _QWORD *v8; // rbx
  __int64 v9; // rax
  int v10; // eax
  unsigned int v11; // esi
  int v12; // eax
  unsigned int v13; // ebx
  __int64 v14; // rcx
  __int64 v16; // rcx
  __int64 v17; // rcx
  int v18; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 *v20; // [rsp+38h] [rbp+10h] BYREF

  v20 = 0LL;
  v4 = **a2;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v20);
  v5 = v4((struct IInputTarget *)a2, &GUID_ce017166_b885_4259_a1c9_31032455b8b4, &v20);
  if ( v5 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x420,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
      (const char *)(unsigned int)v5,
      v18);
  v6 = v20;
  if ( !v20 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x424,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
      (const char *)0x8000FFFFLL,
      v18);
  v7 = (_QWORD *)*((_QWORD *)this + 25);
  v8 = (_QWORD *)*v7;
  while ( 1 )
  {
    v9 = *v6;
    if ( v8 == v7 )
      break;
    v10 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))(v9 + 24))(v6, v8[3]);
    v11 = v10;
    if ( v10 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x430,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
        (const char *)(unsigned int)v10,
        v18);
      v16 = (__int64)v20;
      if ( v20 )
      {
        v20 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
      }
      return v11;
    }
    v8 = (_QWORD *)*v8;
    v6 = v20;
  }
  v12 = (*(__int64 (**)(void))(v9 + 48))();
  v13 = v12;
  if ( v12 >= 0 )
  {
    v17 = (__int64)v20;
    if ( v20 )
    {
      v20 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
    }
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x434,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
      (const char *)(unsigned int)v12,
      v18);
    v14 = (__int64)v20;
    if ( v20 )
    {
      v20 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
    }
    return v13;
  }
}
