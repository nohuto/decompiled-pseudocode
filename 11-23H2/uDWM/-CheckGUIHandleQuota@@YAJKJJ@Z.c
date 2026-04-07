/*
 * XREFs of ?CheckGUIHandleQuota@@YAJKJJ@Z @ 0x18010D900
 * Callers:
 *     ?Init@CTextCache@@QEAAJXZ @ 0x180027480 (-Init@CTextCache@@QEAAJXZ.c)
 *     ?UpdateNCAreaGeometry@CTopLevelWindow@@AEAAJXZ @ 0x180034C24 (-UpdateNCAreaGeometry@CTopLevelWindow@@AEAAJXZ.c)
 *     ?ApplyMaximizedClip@CTopLevelWindow@@AEAAJPEAUHRGN__@@@Z @ 0x180034FBC (-ApplyMaximizedClip@CTopLevelWindow@@AEAAJPEAUHRGN__@@@Z.c)
 *     ?_UpdateResourcesForMonitorHelper@CLivePreview@@AEAAJPEBVCTopLevelWindow@@PEAULivePreviewResource@@@Z @ 0x1800C9578 (-_UpdateResourcesForMonitorHelper@CLivePreview@@AEAAJPEBVCTopLevelWindow@@PEAULivePreviewResourc.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CheckGUIHandleQuota(unsigned int a1, DWORD a2, DWORD a3)
{
  unsigned int v3; // edi
  HANDLE CurrentProcess; // rax
  DWORD GuiResources; // esi
  unsigned int v6; // ebx
  unsigned int Data; // [rsp+50h] [rbp+8h] BYREF
  DWORD Type; // [rsp+58h] [rbp+10h] BYREF
  DWORD cbData; // [rsp+60h] [rbp+18h] BYREF
  HKEY hKey; // [rsp+68h] [rbp+20h] BYREF

  cbData = a3;
  Type = a2;
  Data = a1;
  v3 = -2003304445;
  CurrentProcess = GetCurrentProcess();
  GuiResources = GetGuiResources(CurrentProcess, 0);
  if ( GuiResources >= (unsigned int)g_GUIHandleQuota )
  {
    if ( (_DWORD)g_GUIHandleQuota )
      return (unsigned int)-2147024882;
    v6 = 10000;
    if ( !RegOpenKeyExW(HKEY_LOCAL_MACHINE, L"Software\\Microsoft\\Windows NT\\CurrentVersion\\Windows", 0, 1u, &hKey) )
    {
      cbData = 4;
      if ( !RegQueryValueExW(hKey, lpValueName, 0LL, &Type, (LPBYTE)&Data, &cbData) && Type == 4 && Data )
        v6 = Data;
      RegCloseKey(hKey);
    }
    LODWORD(g_GUIHandleQuota) = v6 - (v6 >> 3);
    if ( GuiResources >= (unsigned int)g_GUIHandleQuota )
      return (unsigned int)-2147024882;
  }
  return v3;
}
