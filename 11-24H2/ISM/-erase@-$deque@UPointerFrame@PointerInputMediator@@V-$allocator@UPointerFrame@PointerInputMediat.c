/*
 * XREFs of ?erase@?$deque@UPointerFrame@PointerInputMediator@@V?$allocator@UPointerFrame@PointerInputMediator@@@std@@@std@@QEAA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@UPointerFrame@PointerInputMediator@@@std@@@std@@@2@V?$_Deque_const_iterator@V?$_Deque_val@U?$_Deque_simple_types@UPointerFrame@PointerInputMediator@@@std@@@std@@@2@0@Z @ 0x180015A7C
 * Callers:
 *     ?RoutePointers@PointerInputMediator@@SAXIPEAXIPEAIPEBUtagTELEMETRY_POINTER_FRAME_TIMES@@_NW4FrameRoutingSource@@@Z @ 0x18008A7BC (-RoutePointers@PointerInputMediator@@SAXIPEAXIPEAIPEBUtagTELEMETRY_POINTER_FRAME_TIMES@@_NW4Fram.c)
 * Callees:
 *     ??$move_backward@V?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@UPointerFrame@PointerInputMediator@@@std@@@std@@@std@@V12@@std@@YA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@UPointerFrame@PointerInputMediator@@@std@@@std@@@0@V10@00@Z @ 0x18001599C (--$move_backward@V-$_Deque_iterator@V-$_Deque_val@U-$_Deque_simple_types@UPointerFrame@PointerIn.c)
 *     ??4PointerFrame@PointerInputMediator@@QEAAAEAU01@$$QEAU01@@Z @ 0x180015BF8 (--4PointerFrame@PointerInputMediator@@QEAAAEAU01@$$QEAU01@@Z.c)
 *     ?pop_back@?$deque@UPointerFrame@PointerInputMediator@@V?$allocator@UPointerFrame@PointerInputMediator@@@std@@@std@@QEAAXXZ @ 0x180015EF0 (-pop_back@-$deque@UPointerFrame@PointerInputMediator@@V-$allocator@UPointerFrame@PointerInputMed.c)
 *     ?pop_front@?$deque@UPointerFrame@PointerInputMediator@@V?$allocator@UPointerFrame@PointerInputMediator@@@std@@@std@@QEAAXXZ @ 0x180015F38 (-pop_front@-$deque@UPointerFrame@PointerInputMediator@@V-$allocator@UPointerFrame@PointerInputMe.c)
 */

__int64 *__fastcall std::deque<PointerInputMediator::PointerFrame>::erase(
        __int64 a1,
        __int64 *a2,
        __int64 a3,
        __int64 a4)
{
  unsigned __int64 v4; // r14
  __int64 *v5; // rbx
  __int64 *v6; // rsi
  __int64 v7; // rcx
  unsigned __int64 v8; // r12
  signed __int64 v9; // rdi
  __int64 v10; // r15
  __int64 v11; // r13
  __int64 v12; // rax
  __int64 *v14[3]; // [rsp+20h] [rbp-60h] BYREF
  __int64 *v15[3]; // [rsp+38h] [rbp-48h] BYREF
  _QWORD v16[3]; // [rsp+50h] [rbp-30h] BYREF
  __int64 *v17; // [rsp+68h] [rbp-18h] BYREF
  __int64 v18; // [rsp+C0h] [rbp+40h]

  v4 = *(_QWORD *)(a3 + 16);
  v5 = a2;
  v6 = *(__int64 **)(a4 + 16);
  v7 = PointerInputMediator::s_frameQueue;
  v8 = v4 - qword_180250E40;
  v9 = (signed __int64)v6 - v4;
  if ( v6 == (__int64 *)v4 )
  {
    a2[1] = 0LL;
    *a2 = v7;
    a2[2] = v4;
  }
  else
  {
    v18 = qword_180250E40 + qword_180250E48;
    if ( v8 < qword_180250E40 + qword_180250E48 - (__int64)v6 )
    {
      v14[1] = 0LL;
      v15[1] = 0LL;
      v16[1] = 0LL;
      v14[0] = (__int64 *)PointerInputMediator::s_frameQueue;
      v15[0] = (__int64 *)PointerInputMediator::s_frameQueue;
      v16[2] = qword_180250E40;
      v16[0] = PointerInputMediator::s_frameQueue;
      v14[2] = v6;
      v15[2] = (__int64 *)v4;
      std::move_backward<std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<PointerInputMediator::PointerFrame>>>,std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<PointerInputMediator::PointerFrame>>>>(
        &v17,
        (__int64)v16,
        v15,
        v14);
      do
      {
        std::deque<PointerInputMediator::PointerFrame>::pop_front(&PointerInputMediator::s_frameQueue);
        --v9;
      }
      while ( v9 );
    }
    else
    {
      if ( PointerInputMediator::s_frameQueue )
      {
        v10 = *(_QWORD *)PointerInputMediator::s_frameQueue;
        v11 = *(_QWORD *)PointerInputMediator::s_frameQueue;
      }
      else
      {
        v10 = 0LL;
        v11 = 0LL;
      }
      while ( v6 != (__int64 *)v18 )
      {
        PointerInputMediator::PointerFrame::operator=(
          *(_QWORD *)(*(_QWORD *)(v11 + 8) + 8 * (v4++ & (*(_QWORD *)(v11 + 16) - 1LL))),
          *(_QWORD *)(*(_QWORD *)(v10 + 8) + 8 * ((unsigned __int64)v6 & (*(_QWORD *)(v10 + 16) - 1LL))));
        v6 = (__int64 *)((char *)v6 + 1);
      }
      v5 = a2;
      do
      {
        std::deque<PointerInputMediator::PointerFrame>::pop_back(&PointerInputMediator::s_frameQueue);
        --v9;
      }
      while ( v9 );
    }
    v5[1] = 0LL;
    v12 = PointerInputMediator::s_frameQueue;
    v5[2] = v8 + qword_180250E40;
    *v5 = v12;
  }
  return v5;
}
