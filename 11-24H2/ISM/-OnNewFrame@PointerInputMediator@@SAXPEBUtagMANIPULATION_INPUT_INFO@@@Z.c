/*
 * XREFs of ?OnNewFrame@PointerInputMediator@@SAXPEBUtagMANIPULATION_INPUT_INFO@@@Z @ 0x180015CC0
 * Callers:
 *     ?DoConvergedMTCallback@Win32kInterop@@AEAAXPEBU_MIT_INPUT_INTEROP_MESSAGE@@@Z @ 0x18002FC28 (-DoConvergedMTCallback@Win32kInterop@@AEAAXPEBU_MIT_INPUT_INTEROP_MESSAGE@@@Z.c)
 * Callees:
 *     ?Initialize@PointerFrame@PointerInputMediator@@QEAAXPEBUtagMANIPULATION_INPUT_INFO@@@Z @ 0x180015654 (-Initialize@PointerFrame@PointerInputMediator@@QEAAXPEBUtagMANIPULATION_INPUT_INFO@@@Z.c)
 *     ?lock@_Mutex_base@std@@QEAAXXZ @ 0x180015E94 (-lock@_Mutex_base@std@@QEAAXXZ.c)
 *     ??1PointerFrame@PointerInputMediator@@QEAA@XZ @ 0x180015F78 (--1PointerFrame@PointerInputMediator@@QEAA@XZ.c)
 *     ??1?$_Hash@V?$_Umap_traits@IUContactData@PointerInputMediator@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUContactData@PointerInputMediator@@@std@@@4@$0A@@std@@@std@@QEAA@XZ @ 0x180015FB0 (--1-$_Hash@V-$_Umap_traits@IUContactData@PointerInputMediator@@V-$_Uhash_compare@IU-$hash@I@std@.c)
 *     ?_Tidy@?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@AEAAXXZ @ 0x180016078 (-_Tidy@-$vector@UColor@UI@Windows@@V-$allocator@UColor@UI@Windows@@@std@@@std@@AEAAXXZ.c)
 *     ??0PointerFrame@PointerInputMediator@@QEAA@$$QEAU01@@Z @ 0x1800160E4 (--0PointerFrame@PointerInputMediator@@QEAA@$$QEAU01@@Z.c)
 *     ??$_Emplace_back_internal@AEAPEBUtagMANIPULATION_INPUT_INFO@@@?$deque@UPointerFrame@PointerInputMediator@@V?$allocator@UPointerFrame@PointerInputMediator@@@std@@@std@@AEAAXAEAPEBUtagMANIPULATION_INPUT_INFO@@@Z @ 0x1800841BC (--$_Emplace_back_internal@AEAPEBUtagMANIPULATION_INPUT_INFO@@@-$deque@UPointerFrame@PointerInput.c)
 *     __security_check_cookie @ 0x18009D650 (__security_check_cookie.c)
 *     ??2@YAPEAX_K@Z @ 0x18009D79C (--2@YAPEAX_K@Z.c)
 *     ?_Growmap@?$deque@UPointerFrame@PointerInputMediator@@V?$allocator@UPointerFrame@PointerInputMediator@@@std@@@std@@AEAAX_K@Z @ 0x1800F334C (-_Growmap@-$deque@UPointerFrame@PointerInputMediator@@V-$allocator@UPointerFrame@PointerInputMed.c)
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
  if ( qword_180250E00 )
  {
    v3 = PointerInputMediator::s_frameLookaside;
    if ( PointerInputMediator::s_frameLookaside )
      v3 = *(_QWORD *)PointerInputMediator::s_frameLookaside;
    PointerInputMediator::PointerFrame::PointerFrame(
      v10,
      *(_QWORD *)(*(_QWORD *)(v3 + 8) + 8 * (qword_180250DF8 & (*(_QWORD *)(v3 + 16) - 1LL))));
    PointerInputMediator::PointerFrame::~PointerFrame(*(PointerInputMediator::PointerFrame **)(qword_180250DE8
                                                                                             + 8
                                                                                             * (qword_180250DF8 & (qword_180250DF0 - 1))));
    if ( --qword_180250E00 )
      ++qword_180250DF8;
    else
      qword_180250DF8 = 0LL;
    PointerInputMediator::PointerFrame::Initialize((PointerInputMediator::PointerFrame *)v10, a1);
    v4 = qword_180250E48;
    v5 = qword_180250E38;
    if ( qword_180250E38 <= (unsigned __int64)(qword_180250E48 + 1) )
    {
      std::deque<PointerInputMediator::PointerFrame>::_Growmap(&PointerInputMediator::s_frameQueue);
      v4 = qword_180250E48;
      v5 = qword_180250E38;
    }
    v6 = v5 - 1;
    qword_180250E40 &= v6;
    v7 = (v4 + qword_180250E40) & v6;
    v8 = qword_180250E30;
    if ( !*(_QWORD *)(qword_180250E30 + 8 * v7) )
    {
      *(_QWORD *)(qword_180250E30 + 8 * v7) = operator new(0x110uLL);
      v8 = qword_180250E30;
    }
    PointerInputMediator::PointerFrame::PointerFrame(*(_QWORD *)(v8 + 8 * v7), v10);
    ++qword_180250E48;
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
