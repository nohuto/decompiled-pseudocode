/*
 * XREFs of PiDqGetRelativeObjectRegPath @ 0x14083DDE0
 * Callers:
 *     PiDqOpenUserObjectRegKey @ 0x14083E2D0 (PiDqOpenUserObjectRegKey.c)
 *     PiDqDeleteUserObject @ 0x14088EFF8 (PiDqDeleteUserObject.c)
 * Callees:
 *     _CmGetDevicePanelRegKeyPath @ 0x14080D65C (_CmGetDevicePanelRegKeyPath.c)
 *     _CmGetDeviceRegKeyPath @ 0x14083D4A0 (_CmGetDeviceRegKeyPath.c)
 *     _CmGetCommonClassRegKeyPath @ 0x140958F10 (_CmGetCommonClassRegKeyPath.c)
 *     _CmGetDeviceInterfaceRegKeyPath @ 0x140959250 (_CmGetDeviceInterfaceRegKeyPath.c)
 *     _CmGetDeviceContainerRegKeyPath @ 0x14095B1CC (_CmGetDeviceContainerRegKeyPath.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiDqGetRelativeObjectRegPath(unsigned __int16 *a1, int a2, PVOID *a3)
{
  wchar_t *pszDest; // rax
  __int64 v7; // rcx
  __int64 v8; // r9
  int v9; // ebx
  NTSTATUS DeviceRegKeyPath; // eax
  unsigned int v11; // ebx
  int v13; // ebx
  int v14; // ebx
  int v15; // ebx
  int v16; // ebx
  __int64 v17; // r8
  int v18; // [rsp+20h] [rbp-28h]
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
    v17 = 32LL;
    goto LABEL_19;
  }
  v14 = v13 - 1;
  if ( !v14 )
  {
    DeviceRegKeyPath = CmGetDeviceInterfaceRegKeyPath(v7, a1, 48LL, 0LL);
    goto LABEL_4;
  }
  v15 = v14 - 1;
  if ( !v15 )
  {
    v17 = 64LL;
LABEL_19:
    DeviceRegKeyPath = CmGetCommonClassRegKeyPath(v7, a1, v17, 0LL);
    goto LABEL_4;
  }
  v16 = v15 - 1;
  if ( !v16 )
  {
    LODWORD(cchDest) = 1024;
    DeviceRegKeyPath = CmGetDeviceContainerRegKeyPath(v7, (int)a1, 80, v8, v18, pszDest, cchDest, 0LL);
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
