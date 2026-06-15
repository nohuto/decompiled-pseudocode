/*
 * XREFs of ?QueueWaitItemInternal@CSerialWorkQueue@@AEAAJPEAXP6AXPEAU_TP_CALLBACK_INSTANCE@@0PEAU_TP_WAIT@@J@ZV?$function@$$A6AXXZ@std@@AEAV?$unique_ptr@U_WaitTask@@U?$default_delete@U_WaitTask@@@std@@@5@@Z @ 0x180027A44
 * Callers:
 *     ?QueueRecurringWaitItem@CSerialWorkQueue@@QEAAJPEAXV?$function@$$A6AXXZ@std@@AEAV?$unique_ptr@U_WaitTask@@U?$default_delete@U_WaitTask@@@std@@@3@@Z @ 0x1800289F4 (-QueueRecurringWaitItem@CSerialWorkQueue@@QEAAJPEAXV-$function@$$A6AXXZ@std@@AEAV-$unique_ptr@U_.c)
 * Callees:
 *     ?Initialize@CSerialWorkQueue@@AEAAJXZ @ 0x180026820 (-Initialize@CSerialWorkQueue@@AEAAJXZ.c)
 *     ?_Tidy@?$_Func_class@X$$V@std@@IEAAXXZ @ 0x180027BB0 (-_Tidy@-$_Func_class@X$$V@std@@IEAAXXZ.c)
 *     ?Initialize@_WaitTask@@QEAAJPEAXV?$function@$$A6AXXZ@std@@PEAVCSerialWorkQueue@@@Z @ 0x180027BEC (-Initialize@_WaitTask@@QEAAJPEAXV-$function@$$A6AXXZ@std@@PEAVCSerialWorkQueue@@@Z.c)
 *     ??0?$function@$$A6AXPEAUIAudioStreamInfo@@@Z@std@@QEAA@AEBV01@@Z @ 0x180027D1C (--0-$function@$$A6AXPEAUIAudioStreamInfo@@@Z@std@@QEAA@AEBV01@@Z.c)
 *     ??R?$default_delete@U_WaitTask@@@std@@QEBAXPEAU_WaitTask@@@Z @ 0x180048924 (--R-$default_delete@U_WaitTask@@@std@@QEBAXPEAU_WaitTask@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800A42B8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??$?4U?$default_delete@U_WaitTask@@@std@@$0A@@?$unique_ptr@U_WaitTask@@U?$default_delete@U_WaitTask@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800B2B3C (--$-4U-$default_delete@U_WaitTask@@@std@@$0A@@-$unique_ptr@U_WaitTask@@U-$default_delete@U_WaitT.c)
 *     ?load@?$_Atomic_storage@_N$00@std@@QEBA_NW4memory_order@2@@Z @ 0x1800B3D80 (-load@-$_Atomic_storage@_N$00@std@@QEBA_NW4memory_order@2@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CSerialWorkQueue::QueueWaitItemInternal(
        CSerialWorkQueue *this,
        HANDLE h,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  int v8; // edi
  PTP_WAIT *v9; // rax
  __int64 v10; // rcx
  PTP_WAIT *v11; // rbx
  __int64 v12; // rax
  PTP_WAIT ThreadpoolWait; // rax
  struct _TP_WAIT *v14; // rsi
  signed int LastError; // eax
  char v17[104]; // [rsp+20h] [rbp-68h] BYREF
  PTP_WAIT *v18; // [rsp+90h] [rbp+8h] BYREF
  PTP_WAIT *v19; // [rsp+A0h] [rbp+18h]
  __int64 v20; // [rsp+A8h] [rbp+20h]

  v20 = a4;
  v8 = 0;
  if ( (unsigned __int8)std::_Atomic_storage<bool,1>::load((char *)this + 80) )
    goto LABEL_17;
  v8 = CSerialWorkQueue::Initialize((PTP_POOL *)this);
  if ( v8 < 0 )
    goto LABEL_17;
  v9 = (PTP_WAIT *)operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
  v11 = v9;
  v19 = v9;
  if ( v9 )
  {
    *v9 = 0LL;
    v9[1] = 0LL;
    v9[2] = 0LL;
    v9[3] = 0LL;
    v9[4] = 0LL;
  }
  else
  {
    v11 = 0LL;
  }
  v18 = v11;
  if ( v11 )
  {
    v12 = std::function<void (IAudioStreamInfo *)>::function<void (IAudioStreamInfo *)>(v17, a4);
    v8 = _WaitTask::Initialize(v11, h, v12, this);
    if ( v8 >= 0 )
    {
      ThreadpoolWait = CreateThreadpoolWait(
                         CSerialWorkQueue::RecurringWaitCallback,
                         v11,
                         (PTP_CALLBACK_ENVIRON)((char *)this + 8));
      v14 = ThreadpoolWait;
      if ( ThreadpoolWait )
      {
        v8 = 0;
        *v11 = ThreadpoolWait;
      }
      else
      {
        LastError = GetLastError();
        v8 = LastError;
        if ( LastError > 0 )
          v8 = (unsigned __int16)LastError | 0x80070000;
        *v11 = 0LL;
        if ( v8 < 0 )
          goto LABEL_15;
      }
      SetThreadpoolWait(v14, h, 0LL);
      std::unique_ptr<_WaitTask>::operator=<std::default_delete<_WaitTask>,0>(a5, &v18);
      v11 = v18;
    }
  }
  else
  {
    v8 = -2147024882;
  }
LABEL_15:
  if ( v11 )
    std::default_delete<_WaitTask>::operator()(v10, v11);
LABEL_17:
  std::_Func_class<void,>::_Tidy(a4);
  return (unsigned int)v8;
}
