/*
 * XREFs of ?GetServiceProvider@CAPOProcessingHostObject@@QEAAJPEAPEAUIServiceProvider@@@Z @ 0x140037498
 * Callers:
 *     ?GetServiceProviderForAPO@CAPOProcessingHost@@UEAAJPEAUIAudioProcessingObject@@PEAPEAUIServiceProvider@@@Z @ 0x140037350 (-GetServiceProviderForAPO@CAPOProcessingHost@@UEAAJPEAUIAudioProcessingObject@@PEAPEAUIServicePr.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14000ABF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MakeAndInitialize@VCAPOServiceProvider@@UIServiceProvider@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIServiceProvider@@@Z @ 0x140037510 (--$MakeAndInitialize@VCAPOServiceProvider@@UIServiceProvider@@$$V@Details@WRL@Microsoft@@YAJPEAP.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAPOProcessingHostObject::GetServiceProvider(
        CAPOProcessingHostObject *this,
        struct IServiceProvider **a2)
{
  struct IServiceProvider **v3; // rdi
  int v4; // eax
  unsigned int v5; // ebx
  struct IServiceProvider *v6; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = (struct IServiceProvider **)((char *)this + 16);
  if ( *((_QWORD *)this + 2)
    || (*v3 = 0LL,
        v4 = Microsoft::WRL::Details::MakeAndInitialize<CAPOServiceProvider,IServiceProvider,>((char *)this + 16),
        v5 = v4,
        v4 >= 0) )
  {
    v6 = *v3;
    *a2 = *v3;
    ((void (__fastcall *)(struct IServiceProvider *))v6->lpVtbl->AddRef)(v6);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x48,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\apoprocessinghostobject.cpp",
      (const char *)(unsigned int)v4);
    return v5;
  }
}
