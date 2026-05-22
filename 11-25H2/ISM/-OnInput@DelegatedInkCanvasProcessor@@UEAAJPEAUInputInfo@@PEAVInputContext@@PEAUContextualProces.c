/*
 * XREFs of ?OnInput@DelegatedInkCanvasProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x1800AD320
 * Callers:
 *     <none>
 * Callees:
 *     ?lock@_Mutex_base@std@@QEAAXXZ @ 0x1800158C4 (-lock@_Mutex_base@std@@QEAAXXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001AB00 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     __security_check_cookie @ 0x18009D480 (__security_check_cookie.c)
 *     ??$?8VPenHapticDevice@@Uerr_exception_policy@wil@@@wil@@YA_NAEBV?$com_ptr_t@VPenHapticDevice@@Uerr_exception_policy@wil@@@0@$$T@Z @ 0x1800AD120 (--$-8VPenHapticDevice@@Uerr_exception_policy@wil@@@wil@@YA_NAEBV-$com_ptr_t@VPenHapticDevice@@Ue.c)
 *     ??$EnqueueItem@USuperWetInkBallpointPenPoint@@@CSharedCircularQueueProducer@@QEAAXAEBUSuperWetInkBallpointPenPoint@@@Z @ 0x1800AD130 (--$EnqueueItem@USuperWetInkBallpointPenPoint@@@CSharedCircularQueueProducer@@QEAAXAEBUSuperWetIn.c)
 *     ??$_Emplace_reallocate@USuperWetInkBallpointPenPoint@@@?$vector@USuperWetInkBallpointPenPoint@@V?$allocator@USuperWetInkBallpointPenPoint@@@std@@@std@@AEAAPEAUSuperWetInkBallpointPenPoint@@QEAU2@$$QEAU2@@Z @ 0x1800AD184 (--$_Emplace_reallocate@USuperWetInkBallpointPenPoint@@@-$vector@USuperWetInkBallpointPenPoint@@V.c)
 *     ?SuperWetPointFromPointerInfo@DelegatedInkCanvasProcessor@@AEBA?AUSuperWetInkBallpointPenPoint@@AEBUtagPOINTER_INFO@@@Z @ 0x1800AD46C (-SuperWetPointFromPointerInfo@DelegatedInkCanvasProcessor@@AEBA-AUSuperWetInkBallpointPenPoint@@.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall DelegatedInkCanvasProcessor::OnInput(
        gsl::details **this,
        struct InputInfo *a2,
        struct InputContext *a3,
        struct ContextualProcessorResponse *a4)
{
  __int64 v6; // rax
  gsl::details *v7; // rax
  char *i; // rbx
  __int64 v9; // rax
  char *v10; // rcx
  __int128 v12; // [rsp+20h] [rbp-88h] BYREF
  __int64 v13; // [rsp+30h] [rbp-78h]
  char v14[80]; // [rsp+38h] [rbp-70h] BYREF

  *((_DWORD *)a4 + 2) = 0;
  if ( *((_DWORD *)a2 + 79) )
  {
    v12 = 0LL;
    v13 = 0LL;
    v6 = DelegatedInkCanvasProcessor::SuperWetPointFromPointerInfo(this, v14, (char *)a2 + 320);
    std::vector<SuperWetInkBallpointPenPoint>::_Emplace_reallocate<SuperWetInkBallpointPenPoint>(
      (const void **)&v12,
      0LL,
      v6);
    *((_BYTE *)this + 16) = 0;
    std::_Mutex_base::lock((std::_Mutex_base *)&DelegatedInkCanvasProcessor::s_contextLock);
    v7 = this[3];
    if ( v7 == DelegatedInkCanvasProcessor::s_inkCanvasContext
      && v7
      && !wil::operator==<PenHapticDevice,wil::err_exception_policy>(this + 4) )
    {
      for ( i = (char *)v12; i != *((char **)&v12 + 1); i += 56 )
        CSharedCircularQueueProducer::EnqueueItem<SuperWetInkBallpointPenPoint>(this[4], i);
      _Mtx_unlock((_Mtx_t)&DelegatedInkCanvasProcessor::s_contextLock);
      *((_DWORD *)a4 + 2) = 4;
      if ( (_QWORD)v12 )
      {
        v9 = v13 - v12;
        v10 = (char *)v12;
LABEL_12:
        std::_Deallocate<16,0>(v10, (const struct std::nothrow_t *)(8 * (v9 >> 3)));
      }
    }
    else
    {
      _Mtx_unlock((_Mtx_t)&DelegatedInkCanvasProcessor::s_contextLock);
      v10 = (char *)v12;
      if ( (_QWORD)v12 )
      {
        v9 = v13 - v12;
        goto LABEL_12;
      }
    }
  }
  return 0LL;
}
