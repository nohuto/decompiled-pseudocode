/*
 * XREFs of ?QueueRecurringItem@CSerialWorkQueue@@QEAAJKKV?$function@$$A6AXXZ@std@@AEAV?$unique_ptr@U_RecurringTask@@U?$default_delete@U_RecurringTask@@@std@@@3@@Z @ 0x18001CE00
 * Callers:
 *     ?StartSessionPersistanceTimer@CPerStreamVolumeAudioSession@@AEAAJXZ @ 0x18001DE30 (-StartSessionPersistanceTimer@CPerStreamVolumeAudioSession@@AEAAJXZ.c)
 *     ?OnStreamGroupDestroyed@CBtAudioResourceManagerBase@@UEAAXW4AUDIO_DIRECTION@@PEAUIStreamGroupProxy@@@Z @ 0x18007E560 (-OnStreamGroupDestroyed@CBtAudioResourceManagerBase@@UEAAXW4AUDIO_DIRECTION@@PEAUIStreamGroupPro.c)
 *     ?DestroyStream@CAudioResourceManager@@UEAAJPEAUIAudioStreamInfo@@@Z @ 0x1800BC790 (-DestroyStream@CAudioResourceManager@@UEAAJPEAUIAudioStreamInfo@@@Z.c)
 *     _lambda_85ba0ca61e3c2b77a785476ced47f678_::operator() @ 0x1800D37D4 (_lambda_85ba0ca61e3c2b77a785476ced47f678_--operator().c)
 *     ?OnStreamStateChanged@CBtAudioResourceManagerBase@@UEAAJPEAUIAudioSessionInfo@@W4_AudioStreamState@@1PEAUIAudioStreamInfo@@@Z @ 0x1800D9700 (-OnStreamStateChanged@CBtAudioResourceManagerBase@@UEAAJPEAUIAudioSessionInfo@@W4_AudioStreamSta.c)
 *     ?SetMuteValue@CMuteSoftware@@UEAAJH@Z @ 0x1800FE570 (-SetMuteValue@CMuteSoftware@@UEAAJH@Z.c)
 *     _lambda_c4f66075b064f94c83b6e478b87a895c_::operator() @ 0x1801058A0 (_lambda_c4f66075b064f94c83b6e478b87a895c_--operator().c)
 *     ?UpdateMasterVolumeLevel@CVolumeSoftware@@MEAAJ_N@Z @ 0x18010DC40 (-UpdateMasterVolumeLevel@CVolumeSoftware@@MEAAJ_N@Z.c)
 * Callees:
 *     ??$?4U?$default_delete@U_RecurringTask@@@std@@$0A@@?$unique_ptr@U_RecurringTask@@U?$default_delete@U_RecurringTask@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18001D17C (--$-4U-$default_delete@U_RecurringTask@@@std@@$0A@@-$unique_ptr@U_RecurringTask@@U-$default_dele.c)
 *     ??$_Construct_in_place@V?$function@$$A6AXXZ@std@@AEAV12@@std@@YAXAEAV?$function@$$A6AXXZ@0@0@Z @ 0x18001D25C (--$_Construct_in_place@V-$function@$$A6AXXZ@std@@AEAV12@@std@@YAXAEAV-$function@$$A6AXXZ@0@0@Z.c)
 *     ??R?$default_delete@U_RecurringTask@@@std@@QEBAXPEAU_RecurringTask@@@Z @ 0x1800530FC (--R-$default_delete@U_RecurringTask@@@std@@QEBAXPEAU_RecurringTask@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800A7FC8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?load@?$_Atomic_storage@_N$00@std@@QEBA_NW4memory_order@2@@Z @ 0x1800B51EC (-load@-$_Atomic_storage@_N$00@std@@QEBA_NW4memory_order@2@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5
__int64 CSerialWorkQueue::QueueRecurringItem(__int64 a1, unsigned int a2, __int64 a3, ...)
{
  struct _FILETIME v3; // rbp
  __int64 v4; // r15
  signed int v6; // edi
  PTP_POOL Threadpool; // rax
  signed int v8; // eax
  PTP_CLEANUP_GROUP ThreadpoolCleanupGroup; // rax
  signed int v10; // eax
  PTP_TIMER *v11; // rax
  _BYTE *v12; // rcx
  PTP_TIMER *v13; // rbx
  __int64 *v14; // rcx
  __int64 v15; // rdx
  __int64 (__fastcall ***v17)(_QWORD, _BYTE *); // rcx
  HANDLE ProcessHeap; // rax
  _DWORD *v19; // rax
  _DWORD *v20; // rsi
  volatile signed __int32 *v21; // rdi
  PTP_TIMER v22; // rsi
  _BYTE *v23; // rdx
  PTP_TIMER ThreadpoolTimer; // rax
  struct _TP_TIMER *v25; // rsi
  signed int LastError; // eax
  signed int v27; // eax
  _BYTE v28[56]; // [rsp+30h] [rbp-78h] BYREF
  _BYTE *v29; // [rsp+68h] [rbp-40h]
  PTP_TIMER *v30; // [rsp+B0h] [rbp+8h] BYREF
  struct _FILETIME pftDueTime; // [rsp+C8h] [rbp+20h] BYREF
  va_list pftDueTimea; // [rsp+C8h] [rbp+20h]
  __int64 v33; // [rsp+D0h] [rbp+28h]
  va_list va1; // [rsp+D8h] [rbp+30h] BYREF

  va_start(va1, a3);
  va_start(pftDueTimea, a3);
  pftDueTime = va_arg(va1, struct _FILETIME);
  v33 = va_arg(va1, _QWORD);
  v3 = pftDueTime;
  v4 = a2;
  v6 = 0;
  if ( (unsigned __int8)std::_Atomic_storage<bool,1>::load(a1 + 80) )
    goto LABEL_19;
  if ( *(_QWORD *)a1 )
  {
LABEL_13:
    v11 = (PTP_TIMER *)operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
    v13 = v11;
    v30 = v11;
    if ( v11 )
    {
      *v11 = 0LL;
      v11[1] = 0LL;
      v11[2] = 0LL;
    }
    else
    {
      v13 = 0LL;
    }
    v30 = v13;
    if ( v13 )
    {
      v29 = 0LL;
      v17 = *(__int64 (__fastcall ****)(_QWORD, _BYTE *))(*(_QWORD *)&v3 + 56LL);
      if ( v17 )
        v29 = (_BYTE *)(**v17)(v17, v28);
      v13[3] = (PTP_TIMER)a1;
      ProcessHeap = GetProcessHeap();
      v19 = HeapAlloc(ProcessHeap, 0, 0x50uLL);
      v20 = v19;
      if ( v19 )
      {
        *(_OWORD *)v19 = 0LL;
        v19[2] = 1;
        v19[3] = 1;
        *(_QWORD *)v19 = &std::_Ref_count_obj2<std::function<long (SystemEffectDescriptor *,SystemEffectChainDescriptor *)>>::`vftable';
        std::_Construct_in_place<std::function<void (void)>,std::function<void (void)> &>(v19 + 4, v28);
      }
      else
      {
        v20 = 0LL;
      }
      v13[1] = (PTP_TIMER)(v20 + 4);
      v21 = (volatile signed __int32 *)v13[2];
      v13[2] = (PTP_TIMER)v20;
      if ( v21 )
      {
        if ( _InterlockedExchangeAdd(v21 + 2, 0xFFFFFFFF) == 1 )
        {
          (**(void (__fastcall ***)(volatile signed __int32 *))v21)(v21);
          if ( _InterlockedExchangeAdd(v21 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v21 + 8LL))(v21);
        }
      }
      v22 = v13[1];
      v6 = -2147024882;
      if ( v22 )
        v6 = 0;
      v12 = v29;
      if ( v29 )
      {
        v23 = v28;
        LOBYTE(v23) = v29 != v28;
        (*(void (__fastcall **)(_BYTE *, _BYTE *))(*(_QWORD *)v29 + 32LL))(v29, v23);
      }
      if ( !v22 )
        goto LABEL_17;
      ThreadpoolTimer = CreateThreadpoolTimer(
                          (PTP_TIMER_CALLBACK)CSerialWorkQueue::TimerCallback,
                          v13,
                          (PTP_CALLBACK_ENVIRON)(a1 + 8));
      v25 = ThreadpoolTimer;
      if ( ThreadpoolTimer )
      {
        v6 = 0;
        *v13 = ThreadpoolTimer;
      }
      else
      {
        LastError = GetLastError();
        v6 = LastError;
        if ( LastError > 0 )
          v6 = (unsigned __int16)LastError | 0x80070000;
        *v13 = 0LL;
        if ( v6 < 0 )
          goto LABEL_17;
      }
      pftDueTime = (struct _FILETIME)(-10000 * v4);
      SetThreadpoolTimer(v25, (PFILETIME)pftDueTimea, 0, 0);
      std::unique_ptr<_RecurringTask>::operator=<std::default_delete<_RecurringTask>,0>(v33, &v30);
    }
    else
    {
      v6 = -2147024882;
    }
LABEL_17:
    if ( v30 )
      std::default_delete<_RecurringTask>::operator()(v12, v30);
    goto LABEL_19;
  }
  Threadpool = CreateThreadpool(0LL);
  *(_QWORD *)a1 = Threadpool;
  if ( Threadpool )
    goto LABEL_11;
  v27 = GetLastError();
  v6 = v27;
  if ( v27 > 0 )
    v6 = (unsigned __int16)v27 | 0x80070000;
  if ( v6 >= 0 )
  {
LABEL_11:
    if ( SetThreadpoolThreadMinimum(*(PTP_POOL *)a1, 1u) )
      goto LABEL_49;
    v8 = GetLastError();
    v6 = v8;
    if ( v8 > 0 )
      v6 = (unsigned __int16)v8 | 0x80070000;
    if ( v6 >= 0 )
    {
LABEL_49:
      ThreadpoolCleanupGroup = CreateThreadpoolCleanupGroup();
      *(_QWORD *)(a1 + 120) = ThreadpoolCleanupGroup;
      if ( ThreadpoolCleanupGroup )
        goto LABEL_12;
      v10 = GetLastError();
      v6 = v10;
      if ( v10 > 0 )
        v6 = (unsigned __int16)v10 | 0x80070000;
      if ( v6 >= 0 )
      {
LABEL_12:
        SetThreadpoolThreadMaximum(*(PTP_POOL *)a1, 1u);
        *(_QWORD *)(a1 + 16) = *(_QWORD *)a1;
        *(_QWORD *)(a1 + 24) = *(_QWORD *)(a1 + 120);
        *(_QWORD *)(a1 + 32) = 0LL;
        goto LABEL_13;
      }
    }
  }
LABEL_19:
  v14 = *(__int64 **)(*(_QWORD *)&v3 + 56LL);
  if ( v14 )
  {
    v15 = *v14;
    LOBYTE(v15) = v14 != *(__int64 **)&v3;
    (*(void (__fastcall **)(__int64 *, __int64))(*v14 + 32))(v14, v15);
    *(_QWORD *)(*(_QWORD *)&v3 + 56LL) = 0LL;
  }
  return (unsigned int)v6;
}
