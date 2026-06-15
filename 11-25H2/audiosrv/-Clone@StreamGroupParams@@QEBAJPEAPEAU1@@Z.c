/*
 * XREFs of ?Clone@StreamGroupParams@@QEBAJPEAPEAU1@@Z @ 0x180026CA0
 * Callers:
 *     ?SaveStreamGroupCreationParameters@CAudioStream@@UEAAJPEAUStreamGroupParams@@PEAUMODE_PARAMS@@@Z @ 0x1800268E0 (-SaveStreamGroupCreationParameters@CAudioStream@@UEAAJPEAUStreamGroupParams@@PEAUMODE_PARAMS@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001AC8C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?make_cotaskmem_string_nothrow@wil@@YA@PEBG_K@Z @ 0x180027040 (-make_cotaskmem_string_nothrow@wil@@YA@PEBG_K@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1800271C8 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$.c)
 *     ?reset@?$unique_ptr@UKSMULTIPLE_ITEM@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@QEAAXPEAUKSMULTIPLE_ITEM@@@Z @ 0x1800271EC (-reset@-$unique_ptr@UKSMULTIPLE_ITEM@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@YAX0@Z@wil.c)
 *     ??1?$unique_ptr@UStreamGroupParams@@U?$default_delete@UStreamGroupParams@@@std@@@std@@QEAA@XZ @ 0x180027248 (--1-$unique_ptr@UStreamGroupParams@@U-$default_delete@UStreamGroupParams@@@std@@@std@@QEAA@XZ.c)
 *     ??4?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x18005563C (--4-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$.c)
 *     ??1last_error_context@wil@@QEAA@XZ @ 0x180060E88 (--1last_error_context@wil@@QEAA@XZ.c)
 *     ??0last_error_context@wil@@QEAA@XZ @ 0x180065D1C (--0last_error_context@wil@@QEAA@XZ.c)
 *     ??$make_unique_string@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@0@PEBG_K@Z @ 0x1800825D8 (--$make_unique_string@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTa.c)
 *     ?_Clear_and_reserve_geometric@?$vector@UAudioEffectState@CProcessingModeParameters@@V?$allocator@UAudioEffectState@CProcessingModeParameters@@@std@@@std@@AEAAX_K@Z @ 0x18009F098 (-_Clear_and_reserve_geometric@-$vector@UAudioEffectState@CProcessingModeParameters@@V-$allocator.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800A7FC8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x1800A8BC4 (memset_0.c)
 *     memcpy_0 @ 0x1800ABC38 (memcpy_0.c)
 *     memmove_0 @ 0x18015E888 (memmove_0.c)
 */

