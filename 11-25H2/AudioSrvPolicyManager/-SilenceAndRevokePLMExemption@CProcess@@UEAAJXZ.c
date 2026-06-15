/*
 * XREFs of ?SilenceAndRevokePLMExemption@CProcess@@UEAAJXZ @ 0x180036FA0
 * Callers:
 *     <none>
 * Callees:
 *     ?SilenceAndRevokePLMExemption@CApplicationManager@@QEAAXPEAVCApplication@@@Z @ 0x18003BF48 (-SilenceAndRevokePLMExemption@CApplicationManager@@QEAAXPEAVCApplication@@@Z.c)
 */

__int64 __fastcall CProcess::SilenceAndRevokePLMExemption(struct CApplication **this)
{
  if ( g_ApplicationManager )
    CApplicationManager::SilenceAndRevokePLMExemption(g_ApplicationManager, this[28]);
  return 0LL;
}
