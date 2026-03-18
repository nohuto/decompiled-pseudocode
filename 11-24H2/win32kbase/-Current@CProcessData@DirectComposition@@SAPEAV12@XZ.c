/*
 * XREFs of ?Current@CProcessData@DirectComposition@@SAPEAV12@XZ @ 0x14006D6A0
 * Callers:
 *     NtDCompositionBoostCompositorClock @ 0x14006CE90 (NtDCompositionBoostCompositorClock.c)
 *     ?DestroyHandle@CChannel@DirectComposition@@SAJI@Z @ 0x14006CF98 (-DestroyHandle@CChannel@DirectComposition@@SAJI@Z.c)
 *     ?Create@CApplicationChannel@DirectComposition@@SAJPEAI0PEAPEAX@Z @ 0x14006D07C (-Create@CApplicationChannel@DirectComposition@@SAJPEAI0PEAPEAX@Z.c)
 *     NtDCompositionEnableMMCSS @ 0x14006FEF0 (NtDCompositionEnableMMCSS.c)
 *     ?Create@CConnection@DirectComposition@@SAJ_NPEAXPEAPEAUHDCOMPOSITIONCONNECTION__@@@Z @ 0x140224048 (-Create@CConnection@DirectComposition@@SAJ_NPEAXPEAPEAUHDCOMPOSITIONCONNECTION__@@@Z.c)
 *     ?DestroyHandle@CConnection@DirectComposition@@SAJPEAUHDCOMPOSITIONCONNECTION__@@@Z @ 0x140224304 (-DestroyHandle@CConnection@DirectComposition@@SAJPEAUHDCOMPOSITIONCONNECTION__@@@Z.c)
 * Callees:
 *     <none>
 */

struct DirectComposition::CProcessData *__fastcall DirectComposition::CProcessData::Current(__int64 a1)
{
  _QWORD *CurrentProcessWin32Process; // rax

  CurrentProcessWin32Process = (_QWORD *)PsGetCurrentProcessWin32Process(a1);
  if ( CurrentProcessWin32Process && *CurrentProcessWin32Process )
    return (struct DirectComposition::CProcessData *)CurrentProcessWin32Process[32];
  else
    return 0LL;
}
