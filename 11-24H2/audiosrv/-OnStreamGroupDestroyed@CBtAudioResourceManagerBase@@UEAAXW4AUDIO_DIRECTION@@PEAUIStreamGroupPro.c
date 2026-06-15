/*
 * XREFs of ?OnStreamGroupDestroyed@CBtAudioResourceManagerBase@@UEAAXW4AUDIO_DIRECTION@@PEAUIStreamGroupProxy@@@Z @ 0x18006C3B0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180020710 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?QueueRecurringItem@CSerialWorkQueue@@QEAAJKKV?$function@$$A6AXXZ@std@@AEAV?$unique_ptr@U_RecurringTask@@U?$default_delete@U_RecurringTask@@@std@@@3@@Z @ 0x1800274F0 (-QueueRecurringItem@CSerialWorkQueue@@QEAAJKKV-$function@$$A6AXXZ@std@@AEAV-$unique_ptr@U_Recurr.c)
 *     ?GetSerialWorkQueue@@YAAEAVCSerialWorkQueue@@XZ @ 0x180027E54 (-GetSerialWorkQueue@@YAAEAVCSerialWorkQueue@@XZ.c)
 *     __security_check_cookie @ 0x1800A3DA0 (__security_check_cookie.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B096C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CBtAudioResourceManagerBase::OnStreamGroupDestroyed(__int64 a1, int a2, __int64 a3)
{
  unsigned __int8 (__fastcall *v4)(__int64, __int128 *); // rbx
  struct CSerialWorkQueue *SerialWorkQueue; // rax
  __int64 v6; // r8
  int v7; // eax
  __int128 v8; // [rsp+30h] [rbp-78h] BYREF
  _QWORD v9[8]; // [rsp+40h] [rbp-68h] BYREF
  __int64 v10; // [rsp+80h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+0h]

  if ( !a2 )
  {
    v4 = *(unsigned __int8 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)a1 + 152LL);
    v8 = *(_OWORD *)(*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)a3 + 136LL))(a3, &v10);
    if ( v4(a1, &v8) )
    {
      EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 112));
      *(_QWORD *)&v8 = a1 + 112;
      SerialWorkQueue = GetSerialWorkQueue();
      v9[1] = a1;
      v9[0] = off_18017C0E0;
      v9[7] = v9;
      v7 = CSerialWorkQueue::QueueRecurringItem((__int64)SerialWorkQueue, 0x1388u, v6, v9);
      if ( v7 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x2DE,
          (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\btaudioresourcemanagerbase.cpp",
          (const char *)(unsigned int)v7,
          a1 + 152);
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>((struct _RTL_CRITICAL_SECTION **)&v8);
    }
  }
}
