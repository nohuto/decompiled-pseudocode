/*
 * XREFs of ?SetAllInitialVolumesWithRamp@CVADServer@@UEAAJIPEBM_J@Z @ 0x180107570
 * Callers:
 *     AudioServerSetAllInitialVolumesWithRamp @ 0x18010AFF0 (AudioServerSetAllInitialVolumesWithRamp.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001AC8C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18001EBF0 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     WPP_SF_q @ 0x1800C480C (WPP_SF_q.c)
 *     ?SetAllInitialStreamVolumes@CAudioStream@@QEAAJIPEBM_J@Z @ 0x1800CA2BC (-SetAllInitialStreamVolumes@CAudioStream@@QEAAJIPEBM_J@Z.c)
 */

__int64 __fastcall CVADServer::SetAllInitialVolumesWithRamp(
        struct _RTL_CRITICAL_SECTION *this,
        unsigned int a2,
        const float *a3,
        __int64 a4)
{
  CAudioStream *OwningThread; // rcx
  unsigned int v9; // ebx
  __int64 v10; // rdx
  int v11; // eax
  unsigned __int64 v12; // r9
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct _RTL_CRITICAL_SECTION *v15; // [rsp+40h] [rbp+8h] BYREF

  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x13u,
      (__int64)&WPP_8bc7b28d8efe3d7b840b96e094d2bf56_Traceguids,
      this);
  }
  EnterCriticalSection(this + 5);
  OwningThread = (CAudioStream *)this[4].OwningThread;
  v15 = this + 5;
  if ( !OwningThread || !LODWORD(this[4].DebugInfo) )
  {
    v9 = -2004287487;
    v10 = 2409LL;
    goto LABEL_13;
  }
  if ( !LOBYTE(this[4].LockSemaphore) )
  {
    v9 = -2147024809;
    v10 = 2411LL;
LABEL_13:
    v12 = v9;
    goto LABEL_14;
  }
  v11 = CAudioStream::SetAllInitialStreamVolumes(OwningThread, a2, a3, a4);
  v9 = v11;
  if ( v11 < 0 )
  {
    v12 = (unsigned int)v11;
    v10 = 2413LL;
LABEL_14:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)v12);
    goto LABEL_15;
  }
  v9 = 0;
LABEL_15:
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v15);
  return v9;
}
