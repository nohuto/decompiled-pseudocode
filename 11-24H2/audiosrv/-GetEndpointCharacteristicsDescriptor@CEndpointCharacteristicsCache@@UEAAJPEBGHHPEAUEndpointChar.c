/*
 * XREFs of ?GetEndpointCharacteristicsDescriptor@CEndpointCharacteristicsCache@@UEAAJPEBGHHPEAUEndpointCharacteristicsDescriptor@@@Z @ 0x18004A4E0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180008B80 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180014EAC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CEndpointCharacteristicsCache::GetEndpointCharacteristicsDescriptor(
        CEndpointCharacteristicsCache *this,
        const unsigned __int16 *a2,
        __int64 a3,
        __int64 a4,
        struct EndpointCharacteristicsDescriptor *a5)
{
  __int64 v5; // rax
  int v6; // eax
  unsigned int v7; // ebx
  struct EndpointCharacteristicsDescriptor *v8; // rdi
  __int64 v9; // rsi
  struct _RTL_CRITICAL_SECTION *v10; // rbx
  ULONG_PTR SpinCount; // rax
  ULONG_PTR v12; // rcx
  volatile signed __int32 *v13; // rbx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct _RTL_CRITICAL_SECTION *v16; // [rsp+40h] [rbp+8h] BYREF

  v5 = *(_QWORD *)this;
  v16 = 0LL;
  v6 = (*(__int64 (__fastcall **)(CEndpointCharacteristicsCache *, const unsigned __int16 *))(v5 + 24))(this, a2);
  v7 = v6;
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1499,
      (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)(unsigned int)v6);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v16);
    return v7;
  }
  else
  {
    v8 = a5;
    v9 = *(_QWORD *)a5;
    v10 = v16;
    *(_QWORD *)a5 = v16;
    if ( v10 )
    {
      ((void (__fastcall *)(struct _RTL_CRITICAL_SECTION *))v10->DebugInfo->CriticalSection)(v10);
      v10 = v16;
    }
    if ( v9 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
      v10 = v16;
    }
    EnterCriticalSection(v10 + 8);
    if ( v10 != (struct _RTL_CRITICAL_SECTION *)-320LL )
      LeaveCriticalSection(v10 + 8);
    SpinCount = v10[9].SpinCount;
    if ( SpinCount )
      _InterlockedIncrement((volatile signed __int32 *)(SpinCount + 8));
    v12 = v10[9].SpinCount;
    *((_QWORD *)v8 + 1) = v10[9].LockSemaphore;
    v13 = (volatile signed __int32 *)*((_QWORD *)v8 + 2);
    *((_QWORD *)v8 + 2) = v12;
    if ( v13 )
    {
      if ( _InterlockedExchangeAdd(v13 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v13)(v13);
        if ( _InterlockedExchangeAdd(v13 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v13 + 8LL))(v13);
      }
    }
    if ( v16 )
      ((void (__fastcall *)(struct _RTL_CRITICAL_SECTION *))v16->DebugInfo->ProcessLocksList.Flink)(v16);
    return 0LL;
  }
}
