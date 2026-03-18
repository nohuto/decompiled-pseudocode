/*
 * XREFs of PiDqGetRelativeObjectRegPath @ 0x140909B74
 * Callers:
 *     PiDqOpenUserObjectRegKey @ 0x14090A064 (PiDqOpenUserObjectRegKey.c)
 *     PiDqDeleteUserObject @ 0x140A84438 (PiDqDeleteUserObject.c)
 * Callees:
 *     _CmGetDevicePanelRegKeyPath @ 0x14081D55C (_CmGetDevicePanelRegKeyPath.c)
 *     _CmGetDeviceContainerRegKeyPath @ 0x1408B7A4C (_CmGetDeviceContainerRegKeyPath.c)
 *     _CmGetCommonClassRegKeyPath @ 0x1408CA010 (_CmGetCommonClassRegKeyPath.c)
 *     _CmGetDeviceInterfaceRegKeyPath @ 0x1408CA360 (_CmGetDeviceInterfaceRegKeyPath.c)
 *     _CmGetDeviceRegKeyPath @ 0x140909220 (_CmGetDeviceRegKeyPath.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiDqGetRelativeObjectRegPath(unsigned __int16 *a1, int a2, PVOID *a3)
{
  wchar_t *pszDest; // rax
  __int64 v7; // rcx
  __int64 v8; // r9
  int v9; // ebx
  int DeviceRegKeyPath; // eax
  unsigned int v11; // ebx
  int v13; // ebx
  int v14; // ebx
  int v15; // ebx
  int v16; // ebx
  __int16 v17; // r8
  __int64 v18; // [rsp+20h] [rbp-28h]
  size_t cchDest; // [rsp+30h] [rbp-18h]

  pszDest = (wchar_t *)ExAllocatePool2(0x100uLL);
  *a3 = pszDest;
  if ( !pszDest )
  {
    v11 = -1073741670;
    goto LABEL_13;
  }
  v9 = a2 - 1;
  if ( !v9 )
  {
    LODWORD(cchDest) = 1024;
    DeviceRegKeyPath = CmGetDeviceRegKeyPath(PiPnpRtlCtx, a1, 16, 0, 0, pszDest, cchDest, 0LL);
    goto LABEL_4;
  }
  v13 = v9 - 1;
  if ( !v13 )
  {
    v17 = 32;
    goto LABEL_19;
  }
  v14 = v13 - 1;
  if ( !v14 )
  {
    DeviceRegKeyPath = CmGetDeviceInterfaceRegKeyPath(v7, a1, 48, 0, v18, pszDest, 0x400u, 0LL);
    goto LABEL_4;
  }
  v15 = v14 - 1;
  if ( !v15 )
  {
    v17 = 64;
LABEL_19:
    DeviceRegKeyPath = CmGetCommonClassRegKeyPath(v7, a1, v17, 0, v18, pszDest, 0x400u, 0LL);
    goto LABEL_4;
  }
  v16 = v15 - 1;
  if ( !v16 )
  {
    LODWORD(cchDest) = 1024;
    DeviceRegKeyPath = CmGetDeviceContainerRegKeyPath(v7, (__int64)a1, 80LL, v8, v18, pszDest, cchDest, 0LL);
    goto LABEL_4;
  }
  if ( v16 == 1 )
  {
    LODWORD(cchDest) = 1024;
    DeviceRegKeyPath = CmGetDevicePanelRegKeyPath(v7, (__int64)a1, 96, v8, v18, pszDest, cchDest, 0LL);
LABEL_4:
    v11 = DeviceRegKeyPath;
    if ( DeviceRegKeyPath >= 0 )
      return v11;
    goto LABEL_13;
  }
  v11 = -1073741811;
LABEL_13:
  if ( *a3 )
  {
    ExFreePoolWithTag(*a3, 0x58706E50u);
    *a3 = 0LL;
  }
  return v11;
}
