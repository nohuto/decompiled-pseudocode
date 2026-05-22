/*
 * XREFs of ?at@?$unordered_map@IUContactData@PointerInputMediator@@U?$hash@I@std@@U?$equal_to@I@4@V?$allocator@U?$pair@$$CBIUContactData@PointerInputMediator@@@std@@@4@@std@@QEAAAEAUContactData@PointerInputMediator@@AEBI@Z @ 0x180031238
 * Callers:
 *     ?OnForwardedToGestureTargeting@PointerInputMediator@@SAXPEBU_MIT_INPUT_INTEROP_MESSAGE@@@Z @ 0x180030B0C (-OnForwardedToGestureTargeting@PointerInputMediator@@SAXPEBU_MIT_INPUT_INTEROP_MESSAGE@@@Z.c)
 *     ?RoutePointers@PointerInputMediator@@SAXIPEAXIPEAIPEBUtagTELEMETRY_POINTER_FRAME_TIMES@@_NW4FrameRoutingSource@@@Z @ 0x18008A7BC (-RoutePointers@PointerInputMediator@@SAXIPEAXIPEAIPEBUtagTELEMETRY_POINTER_FRAME_TIMES@@_NW4Fram.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::unordered_map<unsigned int,PointerInputMediator::ContactData>::at(_QWORD *a1, _DWORD *a2)
{
  __int64 v3; // r8
  unsigned __int64 i; // r9
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // r8

  v3 = 0xCBF29CE484222325uLL;
  for ( i = 0LL; i < 4; ++i )
  {
    v5 = *((unsigned __int8 *)a2 + i);
    v3 = 0x100000001B3LL * (v5 ^ v3);
  }
  v6 = v3 & a1[6];
  v7 = a1[3];
  v8 = 2 * v6;
  v9 = *(_QWORD *)(v7 + 8 * v8 + 8);
  if ( v9 == a1[1] )
    goto LABEL_10;
  v10 = *(_QWORD *)(v7 + 8 * v8);
  while ( *a2 != *(_DWORD *)(v9 + 16) )
  {
    if ( v9 == v10 )
      goto LABEL_10;
    v9 = *(_QWORD *)(v9 + 8);
  }
  if ( !v9 )
  {
LABEL_10:
    std::_Xout_of_range("invalid unordered_map<K, T> key");
    __debugbreak();
    JUMPOUT(0x1800312BDLL);
  }
  return v9 + 24;
}
