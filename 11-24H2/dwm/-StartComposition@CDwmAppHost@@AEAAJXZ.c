/*
 * XREFs of ?StartComposition@CDwmAppHost@@AEAAJXZ @ 0x1400044CC
 * Callers:
 *     ?Run@CDwmAppHost@@QEAAJXZ @ 0x140003500 (-Run@CDwmAppHost@@QEAAJXZ.c)
 * Callees:
 *     ?StartKernelRedirection@CDwmAppHost@@AEAAJXZ @ 0x140002010 (-StartKernelRedirection@CDwmAppHost@@AEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x140002E0C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     McTemplateU0q_EtwEventWriteTransfer @ 0x14000C860 (McTemplateU0q_EtwEventWriteTransfer.c)
 */

__int64 __fastcall CDwmAppHost::StartComposition(CDwmAppHost *this)
{
  int v1; // eax
  unsigned int v2; // ebx
  HANDLE CurrentProcess; // rax
  unsigned int v4; // edx
  CDwmAppHost *v5; // rcx
  int v6; // eax
  int started; // eax
  struct HMIL_CONNECTION__ *v9; // [rsp+40h] [rbp+8h] BYREF

  v9 = this;
  if ( dword_14001C4D8 || (v9 = 0LL, v1 = MilCompositionEngine_Initialize(15, &v9), v2 = v1, v1 >= 0) )
  {
    if ( (Microsoft_Windows_Dwm_DwmEnableBits & 1) != 0 )
      McTemplateU0q_EtwEventWriteTransfer();
    CurrentProcess = GetCurrentProcess();
    D3DKMTSetProcessSchedulingPriorityClass(CurrentProcess, 5LL);
    if ( dword_14001C4D8 || (v6 = DwmClientStartup(&g_dwmAppHost), v2 = v6, v6 >= 0) )
    {
      started = CDwmAppHost::StartKernelRedirection(v5, v4);
      v2 = started;
      if ( started < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, started, 0x148u, 0LL);
      else
        byte_14001C558 = 1;
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v6, 0x145u, 0LL);
    }
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v1, 0x13Au, 0LL);
  }
  return v2;
}
