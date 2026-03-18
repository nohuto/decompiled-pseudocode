/*
 * XREFs of ??0CTempW32ThreadNonPaged@@QEAA@XZ @ 0x140026F60
 * Callers:
 *     ?DxgkProcessNotify@@YAXPEAU_EPROCESS@@PEAXPEAU_PS_CREATE_NOTIFY_INFO@@@Z @ 0x140014430 (-DxgkProcessNotify@@YAXPEAU_EPROCESS@@PEAXPEAU_PS_CREATE_NOTIFY_INFO@@@Z.c)
 *     ?Delete@DxgkCompositionObject@@SAXPEAX@Z @ 0x140026CA0 (-Delete@DxgkCompositionObject@@SAXPEAX@Z.c)
 *     ?DxgkProcessCallout@@YAJPEAPEAXQEBU_DXGKWIN32KENG_INTERFACE_HEADER@@E@Z @ 0x14034CBB0 (-DxgkProcessCallout@@YAJPEAPEAXQEBU_DXGKWIN32KENG_INTERFACE_HEADER@@E@Z.c)
 * Callees:
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x14000A750 (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 *     W32GetCurrentThreadNonPaged @ 0x1400709B0 (W32GetCurrentThreadNonPaged.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     memset @ 0x1400A2000 (memset.c)
 */

CTempW32ThreadNonPaged *__fastcall CTempW32ThreadNonPaged::CTempW32ThreadNonPaged(CTempW32ThreadNonPaged *this)
{
  _QWORD *CurrentThreadNonPaged; // rax
  _QWORD *v3; // rsi
  CTempW32ThreadNonPaged *result; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // edi
  __int64 CurrentThreadProcess; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8

  memset(this, 0, 0xF8uLL);
  *((_BYTE *)this + 248) = 0;
  CurrentThreadNonPaged = (_QWORD *)W32GetCurrentThreadNonPaged();
  v3 = CurrentThreadNonPaged;
  if ( CurrentThreadNonPaged )
  {
    if ( *CurrentThreadNonPaged )
    {
      if ( !(unsigned __int8)KeIsAttachedProcess()
        || (CurrentProcess = PsGetCurrentProcess(),
            ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
            CurrentThreadProcess = PsGetCurrentThreadProcess(),
            ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
      {
        if ( *(_DWORD *)(*v3 + 376LL) )
        {
          *(_QWORD *)this = *v3;
          if ( !*(_QWORD *)&DXGGLOBAL::m_pGlobal )
          {
            WdLogSingleEntry0(1LL);
            WdLogGlobalForLineNumber = 2605;
            if ( bTracingEnabled )
            {
              if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200000000LL) != 0 )
                McTemplateK0zqqzxxxxx_EtwWriteTransfer(v12, v11, v13, 0LL, 2, -1, L"m_pGlobal != NULL", 45, 0, 0, 0, 0);
            }
          }
          if ( (*(int (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)&DXGGLOBAL::m_pGlobal + 304952LL) + 8LL))(*v3) <= 1 )
          {
            WdLogSingleEntry0(1LL);
            WdLogGlobalForLineNumber = 99;
            if ( bTracingEnabled )
            {
              if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200000000LL) != 0 )
                McTemplateK0zqqzxxxxx_EtwWriteTransfer(v6, v5, v7, 0LL, 2, -1, L"newRefCount > 1", 99, 0, 0, 0, 0);
            }
          }
        }
      }
    }
    return this;
  }
  else
  {
    ExInitializeFastOwnerEntry((char *)this + 32);
    ExInitializeFastOwnerEntry((char *)this + 104);
    ExInitializeFastOwnerEntry((char *)this + 176);
    *((_DWORD *)this + 6) |= 1u;
    PsSetThreadWin32Thread(KeGetCurrentThread(), this, 0LL);
    result = this;
    *((_BYTE *)this + 248) = 1;
  }
  return result;
}
