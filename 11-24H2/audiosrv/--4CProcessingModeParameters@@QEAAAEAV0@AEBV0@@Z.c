/*
 * XREFs of ??4CProcessingModeParameters@@QEAAAEAV0@AEBV0@@Z @ 0x180019DC0
 * Callers:
 *     ?SetProcessingModeParameters@CAudioStream@@QEAAJPEAVCProcessingModeParameters@@@Z @ 0x1800199D0 (-SetProcessingModeParameters@CAudioStream@@QEAAJPEAVCProcessingModeParameters@@@Z.c)
 *     ?RuntimeClassInitialize@CBaseStreamGroupProxy@@QEAAJPEAUEndpointCharacteristicsDescriptor@@PEBUStreamGroupParams@@K@Z @ 0x180028DA8 (-RuntimeClassInitialize@CBaseStreamGroupProxy@@QEAAJPEAUEndpointCharacteristicsDescriptor@@PEBUS.c)
 *     ?SetProcessingModeParameters@CBaseStreamGroupProxy@@UEAAJPEAVCProcessingModeParameters@@@Z @ 0x1800F8800 (-SetProcessingModeParameters@CBaseStreamGroupProxy@@UEAAJPEAVCProcessingModeParameters@@@Z.c)
 *     ?UpdatePMPOnStreamGroup@CSharedStreamGroupProxy@@UEAAJAEBVCProcessingModeParameters@@@Z @ 0x1800F8B50 (-UpdatePMPOnStreamGroup@CSharedStreamGroupProxy@@UEAAJAEBVCProcessingModeParameters@@@Z.c)
 * Callees:
 *     ??4?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x18004A2E8 (--4-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$.c)
 *     ??1last_error_context@wil@@QEAA@XZ @ 0x180053478 (--1last_error_context@wil@@QEAA@XZ.c)
 *     ??0last_error_context@wil@@QEAA@XZ @ 0x1800592FC (--0last_error_context@wil@@QEAA@XZ.c)
 *     ??$make_unique_string@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@0@PEBG_K@Z @ 0x18006F918 (--$make_unique_string@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTa.c)
 *     ?_Clear_and_reserve_geometric@?$vector@UAudioEffectState@CProcessingModeParameters@@V?$allocator@UAudioEffectState@CProcessingModeParameters@@@std@@@std@@AEAAX_K@Z @ 0x18009B988 (-_Clear_and_reserve_geometric@-$vector@UAudioEffectState@CProcessingModeParameters@@V-$allocator.c)
 *     memmove_0 @ 0x180167F48 (memmove_0.c)
 */

void **__fastcall CProcessingModeParameters::operator=(void **a1, const void **a2)
{
  char *v4; // r12
  char *v5; // rdi
  unsigned __int64 v6; // r14
  unsigned __int64 v7; // r15
  char *v8; // rdx
  char *v9; // rbx
  LPVOID pv; // [rsp+50h] [rbp+8h] BYREF

  if ( a1 != (void **)a2 )
  {
    v4 = (char *)*a2;
    v5 = (char *)*a1;
    v6 = 0xCCCCCCCCCCCCCCCDuLL * (((_BYTE *)a2[1] - (_BYTE *)*a2) >> 2);
    if ( v6 > 0xCCCCCCCCCCCCCCCDuLL * (((_BYTE *)a1[2] - (_BYTE *)*a1) >> 2) )
    {
      std::vector<CProcessingModeParameters::AudioEffectState>::_Clear_and_reserve_geometric(
        a1,
        0xCCCCCCCCCCCCCCCDuLL * (((_BYTE *)a2[1] - (_BYTE *)*a2) >> 2));
      v5 = (char *)*a1;
    }
    else
    {
      v7 = 0xCCCCCCCCCCCCCCCDuLL * (((_BYTE *)a1[1] - v5) >> 2);
      if ( v6 > v7 )
      {
        memmove_0(*a1, *a2, 4 * (((_BYTE *)a1[1] - v5) >> 2));
        v5 = (char *)a1[1];
        v8 = &v4[20 * v7];
        v6 -= v7;
        goto LABEL_5;
      }
    }
    v8 = v4;
LABEL_5:
    memmove_0(v5, v8, 20 * v6);
    a1[1] = &v5[20 * v6];
  }
  *((_BYTE *)a1 + 32) = *((_BYTE *)a2 + 32);
  if ( a2[3] )
  {
    wil::make_unique_string<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>>(&pv);
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::operator=(
      a1 + 3,
      &pv);
    if ( pv )
      CoTaskMemFree(pv);
  }
  else
  {
    v9 = (char *)a1[3];
    if ( v9 )
    {
      wil::last_error_context::last_error_context((wil::last_error_context *)&pv);
      CoTaskMemFree(v9);
      wil::last_error_context::~last_error_context((wil::last_error_context *)&pv);
    }
    a1[3] = 0LL;
  }
  return a1;
}
