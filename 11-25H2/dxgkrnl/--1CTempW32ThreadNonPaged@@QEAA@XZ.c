/*
 * XREFs of ??1CTempW32ThreadNonPaged@@QEAA@XZ @ 0x1400266E0
 * Callers:
 *     ?DxgkProcessNotify@@YAXPEAU_EPROCESS@@PEAXPEAU_PS_CREATE_NOTIFY_INFO@@@Z @ 0x140020420 (-DxgkProcessNotify@@YAXPEAU_EPROCESS@@PEAXPEAU_PS_CREATE_NOTIFY_INFO@@@Z.c)
 *     ?Delete@DxgkCompositionObject@@SAXPEAX@Z @ 0x140026500 (-Delete@DxgkCompositionObject@@SAXPEAX@Z.c)
 *     ?DxgkProcessCallout@@YAJPEAPEAXQEBU_DXGKWIN32KENG_INTERFACE_HEADER@@E@Z @ 0x1402DDDD0 (-DxgkProcessCallout@@YAJPEAPEAXQEBU_DXGKWIN32KENG_INTERFACE_HEADER@@E@Z.c)
 * Callees:
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x140019D30 (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 */

void __fastcall CTempW32ThreadNonPaged::~CTempW32ThreadNonPaged(CTempW32ThreadNonPaged *this)
{
  int v2; // edx
  int v3; // ecx
  __int64 v4; // r8

  if ( *((_BYTE *)this + 248) )
  {
    PsSetThreadWin32Thread(KeGetCurrentThread(), 0LL, this);
  }
  else if ( *(_QWORD *)this )
  {
    if ( !*(_QWORD *)&DXGGLOBAL::m_pGlobal )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 2604;
      if ( bTracingEnabled )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200000000LL) != 0 )
          McTemplateK0zqqzxxxxx_EtwWriteTransfer(
            v3,
            v2,
            v4,
            0LL,
            2,
            -1,
            L"m_pGlobal != NULL",
            2604LL,
            0LL,
            0LL,
            0LL,
            0LL);
      }
    }
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)&DXGGLOBAL::m_pGlobal + 304872LL) + 16LL))(*(_QWORD *)this);
  }
}
