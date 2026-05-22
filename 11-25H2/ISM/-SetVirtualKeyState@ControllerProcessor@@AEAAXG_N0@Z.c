/*
 * XREFs of ?SetVirtualKeyState@ControllerProcessor@@AEAAXG_N0@Z @ 0x180056160
 * Callers:
 *     ?SendGameControllerAsVirtualKeys@ControllerProcessor@@AEAAJXZ @ 0x180055A50 (-SendGameControllerAsVirtualKeys@ControllerProcessor@@AEAAJXZ.c)
 *     ?TestThumbstickAxisAndSetVirtualKeyState@ControllerProcessor@@AEAAXMGG_N@Z @ 0x18005BD30 (-TestThumbstickAxisAndSetVirtualKeyState@ControllerProcessor@@AEAAXMGG_N@Z.c)
 *     ?SendGameControllerAsVirtualKeysForNavigation@ControllerProcessor@@AEAAJXZ @ 0x18017A2F0 (-SendGameControllerAsVirtualKeysForNavigation@ControllerProcessor@@AEAAJXZ.c)
 * Callees:
 *     ?GetControllerNavigationManager@ISMStatics@@SAPEAVControllerNavigationManager@@XZ @ 0x180024020 (-GetControllerNavigationManager@ISMStatics@@SAPEAVControllerNavigationManager@@XZ.c)
 *     ?IsEdition@@YA_N_K@Z @ 0x1800392B0 (-IsEdition@@YA_N_K@Z.c)
 *     ?Inject@KeyboardInjectionDevice@@QEAAJPEAUInputInfo@@@Z @ 0x18007EA18 (-Inject@KeyboardInjectionDevice@@QEAAJPEAUInputInfo@@@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008DFBC (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _o_ceilf_0 @ 0x18009D2F0 (_o_ceilf_0.c)
 *     memset_0 @ 0x18009D3C8 (memset_0.c)
 *     __security_check_cookie @ 0x18009D480 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009D588 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18009D5CC (--2@YAPEAX_K@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18009E558 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?InterceptGamepadInput@GamepadInterceptionHelper@@QEAAXG_N@Z @ 0x180106144 (-InterceptGamepadInput@GamepadInterceptionHelper@@QEAAXG_N@Z.c)
 *     ?IsProcessSubscribedToGamepadEvents@GamepadInterceptionHelper@@QEAA_NK@Z @ 0x180106210 (-IsProcessSubscribedToGamepadEvents@GamepadInterceptionHelper@@QEAA_NK@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_GamepadVKeyRoutingOptIn@@@details@wil@@QEAA_NXZ @ 0x18013259C (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_GamepadVKeyRoutingOptIn@@@details.c)
 *     ?_Forced_rehash@?$_Hash@V?$_Umap_traits@GUActiveKeyProperties@ControllerProcessor@@V?$_Uhash_compare@GU?$hash@G@std@@U?$equal_to@G@2@@std@@V?$allocator@U?$pair@$$CBGUActiveKeyProperties@ControllerProcessor@@@std@@@4@$0A@@std@@@std@@IEAAX_K@Z @ 0x18017B974 (-_Forced_rehash@-$_Hash@V-$_Umap_traits@GUActiveKeyProperties@ControllerProcessor@@V-$_Uhash_com.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=15
void __fastcall ControllerProcessor::SetVirtualKeyState(
        ControllerProcessor *this,
        unsigned __int16 a2,
        char a3,
        char a4)
{
  char v5; // si
  int v6; // r14d
  unsigned __int64 v8; // r12
  __int64 v9; // r8
  __int64 v10; // r9
  void **v11; // rbx
  void **v12; // rcx
  void **v13; // r15
  char v14; // di
  _WORD *v15; // rsi
  char *v16; // rdx
  float v17; // xmm3_4
  __int64 v18; // rcx
  float v19; // xmm0_4
  unsigned __int64 v20; // rdi
  float v21; // xmm2_4
  __int64 v22; // rcx
  float v23; // xmm0_4
  unsigned __int64 v24; // rcx
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // rcx
  _QWORD *v27; // r11
  __int64 *v28; // r10
  __int64 v29; // r8
  void **v30; // rax
  void **v31; // r9
  void **v32; // r8
  _QWORD *v33; // rcx
  __int64 v34; // rax
  __int64 v35; // r12
  void **v36; // rdx
  unsigned __int64 v37; // r8
  void **v38; // rax
  _QWORD *v39; // rdx
  GamepadInterceptionHelper *v40; // rbx
  GamepadInterceptionHelper *v41; // rax
  GamepadInterceptionHelper *v42; // rdi
  __int64 v43; // r9
  _QWORD *v44; // rax
  _QWORD *v45; // rax
  unsigned int v46; // edx
  int v47; // eax
  int v48; // eax
  int v49; // [rsp+20h] [rbp-E0h]
  void **v50; // [rsp+28h] [rbp-D8h]
  GamepadInterceptionHelper *v51; // [rsp+30h] [rbp-D0h]
  _DWORD v52[4]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v53; // [rsp+80h] [rbp-80h]
  int v54; // [rsp+88h] [rbp-78h]
  __int64 v55; // [rsp+90h] [rbp-70h]
  __int16 v56; // [rsp+ACh] [rbp-54h]
  __int16 v57; // [rsp+CEh] [rbp-32h]
  wil::details::in1diag3 *retaddr; // [rsp+228h] [rbp+128h]

  LOBYTE(v49) = a4;
  v5 = a3;
  BYTE2(v49) = a3;
  v6 = a2;
  v8 = 0x100000001B3LL * (HIBYTE(a2) ^ (0x100000001B3LL * ((unsigned __int8)a2 ^ 0xCBF29CE484222325uLL)));
  v9 = *((_QWORD *)this + 17);
  v10 = *((_QWORD *)this + 14);
  v11 = *(void ***)(v10 + 16 * (v8 & v9) + 8);
  v12 = v11;
  v13 = (void **)*((_QWORD *)this + 12);
  if ( v11 == v13 )
  {
LABEL_5:
    v12 = 0LL;
  }
  else
  {
    while ( a2 != *((_WORD *)v12 + 8) )
    {
      if ( v12 == *(void ***)(v10 + 16 * (v8 & v9)) )
        goto LABEL_5;
      v12 = (void **)v12[1];
    }
  }
  if ( !v12 )
    v12 = (void **)*((_QWORD *)this + 12);
  if ( v5 )
  {
    if ( v12 != v13 )
      return;
    v14 = a4 ^ 1;
    BYTE1(v49) = a4 ^ 1;
    if ( v11 != v13 )
    {
      while ( a2 != *((_WORD *)v11 + 8) )
      {
        if ( v11 == *(void ***)(v10 + 16 * (v8 & v9)) )
        {
          v13 = v11;
          v50 = v11;
          goto LABEL_16;
        }
        v11 = (void **)v11[1];
      }
      *((_BYTE *)v11 + 18) = a4;
      goto LABEL_60;
    }
    v11 = (void **)*((_QWORD *)this + 12);
    v50 = v11;
LABEL_16:
    if ( *((_QWORD *)this + 13) == 0xAAAAAAAAAAAAAAALL )
      std::_Xlength_error("unordered_map/set too long");
    v15 = operator new(0x18uLL);
    v15[8] = v6;
    *((_BYTE *)v15 + 18) = v49;
    v16 = (char *)this + 88;
    v17 = *((float *)this + 22);
    v18 = *((_QWORD *)this + 13) + 1LL;
    if ( v18 < 0 )
      v19 = (float)(v18 & 1 | (unsigned int)((unsigned __int64)v18 >> 1))
          + (float)(v18 & 1 | (unsigned int)((unsigned __int64)v18 >> 1));
    else
      v19 = (float)(int)v18;
    v20 = *((_QWORD *)this + 18);
    if ( (v20 & 0x8000000000000000uLL) != 0LL )
    {
      v22 = *((_QWORD *)this + 18) & 1LL | (v20 >> 1);
      v21 = (float)(int)v22 + (float)(int)v22;
    }
    else
    {
      v21 = (float)(int)v20;
    }
    if ( (float)(v19 / v21) <= v17 )
    {
      v31 = (void **)((char *)this + 96);
      v28 = (__int64 *)((char *)this + 112);
      v27 = (_QWORD *)((char *)this + 136);
    }
    else
    {
      v23 = o_ceilf_0(v19 / v17);
      v24 = 0LL;
      if ( v23 >= 9.223372e18 )
      {
        v23 = v23 - 9.223372e18;
        if ( v23 < 9.223372e18 )
          v24 = 0x8000000000000000uLL;
      }
      v25 = v24 + (unsigned int)(int)v23;
      v26 = 8LL;
      if ( v25 > 8 )
        v26 = v25;
      if ( v20 < v26 )
      {
        if ( v20 >= 0x200 || (v20 *= 8LL, v20 < v26) )
          v20 = v26;
      }
      std::_Hash<std::_Umap_traits<unsigned short,ControllerProcessor::ActiveKeyProperties,std::_Uhash_compare<unsigned short,std::hash<unsigned short>,std::equal_to<unsigned short>>,std::allocator<std::pair<unsigned short const,ControllerProcessor::ActiveKeyProperties>>,0>>::_Forced_rehash(
        (char *)this + 88,
        v20);
      v16 = (char *)this + 88;
      v27 = (_QWORD *)((char *)this + 136);
      v28 = (__int64 *)((char *)this + 112);
      v29 = *((_QWORD *)this + 14);
      v30 = *(void ***)(v29 + 16 * (v8 & *((_QWORD *)this + 17)) + 8);
      v31 = (void **)((char *)this + 96);
      v11 = (void **)*((_QWORD *)this + 12);
      if ( v30 == v11 )
      {
        v50 = (void **)*((_QWORD *)this + 12);
        v13 = v50;
      }
      else
      {
        v32 = *(void ***)(v29 + 16 * (v8 & *((_QWORD *)this + 17)));
        while ( 1 )
        {
          v11 = v30;
          if ( v15[8] == *((_WORD *)v30 + 8) )
            break;
          if ( v30 == v32 )
          {
            v50 = v30;
            v13 = v30;
            goto LABEL_43;
          }
          v30 = (void **)v30[1];
        }
        v11 = (void **)*v30;
        v50 = (void **)*v30;
        v13 = (void **)*v30;
      }
    }
LABEL_43:
    v33 = v11[1];
    ++*((_QWORD *)v16 + 2);
    *(_QWORD *)v15 = v13;
    *((_QWORD *)v15 + 1) = v33;
    *v33 = v15;
    v11[1] = v15;
    v34 = *v28;
    v35 = 2 * (*v27 & v8);
    v36 = *(void ***)(*v28 + 8 * v35);
    if ( v36 == *v31 )
    {
      *(_QWORD *)(v34 + 8 * v35) = v15;
LABEL_48:
      *(_QWORD *)(v34 + 8 * v35 + 8) = v15;
      goto LABEL_49;
    }
    if ( v36 == v50 )
    {
      *(_QWORD *)(v34 + 8 * v35) = v15;
    }
    else if ( *(_QWORD **)(v34 + 8 * v35 + 8) == v33 )
    {
      goto LABEL_48;
    }
LABEL_49:
    v14 = BYTE1(v49);
    v5 = BYTE2(v49);
    goto LABEL_60;
  }
  if ( v12 == v13 )
    return;
  v14 = *((_BYTE *)v12 + 18) == 0;
  v37 = 2
      * ((0x100000001B3LL
        * (*((unsigned __int8 *)v12 + 17) ^ (0x100000001B3LL * (*((unsigned __int8 *)v12 + 16) ^ 0xCBF29CE484222325uLL)))) & v9);
  v38 = *(void ***)(v10 + 8 * v37);
  if ( *(void ***)(v10 + 8 * v37 + 8) == v12 )
  {
    if ( v38 == v12 )
      *(_QWORD *)(v10 + 8 * v37) = v13;
    else
      v13 = (void **)v12[1];
    *(_QWORD *)(v10 + 8 * v37 + 8) = v13;
  }
  else if ( v38 == v12 )
  {
    *(_QWORD *)(v10 + 8 * v37) = *v12;
  }
  v39 = *v12;
  --*((_QWORD *)this + 13);
  *(_QWORD *)v12[1] = v39;
  v39[1] = v12[1];
  operator delete(v12, (const struct std::nothrow_t *)0x18);
LABEL_60:
  if ( v14 )
  {
    v40 = ISMStatics::s_gamepadInterceptionHelper;
    if ( !ISMStatics::s_gamepadInterceptionHelper )
    {
      v51 = 0LL;
      v41 = (GamepadInterceptionHelper *)operator new(0x68uLL, (const struct std::nothrow_t *)&std::nothrow);
      v42 = v41;
      if ( v41 )
      {
        *((_DWORD *)v41 + 3) = 1;
        *(_QWORD *)v41 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IUnknown>::`vftable';
        if ( Microsoft::WRL::Details::ModuleBase::module_ )
          (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                               + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
        *(_QWORD *)v42 = &GamepadInterceptionHelper::`vftable';
        *((_QWORD *)v42 + 2) = 0LL;
        *((_QWORD *)v42 + 3) = 0LL;
        *((_QWORD *)v42 + 4) = 0LL;
        *((_QWORD *)v42 + 5) = 0LL;
        *((_QWORD *)v42 + 6) = 0LL;
        *((_QWORD *)v42 + 7) = 0LL;
        *((_QWORD *)v42 + 8) = 0LL;
        *((_QWORD *)v42 + 9) = 0LL;
        *((_QWORD *)v42 + 10) = 0LL;
        v44 = operator new(0x28uLL);
        *v44 = v44;
        v44[1] = v44;
        v44[2] = v44;
        *((_WORD *)v44 + 12) = 257;
        *((_QWORD *)v42 + 9) = v44;
        *((_QWORD *)v42 + 11) = 0LL;
        *((_QWORD *)v42 + 12) = 0LL;
        v45 = operator new(0x20uLL);
        *v45 = v45;
        v45[1] = v45;
        v45[2] = v45;
        *((_WORD *)v45 + 12) = 257;
        *((_QWORD *)v42 + 11) = v45;
        (*(void (__fastcall **)(GamepadInterceptionHelper *))(*(_QWORD *)v42 + 8LL))(v42);
        v51 = v42;
        (*(void (__fastcall **)(GamepadInterceptionHelper *))(*(_QWORD *)v42 + 16LL))(v42);
        v43 = 0LL;
      }
      else
      {
        v43 = 2147942414LL;
      }
      if ( (int)v43 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x19,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\gamepadinterceptionhelper\\gamepadinterceptionhelper.cpp",
          (const char *)v43,
          v49);
      v40 = v51;
      ISMStatics::s_gamepadInterceptionHelper = v51;
    }
    if ( *((_QWORD *)v40 + 2) )
    {
      GamepadInterceptionHelper::InterceptGamepadInput(v40, v6, v5 != 1);
    }
    else
    {
      memset_0(v52, 0, 0x170uLL);
      v54 = 368;
      v52[0] = 4;
      v52[2] = *((_DWORD *)this + 39);
      v53 = *((_QWORD *)this + 20);
      v55 = *((_QWORD *)this + 21);
      v57 = 64;
      v56 = v6;
      if ( !v5 )
        v57 = 65;
      if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_GamepadVKeyRoutingOptIn>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_GamepadVKeyRoutingOptIn>::GetImpl'::`2'::impl) )
      {
        if ( v6 == 7
          || IsEdition(253345LL)
          || *((_BYTE *)ISMStatics::GetControllerNavigationManager() + 228)
          || (v46 = *((_DWORD *)this + 1953)) != 0
          && GamepadInterceptionHelper::IsProcessSubscribedToGamepadEvents(v40, v46) )
        {
          v47 = KeyboardInjectionDevice::Inject((ControllerProcessor *)((char *)this + 5952), (struct InputInfo *)v52);
          if ( v47 < 0 )
            wil::details::in1diag3::FailFast_Hr(
              retaddr,
              (void *)0xA23,
              (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\control"
                            "lerprocessor.cpp",
              (const char *)(unsigned int)v47,
              v49);
        }
      }
      else if ( v6 == 7 || IsEdition(253345LL) || *((_BYTE *)ISMStatics::GetControllerNavigationManager() + 228) )
      {
        v48 = KeyboardInjectionDevice::Inject((ControllerProcessor *)((char *)this + 5952), (struct InputInfo *)v52);
        if ( v48 < 0 )
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0xA2F,
            (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllerprocessor.cpp",
            (const char *)(unsigned int)v48,
            v49);
      }
    }
  }
}
