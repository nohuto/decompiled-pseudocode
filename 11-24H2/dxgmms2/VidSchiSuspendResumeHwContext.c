/*
 * XREFs of VidSchiSuspendResumeHwContext @ 0x140020730
 * Callers:
 *     ?VidSchiSuspendResumeHwContexts@@YAXPEAU_VIDSCH_DEVICE@@_N@Z @ 0x14001F968 (-VidSchiSuspendResumeHwContexts@@YAXPEAU_VIDSCH_DEVICE@@_N@Z.c)
 * Callees:
 *     VidSchiSignalRegisteredEvent @ 0x14001DB80 (VidSchiSignalRegisteredEvent.c)
 *     ?VidSchiCheckHwSchNodeProgress@@YAEPEAU_VIDSCH_NODE@@_N@Z @ 0x14001DC70 (-VidSchiCheckHwSchNodeProgress@@YAEPEAU_VIDSCH_NODE@@_N@Z.c)
 *     ?Acquire@AcquireSpinLock@@QEAAXXZ @ 0x14001FB70 (-Acquire@AcquireSpinLock@@QEAAXXZ.c)
 *     ?Release@AcquireSpinLock@@QEAAXXZ @ 0x14001FEE0 (-Release@AcquireSpinLock@@QEAAXXZ.c)
 *     ?VidSchiNotifyReadyQueueAdded@@YAXPEAUVIDSCH_HW_QUEUE@@@Z @ 0x140035354 (-VidSchiNotifyReadyQueueAdded@@YAXPEAUVIDSCH_HW_QUEUE@@@Z.c)
 *     ?VidSchiNotifyReadyQueueRemoved@@YAXPEAUVIDSCH_HW_QUEUE@@@Z @ 0x140035468 (-VidSchiNotifyReadyQueueRemoved@@YAXPEAUVIDSCH_HW_QUEUE@@@Z.c)
 *     _guard_dispatch_icall @ 0x140055E60 (_guard_dispatch_icall.c)
 *     memset @ 0x140056340 (memset.c)
 *     VidSchiEnsureRootPageTableUpdated @ 0x1400EAF40 (VidSchiEnsureRootPageTableUpdated.c)
 */

