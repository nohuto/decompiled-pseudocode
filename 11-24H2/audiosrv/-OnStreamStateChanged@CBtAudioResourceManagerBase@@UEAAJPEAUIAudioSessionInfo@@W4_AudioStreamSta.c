/*
 * XREFs of ?OnStreamStateChanged@CBtAudioResourceManagerBase@@UEAAJPEAUIAudioSessionInfo@@W4_AudioStreamState@@1PEAUIAudioStreamInfo@@@Z @ 0x1800DF4A0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180020710 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?QueueWorkItem@CSerialWorkQueue@@QEAAJV?$function@$$A6AXXZ@std@@@Z @ 0x1800271A0 (-QueueWorkItem@CSerialWorkQueue@@QEAAJV-$function@$$A6AXXZ@std@@@Z.c)
 *     ?QueueRecurringItem@CSerialWorkQueue@@QEAAJKKV?$function@$$A6AXXZ@std@@AEAV?$unique_ptr@U_RecurringTask@@U?$default_delete@U_RecurringTask@@@std@@@3@@Z @ 0x1800274F0 (-QueueRecurringItem@CSerialWorkQueue@@QEAAJKKV-$function@$$A6AXXZ@std@@AEAV-$unique_ptr@U_Recurr.c)
 *     ?GetSerialWorkQueue@@YAAEAVCSerialWorkQueue@@XZ @ 0x180027E54 (-GetSerialWorkQueue@@YAAEAVCSerialWorkQueue@@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CBtAudioResourceManagerBase::OnStreamStateChanged(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        __int64 *a5)
{
  __int64 *v5; // r14
  int v6; // r13d
  int v9; // edi
  int v10; // r12d
  __int64 v11; // rcx
  unsigned int v12; // eax
  __int64 v13; // rcx
  int v14; // ebx
  struct CSerialWorkQueue *SerialWorkQueue; // rax
  struct CSerialWorkQueue *v16; // rax
  __int64 v17; // r8
  struct CSerialWorkQueue *v18; // rax
  __int128 v20; // [rsp+30h] [rbp-50h]
  __int64 (__fastcall **v21)(); // [rsp+40h] [rbp-40h] BYREF
  __int128 v22; // [rsp+48h] [rbp-38h]
  __int64 (__fastcall ***v23)(); // [rsp+78h] [rbp-8h]
  struct _RTL_CRITICAL_SECTION *v24; // [rsp+B0h] [rbp+30h] BYREF

  v5 = a5;
  v6 = 1;
  if ( a4 != 1 )
    v6 = -1;
  v9 = (*(__int64 (__fastcall **)(__int64 *))(*a5 + 56))(a5);
  v10 = 0;
  a5 = (__int64 *)(v9 == 1);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 248));
  v11 = *v5;
  v24 = (struct _RTL_CRITICAL_SECTION *)(a1 + 248);
  v12 = (*(__int64 (__fastcall **)(__int64 *))(v11 + 48))(v5);
  v13 = v12 + 24LL * ((_QWORD)a5 + 3);
  *(_DWORD *)(a1 + 4 * v13) += v6;
  v14 = *(_DWORD *)(a1 + 4 * v13);
  if ( v9 == 1 )
    *(_DWORD *)(a1 + 480) += v6;
  if ( (*(unsigned __int8 (__fastcall **)(__int64 *))(*v5 + 200))(v5)
    || (*(unsigned int (__fastcall **)(__int64 *))(*v5 + 48))(v5) - 6 <= 1 )
  {
    *(_DWORD *)(a1 + 484) += v6;
    v10 = *(_DWORD *)(a1 + 484);
  }
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v24);
  if ( (*(unsigned __int8 (__fastcall **)(__int64 *))(*v5 + 200))(v5)
    || (*(unsigned int (__fastcall **)(__int64 *))(*v5 + 48))(v5) - 6 <= 1 )
  {
    if ( v10 == 1 )
    {
      if ( a4 == 1 )
      {
        SerialWorkQueue = GetSerialWorkQueue();
        *(_QWORD *)&v22 = a1 - 16;
        v21 = off_18017C050;
        v23 = &v21;
        CSerialWorkQueue::QueueWorkItem((__int64)SerialWorkQueue, (__int64 *)&v21);
      }
    }
    else if ( !v10 && a4 != 1 )
    {
      v16 = GetSerialWorkQueue();
      v21 = off_18017C020;
      *(_QWORD *)&v22 = a1 - 16;
      v23 = &v21;
      CSerialWorkQueue::QueueRecurringItem((__int64)v16, 0x1388u, v17, &v21, a1 + 240);
    }
  }
  if ( v14 == 1 && a4 == 1 || !v14 && a4 != 1 )
  {
    v18 = GetSerialWorkQueue();
    *(_QWORD *)&v20 = a1 - 16;
    DWORD2(v20) = (_DWORD)a5;
    v21 = off_18017BFF0;
    v23 = &v21;
    v22 = v20;
    CSerialWorkQueue::QueueWorkItem((__int64)v18, (__int64 *)&v21);
  }
  return 0LL;
}
