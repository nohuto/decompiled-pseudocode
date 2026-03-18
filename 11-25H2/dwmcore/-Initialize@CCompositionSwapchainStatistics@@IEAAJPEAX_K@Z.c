/*
 * XREFs of ?Initialize@CCompositionSwapchainStatistics@@IEAAJPEAX_K@Z @ 0x1800FF164
 * Callers:
 *     ?Create@CCompositionSwapchainStatistics@@SAJPEBVCCompositionSurfaceInfo@@PEAX_KPEAPEAV1@@Z @ 0x180100840 (-Create@CCompositionSwapchainStatistics@@SAJPEBVCCompositionSurfaceInfo@@PEAX_KPEAPEAV1@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x1800FFE90 (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CCompositionSwapchainStatistics::Initialize(
        CCompositionSwapchainStatistics *this,
        void *a2,
        __int64 a3)
{
  char *v3; // rbx
  unsigned int v7; // edi
  __int64 v8; // rcx
  int v9; // eax
  char *v11; // [rsp+58h] [rbp+10h] BYREF

  v3 = 0LL;
  v11 = 0LL;
  v7 = 0;
  if ( !a2 )
    goto LABEL_6;
  wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
    &v11,
    0LL);
  v8 = *((_QWORD *)this + 8);
  *((_QWORD *)this + 8) = 0LL;
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  v9 = OpenFlipConsumer(a2, (char *)this + 64, &v11);
  v7 = v9;
  if ( v9 >= 0 )
  {
    v3 = v11;
LABEL_6:
    *((_QWORD *)this + 9) = a3;
    goto LABEL_7;
  }
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v9, 0x31u, 0LL);
  v3 = v11;
LABEL_7:
  if ( (unsigned __int64)(v3 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(v3);
  return v7;
}