__int64 __fastcall VidSchiSuspendResumeHwContext(char *a1, char a2)
{
  __int64 v4; // r14
  LARGE_INTEGER *v5; // r12
  __int64 v6; // rax
  __int64 v7; // rbx
  LARGE_INTEGER *v8; // rsi
  LARGE_INTEGER PerformanceCounter; // rax
  bool v10; // zf
  DWORD v11; // esi
  __int64 v12; // rbx
  _QWORD **v14; // rdi
  _QWORD *j; // rbx
  _QWORD **v16; // rdi
  _QWORD *i; // rbx
  __int64 v18; // [rsp+20h] [rbp-79h]
  struct _ERESOURCE *Resource; // [rsp+30h] [rbp-69h]
  _QWORD v20[4]; // [rsp+38h] [rbp-61h] BYREF
  __int16 v21; // [rsp+58h] [rbp-41h]
  _QWORD v22[2]; // [rsp+60h] [rbp-39h] BYREF
  _QWORD v23[4]; // [rsp+70h] [rbp-29h] BYREF
  __int16 v24; // [rsp+90h] [rbp-9h]
  _QWORD v25[4]; // [rsp+98h] [rbp-1h] BYREF
  __int16 v26; // [rsp+B8h] [rbp+1Fh]
  _QWORD *v27; // [rsp+100h] [rbp+67h] BYREF
  _QWORD *v28; // [rsp+110h] [rbp+77h]
  LARGE_INTEGER *v29; // [rsp+118h] [rbp+7Fh]

  v18 = *((_QWORD *)a1 + 1);
  v4 = *(_QWORD *)(v18 + 32);
  Resource = (struct _ERESOURCE *)(*((_QWORD *)a1 + 2) + 1784LL);
  ExAcquireResourceSharedLite(Resource, 1u);
  if ( a2 )
  {
    v24 = 0;
    v23[0] = v4 + 1984;
    AcquireSpinLock::Acquire((Acquire *)v23);
    v5 = (LARGE_INTEGER *)(a1 + 224);
    if ( *((_QWORD *)a1 + 28) == *((_QWORD *)a1 + 29) )
    {
      ++*(_DWORD *)(v4 + 72);
      v6 = *((_QWORD *)a1 + 2);
      v27 = a1 + 224;
      v28 = a1 + 232;
      ++*(_DWORD *)(v6 + 1736);
    }
    else
    {
      v27 = a1 + 224;
      v28 = a1 + 232;
    }
    v7 = *((_QWORD *)a1 + 2);
    ++v5->QuadPart;
    v29 = (LARGE_INTEGER *)(*(_QWORD *)(v7 + 184) + 112LL * *(unsigned int *)(v7 + 196));
    v8 = v29;
    memset(v29, 0, 0x70uLL);
    *(_DWORD *)(v7 + 196) = (*(_DWORD *)(v7 + 196) + 1) & (*(_DWORD *)(v7 + 192) - 1);
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    v8->LowPart = 11;
    v8[1] = PerformanceCounter;
    v8[2].QuadPart = (LONGLONG)a1;
    v8[3] = *v5;
    AcquireSpinLock::Release((AcquireSpinLock *)v23);
    _InterlockedExchange((volatile __int32 *)(*((_QWORD *)a1 + 2) + 504LL), 1);
    v10 = (*((_DWORD *)a1 + 14) & 0x1000) == 0;
    v22[1] = v5->QuadPart;
    v22[0] = *((_QWORD *)a1 + 6);
    if ( v10 )
      v11 = ((__int64 (__fastcall *)(_QWORD, _QWORD *))DxgCoreInterface[46])(*(_QWORD *)(v4 + 8), v22);
    else
      v11 = 0;
    v29[5].LowPart = v11;
    if ( v11 == 259 )
    {
      v12 = v4 + 1984;
    }
    else
    {
      v12 = v4 + 1984;
      v26 = 0;
      v25[0] = v4 + 1984;
      AcquireSpinLock::Acquire((Acquire *)v25);
      if ( *((_QWORD *)a1 + 29) != v5->QuadPart )
      {
        _InterlockedIncrement64((volatile signed __int64 *)(*((_QWORD *)a1 + 2) + 1744LL));
        --*(_DWORD *)(v4 + 72);
        --*(_DWORD *)(*((_QWORD *)a1 + 2) + 1736LL);
        *v28 = *v27;
        VidSchiCheckHwSchNodeProgress(*((struct _VIDSCH_NODE **)a1 + 2), 0);
        VidSchiSignalRegisteredEvent(v4, (struct _KEVENT **)(v18 + 168));
      }
      AcquireSpinLock::Release((AcquireSpinLock *)v25);
    }
    v20[0] = v12;
    v21 = 0;
    AcquireSpinLock::Acquire((Acquire *)v20);
    if ( !a1[144] )
    {
      a1[144] = 1;
      v16 = (_QWORD **)(a1 + 288);
      for ( i = *v16; i != v16; i = (_QWORD *)*i )
      {
        if ( *((_DWORD *)i + 29) == 1 )
          VidSchiNotifyReadyQueueRemoved((struct VIDSCH_HW_QUEUE *)(i - 1));
      }
    }
  }
  else
  {
    VidSchiEnsureRootPageTableUpdated(a1);
    v10 = (*((_DWORD *)a1 + 14) & 0x1000) == 0;
    v27 = (_QWORD *)*((_QWORD *)a1 + 6);
    if ( v10 )
      v11 = ((__int64 (__fastcall *)(_QWORD, _QWORD **))DxgCoreInterface[47])(*(_QWORD *)(v4 + 8), &v27);
    else
      v11 = 0;
    v21 = 0;
    v20[0] = v4 + 1984;
    AcquireSpinLock::Acquire((Acquire *)v20);
    if ( a1[144] )
    {
      a1[144] = 0;
      v14 = (_QWORD **)(a1 + 288);
      for ( j = *v14; j != v14; j = (_QWORD *)*j )
      {
        if ( *((_DWORD *)j + 29) == 1 )
          VidSchiNotifyReadyQueueAdded((struct VIDSCH_HW_QUEUE *)(j - 1));
      }
    }
  }
  AcquireSpinLock::Release((AcquireSpinLock *)v20);
  ExReleaseResourceLite(Resource);
  return v11;
}
