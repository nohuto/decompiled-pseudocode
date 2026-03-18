/*
 * XREFs of ?vAddRFONTRef@PFFOBJ@@QEAAXXZ @ 0x140178A00
 * Callers:
 *     ?GrepGetKerningPairs@@YAKAEAVUDCOBJ@@KPEAUtagKERNINGPAIR@@W4EntryPoint@RFONTOBJ@@@Z @ 0x1400C1550 (-GrepGetKerningPairs@@YAKAEAVUDCOBJ@@KPEAUtagKERNINGPAIR@@W4EntryPoint@RFONTOBJ@@@Z.c)
 *     ?vInitEUDCRemote@RFONTOBJ@@QEAAXAEAVUDCOBJ@@@Z @ 0x14025BE74 (-vInitEUDCRemote@RFONTOBJ@@QEAAXAEAVUDCOBJ@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall PFFOBJ::vAddRFONTRef(PFFOBJ *this, __int64 a2)
{
  W32GetSessionState((_DWORD)this, a2);
  ++*(_DWORD *)(*(_QWORD *)this + 68LL);
}
