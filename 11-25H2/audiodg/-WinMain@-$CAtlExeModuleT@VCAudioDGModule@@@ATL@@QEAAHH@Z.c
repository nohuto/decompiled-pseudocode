/*
 * XREFs of ?WinMain@?$CAtlExeModuleT@VCAudioDGModule@@@ATL@@QEAAHH@Z @ 0x14001D644
 * Callers:
 *     wWinMain @ 0x14004AF94 (wWinMain.c)
 * Callees:
 *     ?ParseCommandLine@CAudioDGModule@@QEAA_NPEBGPEAJ@Z @ 0x14001D338 (-ParseCommandLine@CAudioDGModule@@QEAA_NPEBGPEAJ@Z.c)
 *     ?Run@?$CAtlExeModuleT@VCAudioDGModule@@@ATL@@QEAAJH@Z @ 0x14001D6A8 (-Run@-$CAtlExeModuleT@VCAudioDGModule@@@ATL@@QEAAJH@Z.c)
 */

__int64 __fastcall ATL::CAtlExeModuleT<CAudioDGModule>::WinMain(CAudioDGModule *this)
{
  unsigned int v1; // ebx
  const unsigned __int16 *CommandLineW; // rax
  int *v5; // r8

  v1 = 0;
  if ( ATL::CAtlBaseModule::m_bInitFailed )
    return 0xFFFFFFFFLL;
  CommandLineW = GetCommandLineW();
  if ( CAudioDGModule::ParseCommandLine((void **)this, CommandLineW, v5) == 1 )
    return (unsigned int)ATL::CAtlExeModuleT<CAudioDGModule>::Run(this);
  return v1;
}
