/*
 * XREFs of ?UpdateFocusedInputTarget3D@MPCInputRouter@@AEAAXPEAUIInputTarget@@@Z @ 0x1800FECE4
 * Callers:
 *     ?UpdateFocusedInputTarget@MPCInputRouter@@MEAAJPEAUIInputTarget@@@Z @ 0x180012D20 (-UpdateFocusedInputTarget@MPCInputRouter@@MEAAJPEAUIInputTarget@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000F254 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?IsEnabled@ISMTracing@@SA_NE_K@Z @ 0x180012DD0 (-IsEnabled@ISMTracing@@SA_NE_K@Z.c)
 *     ?Instance@ISMTracing@@KAPEAV1@XZ @ 0x180013478 (-Instance@ISMTracing@@KAPEAV1@XZ.c)
 *     ??2RefCountedObject@@SAPEAX_K@Z @ 0x18001C640 (--2RefCountedObject@@SAPEAX_K@Z.c)
 *     ?GetInputSiteManager@ISMStatics@@SAPEAVInputSiteManager@@XZ @ 0x180025DEC (-GetInputSiteManager@ISMStatics@@SAPEAVInputSiteManager@@XZ.c)
 *     ?GetViewHierarchy@ISMStatics@@SAAEAVViewHierarchyWithWindowManager@@XZ @ 0x180026554 (-GetViewHierarchy@ISMStatics@@SAAEAVViewHierarchyWithWindowManager@@XZ.c)
 *     ?GetWindowIdFromViewId@ViewHelper@@SA_KAEAVViewHierarchyWithWindowManager@@I@Z @ 0x180026970 (-GetWindowIdFromViewId@ViewHelper@@SA_KAEAVViewHierarchyWithWindowManager@@I@Z.c)
 *     ?GetOrCreateInputSiteFromId@InputSiteManager@@QEAA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@W4InputSiteIdNamespace@@_K@Z @ 0x1800374BC (-GetOrCreateInputSiteFromId@InputSiteManager@@QEAA-AV-$ComPtr@VInputSite@@@WRL@Microsoft@@W4Inpu.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E71C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180091C24 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetProcessIdFromViewId@ViewHelper@@SAKAEAVViewHierarchyWithWindowManager@@I@Z @ 0x1800ACFC4 (-GetProcessIdFromViewId@ViewHelper@@SAKAEAVViewHierarchyWithWindowManager@@I@Z.c)
 *     ?GetFrameworkViewTypeFromFocusTarget@MPCInputRouter@@AEAA?AW4FrameworkViewType@@PEAUIFocusInputTarget@@@Z @ 0x1800FCCE0 (-GetFrameworkViewTypeFromFocusTarget@MPCInputRouter@@AEAA-AW4FrameworkViewType@@PEAUIFocusInputT.c)
 *     ?IsTargetHolographic@MPCInputRouter@@AEAA_NPEAUIInputTarget@@@Z @ 0x1800FDA84 (-IsTargetHolographic@MPCInputRouter@@AEAA_NPEAUIInputTarget@@@Z.c)
 *     ?MPCInputRouter_UpdateFocusedInputTarget3D_@ISMTracing@@QEAAX_NPEAUIMPCTarget@@0_K@Z @ 0x1800FE158 (-MPCInputRouter_UpdateFocusedInputTarget3D_@ISMTracing@@QEAAX_NPEAUIMPCTarget@@0_K@Z.c)
 *     ?Set3DFocusTarget@MPCInputRouter@@AEAAXPEAUIMPCFocusTarget@@@Z @ 0x1800FE8F8 (-Set3DFocusTarget@MPCInputRouter@@AEAAXPEAUIMPCFocusTarget@@@Z.c)
 *     ??0MPCFocusTarget@@QEAA@PEAUIFocusInputTarget@@PEAVInputSite@@1W4FrameworkViewType@@K_N@Z @ 0x1800FF318 (--0MPCFocusTarget@@QEAA@PEAUIFocusInputTarget@@PEAVInputSite@@1W4FrameworkViewType@@K_N@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=11
void __fastcall MPCInputRouter::UpdateFocusedInputTarget3D(
        MPCInputRouter *this,
        __int64 (__fastcall ***a2)(struct IInputTarget *, GUID *, __int64 *))
{
  int v4; // edi
  ISMTracing *v5; // r15
  __int64 (__fastcall *v6)(struct IInputTarget *, GUID *, __int64 *); // rbx
  int v7; // eax
  int v8; // eax
  int v9; // eax
  struct ViewHierarchyWithWindowManager *ViewHierarchy; // rax
  unsigned int v11; // ebx
  struct ViewHierarchyWithWindowManager *v12; // rax
  __int64 v13; // rcx
  ISMTracing *v14; // rax
  int v15; // eax
  char v16; // bl
  int v17; // eax
  __int64 v18; // rcx
  void *v19; // rsi
  struct InputSiteManager *InputSiteManager; // rax
  __int64 *v21; // rax
  __int64 v22; // r15
  struct InputSiteManager *v23; // rax
  __int64 *v24; // rax
  __int64 v25; // rsi
  __int64 v26; // rcx
  __int64 v27; // rcx
  char v28; // di
  struct IMPCTarget *v29; // rsi
  int v30; // [rsp+20h] [rbp-60h]
  int v31; // [rsp+40h] [rbp-40h] BYREF
  struct IInputTarget *v32; // [rsp+48h] [rbp-38h] BYREF
  ISMTracing *WindowIdFromViewId; // [rsp+50h] [rbp-30h] BYREF
  __int64 v34; // [rsp+58h] [rbp-28h] BYREF
  __int64 v35; // [rsp+60h] [rbp-20h] BYREF
  __int64 v36; // [rsp+68h] [rbp-18h]
  void *v37; // [rsp+70h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+38h]
  unsigned int v39; // [rsp+C8h] [rbp+48h] BYREF
  int v40; // [rsp+D0h] [rbp+50h]
  int ProcessIdFromViewId; // [rsp+D8h] [rbp+58h] BYREF

  v4 = 0;
  v40 = 0;
  if ( a2 && MPCInputRouter::IsTargetHolographic(this, a2) )
  {
    WindowIdFromViewId = 0LL;
    ProcessIdFromViewId = 0;
    v5 = 0LL;
    v39 = 0;
    v32 = 0LL;
    v6 = **a2;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v32);
    if ( (int)v6((struct IInputTarget *)a2, &GUID_a4e70d2d_6b93_4143_b95b_67efd0ccda59, (__int64 *)&v32) >= 0 )
    {
      v7 = (*(__int64 (__fastcall **)(struct IInputTarget *, ISMTracing **))(*(_QWORD *)v32 + 64LL))(
             v32,
             &WindowIdFromViewId);
      if ( v7 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x112,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
          (const char *)(unsigned int)v7);
      v8 = (*(__int64 (__fastcall **)(struct IInputTarget *, int *))(*(_QWORD *)v32 + 32LL))(v32, &ProcessIdFromViewId);
      if ( v8 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x113,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
          (const char *)(unsigned int)v8);
      v9 = (*(__int64 (__fastcall **)(struct IInputTarget *, unsigned int *))(*(_QWORD *)v32 + 56LL))(v32, &v39);
      if ( v9 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x114,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
          (const char *)(unsigned int)v9);
      if ( v39 )
      {
        v5 = WindowIdFromViewId;
        ViewHierarchy = ISMStatics::GetViewHierarchy();
        WindowIdFromViewId = (ISMTracing *)ViewHelper::GetWindowIdFromViewId(ViewHierarchy);
        v11 = v39;
        v12 = ISMStatics::GetViewHierarchy();
        ProcessIdFromViewId = ViewHelper::GetProcessIdFromViewId(v12, v11);
      }
    }
    v13 = *((_QWORD *)this + 81);
    if ( v13
      && (v14 = (ISMTracing *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v13 + 56LL))(v13),
          WindowIdFromViewId == v14)
      && (v15 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 81) + 88LL))(*((_QWORD *)this + 81)), v39 == v15) )
    {
      v16 = 1;
    }
    else
    {
      if ( v32 )
      {
        v31 = 0;
        v17 = (*(__int64 (__fastcall **)(struct IInputTarget *, int *))(*(_QWORD *)v32 + 32LL))(v32, &v31);
        if ( v17 < 0 )
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0x129,
            (int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
            (const char *)(unsigned int)v17,
            v30);
        v36 = 0LL;
        v19 = RefCountedObject::operator new(0x70uLL);
        v37 = v19;
        if ( v19 )
        {
          MPCInputRouter::GetFrameworkViewTypeFromFocusTarget(v18, v32);
          if ( v39 )
          {
            InputSiteManager = ISMStatics::GetInputSiteManager();
            v21 = InputSiteManager::GetOrCreateInputSiteFromId((__int64)InputSiteManager, &v35, 1u, (__int64)v5);
            v4 = 1;
            v40 = 1;
            v22 = *v21;
          }
          else
          {
            v22 = 0LL;
          }
          v23 = ISMStatics::GetInputSiteManager();
          v24 = InputSiteManager::GetOrCreateInputSiteFromId((__int64)v23, &v34, 1u, (__int64)WindowIdFromViewId);
          v4 |= 2u;
          v40 = v4;
          v25 = MPCFocusTarget::MPCFocusTarget(v19, v32, *v24, v22);
        }
        else
        {
          v25 = 0LL;
        }
        v36 = v25;
        if ( (v4 & 2) != 0 )
        {
          v4 &= ~2u;
          v40 = v4;
          v26 = v34;
          if ( v34 )
          {
            v34 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
          }
        }
        if ( (v4 & 1) != 0 )
        {
          v27 = v35;
          if ( v35 )
          {
            v35 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
          }
        }
        MPCInputRouter::Set3DFocusTarget(
          this,
          (struct IMPCFocusTarget *)((v25 + 80) & ((unsigned __int128)-(__int128)(unsigned __int64)v25 >> 64)));
        if ( v25 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
      }
      v16 = 0;
    }
    v28 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 81) + 32LL))(*((_QWORD *)this + 81));
    v29 = (struct IMPCTarget *)*((_QWORD *)this + 81);
    if ( ISMTracing::IsEnabled() )
    {
      ISMTracing::Instance();
      ISMTracing::MPCInputRouter_UpdateFocusedInputTarget3D_(
        WindowIdFromViewId,
        v16,
        v29,
        v28,
        (unsigned __int64)WindowIdFromViewId);
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v32);
  }
  else
  {
    MPCInputRouter::Set3DFocusTarget(this, *((struct IMPCFocusTarget **)this + 83));
  }
}
