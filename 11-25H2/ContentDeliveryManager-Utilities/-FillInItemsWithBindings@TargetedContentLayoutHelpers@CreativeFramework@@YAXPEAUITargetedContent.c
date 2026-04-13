/*
 * XREFs of ?FillInItemsWithBindings@TargetedContentLayoutHelpers@CreativeFramework@@YAXPEAUITargetedContentIdAliasStore@Internal@TargetedContent@Services@Windows@@AEAV?$vector@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@V?$allocator@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@2@@std@@AEAV?$vector@UTile@TargetedContentLayoutHelpers@CreativeFramework@@V?$allocator@UTile@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@9@@Z @ 0x1800B2148
 * Callers:
 *     ?ProcessLayoutBindings@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@QEAAXPEAUHSTRING__@@V1ShellPlacementTelemetry@Logging@3@@Z @ 0x1800ADC3C (-ProcessLayoutBindings@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@QEAAXPEAUH.c)
 * Callees:
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180024204 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003DC1C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1800B6A50 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800BD010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
unsigned __int64 __fastcall CreativeFramework::TargetedContentLayoutHelpers::FillInItemsWithBindings(
        __int64 a1,
        __int64 *a2,
        _QWORD *a3)
{
  __int64 *v3; // rax
  __int64 v4; // rdx
  unsigned __int64 v5; // rsi
  unsigned __int64 v6; // rbp
  __int64 v7; // rdi
  __int64 v8; // r14
  __int64 v9; // r15
  unsigned __int64 result; // rax
  __int64 v11; // rbx
  double *v12; // rcx
  double v13; // xmm1_8
  double v14; // xmm2_8
  __int64 v15; // r12
  double v16; // r13
  const WCHAR *v17; // rax
  HSTRING_HEADER *v18; // rax
  int v19; // eax
  int v20; // [rsp+20h] [rbp-98h]
  const WCHAR *v23; // [rsp+40h] [rbp-78h] BYREF
  __int64 (__fastcall *v24)(__int64, PVOID, _QWORD, __int64); // [rsp+48h] [rbp-70h]
  _QWORD *v25; // [rsp+50h] [rbp-68h]
  HSTRING_HEADER v26; // [rsp+58h] [rbp-60h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+0h]

  v25 = a3;
  v3 = a2;
  v4 = a1;
  v5 = 0LL;
  v6 = 0LL;
  v7 = 0LL;
  v8 = 0LL;
  while ( 1 )
  {
    v9 = *v3;
    result = (v3[1] - *v3) >> 4;
    if ( v5 >= result )
      return result;
    result = 0x6DB6DB6DB6DB6DB7LL * ((__int64)(a3[1] - *a3) >> 3);
    if ( v6 >= result )
      return result;
    v11 = v8 + *a3;
    v12 = *(double **)(v7 + v9);
    v13 = *(double *)(v11 + 32);
    v14 = v12[4];
    if ( v13 == v14 && (!*((_BYTE *)v12 + 18) || *(double *)(v11 + 40) == v12[5]) )
    {
      v24 = *(__int64 (__fastcall **)(__int64, PVOID, _QWORD, __int64))(*(_QWORD *)v4 + 48LL);
      v15 = *((_QWORD *)v12 + 1);
      v16 = *v12;
      if ( *(_QWORD *)(v11 + 24) < 8uLL )
        v17 = (const WCHAR *)v11;
      else
        v17 = *(const WCHAR **)v11;
      v23 = v17;
      v18 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v26, &v23, (unsigned int)a3);
      v19 = v24(a1, v18[1].Reserved.Reserved1, *(_QWORD *)&v16, v15);
      if ( v19 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x6B,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentlayoutresolver\\tilebinder.cpp",
          (const char *)(unsigned int)v19,
          v20);
      *(_BYTE *)(*(_QWORD *)(v7 + v9) + 48LL) = 1;
      *(_BYTE *)(v11 + 48) = 1;
      ++v5;
      v7 += 16LL;
      ++v6;
      v8 += 56LL;
      v3 = a2;
      a3 = v25;
      v4 = a1;
    }
    else if ( v14 > v13 || v13 == v14 && v12[5] > *(double *)(v11 + 40) )
    {
      ++v6;
      v8 += 56LL;
LABEL_20:
      v3 = a2;
    }
    else if ( v13 > v14 || (v3 = a2, v13 == v14) && *(double *)(v11 + 40) > v12[5] )
    {
      ++v5;
      v7 += 16LL;
      goto LABEL_20;
    }
  }
}
