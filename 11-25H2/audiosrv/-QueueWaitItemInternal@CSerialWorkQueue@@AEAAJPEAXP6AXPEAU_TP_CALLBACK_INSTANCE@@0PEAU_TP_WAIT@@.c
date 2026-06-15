/*
 * XREFs of ?QueueWaitItemInternal@CSerialWorkQueue@@AEAAJPEAXP6AXPEAU_TP_CALLBACK_INSTANCE@@0PEAU_TP_WAIT@@J@ZV?$function@$$A6AXXZ@std@@AEAV?$unique_ptr@U_WaitTask@@U?$default_delete@U_WaitTask@@@std@@@5@@Z @ 0x18001DB1C
 * Callers:
 *     ?QueueRecurringWaitItem@CSerialWorkQueue@@QEAAJPEAXV?$function@$$A6AXXZ@std@@AEAV?$unique_ptr@U_WaitTask@@U?$default_delete@U_WaitTask@@@std@@@3@@Z @ 0x18001FB78 (-QueueRecurringWaitItem@CSerialWorkQueue@@QEAAJPEAXV-$function@$$A6AXXZ@std@@AEAV-$unique_ptr@U_.c)
 * Callees:
 *     ?Initialize@CSerialWorkQueue@@AEAAJXZ @ 0x18001D560 (-Initialize@CSerialWorkQueue@@AEAAJXZ.c)
 *     ?Initialize@_WaitTask@@QEAAJPEAXV?$function@$$A6AXXZ@std@@PEAVCSerialWorkQueue@@@Z @ 0x18001DCA4 (-Initialize@_WaitTask@@QEAAJPEAXV-$function@$$A6AXXZ@std@@PEAVCSerialWorkQueue@@@Z.c)
 *     ??0?$function@$$A6AXPEAUIAudioStreamInfo@@@Z@std@@QEAA@AEBV01@@Z @ 0x18001DDF0 (--0-$function@$$A6AXPEAUIAudioStreamInfo@@@Z@std@@QEAA@AEBV01@@Z.c)
 *     ??R?$default_delete@U_WaitTask@@@std@@QEBAXPEAU_WaitTask@@@Z @ 0x1800559D4 (--R-$default_delete@U_WaitTask@@@std@@QEBAXPEAU_WaitTask@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800A7FC8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??$?4U?$default_delete@U_WaitTask@@@std@@$0A@@?$unique_ptr@U_WaitTask@@U?$default_delete@U_WaitTask@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800B3F7C (--$-4U-$default_delete@U_WaitTask@@@std@@$0A@@-$unique_ptr@U_WaitTask@@U-$default_delete@U_WaitT.c)
 *     ?load@?$_Atomic_storage@_N$00@std@@QEBA_NW4memory_order@2@@Z @ 0x1800B51EC (-load@-$_Atomic_storage@_N$00@std@@QEBA_NW4memory_order@2@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CSerialWorkQueue::QueueWaitItemInternal(
        CSerialWorkQueue *this,
        HANDLE h,
        PTP_WAIT *a3,
        __int64 a4,
        __int64 a5)
{
  int v8; // edi
  __int64 v9; // rdx
  PTP_WAIT *v10; // rax
  __int64 v11; // rcx
  PTP_WAIT *v12; // rbx
  __int64 v13; // rax
  PTP_WAIT ThreadpoolWait; // rax
  struct _TP_WAIT *v15; // rsi
  signed int LastError; // eax
  __int64 v17; // rcx
  char v19[104]; // [rsp+20h] [rbp-68h] BYREF
  PTP_WAIT *v20; // [rsp+A0h] [rbp+18h] BYREF
  __int64 v21; // [rsp+A8h] [rbp+20h]

  v21 = a4;
  v20 = a3;
  v8 = 0;
  if ( (unsigned __int8)std::_Atomic_storage<bool,1>::load((char *)this + 80) )
    goto LABEL_17;
  v8 = CSerialWorkQueue::Initialize((PTP_POOL *)this);
  if ( v8 < 0 )
    goto LABEL_17;
  v10 = (PTP_WAIT *)operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
  v12 = v10;
  v20 = v10;
  if ( v10 )
  {
    *v10 = 0LL;
    v10[1] = 0LL;
    v10[2] = 0LL;
    v10[3] = 0LL;
    v10[4] = 0LL;
  }
  else
  {
    v12 = 0LL;
  }
  v20 = v12;
  if ( v12 )
  {
    v13 = std::function<void (IAudioStreamInfo *)>::function<void (IAudioStreamInfo *)>(v19, a4);
    v8 = _WaitTask::Initialize(v12, h, v13, this);
    if ( v8 >= 0 )
    {
      ThreadpoolWait = CreateThreadpoolWait(
                         CSerialWorkQueue::RecurringWaitCallback,
                         v12,
                         (PTP_CALLBACK_ENVIRON)((char *)this + 8));
      v15 = ThreadpoolWait;
      if ( ThreadpoolWait )
      {
        v8 = 0;
        *v12 = ThreadpoolWait;
      }
      else
      {
        LastError = GetLastError();
        v8 = LastError;
        if ( LastError > 0 )
          v8 = (unsigned __int16)LastError | 0x80070000;
        *v12 = 0LL;
        if ( v8 < 0 )
          goto LABEL_15;
      }
      SetThreadpoolWait(v15, h, 0LL);
      std::unique_ptr<_WaitTask>::operator=<std::default_delete<_WaitTask>,0>(a5, &v20);
      v12 = v20;
    }
  }
  else
  {
    v8 = -2147024882;
  }
LABEL_15:
  if ( v12 )
    std::default_delete<_WaitTask>::operator()(v11, v12);
LABEL_17:
  v17 = *(_QWORD *)(a4 + 56);
  if ( v17 )
  {
    LOBYTE(v9) = v17 != a4;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v17 + 32LL))(v17, v9);
    *(_QWORD *)(a4 + 56) = 0LL;
  }
  return (unsigned int)v8;
}
