/*
 * XREFs of ?QueueWorkItem@CSerialWorkQueue@@QEAAJV?$function@$$A6AXXZ@std@@@Z @ 0x1400085E8
 * Callers:
 *     ?QueueNotification@CAPOProcessingHostObject@@QEAAXAEAV?$shared_ptr@UAPO_NOTIFICATION@@@std@@@Z @ 0x140008474 (-QueueNotification@CAPOProcessingHostObject@@QEAAXAEAV-$shared_ptr@UAPO_NOTIFICATION@@@std@@@Z.c)
 * Callees:
 *     ??_G_WorkTask@@QEAAPEAXI@Z @ 0x140008440 (--_G_WorkTask@@QEAAPEAXI@Z.c)
 *     ?Initialize@CSerialWorkQueue@@AEAAJXZ @ 0x1400087D0 (-Initialize@CSerialWorkQueue@@AEAAJXZ.c)
 *     ??0?$function@$$A6AXXZ@std@@QEAA@AEBV01@@Z @ 0x1400088E8 (--0-$function@$$A6AXXZ@std@@QEAA@AEBV01@@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x1400089AC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x140058D14 (--2@YAPEAX_K@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x140058D58 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?load@?$_Atomic_storage@_N$00@std@@QEBA_NW4memory_order@2@@Z @ 0x140063840 (-load@-$_Atomic_storage@_N$00@std@@QEBA_NW4memory_order@2@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CSerialWorkQueue::QueueWorkItem(CSerialWorkQueue *this, __int64 a2)
{
  signed int v4; // edi
  __int64 v5; // rdx
  _QWORD *v6; // rax
  _QWORD *v7; // rbx
  __int64 v8; // rcx
  __int64 (__fastcall ***v10)(_QWORD, _BYTE *); // rcx
  std::_Ref_count_base *v11; // rcx
  _BYTE *v12; // rdx
  struct _TP_WORK *ThreadpoolWork; // rsi
  signed int LastError; // eax
  _BYTE v15[56]; // [rsp+20h] [rbp-48h] BYREF
  _BYTE *v16; // [rsp+58h] [rbp-10h]
  _DWORD *v17; // [rsp+B8h] [rbp+50h]

  v4 = 0;
  if ( (unsigned __int8)std::_Atomic_storage<bool,1>::load((char *)this + 80) )
    goto LABEL_9;
  v4 = CSerialWorkQueue::Initialize(this);
  if ( v4 < 0 )
    goto LABEL_9;
  v6 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
  v7 = v6;
  if ( v6 )
  {
    *v6 = 0LL;
    v6[1] = 0LL;
    v6[2] = 0LL;
  }
  else
  {
    v7 = 0LL;
  }
  if ( v7 )
  {
    v16 = 0LL;
    v10 = *(__int64 (__fastcall ****)(_QWORD, _BYTE *))(a2 + 56);
    if ( v10 )
      v16 = (_BYTE *)(**v10)(v10, v15);
    v7[2] = this;
    v17 = operator new(0x50uLL);
    *(_OWORD *)v17 = 0LL;
    v17[2] = 1;
    v17[3] = 1;
    *(_QWORD *)v17 = &std::_Ref_count_obj2<std::function<void (void)>>::`vftable';
    std::function<void (void)>::function<void (void)>(v17 + 4, v15);
    *v7 = v17 + 4;
    v11 = (std::_Ref_count_base *)v7[1];
    v7[1] = v17;
    if ( v11 )
      std::_Ref_count_base::_Decref(v11);
    v4 = *v7 == 0LL ? 0x8007000E : 0;
    if ( v16 )
    {
      v12 = v15;
      LOBYTE(v12) = v16 != v15;
      (*(void (__fastcall **)(_BYTE *, _BYTE *))(*(_QWORD *)v16 + 32LL))(v16, v12);
    }
    if ( v4 < 0 )
      goto LABEL_7;
    ThreadpoolWork = CreateThreadpoolWork(
                       (PTP_WORK_CALLBACK)CSerialWorkQueue::WorkCallback,
                       v7,
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
        goto LABEL_7;
    }
    v7 = 0LL;
    SubmitThreadpoolWork(ThreadpoolWork);
  }
  else
  {
    v4 = -2147024882;
  }
LABEL_7:
  if ( v7 )
    _WorkTask::`scalar deleting destructor'((_WorkTask *)v7);
LABEL_9:
  v8 = *(_QWORD *)(a2 + 56);
  if ( v8 )
  {
    LOBYTE(v5) = v8 != a2;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v8 + 32LL))(v8, v5);
    *(_QWORD *)(a2 + 56) = 0LL;
  }
  return (unsigned int)v4;
}
