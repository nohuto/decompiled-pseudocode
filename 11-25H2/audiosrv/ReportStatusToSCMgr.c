/*
 * XREFs of ReportStatusToSCMgr @ 0x180145340
 * Callers:
 *     ?ServiceCtrl@@YAKKKPEAX0@Z @ 0x1800762F0 (-ServiceCtrl@@YAKKKPEAX0@Z.c)
 *     ?AudioSrvStartupThread@@YAKPEAX@Z @ 0x180144DC0 (-AudioSrvStartupThread@@YAKPEAX@Z.c)
 *     ?OnServiceShutdown@@YAXPEAXE@Z @ 0x180144E80 (-OnServiceShutdown@@YAXPEAXE@Z.c)
 *     ?ServiceMain@@YAXKQEAPEAG@Z @ 0x180144FE0 (-ServiceMain@@YAXKQEAPEAG@Z.c)
 *     ?ShutdownKeepaliveThread@@YAKPEAX@Z @ 0x1801452E0 (-ShutdownKeepaliveThread@@YAKPEAX@Z.c)
 *     ServiceStart @ 0x180145CC8 (ServiceStart.c)
 * Callees:
 *     <none>
 */

BOOL __fastcall ReportStatusToSCMgr(int a1, int a2, int a3)
{
  int v3; // eax

  v3 = 0;
  dword_1801CF484 = a1;
  dword_1801CF48C = a2;
  dword_1801CF498 = a3;
  if ( a1 == 4 )
    v3 = 193;
  dword_1801CF488 = v3;
  if ( a1 == 4 || a1 == 1 )
    dword_1801CF494 = 0;
  else
    dword_1801CF494 = dword_1801CE2BC++;
  return SetServiceStatus(sshStatusHandle, (LPSERVICE_STATUS)&ssStatus);
}
