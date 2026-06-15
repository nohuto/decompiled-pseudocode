/*
 * XREFs of ?QueueWorkItem@CSerialWorkQueue@@QEAAJV?$function@$$A6AXXZ@std@@@Z @ 0x180030D28
 * Callers:
 *     ?OnRenderCommunicationsStreamStateChanged@CDuckingManager@@QEAAJPEAUIAudioSessionInfo@@W4_AudioStreamState@@1PEAUIAudioStreamInfo@@@Z @ 0x180030A30 (-OnRenderCommunicationsStreamStateChanged@CDuckingManager@@QEAAJPEAUIAudioSessionInfo@@W4_AudioS.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18000D180 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??0?$function@$$A6AXXZ@std@@QEAA@AEBV01@@Z @ 0x180016280 (--0-$function@$$A6AXXZ@std@@QEAA@AEBV01@@Z.c)
 *     ?_Tidy@?$_Func_class@X$$V@std@@IEAAXXZ @ 0x1800178C0 (-_Tidy@-$_Func_class@X$$V@std@@IEAAXXZ.c)
 *     ??4?$shared_ptr@V?$function@$$A6AXXZ@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18001C138 (--4-$shared_ptr@V-$function@$$A6AXXZ@std@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ??$make_shared@V?$function@$$A6AXXZ@std@@AEAV12@@std@@YA?AV?$shared_ptr@V?$function@$$A6AXXZ@std@@@0@AEAV?$function@$$A6AXXZ@0@@Z @ 0x18001D430 (--$make_shared@V-$function@$$A6AXXZ@std@@AEAV12@@std@@YA-AV-$shared_ptr@V-$function@$$A6AXXZ@std.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18002060C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??1?$unique_ptr@U_WorkTask@@U?$default_delete@U_WorkTask@@@std@@@std@@QEAA@XZ @ 0x18002ECA8 (--1-$unique_ptr@U_WorkTask@@U-$default_delete@U_WorkTask@@@std@@@std@@QEAA@XZ.c)
 *     ?Initialize@CSerialWorkQueue@@AEAAJXZ @ 0x180030048 (-Initialize@CSerialWorkQueue@@AEAAJXZ.c)
 *     ?load@?$_Atomic_storage@_N$00@std@@QEBA_NW4memory_order@2@@Z @ 0x180031C08 (-load@-$_Atomic_storage@_N$00@std@@QEBA_NW4memory_order@2@@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CSerialWorkQueue::QueueWorkItem(CSerialWorkQueue *this, __int64 a2)
{
  signed int v4; // edi
  __int64 v5; // rdx
  _WorkTask *v6; // rax
  unsigned int v7; // edx
  _WorkTask *v8; // rsi
  __int64 v9; // rdi
  __int64 *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rbx
  struct _TP_WORK *ThreadpoolWork; // rbx
  signed int LastError; // eax
  __int64 v16; // [rsp+20h] [rbp-78h] BYREF
  std::_Ref_count_base *v17; // [rsp+28h] [rbp-70h]
  char v18[104]; // [rsp+30h] [rbp-68h] BYREF
  _WorkTask *v19; // [rsp+B0h] [rbp+18h] BYREF

  v4 = 0;
  if ( !(unsigned __int8)std::_Atomic_storage<bool,1>::load((char *)this + 80) )
  {
    v4 = CSerialWorkQueue::Initialize((PTP_POOL *)this);
    if ( v4 >= 0 )
    {
      v6 = (_WorkTask *)operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
      v8 = v6;
      if ( v6 )
      {
        *(_QWORD *)v6 = 0LL;
        *((_QWORD *)v6 + 1) = 0LL;
        *((_QWORD *)v6 + 2) = 0LL;
      }
      else
      {
        v8 = 0LL;
      }
      v19 = v8;
      if ( v8 )
      {
        v9 = std::function<void (void)>::function<void (void)>((__int64)v18, a2);
        *((_QWORD *)v8 + 2) = this;
        v10 = std::make_shared<std::function<void (void)>,std::function<void (void)> &>(&v16, v9);
        std::shared_ptr<std::function<void (void)>>::operator=(v8, v10);
        if ( v17 )
          std::_Ref_count_base::_Decref(v17);
        v12 = *(_QWORD *)v8;
        std::_Func_class<void,>::_Tidy(v9, v11);
        v4 = v12 == 0 ? 0x8007000E : 0;
        if ( !v12 )
          goto LABEL_18;
        ThreadpoolWork = CreateThreadpoolWork(
                           CSerialWorkQueue::WorkCallback,
                           v8,
                           (PTP_CALLBACK_ENVIRON)((char *)this + 8));
        if ( ThreadpoolWork )
        {
          v4 = 0;
        }
        else
        {
          LastError = GetLastError();
          v4 = LastError;
          if ( LastError > 0 )
            v4 = (unsigned __int16)LastError | 0x80070000;
          if ( v4 < 0 )
            goto LABEL_18;
        }
        v19 = 0LL;
        SubmitThreadpoolWork(ThreadpoolWork);
      }
      else
      {
        v4 = -2147024882;
      }
LABEL_18:
      std::unique_ptr<_WorkTask>::~unique_ptr<_WorkTask>(&v19, v7);
    }
  }
  std::_Func_class<void,>::_Tidy(a2, v5);
  return (unsigned int)v4;
}
