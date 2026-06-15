/*
 * XREFs of ?Stop@CAudioPump@@UEAAJXZ @ 0x14001DAA0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14000AC24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AERTGetDLLRTHeap@@YAPEAXXZ @ 0x14000CD7C (-AERTGetDLLRTHeap@@YAPEAXXZ.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_RTL_CRITICAL_SECTION@@@Z @ 0x14001DCB0 (-reset@-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1-LeaveCritic.c)
 *     ?SignalAndWaitForThread@CAudioPump@@AEAAXXZ @ 0x14001DD24 (-SignalAndWaitForThread@CAudioPump@@AEAAXXZ.c)
 *     ?CancelTimer@CAudioPump@@AEAAXPEAX@Z @ 0x14001DDA4 (-CancelTimer@CAudioPump@@AEAAXPEAX@Z.c)
 *     ?AERTUnlockModuleSection@@YAJPEAX@Z @ 0x14001DE40 (-AERTUnlockModuleSection@@YAJPEAX@Z.c)
 *     ?AERTUnlockHeap@@YAJPEAX@Z @ 0x14001DEA0 (-AERTUnlockHeap@@YAJPEAX@Z.c)
 *     McTemplateU0pqx_EtwEventWriteTransfer @ 0x140066974 (McTemplateU0pqx_EtwEventWriteTransfer.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAudioPump::Stop(CAudioPump *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  CAudioPump *v3; // rcx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  void *v9; // rcx
  void *v10; // rax
  void *v11; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+40h] [rbp+8h] BYREF

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 168);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 168));
  lpCriticalSection = v2;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 128));
  *((_BYTE *)this + 76) = 1;
  wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::reset(
    &lpCriticalSection,
    0LL);
  if ( *((_BYTE *)this + 72) )
  {
    if ( ((*((_QWORD *)this + 15) + 1LL) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
    {
      CAudioPump::CancelTimer(v3, *((void **)this + 37));
      if ( (byte_1400C4541 & 4) != 0 )
        McTemplateU0pqx_EtwEventWriteTransfer(v6, v5, this, 9LL);
      CAudioPump::SignalAndWaitForThread(this);
      v8 = *((_QWORD *)this + 53);
      if ( v8 )
      {
        v11 = (void *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 24LL))(v8);
        SetEvent(v11);
      }
      _InterlockedExchange64((volatile __int64 *)this + 48, 0LL);
      v9 = (void *)*((_QWORD *)this + 41);
      *((_QWORD *)this + 41) = 0LL;
      if ( v9 )
        (*(void (__fastcall **)(void *))(*(_QWORD *)v9 + 16LL))(v9);
      if ( *((_BYTE *)this + 325) )
      {
        AERTUnlockModuleSection(v9);
        *((_BYTE *)this + 325) = 0;
      }
      if ( *((_BYTE *)this + 324) )
      {
        v10 = (void *)AERTGetDLLRTHeap();
        AERTUnlockHeap(v10);
        *((_BYTE *)this + 324) = 0;
      }
      if ( (byte_1400C4541 & 4) != 0 )
        McTemplateU0pqx_EtwEventWriteTransfer(v9, v7, this, 2LL);
      if ( this != (CAudioPump *)-128LL )
        LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 128));
      if ( lpCriticalSection )
        LeaveCriticalSection(lpCriticalSection);
      return 0LL;
    }
    else
    {
      if ( this != (CAudioPump *)-128LL )
        LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 128));
      if ( lpCriticalSection )
        LeaveCriticalSection(lpCriticalSection);
      return 2289827863LL;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x47F,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\audiopump.cpp",
      (const char *)0x887C0013LL);
    if ( this != (CAudioPump *)-128LL )
      LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 128));
    if ( lpCriticalSection )
      LeaveCriticalSection(lpCriticalSection);
    return 2289827859LL;
  }
}
