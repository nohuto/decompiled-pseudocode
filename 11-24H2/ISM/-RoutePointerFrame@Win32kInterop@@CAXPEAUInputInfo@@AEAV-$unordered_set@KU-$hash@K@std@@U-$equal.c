/*
 * XREFs of ?RoutePointerFrame@Win32kInterop@@CAXPEAUInputInfo@@AEAV?$unordered_set@KU?$hash@K@std@@U?$equal_to@K@2@V?$allocator@K@2@@std@@PEAXH@Z @ 0x1800154D8
 * Callers:
 *     ?DeliverInputToTarget@Win32kInterop@@UEAAJPEAUInputInfo@@AEAV?$unordered_set@KU?$hash@K@std@@U?$equal_to@K@2@V?$allocator@K@2@@std@@PEAUIInputTarget@@H@Z @ 0x180030370 (-DeliverInputToTarget@Win32kInterop@@UEAAJPEAUInputInfo@@AEAV-$unordered_set@KU-$hash@K@std@@U-$.c)
 * Callees:
 *     ??$_Get_size_of_n@$03@std@@YA_K_K@Z @ 0x1800154A8 (--$_Get_size_of_n@$03@std@@YA_K_K@Z.c)
 *     ?_Tidy@?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@AEAAXXZ @ 0x180016078 (-_Tidy@-$vector@UColor@UI@Windows@@V-$allocator@UColor@UI@Windows@@@std@@@std@@AEAAXXZ.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800180C0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?RoutePointers@PointerInputMediator@@SAXIPEAXIPEAIPEBUtagTELEMETRY_POINTER_FRAME_TIMES@@_NW4FrameRoutingSource@@@Z @ 0x18008A7BC (-RoutePointers@PointerInputMediator@@SAXIPEAXIPEAIPEBUtagTELEMETRY_POINTER_FRAME_TIMES@@_NW4Fram.c)
 *     memset_0 @ 0x18009D598 (memset_0.c)
 *     ?SendCancelNotificationToGestureTargeting@Win32kInterop@@CAXAEAV?$unordered_set@KU?$hash@K@std@@U?$equal_to@K@2@V?$allocator@K@2@@std@@PEAUInputInfo@@@Z @ 0x1800F206C (-SendCancelNotificationToGestureTargeting@Win32kInterop@@CAXAEAV-$unordered_set@KU-$hash@K@std@@.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Win32kInterop::RoutePointerFrame(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v7; // rdi
  char *v8; // rsi
  __int64 size_of; // rax
  char *v10; // rbp
  size_t v11; // r8
  char *v12; // rdi
  __int64 i; // rdx
  bool v15; // [rsp+28h] [rbp-50h]
  __int128 v16; // [rsp+40h] [rbp-38h] BYREF
  char *v17; // [rsp+50h] [rbp-28h]

  if ( *(_QWORD *)(a2 + 16) )
    Win32kInterop::SendCancelNotificationToGestureTargeting(a2, a1);
  v7 = *(unsigned int *)(a1 + 316);
  v16 = 0LL;
  v17 = 0LL;
  v8 = 0LL;
  if ( v7 )
  {
    size_of = std::_Get_size_of_n<4>((unsigned int)v7);
    v8 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
    v10 = v8;
    *(_QWORD *)&v16 = v8;
    v11 = 4 * v7;
    v12 = &v8[4 * v7];
    v17 = v12;
    memset_0(v8, 0, v11);
    *((_QWORD *)&v16 + 1) = v12;
  }
  else
  {
    v12 = (char *)*((_QWORD *)&v16 + 1);
    v10 = (char *)v16;
  }
  for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 316); i = (unsigned int)(i + 1) )
    *(_DWORD *)&v8[4 * i] = *(_DWORD *)(a1 + 144 * i + 324);
  v15 = a4 != 0;
  PointerInputMediator::RoutePointers(
    *(unsigned int *)(a1 + 328),
    a3,
    (unsigned int)((v12 - v10) >> 2),
    v10,
    a1 + 88,
    v15,
    0);
  return std::vector<Windows::UI::Color>::_Tidy(&v16);
}
