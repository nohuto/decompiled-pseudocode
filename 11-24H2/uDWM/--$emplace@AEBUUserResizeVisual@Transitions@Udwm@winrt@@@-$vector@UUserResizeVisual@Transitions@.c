/*
 * XREFs of ??$emplace@AEBUUserResizeVisual@Transitions@Udwm@winrt@@@?$vector@UUserResizeVisual@Transitions@Udwm@winrt@@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@@1@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@@1@AEBUUserResizeVisual@Transitions@Udwm@winrt@@@Z @ 0x1800E81C8
 * Callers:
 *     ?InsertAt@?$vector_base@U?$vector_impl@UUserResizeVisual@Transitions@Udwm@winrt@@V?$vector@UUserResizeVisual@Transitions@Udwm@winrt@@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@UUserResizeVisual@Transitions@Udwm@3@@winrt@@QEAAXIAEBUUserResizeVisual@Transitions@Udwm@2@@Z @ 0x1800E982C (-InsertAt@-$vector_base@U-$vector_impl@UUserResizeVisual@Transitions@Udwm@winrt@@V-$vector@UUser.c)
 * Callees:
 *     ??4TopLevelWindow3DWrapper@Transitions@Udwm@winrt@@QEAAAEAU0123@$$QEAU0123@@Z @ 0x18004B2D4 (--4TopLevelWindow3DWrapper@Transitions@Udwm@winrt@@QEAAAEAU0123@$$QEAU0123@@Z.c)
 *     ??1AnimationCompletedHandler@Transitions@Udwm@winrt@@QEAA@XZ @ 0x18004BFEC (--1AnimationCompletedHandler@Transitions@Udwm@winrt@@QEAA@XZ.c)
 *     ??$_Emplace_back_with_unused_capacity@AEBUUserResizeVisual@Transitions@Udwm@winrt@@@?$vector@UUserResizeVisual@Transitions@Udwm@winrt@@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@AEAAAEAUUserResizeVisual@Transitions@Udwm@winrt@@AEBU2345@@Z @ 0x1800E7C54 (--$_Emplace_back_with_unused_capacity@AEBUUserResizeVisual@Transitions@Udwm@winrt@@@-$vector@UUs.c)
 *     ??$_Emplace_reallocate@AEBUUserResizeVisual@Transitions@Udwm@winrt@@@?$vector@UUserResizeVisual@Transitions@Udwm@winrt@@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@AEAAPEAUUserResizeVisual@Transitions@Udwm@winrt@@QEAU2345@AEBU2345@@Z @ 0x1800E7DC8 (--$_Emplace_reallocate@AEBUUserResizeVisual@Transitions@Udwm@winrt@@@-$vector@UUserResizeVisual@.c)
 *     ??$construct@UUserResizeVisual@Transitions@Udwm@winrt@@AEBU1234@@?$_Default_allocator_traits@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@SAXAEAV?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@1@QEAUUserResizeVisual@Transitions@Udwm@winrt@@AEBU3456@@Z @ 0x1800E7FF4 (--$construct@UUserResizeVisual@Transitions@Udwm@winrt@@AEBU1234@@-$_Default_allocator_traits@V-$.c)
 */

_QWORD *__fastcall std::vector<winrt::Udwm::Transitions::UserResizeVisual>::emplace<winrt::Udwm::Transitions::UserResizeVisual const &>(
        __int64 *a1,
        _QWORD *a2,
        winrt::Udwm::Transitions::AnimationCompletedHandler *a3,
        __int64 *a4)
{
  winrt::Udwm::Transitions::AnimationCompletedHandler *v4; // r15
  winrt::Windows::Foundation::IUnknown *v8; // rdi
  __int64 v9; // rax
  winrt::Windows::Foundation::IUnknown *v10; // rcx
  __int64 v12[2]; // [rsp+28h] [rbp-10h] BYREF

  v4 = (winrt::Udwm::Transitions::AnimationCompletedHandler *)a1[1];
  if ( v4 == (winrt::Udwm::Transitions::AnimationCompletedHandler *)a1[2] )
  {
    *a2 = std::vector<winrt::Udwm::Transitions::UserResizeVisual>::_Emplace_reallocate<winrt::Udwm::Transitions::UserResizeVisual const &>(
            a1,
            a3,
            (__int64)a4);
  }
  else
  {
    if ( a3 == v4 )
    {
      std::vector<winrt::Udwm::Transitions::UserResizeVisual>::_Emplace_back_with_unused_capacity<winrt::Udwm::Transitions::UserResizeVisual const &>(
        (__int64)a1,
        a4);
    }
    else
    {
      std::_Default_allocator_traits<std::allocator<winrt::Udwm::Transitions::UserResizeVisual>>::construct<winrt::Udwm::Transitions::UserResizeVisual,winrt::Udwm::Transitions::UserResizeVisual const &>(
        (__int64)a1,
        v12,
        a4);
      v8 = (winrt::Udwm::Transitions::AnimationCompletedHandler *)((char *)v4 - 8);
      v9 = *((_QWORD *)v4 - 1);
      *((_QWORD *)v4 - 1) = 0LL;
      *(_QWORD *)v4 = v9;
      a1[1] += 8LL;
      while ( v8 != a3 )
      {
        v10 = v8;
        v8 = (winrt::Windows::Foundation::IUnknown *)((char *)v8 - 8);
        winrt::Udwm::Transitions::TopLevelWindow3DWrapper::operator=(v10, v8);
      }
      winrt::Udwm::Transitions::TopLevelWindow3DWrapper::operator=(a3, (winrt::Windows::Foundation::IUnknown *)v12);
      winrt::Udwm::Transitions::AnimationCompletedHandler::~AnimationCompletedHandler((winrt::Udwm::Transitions::AnimationCompletedHandler *)v12);
    }
    *a2 = a3;
  }
  return a2;
}