// Hidden C++ exception states: #wind=3 #try_helpers=1
__int64 __fastcall StreamGroupParams::Clone(StreamGroupParams *this, struct StreamGroupParams **a2)
{
  struct StreamGroupParams **v2; // r12
  void *v4; // r15
  __int64 v5; // rdi
  void *v6; // rax
  void *v7; // r14
  char *v9; // r13
  void **v10; // r14
  char *v11; // rdi
  unsigned __int64 v12; // r15
  char *v13; // rcx
  unsigned __int64 v14; // r12
  char *v15; // rbx
  void *v16; // rbx
  char *v17; // rax
  char *v18; // rsi
  char *v19; // rdi
  char *v20; // rdi
  size_t v21; // rbx
  int v22[2]; // [rsp+20h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  LPVOID pv; // [rsp+70h] [rbp+8h] BYREF
  struct StreamGroupParams **v25; // [rsp+78h] [rbp+10h]
  void *Src; // [rsp+80h] [rbp+18h] BYREF
  void *v27; // [rsp+88h] [rbp+20h] BYREF

  v25 = a2;
  v2 = a2;
  wil::make_cotaskmem_string_nothrow((wil *)&pv, *(const unsigned __int16 **)this, 0xFFFFFFFFFFFFFFFFuLL);
  v4 = pv;
  if ( pv )
  {
    v5 = *(unsigned __int16 *)(*((_QWORD *)this + 2) + 16LL);
    v6 = CoTaskMemAlloc(v5 + 18);
    v7 = v6;
    v27 = v6;
    if ( v6 )
    {
      memcpy_0(v6, *((const void **)this + 2), v5 + 18);
      v17 = (char *)operator new(0x60uLL, (const struct std::nothrow_t *)&std::nothrow);
      v18 = v17;
      Src = v17;
      if ( v17 )
      {
        memset_0(v17, 0, 0x60uLL);
        *(_QWORD *)v18 = 0LL;
        *((_QWORD *)v18 + 2) = 0LL;
        *((_QWORD *)v18 + 7) = 0LL;
        *((_QWORD *)v18 + 8) = 0LL;
        *((_QWORD *)v18 + 9) = 0LL;
        *((_QWORD *)v18 + 10) = 0LL;
        v18[88] = 0;
      }
      else
      {
        v18 = 0LL;
      }
      *(_QWORD *)v22 = v18;
      if ( v18 )
      {
        pv = 0LL;
        CoTaskMemFree(*(LPVOID *)v18);
        *(_QWORD *)v18 = v4;
        v18[49] = *((_BYTE *)this + 49);
        v27 = 0LL;
        CoTaskMemFree(*((LPVOID *)v18 + 2));
        *((_QWORD *)v18 + 2) = v7;
        *((_QWORD *)v18 + 3) = *((_QWORD *)this + 3);
        *((_OWORD *)v18 + 2) = *((_OWORD *)this + 2);
        v18[48] = *((_BYTE *)this + 48);
        v18[50] = *((_BYTE *)this + 50);
        *((_DWORD *)v18 + 2) = *((_DWORD *)this + 2);
        v9 = (char *)this + 56;
        v10 = (void **)(v18 + 56);
        if ( v18 + 56 != (char *)this + 56 )
        {
          v11 = *(char **)v9;
          Src = v11;
          v12 = 0xCCCCCCCCCCCCCCCDuLL * ((__int64)(*((_QWORD *)this + 8) - (_QWORD)v11) >> 2);
          v13 = (char *)*v10;
          if ( v12 > 0xCCCCCCCCCCCCCCCDuLL * ((__int64)(*((_QWORD *)v18 + 9) - *((_QWORD *)v18 + 7)) >> 2) )
          {
            std::vector<CProcessingModeParameters::AudioEffectState>::_Clear_and_reserve_geometric(
              v18 + 56,
              0xCCCCCCCCCCCCCCCDuLL * ((__int64)(*((_QWORD *)this + 8) - (_QWORD)v11) >> 2));
            v19 = (char *)*v10;
            memmove_0(*v10, Src, 20 * v12);
            *((_QWORD *)v18 + 8) = &v19[20 * v12];
          }
          else
          {
            v14 = 0xCCCCCCCCCCCCCCCDuLL * ((__int64)(*((_QWORD *)v18 + 8) - (_QWORD)v13) >> 2);
            if ( v12 > v14 )
            {
              memmove_0(v13, v11, 4 * ((__int64)(*((_QWORD *)v18 + 8) - (_QWORD)v13) >> 2));
              Src = &v11[20 * v14];
              v20 = (char *)*((_QWORD *)v18 + 8);
              v21 = 20 * (v12 - v14);
              memmove_0(v20, Src, v21);
              *((_QWORD *)v18 + 8) = &v20[v21];
            }
            else
            {
              v15 = &v13[4 * ((__int64)(*((_QWORD *)this + 8) - (_QWORD)v11) >> 2)];
              memmove_0(v13, v11, 4 * ((__int64)(*((_QWORD *)v9 + 1) - (_QWORD)v11) >> 2));
              *((_QWORD *)v18 + 8) = v15;
            }
            v2 = v25;
          }
        }
        v18[88] = v9[32];
        if ( *((_QWORD *)v9 + 3) )
        {
          wil::make_unique_string<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>>(&Src);
          wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::operator=(
            v18 + 80,
            &Src);
          if ( Src )
            CoTaskMemFree(Src);
        }
        else
        {
          v16 = (void *)*((_QWORD *)v18 + 10);
          if ( v16 )
          {
            wil::last_error_context::last_error_context((wil::last_error_context *)&pv);
            CoTaskMemFree(v16);
            wil::last_error_context::~last_error_context((wil::last_error_context *)&pv);
          }
          *((_QWORD *)v18 + 10) = 0LL;
        }
        *v2 = (struct StreamGroupParams *)v18;
        return 0LL;
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xBE,
          (int)"avcore\\audiocore\\server\\AudioSrv\\inc\\CoreAudioInterfacesP.h",
          (const char *)0x8007000ELL);
        std::unique_ptr<StreamGroupParams>::~unique_ptr<StreamGroupParams>(v22);
        wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
          &v27,
          0LL);
        wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>(&pv);
        return 2147942414LL;
      }
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xBA,
        (int)"avcore\\audiocore\\server\\AudioSrv\\inc\\CoreAudioInterfacesP.h",
        (const char *)0x8007000ELL);
      CoTaskMemFree(v4);
      return 2147942414LL;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xB6,
      (int)"avcore\\audiocore\\server\\AudioSrv\\inc\\CoreAudioInterfacesP.h",
      (const char *)0x8007000ELL);
    return 2147942414LL;
  }
}
