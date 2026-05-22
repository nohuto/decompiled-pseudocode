/*
 * XREFs of std::_Ref_count_obj2_GestureHandler_::_Ref_count_obj2_GestureHandler__enum_GestureProcessorType_&_unsigned_short_const___ISystemInputRouterHitTest____lambda_80df7c2b76f58973f9ddec3659020abd__&_ @ 0x180093F80
 * Callers:
 *     std::make_shared_GestureHandler_enum_GestureProcessorType_&_unsigned_short_const___ISystemInputRouterHitTest____lambda_80df7c2b76f58973f9ddec3659020abd__&_ @ 0x180093E8C (std--make_shared_GestureHandler_enum_GestureProcessorType_-_unsigned_short_const___ISystemInputR.c)
 * Callees:
 *     ??0GestureHandler@@QEAA@W4GestureProcessorType@@PEBGPEAUISystemInputRouterHitTest@@V?$function@$$A6AXPEAVGestureHandler@@W4GestureCompletedReason@@@Z@std@@@Z @ 0x180144308 (--0GestureHandler@@QEAA@W4GestureProcessorType@@PEBGPEAUISystemInputRouterHitTest@@V-$function@$.c)
 */

__int64 __fastcall std::_Ref_count_obj2_GestureHandler_::_Ref_count_obj2_GestureHandler__enum_GestureProcessorType___unsigned_short_const___ISystemInputRouterHitTest____lambda_80df7c2b76f58973f9ddec3659020abd____(
        __int64 a1,
        unsigned int *a2,
        __int64 *a3,
        __int64 *a4,
        __int128 *a5)
{
  __int64 v6; // r9
  __int64 v7; // r8
  __int64 v8; // rdx
  __int64 v9; // xmm1_8
  __int64 (__fastcall **v11)(); // [rsp+30h] [rbp-48h] BYREF
  __int128 v12; // [rsp+38h] [rbp-40h]
  __int64 v13; // [rsp+48h] [rbp-30h]
  __int64 (__fastcall ***v14)(); // [rsp+68h] [rbp-10h]

  *(_DWORD *)(a1 + 8) = 1;
  *(_DWORD *)(a1 + 12) = 1;
  *(_QWORD *)a1 = &std::_Ref_count_obj2<GestureHandler>::`vftable';
  v6 = *a4;
  v7 = *a3;
  v8 = *a2;
  v11 = off_1801E2418;
  v9 = *((_QWORD *)a5 + 2);
  v12 = *a5;
  v13 = v9;
  v14 = &v11;
  GestureHandler::GestureHandler(a1 + 16, v8, v7, v6, &v11);
  return a1;
}
