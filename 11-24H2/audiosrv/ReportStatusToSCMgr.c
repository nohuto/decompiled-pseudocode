/*
 * XREFs of ReportStatusToSCMgr @ 0x18014DDE0
 * Callers:
 *     ?ServiceCtrl@@YAKKKPEAX0@Z @ 0x1800663A0 (-ServiceCtrl@@YAKKKPEAX0@Z.c)
 *     ?AudioSrvStartupThread@@YAKPEAX@Z @ 0x18014D860 (-AudioSrvStartupThread@@YAKPEAX@Z.c)
 *     ?OnServiceShutdown@@YAXPEAXE@Z @ 0x18014D920 (-OnServiceShutdown@@YAXPEAXE@Z.c)
 *     ?ServiceMain@@YAXKQEAPEAG@Z @ 0x18014DA80 (-ServiceMain@@YAXKQEAPEAG@Z.c)
 *     ?ShutdownKeepaliveThread@@YAKPEAX@Z @ 0x18014DD80 (-ShutdownKeepaliveThread@@YAKPEAX@Z.c)
 *     ServiceStart @ 0x18014E768 (ServiceStart.c)
 * Callees:
 *     <none>
 */

BOOL __fastcall ReportStatusToSCMgr(int a1, int a2, int a3)
{
  int v3; // eax

  v3 = 0;
  dword_1801DB5FC = a1;
  dword_1801DB604 = a2;
  dword_1801DB610 = a3;
  if ( a1 == 4 )
    v3 = 193;
  dword_1801DB600 = v3;
  if ( a1 == 4 || a1 == 1 )
    dword_1801DB60C = 0;
  else
    dword_1801DB60C = dword_1801DA2FC++;
  return SetServiceStatus(sshStatusHandle, (LPSERVICE_STATUS)&ssStatus);
}
