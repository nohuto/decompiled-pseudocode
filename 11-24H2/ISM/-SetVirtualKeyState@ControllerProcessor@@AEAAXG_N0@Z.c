/*
 * XREFs of ?SetVirtualKeyState@ControllerProcessor@@AEAAXG_N0@Z @ 0x180055FB0
 * Callers:
 *     ?SendGameControllerAsVirtualKeys@ControllerProcessor@@AEAAJXZ @ 0x1800558A0 (-SendGameControllerAsVirtualKeys@ControllerProcessor@@AEAAJXZ.c)
 *     ?TestThumbstickAxisAndSetVirtualKeyState@ControllerProcessor@@AEAAXMGG_N@Z @ 0x18005BB40 (-TestThumbstickAxisAndSetVirtualKeyState@ControllerProcessor@@AEAAXMGG_N@Z.c)
 *     ?SendGameControllerAsVirtualKeysForNavigation@ControllerProcessor@@AEAAJXZ @ 0x18017BD44 (-SendGameControllerAsVirtualKeysForNavigation@ControllerProcessor@@AEAAJXZ.c)
 * Callees:
 *     ?GetControllerNavigationManager@ISMStatics@@SAPEAVControllerNavigationManager@@XZ @ 0x1800245F0 (-GetControllerNavigationManager@ISMStatics@@SAPEAVControllerNavigationManager@@XZ.c)
 *     ?IsEdition@@YA_N_K@Z @ 0x180035D40 (-IsEdition@@YA_N_K@Z.c)
 *     ?Inject@KeyboardInjectionDevice@@QEAAJPEAUInputInfo@@@Z @ 0x18007E798 (-Inject@KeyboardInjectionDevice@@QEAAJPEAUInputInfo@@@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E71C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _o_ceilf_0 @ 0x18009D4C0 (_o_ceilf_0.c)
 *     memset_0 @ 0x18009D598 (memset_0.c)
 *     __security_check_cookie @ 0x18009D650 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009D758 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18009D79C (--2@YAPEAX_K@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18009E848 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?InterceptGamepadInput@GamepadInterceptionHelper@@QEAAXG_N@Z @ 0x180107FA8 (-InterceptGamepadInput@GamepadInterceptionHelper@@QEAAXG_N@Z.c)
 *     ?IsProcessSubscribedToGamepadEvents@GamepadInterceptionHelper@@QEAA_NK@Z @ 0x180108018 (-IsProcessSubscribedToGamepadEvents@GamepadInterceptionHelper@@QEAA_NK@Z.c)
 *     ?_Forced_rehash@?$_Hash@V?$_Umap_traits@GUActiveKeyProperties@ControllerProcessor@@V?$_Uhash_compare@GU?$hash@G@std@@U?$equal_to@G@2@@std@@V?$allocator@U?$pair@$$CBGUActiveKeyProperties@ControllerProcessor@@@std@@@4@$0A@@std@@@std@@IEAAX_K@Z @ 0x18017D2FC (-_Forced_rehash@-$_Hash@V-$_Umap_traits@GUActiveKeyProperties@ControllerProcessor@@V-$_Uhash_com.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=15
void __fastcall ControllerProcessor::SetVirtualKeyState(
        ControllerProcessor *this,
        unsigned __int16 a2,
        char a3,
        char a4)
{
  char v5; // r12
  int v6; // r15d
  ControllerProcessor *v7; // rsi
  __int64 v8; // r8
  __int64 v9; // r9
  void **v10; // rbx
  void **v11; // rcx
  void **v12; // r14
  char v13; // di
  char *v14; // r13
  void **v15; // r12
  _WORD *v16; // rsi
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
  _QWORD *v27; // r10
  unsigned __int64 v28; // r11
  __int64 *v29; // r8
  __int64 v30; // rdx
  void **v31; // rax
  void **v32; // r9
  void **v33; // rdx
  _QWORD *v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // rax
  void **v37; // r8
  unsigned __int64 v38; // r8
  void **v39; // rax
  _QWORD *v40; // rdx
  GamepadInterceptionHelper *v41; // rbx
  GamepadInterceptionHelper *v42; // rax
  GamepadInterceptionHelper *v43; // rdi
  __int64 v44; // r9
  _QWORD *v45; // rax
  _QWORD *v46; // rax
  unsigned int v47; // edx
  int v48; // eax
  int v49; // [rsp+20h] [rbp-E0h]
  GamepadInterceptionHelper *v50; // [rsp+28h] [rbp-D8h]
  unsigned __int64 v51; // [rsp+30h] [rbp-D0h]
  _DWORD v53[4]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v54; // [rsp+80h] [rbp-80h]
  int v55; // [rsp+88h] [rbp-78h]
  __int64 v56; // [rsp+90h] [rbp-70h]
  __int16 v57; // [rsp+ACh] [rbp-54h]
  __int16 v58; // [rsp+CEh] [rbp-32h]
  wil::details::in1diag3 *retaddr; // [rsp+228h] [rbp+128h]

  LOBYTE(v49) = a4;
  v5 = a3;
  BYTE2(v49) = a3;
  v6 = a2;
  v7 = this;
  v51 = 0x100000001B3LL * (HIBYTE(a2) ^ (0x100000001B3LL * ((unsigned __int8)a2 ^ 0xCBF29CE484222325uLL)));
  v8 = *((_QWORD *)this + 17);
  v9 = *((_QWORD *)this + 14);
  v10 = *(void ***)(v9 + 16 * (v51 & v8) + 8);
  v11 = v10;
  v12 = (void **)*((_QWORD *)v7 + 12);
  if ( v10 == v12 )
  {
LABEL_5:
    v11 = 0LL;
  }
  else
  {
    while ( a2 != *((_WORD *)v11 + 8) )
    {
      if ( v11 == *(void ***)(v9 + 16 * (v51 & v8)) )
        goto LABEL_5;
      v11 = (void **)v11[1];
    }
  }
  if ( !v11 )
    v11 = (void **)*((_QWORD *)v7 + 12);
  if ( v5 )
  {
    if ( v11 != v12 )
      return;
    v13 = a4 ^ 1;
    BYTE1(v49) = a4 ^ 1;
    v14 = (char *)v7 + 88;
    if ( v10 != v12 )
    {
      while ( a2 != *((_WORD *)v10 + 8) )
      {
        if ( v10 == *(void ***)(v9 + 16 * (v51 & v8)) )
        {
          v12 = v10;
          v15 = v10;
          goto LABEL_16;
        }
        v10 = (void **)v10[1];
      }
      *((_BYTE *)v10 + 18) = a4;
      goto LABEL_60;
    }
    v10 = (void **)*((_QWORD *)v7 + 12);
    v15 = v10;
LABEL_16:
    if ( *((_QWORD *)v7 + 13) == 0xAAAAAAAAAAAAAAALL )
      std::_Xlength_error("unordered_map/set too long");
    v16 = operator new(0x18uLL);
    v16[8] = v6;
    *((_BYTE *)v16 + 18) = v49;
    v17 = *(float *)v14;
    v18 = *((_QWORD *)v14 + 2) + 1LL;
    if ( v18 < 0 )
      v19 = (float)(v18 & 1 | (unsigned int)((unsigned __int64)v18 >> 1))
          + (float)(v18 & 1 | (unsigned int)((unsigned __int64)v18 >> 1));
    else
      v19 = (float)(int)v18;
    v20 = *((_QWORD *)v14 + 7);
    if ( (v20 & 0x8000000000000000uLL) != 0LL )
    {
      v22 = *((_QWORD *)v14 + 7) & 1LL | (v20 >> 1);
      v21 = (float)(int)v22 + (float)(int)v22;
    }
    else
    {
      v21 = (float)(int)v20;
    }
    if ( (float)(v19 / v21) <= v17 )
    {
      v32 = (void **)((char *)this + 96);
      v29 = (__int64 *)((char *)this + 112);
      v27 = (_QWORD *)((char *)this + 136);
      v28 = v51;
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
        v14,
        v20);
      v27 = v14 + 48;
      v28 = v51;
      v29 = (__int64 *)(v14 + 24);
      v30 = *((_QWORD *)v14 + 3);
      v31 = *(void ***)(v30 + 16 * (v51 & *((_QWORD *)v14 + 6)) + 8);
      v32 = (void **)(v14 + 8);
      v10 = (void **)*((_QWORD *)v14 + 1);
      if ( v31 == v10 )
      {
        v15 = (void **)*((_QWORD *)v14 + 1);
        v12 = v15;
      }
      else
      {
        v33 = *(void ***)(v30 + 16 * (v51 & *((_QWORD *)v14 + 6)));
        while ( 1 )
        {
          v10 = v31;
          if ( v16[8] == *((_WORD *)v31 + 8) )
            break;
          if ( v31 == v33 )
          {
            v15 = v31;
            v12 = v31;
            goto LABEL_43;
          }
          v31 = (void **)v31[1];
        }
        v10 = (void **)*v31;
        v15 = (void **)*v31;
        v12 = (void **)*v31;
      }
    }
LABEL_43:
    v34 = v10[1];
    ++*((_QWORD *)v14 + 2);
    *(_QWORD *)v16 = v12;
    *((_QWORD *)v16 + 1) = v34;
    *v34 = v16;
    v10[1] = v16;
    v35 = *v29;
    v36 = 2 * (v28 & *v27);
    v37 = *(void ***)(*v29 + 16 * (v28 & *v27));
    if ( v37 == *v32 )
    {
      *(_QWORD *)(v35 + 16 * (v28 & *v27)) = v16;
LABEL_48:
      *(_QWORD *)(v35 + 8 * v36 + 8) = v16;
      goto LABEL_49;
    }
    if ( v37 == v15 )
    {
      *(_QWORD *)(v35 + 16 * (v28 & *v27)) = v16;
    }
    else if ( *(_QWORD **)(v35 + 16 * (v28 & *v27) + 8) == v34 )
    {
      goto LABEL_48;
    }
LABEL_49:
    v7 = this;
    v13 = BYTE1(v49);
    v5 = BYTE2(v49);
    goto LABEL_60;
  }
  if ( v11 == v12 )
    return;
  v13 = *((_BYTE *)v11 + 18) == 0;
  v38 = 2
      * ((0x100000001B3LL
        * (*((unsigned __int8 *)v11 + 17) ^ (0x100000001B3LL * (*((unsigned __int8 *)v11 + 16) ^ 0xCBF29CE484222325uLL)))) & v8);
  v39 = *(void ***)(v9 + 8 * v38);
  if ( *(void ***)(v9 + 8 * v38 + 8) == v11 )
  {
    if ( v39 == v11 )
      *(_QWORD *)(v9 + 8 * v38) = v12;
    else
      v12 = (void **)v11[1];
    *(_QWORD *)(v9 + 8 * v38 + 8) = v12;
  }
  else if ( v39 == v11 )
  {
    *(_QWORD *)(v9 + 8 * v38) = *v11;
  }
  v40 = *v11;
  --*((_QWORD *)v7 + 13);
  *(_QWORD *)v11[1] = v40;
  v40[1] = v11[1];
  operator delete(v11, (const struct std::nothrow_t *)0x18);
LABEL_60:
  if ( v13 )
  {
    v41 = ISMStatics::s_gamepadInterceptionHelper;
    if ( !ISMStatics::s_gamepadInterceptionHelper )
    {
      v50 = 0LL;
      v42 = (GamepadInterceptionHelper *)operator new(0x68uLL, (const struct std::nothrow_t *)&std::nothrow);
      v43 = v42;
      if ( v42 )
      {
        *((_DWORD *)v42 + 3) = 1;
        *(_QWORD *)v42 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IUnknown>::`vftable';
        if ( Microsoft::WRL::Details::ModuleBase::module_ )
          (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                               + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
        *(_QWORD *)v43 = &GamepadInterceptionHelper::`vftable';
        *((_QWORD *)v43 + 2) = 0LL;
        *((_QWORD *)v43 + 3) = 0LL;
        *((_QWORD *)v43 + 4) = 0LL;
        *((_QWORD *)v43 + 5) = 0LL;
        *((_QWORD *)v43 + 6) = 0LL;
        *((_QWORD *)v43 + 7) = 0LL;
        *((_QWORD *)v43 + 8) = 0LL;
        *((_QWORD *)v43 + 9) = 0LL;
        *((_QWORD *)v43 + 10) = 0LL;
        v45 = operator new(0x28uLL);
        *v45 = v45;
        v45[1] = v45;
        v45[2] = v45;
        *((_WORD *)v45 + 12) = 257;
        *((_QWORD *)v43 + 9) = v45;
        *((_QWORD *)v43 + 11) = 0LL;
        *((_QWORD *)v43 + 12) = 0LL;
        v46 = operator new(0x20uLL);
        *v46 = v46;
        v46[1] = v46;
        v46[2] = v46;
        *((_WORD *)v46 + 12) = 257;
        *((_QWORD *)v43 + 11) = v46;
        (*(void (__fastcall **)(GamepadInterceptionHelper *))(*(_QWORD *)v43 + 8LL))(v43);
        v50 = v43;
        (*(void (__fastcall **)(GamepadInterceptionHelper *))(*(_QWORD *)v43 + 16LL))(v43);
        v44 = 0LL;
      }
      else
      {
        v44 = 2147942414LL;
      }
      if ( (int)v44 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x19,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\gamepadinterceptionhelper\\gamepadinterceptionhelper.cpp",
          (const char *)v44,
          v49);
      v41 = v50;
      ISMStatics::s_gamepadInterceptionHelper = v50;
    }
    if ( *((_QWORD *)v41 + 2) )
    {
      GamepadInterceptionHelper::InterceptGamepadInput(v41, v6, v5 != 1);
    }
    else
    {
      memset_0(v53, 0, 0x170uLL);
      v55 = 368;
      v53[0] = 4;
      v53[2] = *((_DWORD *)v7 + 39);
      v54 = *((_QWORD *)v7 + 20);
      v56 = *((_QWORD *)v7 + 21);
      v58 = 64;
      v57 = v6;
      if ( !v5 )
        v58 = 65;
      if ( v6 == 7
        || IsEdition(253345LL)
        || *((_BYTE *)ISMStatics::GetControllerNavigationManager() + 228)
        || (v47 = *((_DWORD *)v7 + 1951)) != 0
        && GamepadInterceptionHelper::IsProcessSubscribedToGamepadEvents(v41, v47) )
      {
        v48 = KeyboardInjectionDevice::Inject((ControllerProcessor *)((char *)v7 + 5952), (struct InputInfo *)v53);
        if ( v48 < 0 )
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0xA05,
            (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllerprocessor.cpp",
            (const char *)(unsigned int)v48,
            v49);
      }
    }
  }
}
