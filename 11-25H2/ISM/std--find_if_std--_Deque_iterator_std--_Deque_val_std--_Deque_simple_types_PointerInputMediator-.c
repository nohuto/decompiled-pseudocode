/*
 * XREFs of std::find_if_std::_Deque_iterator_std::_Deque_val_std::_Deque_simple_types_PointerInputMediator::PointerFrame_______lambda_b7bb5d1243db4af2adae27fbd398c724___ @ 0x18008AA70
 * Callers:
 *     ?RoutePointers@PointerInputMediator@@SAXIPEAXIPEAIPEBUtagTELEMETRY_POINTER_FRAME_TIMES@@_NW4FrameRoutingSource@@@Z @ 0x180089FF8 (-RoutePointers@PointerInputMediator@@SAXIPEAXIPEAIPEBUtagTELEMETRY_POINTER_FRAME_TIMES@@_NW4Fram.c)
 * Callees:
 *     <none>
 */

__int64 **__fastcall std::find_if_std::_Deque_iterator_std::_Deque_val_std::_Deque_simple_types_PointerInputMediator::PointerFrame_______lambda_b7bb5d1243db4af2adae27fbd398c724___(
        __int64 **a1,
        __int64 **a2,
        __int64 a3,
        _DWORD *a4)
{
  __int64 *v4; // rbx
  __int64 *v5; // r10
  __int64 v6; // rdi
  __int64 **result; // rax

  v4 = *a2;
  v5 = a2[2];
  if ( *a2 )
    v6 = *v4;
  else
    v6 = 0LL;
  while ( v5 != *(__int64 **)(a3 + 16)
       && **(_DWORD **)(*(_QWORD *)(v6 + 8) + 8 * ((unsigned __int64)v5 & (*(_QWORD *)(v6 + 16) - 1LL))) != *a4 )
    v5 = (__int64 *)((char *)v5 + 1);
  a1[1] = 0LL;
  result = a1;
  *a1 = v4;
  a2[2] = v5;
  a1[2] = v5;
  return result;
}
