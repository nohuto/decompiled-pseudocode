/*
 * XREFs of ?StartComposition@CDwmAppHost@@AEAAJXZ @ 0x140004960
 * Callers:
 *     ?Run@CDwmAppHost@@QEAAJXZ @ 0x1400037F0 (-Run@CDwmAppHost@@QEAAJXZ.c)
 * Callees:
 *     ?StartKernelRedirection@CDwmAppHost@@AEAAJXZ @ 0x140002A10 (-StartKernelRedirection@CDwmAppHost@@AEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1400030AC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     McTemplateU0q_EtwEventWriteTransfer @ 0x14000E000 (McTemplateU0q_EtwEventWriteTransfer.c)
 */

__int64 __fastcall CDwmAppHost::StartComposition(CDwmAppHost *this)
{
  int v1; // eax
  unsigned int v2; // ebx
  HANDLE CurrentProcess; // rax
  unsigned int v4; // edx
  CDwmAppHost *v5; // rcx
  void *v6; // r8
  int v7; // eax
  int started; // eax
  struct HMIL_CONNECTION__ *v10; // [rsp+40h] [rbp+8h] BYREF

  v10 = this;
  if ( dword_14001D5B8 || (v10 = 0LL, v1 = MilCompositionEngine_Initialize(15, &v10), v2 = v1, v1 >= 0) )
  {
    if ( (Microsoft_Windows_Dwm_DwmEnableBits & 1) != 0 )
      McTemplateU0q_EtwEventWriteTransfer();
    CurrentProcess = GetCurrentProcess();
    D3DKMTSetProcessSchedulingPriorityClass(CurrentProcess, 5LL);
    if ( dword_14001D5B8 || (v7 = DwmClientStartup(&g_dwmAppHost), v2 = v7, v7 >= 0) )
    {
      started = CDwmAppHost::StartKernelRedirection(v5, v4, v6);
      v2 = started;
      if ( started < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, started, 0x149u, 0LL);
      else
        byte_14001D638 = 1;
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v7, 0x146u, 0LL);
    }
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v1, 0x13Bu, 0LL);
  }
  return v2;
}
