/*
 * XREFs of _PnpOpenObjectRegKey @ 0x1408CD438
 * Callers:
 *     PiDevCfgCheckDeviceNeedsUpdate @ 0x14072897C (PiDevCfgCheckDeviceNeedsUpdate.c)
 *     PiDevCfgInitDeviceCallback @ 0x14072A1C0 (PiDevCfgInitDeviceCallback.c)
 *     PiDevCfgQueryIncludedDriverNode @ 0x14072AC78 (PiDevCfgQueryIncludedDriverNode.c)
 *     PpDevCfgProcessDeviceClass @ 0x14072C4F4 (PpDevCfgProcessDeviceClass.c)
 *     _CmEnumDevicesInContainerWithCallbackWorker @ 0x140819D68 (_CmEnumDevicesInContainerWithCallbackWorker.c)
 *     PiSwPropertySet @ 0x1408B80F0 (PiSwPropertySet.c)
 *     _PnpSetObjectPropertyWorker @ 0x1408B8BB0 (_PnpSetObjectPropertyWorker.c)
 *     PiCMValidateDeviceInstance @ 0x1408BE2FC (PiCMValidateDeviceInstance.c)
 *     PiPnpRtlCacheObjectBaseKey @ 0x1408CC2D0 (PiPnpRtlCacheObjectBaseKey.c)
 *     PnpGetObjectProperty @ 0x1408CCF60 (PnpGetObjectProperty.c)
 *     _PnpGetObjectPropertyWorker @ 0x1408CD660 (_PnpGetObjectPropertyWorker.c)
 *     _PnpGetObjectProperty @ 0x1408CDFD0 (_PnpGetObjectProperty.c)
 *     PiDqActionDataGetAllPropertiesInBestLanguage @ 0x140908E70 (PiDqActionDataGetAllPropertiesInBestLanguage.c)
 *     PiDqOpenObjectRegKey @ 0x140909DAC (PiDqOpenObjectRegKey.c)
 *     PiCMOpenObjectKey @ 0x140963AF8 (PiCMOpenObjectKey.c)
 *     _PnpGetObjectPropertyKeysWorker @ 0x140991E90 (_PnpGetObjectPropertyKeysWorker.c)
 *     _PnpGetObjectPropertyLocalesWorker @ 0x1409952A8 (_PnpGetObjectPropertyLocalesWorker.c)
 *     PiDevCfgQueryDriverNode @ 0x140996564 (PiDevCfgQueryDriverNode.c)
 *     PiDevCfgGetDriverPackageId @ 0x1409977D8 (PiDevCfgGetDriverPackageId.c)
 *     PiDevCfgQueryObjectProperties @ 0x1409978B4 (PiDevCfgQueryObjectProperties.c)
 *     PiDevCfgConfigureDevice @ 0x140997CFC (PiDevCfgConfigureDevice.c)
 *     PiDevCfgCopyObjectProperties @ 0x14099AE24 (PiDevCfgCopyObjectProperties.c)
 *     PiDqIrpPropertySet @ 0x1409FA620 (PiDqIrpPropertySet.c)
 *     PpDevCfgProcessDeviceReset @ 0x140A84170 (PpDevCfgProcessDeviceReset.c)
 *     PiDevCfgResetDeviceDriverSettings @ 0x140A847DC (PiDevCfgResetDeviceDriverSettings.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     _PnpDispatchDeviceInterface @ 0x1408CCC00 (_PnpDispatchDeviceInterface.c)
 *     _PnpDispatchDevice @ 0x1408CDBB0 (_PnpDispatchDevice.c)
 *     PiPnpRtlObjectActionCallback @ 0x1408CE6A0 (PiPnpRtlObjectActionCallback.c)
 *     DrvDbDispatchDriverPackage @ 0x1409240F0 (DrvDbDispatchDriverPackage.c)
 */

__int64 __fastcall PnpOpenObjectRegKey(_QWORD *a1, WCHAR *a2, int a3, int a4, char a5, __int64 a6)
{
  __int64 v7; // rdi
  __int64 (__fastcall *v10)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD); // r14
  int v11; // ebx
  int v12; // eax
  __int64 (__fastcall *v13)(int, int, int, int, __int64); // r10
  int v14; // eax
  int v15; // ebx
  int v16; // eax
  int v18; // eax
  unsigned int v19; // ecx
  _DWORD v20[4]; // [rsp+48h] [rbp-69h] BYREF
  int v21; // [rsp+58h] [rbp-59h]
  char v22; // [rsp+5Ch] [rbp-55h]
  __int64 v23; // [rsp+60h] [rbp-51h]
  int v24; // [rsp+68h] [rbp-49h]
  int v25; // [rsp+6Ch] [rbp-45h]
  int v26; // [rsp+98h] [rbp-19h] BYREF
  char v27; // [rsp+9Ch] [rbp-15h]
  __int64 v28; // [rsp+A0h] [rbp-11h]
  int v29; // [rsp+A8h] [rbp-9h]
  int v30; // [rsp+ACh] [rbp-5h]

  v7 = a3;
  memset_0(v20, 0, 0x50uLL);
  v10 = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD))a1[61];
  v21 = a4;
  v11 = 0;
  v22 = a5;
  v23 = a6;
  v25 = 0;
  if ( v10 )
  {
    if ( v10 == PiPnpRtlObjectActionCallback )
      v12 = PiPnpRtlObjectActionCallback(a1, a2, (unsigned int)v7, 2LL, 1, v20);
    else
      v12 = guard_dispatch_icall_no_overrides(a1, a2, (unsigned int)v7, 2LL);
    if ( v12 == -1073741822 )
    {
      v10 = 0LL;
    }
    else
    {
      if ( v12 == -1073741536 )
        return (unsigned int)v20[0];
      if ( v12 )
        return (unsigned int)-1073741595;
    }
    v11 = v25;
  }
  memset_0(&v26, 0, 0x40uLL);
  if ( (_WORD)v11 || (unsigned int)(v7 - 1) > 0xA )
  {
    v15 = -1073741811;
  }
  else
  {
    v13 = (__int64 (__fastcall *)(int, int, int, int, __int64))a1[v7 + 37];
    if ( v13 )
    {
      v26 = v21;
      v27 = v22;
      v28 = v23;
      v30 = v11;
      if ( v13 == PnpDispatchDevice )
      {
        v14 = PnpDispatchDevice((int)a1, (int)a2, v7, 2, (__int64)&v26);
      }
      else if ( (char *)v13 == (char *)PnpDispatchDeviceInterface )
      {
        v14 = PnpDispatchDeviceInterface(a1, a2, (unsigned int)v7, 2, &v26);
      }
      else if ( v13 == DrvDbDispatchDriverPackage )
      {
        v14 = DrvDbDispatchDriverPackage((_DWORD)a1, (_DWORD)a2, v7, 2, (__int64)&v26);
      }
      else
      {
        v14 = guard_dispatch_icall_no_overrides(a1, a2, (unsigned int)v7, 2LL);
      }
      v15 = v14;
      v16 = v24;
      if ( v15 >= 0 )
        v16 = v29;
      v24 = v16;
    }
    else
    {
      v15 = -1073741822;
    }
  }
  if ( v10 )
  {
    v20[0] = v15;
    v18 = guard_dispatch_icall_no_overrides(a1, a2, (unsigned int)v7, 2LL);
    if ( v18 != -1073741822 )
    {
      if ( v18 != -1073741536 )
      {
        v19 = v15;
        if ( v18 )
          return (unsigned int)-1073741595;
        return v19;
      }
      return (unsigned int)v20[0];
    }
  }
  return (unsigned int)v15;
}
