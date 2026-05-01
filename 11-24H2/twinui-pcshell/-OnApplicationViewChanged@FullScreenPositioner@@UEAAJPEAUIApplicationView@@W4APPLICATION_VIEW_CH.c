/*
 * XREFs of ?OnApplicationViewChanged@FullScreenPositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x180146960
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RemoveView@FullScreenPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x180146E48 (-RemoveView@FullScreenPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?SwitchToNonFullScreenApp@FullScreenPositioner@@AEAAJXZ @ 0x180146ED8 (-SwitchToNonFullScreenApp@FullScreenPositioner@@AEAAJXZ.c)
 *     ?FullScreenViewGetsFocus@FullScreenPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x1803245A0 (-FullScreenViewGetsFocus@FullScreenPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?SetVisibleView@FullScreenPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x180325A48 (-SetVisibleView@FullScreenPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall FullScreenPositioner::OnApplicationViewChanged(__int64 a1, struct IApplicationView *a2, int a3)
{
  int v5; // r8d
  int v6; // r8d
  int v7; // r8d
  struct IApplicationView *v9; // rcx
  int v10; // ebx
  int v11; // ebx
  FullScreenPositioner *v12; // rsi
  __int64 v13; // r14
  int (__fastcall *v14)(struct IApplicationView *, __int64 *); // rbx
  int v15; // eax
  char v16; // bl
  __int64 v17; // rcx
  int (__fastcall *v18)(struct IApplicationView *, __int64 *); // rbx
  __int64 v19; // rcx
  __int64 v20; // r14
  __int64 (__fastcall *v21)(struct IApplicationView *, __int64 *); // rbx
  int v22; // eax
  int v23; // ebx
  int v24; // eax
  char v25; // r14
  __int64 v26; // rcx
  struct IApplicationView *v27; // rcx
  int v28; // r14d
  int (__fastcall *v29)(struct IApplicationView *, __int64 *); // rbx
  int v30; // eax
  unsigned int v31; // ebx
  __int64 v32; // rcx
  __int64 v33; // rcx
  int v34; // eax
  __int64 v35; // rcx
  int v36; // eax
  __int64 v37[2]; // [rsp+20h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  __int64 v39; // [rsp+50h] [rbp+20h] BYREF

  if ( !*(_DWORD *)(a1 + 184) )
    return 0LL;
  v5 = a3 - 1;
  if ( !v5 )
  {
    v9 = *(struct IApplicationView **)(a1 + 80);
    if ( v9 && a2 )
    {
      if ( v9 == a2 )
      {
        v12 = (FullScreenPositioner *)(a1 - 144);
      }
      else
      {
        v37[0] = 0LL;
        v39 = 0LL;
        if ( (**(int (__fastcall ***)(struct IApplicationView *, GUID *, __int64 *))v9)(
               v9,
               &GUID_00000000_0000_0000_c000_000000000046,
               v37) < 0 )
          goto LABEL_15;
        v10 = (**(__int64 (__fastcall ***)(struct IApplicationView *, GUID *, __int64 *))a2)(
                a2,
                &GUID_00000000_0000_0000_c000_000000000046,
                &v39);
        if ( v10 >= 0 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v39 + 16LL))(v39);
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v37[0] + 16LL))(v37[0]);
        if ( v10 < 0 || (v11 = 1, v37[0] != v39) )
LABEL_15:
          v11 = 0;
        v12 = (FullScreenPositioner *)(a1 - 144);
        if ( !v11 )
          goto LABEL_17;
      }
      FullScreenPositioner::SetVisibleView(v12, 0LL);
    }
    else
    {
      v12 = (FullScreenPositioner *)(a1 - 144);
    }
LABEL_17:
    FullScreenPositioner::RemoveView(v12, a2);
    return 0LL;
  }
  v6 = v5 - 6;
  if ( !v6 || (v7 = v6 - 1) == 0 )
  {
    v20 = *(_QWORD *)(a1 + 72);
    v37[0] = 0LL;
    LODWORD(v39) = 0;
    v21 = *(__int64 (__fastcall **)(struct IApplicationView *, __int64 *))(*(_QWORD *)a2 + 80LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v37);
    v22 = v21(a2, v37);
    v23 = 1;
    if ( v22 >= 0 )
    {
      v24 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v20 + 96LL))(v20, v37[0], &v39);
      if ( v24 < 0 )
      {
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0xB6,
          (int)"shell\\twinui\\applicationviewhelper\\applicationviewhelpers.cpp",
          (const char *)(unsigned int)v24);
      }
      else
      {
        v25 = 1;
        if ( (_DWORD)v39 )
        {
LABEL_38:
          v26 = v37[0];
          if ( v37[0] )
          {
            v37[0] = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
          }
          if ( !v25 )
            return 0LL;
          v27 = *(struct IApplicationView **)(a1 + 80);
          if ( v27 )
          {
            if ( v27 == a2 )
              return 0LL;
            v37[0] = 0LL;
            v39 = 0LL;
            if ( (**(int (__fastcall ***)(struct IApplicationView *, GUID *, __int64 *))v27)(
                   v27,
                   &GUID_00000000_0000_0000_c000_000000000046,
                   v37) < 0 )
              goto LABEL_48;
            v28 = (**(__int64 (__fastcall ***)(struct IApplicationView *, GUID *, __int64 *))a2)(
                    a2,
                    &GUID_00000000_0000_0000_c000_000000000046,
                    &v39);
            if ( v28 >= 0 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v39 + 16LL))(v39);
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v37[0] + 16LL))(v37[0]);
            if ( v28 < 0 || v37[0] != v39 )
LABEL_48:
              v23 = 0;
            if ( v23 )
              return 0LL;
          }
          LODWORD(v39) = 0;
          v37[0] = 0LL;
          v29 = *(int (__fastcall **)(struct IApplicationView *, __int64 *))(*(_QWORD *)a2 + 264LL);
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v37);
          if ( v29(a2, v37) >= 0 && (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v37[0] + 24LL))(v37[0]) == 4 )
          {
            v36 = FullScreenPositioner::FullScreenViewGetsFocus((FullScreenPositioner *)(a1 - 144), a2);
            v31 = v36;
            if ( v36 < 0 )
            {
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0x2F5,
                (int)"pcshell\\twinui\\fullscreen\\lib\\fullscreenpositioner.cpp",
                (const char *)(unsigned int)v36);
              Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v37);
              return v31;
            }
          }
          else if ( (!v37[0] || (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v37[0] + 24LL))(v37[0]) != 6)
                 && (*(int (__fastcall **)(struct IApplicationView *, __int64 *))(*(_QWORD *)a2 + 336LL))(a2, &v39) >= 0
                 && !(_DWORD)v39 )
          {
            v30 = FullScreenPositioner::SwitchToNonFullScreenApp((FullScreenPositioner *)(a1 - 144));
            v31 = v30;
            if ( v30 < 0 )
            {
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0x2FF,
                (int)"pcshell\\twinui\\fullscreen\\lib\\fullscreenpositioner.cpp",
                (const char *)(unsigned int)v30);
              v32 = v37[0];
              if ( v37[0] )
              {
                v37[0] = 0LL;
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 16LL))(v32);
              }
              return v31;
            }
          }
          v33 = v37[0];
          if ( v37[0] )
          {
            v37[0] = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 16LL))(v33);
          }
          return 0LL;
        }
      }
    }
    v25 = 0;
    goto LABEL_38;
  }
  if ( v7 != 1 )
    return 0LL;
  v13 = *(_QWORD *)(a1 + 72);
  v37[0] = 0LL;
  LODWORD(v39) = 0;
  v14 = *(int (__fastcall **)(struct IApplicationView *, __int64 *))(*(_QWORD *)a2 + 80LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v37);
  if ( v14(a2, v37) < 0 )
    goto LABEL_23;
  v15 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v13 + 96LL))(v13, v37[0], &v39);
  if ( v15 < 0 )
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xB6,
      (int)"shell\\twinui\\applicationviewhelper\\applicationviewhelpers.cpp",
      (const char *)(unsigned int)v15);
    goto LABEL_23;
  }
  if ( !(_DWORD)v39 )
  {
LABEL_23:
    v16 = 0;
    goto LABEL_24;
  }
  v16 = 1;
LABEL_24:
  v17 = v37[0];
  if ( v37[0] )
  {
    v37[0] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
  }
  if ( !v16 )
    return 0LL;
  v39 = 0LL;
  v18 = *(int (__fastcall **)(struct IApplicationView *, __int64 *))(*(_QWORD *)a2 + 264LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v39);
  if ( v18(a2, &v39) >= 0 && (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v39 + 24LL))(v39) == 4
    || (v34 = FullScreenPositioner::SwitchToNonFullScreenApp((FullScreenPositioner *)(a1 - 144)), v31 = v34, v34 >= 0) )
  {
    v19 = v39;
    if ( v39 )
    {
      v39 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
    }
    return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x316,
    (int)"pcshell\\twinui\\fullscreen\\lib\\fullscreenpositioner.cpp",
    (const char *)(unsigned int)v34);
  v35 = v39;
  if ( v39 )
  {
    v39 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v35 + 16LL))(v35);
  }
  return v31;
}
