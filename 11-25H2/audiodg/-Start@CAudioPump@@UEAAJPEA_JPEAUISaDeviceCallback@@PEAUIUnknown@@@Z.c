/*
 * XREFs of ?Start@CAudioPump@@UEAAJPEA_JPEAUISaDeviceCallback@@PEAUIUnknown@@@Z @ 0x140021AF0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14000ABF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AERTGetDLLRTHeap@@YAPEAXXZ @ 0x14000CD4C (-AERTGetDLLRTHeap@@YAPEAXXZ.c)
 *     ?SignalAndWaitForThread@CAudioPump@@AEAAXXZ @ 0x14001E024 (-SignalAndWaitForThread@CAudioPump@@AEAAXXZ.c)
 *     ?reset@?$com_ptr_t@UIAudioStreamingResourceRegistration@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x14001E0E0 (-reset@-$com_ptr_t@UIAudioStreamingResourceRegistration@@Uerr_returncode_policy@wil@@@wil@@QEAAX.c)
 *     ?IsOffload@CAudioPump@@QEAA_NXZ @ 0x140021810 (-IsOffload@CAudioPump@@QEAA_NXZ.c)
 *     ?ResetEvent@details@wil@@YAXPEAX@Z @ 0x140021E30 (-ResetEvent@details@wil@@YAXPEAX@Z.c)
 *     ?AERTLockModuleSection@@YAJPEAX@Z @ 0x140021E60 (-AERTLockModuleSection@@YAJPEAX@Z.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x14002253C (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     ?AERTLockHeap@@YAJPEAX@Z @ 0x140022910 (-AERTLockHeap@@YAJPEAX@Z.c)
 *     ?SetTimer@CAudioPump@@AEAAJPEAX_J_N@Z @ 0x14002C1E0 (-SetTimer@CAudioPump@@AEAAJPEAX_J_N@Z.c)
 *     ??1?$CSAutoLock@$00@@QEAA@XZ @ 0x14002CC20 (--1-$CSAutoLock@$00@@QEAA@XZ.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1400574C8 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAudioPump::Start(CAudioPump *this, __int64 *a2, struct ISaDeviceCallback *a3, struct IUnknown *a4)
{
  struct _RTL_CRITICAL_SECTION *v7; // rsi
  HANDLE *v8; // rbp
  __int64 v9; // r14
  void *v10; // rdx
  void *v11; // rax
  void *v12; // rcx
  void *v13; // rdx
  __int64 v14; // rcx
  HANDLE Thread; // rax
  const char *v16; // r9
  unsigned int LastError; // ebx
  int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // r8
  void *v22; // rdx
  int v23; // eax
  void *v24; // rdx
  void *v25; // rax
  int v26; // eax
  void *v27; // rdx
  struct _RTL_CRITICAL_SECTION *v28; // [rsp+30h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v7 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 128);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 128));
  v28 = v7;
  if ( !*((_BYTE *)this + 72) )
  {
    LastError = -2005139437;
    v20 = 1017LL;
LABEL_21:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v20,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\audiopump.cpp",
      (const char *)LastError);
    goto LABEL_14;
  }
  v8 = (HANDLE *)((char *)this + 120);
  if ( (unsigned __int64)(*((_QWORD *)this + 15) - 1LL) <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    LastError = -2005139434;
    v20 = 1020LL;
    goto LABEL_21;
  }
  v9 = *((_QWORD *)this + 41);
  *((_QWORD *)this + 41) = a3;
  if ( a3 )
    (*(void (__fastcall **)(struct ISaDeviceCallback *))(*(_QWORD *)a3 + 8LL))(a3);
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  if ( a4 )
  {
    wil::com_ptr_t<IAudioStreamingResourceRegistration,wil::err_returncode_policy>::reset((__int64 *)this + 586);
    v19 = ((__int64 (__fastcall *)(struct IUnknown *, GUID *, char *))a4->lpVtbl->QueryInterface)(
            a4,
            &GUID_be7a4789_2891_49b3_923e_dc97de058472,
            (char *)this + 4688);
    LastError = v19;
    if ( v19 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x404,
        (int)"avcore\\audiocore\\server\\audiodg\\exe\\audiopump.cpp",
        (const char *)(unsigned int)v19);
LABEL_31:
      CSAutoLock<1>::~CSAutoLock<1>(&v28);
      return LastError;
    }
  }
  if ( !CAudioPump::IsOffload((__int64 (__fastcall **)(CAudioPump *))this) )
    _InterlockedExchange((volatile __int32 *)this + 84, 2);
  *((_BYTE *)this + 76) = 0;
  wil::details::ResetEvent(*((wil::details **)this + 35), v10);
  *((_BYTE *)this + 4681) = 0;
  v11 = (void *)AERTGetDLLRTHeap();
  *((_BYTE *)this + 324) = (int)AERTLockHeap(v11) >= 0;
  *((_BYTE *)this + 325) = (int)AERTLockModuleSection(v12) >= 0;
  wil::details::ResetEvent(*((wil::details **)this + 33), v13);
  v14 = *((_QWORD *)this + 53);
  if ( v14 )
  {
    v25 = (void *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v14 + 24LL))(v14);
    ResetEvent(v25);
  }
  Thread = CreateThread(0LL, 0LL, *((LPTHREAD_START_ROUTINE *)this + 27), this, 0, (LPDWORD)this + 24);
  wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
    (char *)this + 120,
    Thread);
  if ( (((unsigned __int64)*v8 + 1) & 0xFFFFFFFFFFFFFFFEuLL) == 0 )
  {
    LastError = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)0x42C,
                  (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\audiopump.cpp",
                  v16);
    goto LABEL_14;
  }
  SetThreadPriority(*v8, 2);
  WaitForSingleObjectEx(*((HANDLE *)this + 33), 0x2710u, 0);
  if ( _InterlockedCompareExchange((volatile signed __int32 *)this + 84, 0, 0) )
  {
    v21 = *((_QWORD *)this + 13);
    v22 = (void *)*((_QWORD *)this + 37);
    if ( *((_QWORD *)this + 39) )
    {
      v23 = CAudioPump::SetTimer(this, v22, 2 * v21, 0);
      LastError = v23;
      if ( v23 >= 0 )
        goto LABEL_25;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x44B,
        (int)"avcore\\audiocore\\server\\audiodg\\exe\\audiopump.cpp",
        (const char *)(unsigned int)v23);
      CAudioPump::SignalAndWaitForThread(this, v24);
LABEL_14:
      if ( v7 )
        LeaveCriticalSection(v7);
      return LastError;
    }
    v26 = CAudioPump::SetTimer(this, v22, v21, 1);
    LastError = v26;
    if ( v26 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x450,
        (int)"avcore\\audiocore\\server\\audiodg\\exe\\audiopump.cpp",
        (const char *)(unsigned int)v26);
      CAudioPump::SignalAndWaitForThread(this, v27);
      goto LABEL_31;
    }
  }
LABEL_25:
  if ( v7 )
    LeaveCriticalSection(v7);
  return 0LL;
}
