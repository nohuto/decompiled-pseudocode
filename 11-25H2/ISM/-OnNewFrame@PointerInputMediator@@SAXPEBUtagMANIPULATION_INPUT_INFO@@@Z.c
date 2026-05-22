/*
 * XREFs of ?OnNewFrame@PointerInputMediator@@SAXPEBUtagMANIPULATION_INPUT_INFO@@@Z @ 0x1800156F0
 * Callers:
 *     ?DoConvergedMTCallback@Win32kInterop@@AEAAXPEBU_MIT_INPUT_INTEROP_MESSAGE@@@Z @ 0x18002F668 (-DoConvergedMTCallback@Win32kInterop@@AEAAXPEBU_MIT_INPUT_INTEROP_MESSAGE@@@Z.c)
 * Callees:
 *     ?Initialize@PointerFrame@PointerInputMediator@@QEAAXPEBUtagMANIPULATION_INPUT_INFO@@@Z @ 0x180015084 (-Initialize@PointerFrame@PointerInputMediator@@QEAAXPEBUtagMANIPULATION_INPUT_INFO@@@Z.c)
 *     ?lock@_Mutex_base@std@@QEAAXXZ @ 0x1800158C4 (-lock@_Mutex_base@std@@QEAAXXZ.c)
 *     ??1PointerFrame@PointerInputMediator@@QEAA@XZ @ 0x1800159A8 (--1PointerFrame@PointerInputMediator@@QEAA@XZ.c)
 *     ??1?$_Hash@V?$_Umap_traits@IUContactData@PointerInputMediator@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUContactData@PointerInputMediator@@@std@@@4@$0A@@std@@@std@@QEAA@XZ @ 0x1800159E0 (--1-$_Hash@V-$_Umap_traits@IUContactData@PointerInputMediator@@V-$_Uhash_compare@IU-$hash@I@std@.c)
 *     ?_Tidy@?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@AEAAXXZ @ 0x180015AA8 (-_Tidy@-$vector@UColor@UI@Windows@@V-$allocator@UColor@UI@Windows@@@std@@@std@@AEAAXXZ.c)
 *     ??0PointerFrame@PointerInputMediator@@QEAA@$$QEAU01@@Z @ 0x180015B14 (--0PointerFrame@PointerInputMediator@@QEAA@$$QEAU01@@Z.c)
 *     ??$_Emplace_back_internal@AEAPEBUtagMANIPULATION_INPUT_INFO@@@?$deque@UPointerFrame@PointerInputMediator@@V?$allocator@UPointerFrame@PointerInputMediator@@@std@@@std@@AEAAXAEAPEBUtagMANIPULATION_INPUT_INFO@@@Z @ 0x18008419C (--$_Emplace_back_internal@AEAPEBUtagMANIPULATION_INPUT_INFO@@@-$deque@UPointerFrame@PointerInput.c)
 *     __security_check_cookie @ 0x18009D480 (__security_check_cookie.c)
 *     ??2@YAPEAX_K@Z @ 0x18009D5CC (--2@YAPEAX_K@Z.c)
 *     ?_Growmap@?$deque@UPointerFrame@PointerInputMediator@@V?$allocator@UPointerFrame@PointerInputMediator@@@std@@@std@@AEAAX_K@Z @ 0x1800F167C (-_Growmap@-$deque@UPointerFrame@PointerInputMediator@@V-$allocator@UPointerFrame@PointerInputMed.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall PointerInputMediator::OnNewFrame(const struct tagMANIPULATION_INPUT_INFO *a1)
{
  __int64 v2; // rcx
  __int64 v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rbx
  __int64 v6; // rbx
  __int64 v7; // rbx
  __int64 v8; // rcx
  _QWORD v9[2]; // [rsp+20h] [rbp-138h] BYREF
  _BYTE v10[160]; // [rsp+30h] [rbp-128h] BYREF
  _BYTE v11[24]; // [rsp+D0h] [rbp-88h] BYREF
  _BYTE v12[24]; // [rsp+E8h] [rbp-70h] BYREF
  _BYTE v13[64]; // [rsp+100h] [rbp-58h] BYREF

  v9[0] = a1;
  v9[1] = &PointerInputMediator::s_frameQueueLock;
  std::_Mutex_base::lock((std::_Mutex_base *)&PointerInputMediator::s_frameQueueLock);
  if ( qword_180246E38 )
  {
    v3 = PointerInputMediator::s_frameLookaside;
    if ( PointerInputMediator::s_frameLookaside )
      v3 = *(_QWORD *)PointerInputMediator::s_frameLookaside;
    PointerInputMediator::PointerFrame::PointerFrame(
      v10,
      *(_QWORD *)(*(_QWORD *)(v3 + 8) + 8 * (qword_180246E30 & (*(_QWORD *)(v3 + 16) - 1LL))));
    PointerInputMediator::PointerFrame::~PointerFrame(*(PointerInputMediator::PointerFrame **)(qword_180246E20
                                                                                             + 8
                                                                                             * (qword_180246E30 & (qword_180246E28 - 1))));
    if ( --qword_180246E38 )
      ++qword_180246E30;
    else
      qword_180246E30 = 0LL;
    PointerInputMediator::PointerFrame::Initialize((PointerInputMediator::PointerFrame *)v10, a1);
    v4 = qword_180246E80;
    v5 = qword_180246E70;
    if ( qword_180246E70 <= (unsigned __int64)(qword_180246E80 + 1) )
    {
      std::deque<PointerInputMediator::PointerFrame>::_Growmap(&PointerInputMediator::s_frameQueue);
      v4 = qword_180246E80;
      v5 = qword_180246E70;
    }
    v6 = v5 - 1;
    qword_180246E78 &= v6;
    v7 = (v4 + qword_180246E78) & v6;
    v8 = qword_180246E68;
    if ( !*(_QWORD *)(qword_180246E68 + 8 * v7) )
    {
      *(_QWORD *)(qword_180246E68 + 8 * v7) = operator new(0x110uLL);
      v8 = qword_180246E68;
    }
    PointerInputMediator::PointerFrame::PointerFrame(*(_QWORD *)(v8 + 8 * v7), v10);
    ++qword_180246E80;
    std::_Hash<std::_Umap_traits<unsigned int,PointerInputMediator::ContactData,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,PointerInputMediator::ContactData>>,0>>::~_Hash<std::_Umap_traits<unsigned int,PointerInputMediator::ContactData,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,PointerInputMediator::ContactData>>,0>>(v13);
    std::vector<Windows::UI::Color>::_Tidy(v12);
    std::vector<Windows::UI::Color>::_Tidy(v11);
  }
  else
  {
    std::deque<PointerInputMediator::PointerFrame>::_Emplace_back_internal<tagMANIPULATION_INPUT_INFO const * &>(v2, v9);
  }
  _Mtx_unlock((_Mtx_t)&PointerInputMediator::s_frameQueueLock);
}
