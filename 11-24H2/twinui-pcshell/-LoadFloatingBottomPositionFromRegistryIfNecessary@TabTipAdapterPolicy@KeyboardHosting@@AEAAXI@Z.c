/*
 * XREFs of ?LoadFloatingBottomPositionFromRegistryIfNecessary@TabTipAdapterPolicy@KeyboardHosting@@AEAAXI@Z @ 0x18014002C
 * Callers:
 *     ?GetPositionAndSizeOptions@TabTipAdapterPolicy@KeyboardHosting@@AEAAJPEAPEAU?$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Collections@Foundation@Windows@@@Z @ 0x18007EBC8 (-GetPositionAndSizeOptions@TabTipAdapterPolicy@KeyboardHosting@@AEAAJPEAPEAU-$IVectorView@UCoreK.c)
 *     ?VerifyInputAppRequestedShow@TabTipAdapterPolicy@KeyboardHosting@@UEAAJUCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@Windows@@IEPEAIPEAURect@Foundation@8@PEAE@Z @ 0x180255CA0 (-VerifyInputAppRequestedShow@TabTipAdapterPolicy@KeyboardHosting@@UEAAJUCoreKeyboardPositionAndS.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18004860C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Insert_node@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUhstring@winrt@@U12@@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBUhstring@winrt@@U12@@std@@PEAX@2@U?$_Tree_id@PEAU?$_Tree_node@U?$pair@$$CBUhstring@winrt@@U12@@std@@PEAX@std@@@2@QEAU32@@Z @ 0x18006B894 (-_Insert_node@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBUhstring@winrt@@U12@@std@@@std@@@std.c)
 *     ??$_Try_emplace@AEBI$$V@?$map@IV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$less@I@2@V?$allocator@U?$pair@$$CBIV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@2@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBIV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@PEAX@std@@_N@1@AEBI@Z @ 0x18014036C (--$_Try_emplace@AEBI$$V@-$map@IV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@U-$.c)
 *     ??$_Try_emplace@AEBI$$V@?$map@IURelativePositionOnScreen@KeyboardHosting@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIURelativePositionOnScreen@KeyboardHosting@@@std@@@4@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBIURelativePositionOnScreen@KeyboardHosting@@@std@@PEAX@std@@_N@1@AEBI@Z @ 0x18014046C (--$_Try_emplace@AEBI$$V@-$map@IURelativePositionOnScreen@KeyboardHosting@@U-$less@I@std@@V-$allo.c)
 *     ??$?0AEBUpiecewise_construct_t@std@@V?$tuple@AEBI@1@V?$tuple@$$V@1@@?$_Tree_temp_node@V?$allocator@U?$_Tree_node@U?$pair@$$CBIURelativePositionOnScreen@KeyboardHosting@@@std@@PEAX@std@@@std@@@std@@QEAA@AEAV?$allocator@U?$_Tree_node@U?$pair@$$CBIURelativePositionOnScreen@KeyboardHosting@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBIURelativePositionOnScreen@KeyboardHosting@@@std@@PEAX@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBI@1@$$QEAV?$tuple@$$V@1@@Z @ 0x180140580 (--$-0AEBUpiecewise_construct_t@std@@V-$tuple@AEBI@1@V-$tuple@$$V@1@@-$_Tree_temp_node@V-$allocat.c)
 *     ?_Throw_tree_length_error@std@@YAXXZ @ 0x180319DF4 (-_Throw_tree_length_error@std@@YAXXZ.c)
 *     ?Log_Win32@in1diag3@details@wil@@YAKPEAXIPEBDK@Z @ 0x180486DB4 (-Log_Win32@in1diag3@details@wil@@YAKPEAXIPEBDK@Z.c)
 */

void __fastcall KeyboardHosting::TabTipAdapterPolicy::LoadFloatingBottomPositionFromRegistryIfNecessary(
        KeyboardHosting::TabTipAdapterPolicy *this,
        unsigned int a2,
        __int64 a3,
        int a4)
{
  _QWORD *v4; // rdi
  __int64 v5; // r8
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 *v9; // r8
  __int64 *v10; // rcx
  __int64 *v11; // rax
  __int64 *v12; // r8
  __int64 *v13; // rcx
  __int64 *v14; // rax
  __int64 v15; // rax
  __int64 v16; // rsi
  __int64 inserted; // rax
  __int64 v18; // rax
  const WCHAR *v19; // r8
  unsigned int ValueW; // eax
  __int64 v21; // rdx
  __int64 v22; // rax
  const WCHAR *v23; // r8
  int v24; // ecx
  float v25; // xmm6_4
  float v26; // xmm6_4
  unsigned int pdwType; // [rsp+28h] [rbp-49h]
  DWORD v28[4]; // [rsp+48h] [rbp-29h] BYREF
  __int128 v29; // [rsp+58h] [rbp-19h] BYREF
  char v30[8]; // [rsp+68h] [rbp-9h] BYREF
  void *v31; // [rsp+70h] [rbp-1h]
  __int128 v32; // [rsp+78h] [rbp+7h]
  wil::details::in1diag3 *retaddr; // [rsp+D0h] [rbp+5Fh]
  int pvData; // [rsp+D8h] [rbp+67h] BYREF
  unsigned int v35; // [rsp+E0h] [rbp+6Fh] BYREF
  int v36; // [rsp+E8h] [rbp+77h] BYREF
  DWORD pcbData; // [rsp+F0h] [rbp+7Fh] BYREF

  v35 = a2;
  v4 = (_QWORD *)((char *)this + 824);
  v5 = *((_QWORD *)this + 103);
  v7 = v5;
  v8 = *(_QWORD *)(v5 + 8);
  v32 = (unsigned __int64)v8;
  while ( !*(_BYTE *)(v8 + 25) )
  {
    *(_QWORD *)&v32 = v8;
    if ( *(_DWORD *)(v8 + 28) < a2 )
    {
      v8 = *(_QWORD *)(v8 + 16);
      DWORD2(v32) = 0;
    }
    else
    {
      v7 = v8;
      DWORD2(v32) = 1;
      v8 = *(_QWORD *)v8;
    }
  }
  if ( *(_BYTE *)(v7 + 25) || a2 < *(_DWORD *)(v7 + 28) )
  {
    if ( v4[1] == 0x555555555555555LL )
      std::_Throw_tree_length_error();
    *(_QWORD *)&v29 = &v35;
    v15 = std::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<unsigned int const,KeyboardHosting::RelativePositionOnScreen>,void *>>>::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<unsigned int const,KeyboardHosting::RelativePositionOnScreen>,void *>>>(
            (unsigned int)v30,
            (_DWORD)v4,
            v5,
            a4,
            (__int64)&v29);
    v16 = *(_QWORD *)(v15 + 8);
    *(_QWORD *)(v15 + 8) = 0LL;
    if ( v31 )
      std::_Deallocate<16,0>(v31, (const struct std::nothrow_t *)0x30);
    v29 = v32;
    inserted = std::_Tree_val<std::_Tree_simple_types<std::pair<winrt::hstring const,winrt::hstring>>>::_Insert_node(
                 v4,
                 (__int64)&v29,
                 v16);
    a2 = v35;
    v7 = inserted;
  }
  if ( !*(_BYTE *)(v7 + 40) )
  {
    v9 = (__int64 *)*((_QWORD *)this + 9);
    v10 = v9;
    v11 = (__int64 *)v9[1];
    while ( !*((_BYTE *)v11 + 25) )
    {
      if ( *((_DWORD *)v11 + 8) < a2 )
      {
        v11 = (__int64 *)v11[2];
      }
      else
      {
        v10 = v11;
        v11 = (__int64 *)*v11;
      }
    }
    if ( v10 != v9 && !*((_BYTE *)v10 + 25) && a2 >= *((_DWORD *)v10 + 8) )
      goto LABEL_29;
    v12 = (__int64 *)*((_QWORD *)this + 11);
    v13 = v12;
    v14 = (__int64 *)v12[1];
    while ( !*((_BYTE *)v14 + 25) )
    {
      if ( *((_DWORD *)v14 + 8) < a2 )
      {
        v14 = (__int64 *)v14[2];
      }
      else
      {
        v13 = v14;
        v14 = (__int64 *)*v14;
      }
    }
    if ( v13 != v12 && !*((_BYTE *)v13 + 25) && a2 >= *((_DWORD *)v13 + 8) )
    {
LABEL_29:
      pvData = 0;
      pcbData = 4;
      v18 = std::map<unsigned int,std::wstring>::_Try_emplace<unsigned int const &,>((char *)this + 72, v30, &v35);
      v19 = (const WCHAR *)(*(_QWORD *)v18 + 40LL);
      if ( *(_QWORD *)(*(_QWORD *)v18 + 64LL) > 7uLL )
        v19 = *(const WCHAR **)v19;
      ValueW = RegGetValueW(
                 HKEY_CURRENT_USER,
                 L"SOFTWARE\\Microsoft\\TabletTip\\1.7",
                 v19,
                 0x10u,
                 0LL,
                 &pvData,
                 &pcbData);
      if ( ValueW )
      {
        if ( ValueW != 2 )
        {
          v21 = 2043LL;
LABEL_34:
          wil::details::in1diag3::Log_Win32(
            retaddr,
            (void *)v21,
            (unsigned int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapterpolicy.cpp",
            (const char *)ValueW,
            pdwType);
        }
      }
      else
      {
        if ( (unsigned int)pvData > *((_DWORD *)this + 27) )
          pvData = *((_DWORD *)this + 27);
        v36 = 0;
        v28[0] = 4;
        v22 = std::map<unsigned int,std::wstring>::_Try_emplace<unsigned int const &,>((char *)this + 88, v30, &v35);
        v23 = (const WCHAR *)(*(_QWORD *)v22 + 40LL);
        if ( *(_QWORD *)(*(_QWORD *)v22 + 64LL) > 7uLL )
          v23 = *(const WCHAR **)v23;
        ValueW = RegGetValueW(HKEY_CURRENT_USER, L"SOFTWARE\\Microsoft\\TabletTip\\1.7", v23, 0x10u, 0LL, &v36, v28);
        if ( ValueW )
        {
          if ( ValueW != 2 )
          {
            v21 = 2066LL;
            goto LABEL_34;
          }
        }
        else
        {
          v24 = *((_DWORD *)this + 27);
          if ( v36 > (unsigned int)v24 )
            v36 = *((_DWORD *)this + 27);
          v25 = (float)pvData / (float)v24;
          *(float *)(*(_QWORD *)std::map<unsigned int,KeyboardHosting::RelativePositionOnScreen>::_Try_emplace<unsigned int const &,>(
                                  v4,
                                  v30,
                                  &v35)
                   + 32LL) = v25;
          v26 = (float)v36 / (float)*((int *)this + 27);
          *(float *)(*(_QWORD *)std::map<unsigned int,KeyboardHosting::RelativePositionOnScreen>::_Try_emplace<unsigned int const &,>(
                                  v4,
                                  v30,
                                  &v35)
                   + 36LL) = v26;
          *(_BYTE *)(*(_QWORD *)std::map<unsigned int,KeyboardHosting::RelativePositionOnScreen>::_Try_emplace<unsigned int const &,>(
                                  v4,
                                  v30,
                                  &v35)
                   + 40LL) = 1;
        }
      }
    }
  }
}
