/*
 * XREFs of PnpGetObjectProperty @ 0x1408CA950
 * Callers:
 *     IoGetDeviceDirectory @ 0x14071CA80 (IoGetDeviceDirectory.c)
 *     PiPnpRtlGatherInterfaceDeleteInfo @ 0x140724478 (PiPnpRtlGatherInterfaceDeleteInfo.c)
 *     PiDmObjectProcessPropertyChange @ 0x1408B7B08 (PiDmObjectProcessPropertyChange.c)
 *     PiDmObjectUpdateCachedObjectProperty @ 0x1408B8C6C (PiDmObjectUpdateCachedObjectProperty.c)
 *     IopGetDeviceInterfaces @ 0x1408C5EA0 (IopGetDeviceInterfaces.c)
 *     PiPnpRtlObjectActionCallback @ 0x1408CC090 (PiPnpRtlObjectActionCallback.c)
 *     PiUEventCacheObjectProperties @ 0x140A16710 (PiUEventCacheObjectProperties.c)
 *     PiDmGetReferencedObjectFromProperty @ 0x140A58968 (PiDmGetReferencedObjectFromProperty.c)
 *     PnpInitializeInheritedRestrictedSd @ 0x140A61D70 (PnpInitializeInheritedRestrictedSd.c)
 *     PiDevCfgResolveVariableDeviceProperty @ 0x140A8B600 (PiDevCfgResolveVariableDeviceProperty.c)
 * Callees:
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     _PnpValidatePropertyData @ 0x1408B6740 (_PnpValidatePropertyData.c)
 *     _PnpGetGenericStoreProperty @ 0x1408C5920 (_PnpGetGenericStoreProperty.c)
 *     _PnpDispatchDeviceInterface @ 0x1408CA5F0 (_PnpDispatchDeviceInterface.c)
 *     _PnpOpenObjectRegKey @ 0x1408CAE28 (_PnpOpenObjectRegKey.c)
 *     _PnpDispatchDevice @ 0x1408CB5A0 (_PnpDispatchDevice.c)
 *     PiPnpRtlObjectActionCallback @ 0x1408CC090 (PiPnpRtlObjectActionCallback.c)
 *     DrvDbDispatchDriverPackage @ 0x140926230 (DrvDbDispatchDriverPackage.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PnpGetObjectProperty(
        ULONG Tag,
        unsigned int a2,
        WCHAR *a3,
        unsigned int a4,
        __int64 a5,
        const WCHAR *a6,
        __int64 a7,
        int *a8,
        PVOID *a9,
        unsigned int *a10,
        int a11)
{
  PVOID *v11; // rdi
  unsigned int v12; // r10d
  WCHAR *v13; // r11
  ULONG_PTR v15; // rsi
  __int64 Pool2; // rax
  _QWORD *v17; // r13
  int *v18; // r15
  __int64 (__fastcall *v19)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD); // r14
  int v20; // eax
  int v21; // ebx
  PVOID v22; // rcx
  unsigned int *v24; // rdx
  wchar_t *v25; // rbx
  __int64 (__fastcall *v26)(int, int, int, int, __int64); // rax
  int v27; // eax
  int v28; // eax
  int GenericStoreProperty; // eax
  __int64 v30; // [rsp+58h] [rbp-B0h]
  int v31; // [rsp+60h] [rbp-A8h]
  unsigned int *v32; // [rsp+68h] [rbp-A0h]
  wchar_t *psz; // [rsp+70h] [rbp-98h]
  HANDLE Handle; // [rsp+78h] [rbp-90h] BYREF
  __int64 v35; // [rsp+80h] [rbp-88h]
  const WCHAR *v36; // [rsp+88h] [rbp-80h]
  _QWORD v37[2]; // [rsp+98h] [rbp-70h] BYREF
  __int64 v38; // [rsp+A8h] [rbp-60h]
  const WCHAR *v39; // [rsp+B0h] [rbp-58h]
  __int64 v40; // [rsp+B8h] [rbp-50h]
  __int64 v41; // [rsp+C0h] [rbp-48h]
  wchar_t *v42; // [rsp+C8h] [rbp-40h]
  int v43; // [rsp+D0h] [rbp-38h]
  int v44; // [rsp+D4h] [rbp-34h]
  unsigned int *v45; // [rsp+D8h] [rbp-30h]
  int v46; // [rsp+E0h] [rbp-28h]
  int v47; // [rsp+E4h] [rbp-24h]
  _QWORD v48[5]; // [rsp+E8h] [rbp-20h] BYREF
  int v49; // [rsp+110h] [rbp+8h]
  unsigned int *v50; // [rsp+118h] [rbp+10h]
  __int64 v51; // [rsp+120h] [rbp+18h]
  unsigned int v52; // [rsp+170h] [rbp+68h] BYREF
  WCHAR *v53; // [rsp+178h] [rbp+70h]
  unsigned int v54; // [rsp+180h] [rbp+78h]

  v54 = a4;
  v53 = a3;
  v11 = a9;
  v12 = a4;
  v13 = a3;
  v52 = a2;
  *a9 = 0LL;
  LODWORD(v15) = 0;
  while ( 1 )
  {
    if ( v52 > (unsigned int)v15 )
    {
      v15 = v52;
      if ( *v11 )
        ExFreePoolWithTag(*v11, Tag);
      Pool2 = ExAllocatePool2(0x100uLL, v15, Tag);
      *v11 = (PVOID)Pool2;
      if ( !Pool2 )
      {
        v21 = -1073741670;
        goto LABEL_15;
      }
      v12 = v54;
      v13 = v53;
    }
    v17 = *(_QWORD **)&PiPnpRtlCtx;
    v18 = a8;
    v38 = a5;
    v39 = a6;
    v40 = a7;
    v42 = (wchar_t *)*v11;
    v52 = 0;
    v37[0] = 0LL;
    v37[1] = 0LL;
    v44 = 0;
    v47 = 0;
    v19 = *(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD))(*(_QWORD *)&PiPnpRtlCtx + 488LL);
    v45 = &v52;
    v46 = a11;
    v41 = (__int64)a8;
    v43 = v15;
    if ( v19 )
    {
      if ( v19 == PiPnpRtlObjectActionCallback )
        v20 = PiPnpRtlObjectActionCallback(*(_QWORD *)&PiPnpRtlCtx, v13, v12, 8LL, 1, v37);
      else
        v20 = guard_dispatch_icall_no_overrides(*(_QWORD *)&PiPnpRtlCtx, v13);
      if ( v20 == -1073741822 )
      {
        v19 = 0LL;
      }
      else
      {
        if ( v20 == -1073741536 )
        {
          v21 = v37[0];
          goto LABEL_13;
        }
        if ( v20 )
          goto LABEL_43;
      }
      v18 = (int *)v41;
    }
    v24 = v45;
    v25 = v42;
    v35 = v40;
    v36 = v39;
    v30 = v38;
    v31 = v46;
    v32 = v45;
    LODWORD(a9) = v43;
    psz = v42;
    Handle = 0LL;
    if ( (_WORD)v46 )
    {
      v21 = -1073741811;
      goto LABEL_37;
    }
    if ( v42 )
    {
      if ( !v43 )
        v25 = 0LL;
      psz = v25;
    }
    else
    {
      LODWORD(a9) = 0;
    }
    *v18 = 0;
    *v24 = 0;
    memset_0(v48, 0, 0x40uLL);
    if ( v54 - 1 > 0xA )
    {
      v21 = -1073741811;
      goto LABEL_35;
    }
    v26 = (__int64 (__fastcall *)(int, int, int, int, __int64))v17[(int)v54 + 37];
    if ( v26 )
    {
      v48[0] = v30;
      v48[1] = v36;
      v48[2] = v35;
      v49 = (int)a9;
      v50 = v32;
      LODWORD(v51) = v31;
      v48[3] = v18;
      v48[4] = v25;
      if ( v26 == PnpDispatchDevice )
      {
        v27 = PnpDispatchDevice((int)v17, (int)v53, v54, 8, (__int64)v48);
      }
      else if ( (char *)v26 == (char *)PnpDispatchDeviceInterface )
      {
        v27 = PnpDispatchDeviceInterface(v17, v53, v54, 8, v48);
      }
      else if ( v26 == DrvDbDispatchDriverPackage )
      {
        v27 = DrvDbDispatchDriverPackage((_DWORD)v17, (_DWORD)v53, v54, 8, (__int64)v48);
      }
      else
      {
        v27 = guard_dispatch_icall_no_overrides(v17, v53);
      }
      v21 = v27;
      if ( v27 == -1073741802 )
      {
        if ( v30 )
        {
          GenericStoreProperty = PnpGetGenericStoreProperty((__int64)v17, v30, v36, v35, v18, psz, (int)a9, v32);
        }
        else
        {
          v21 = PnpOpenObjectRegKey((_DWORD)v17, (_DWORD)v53, v54, 33554433, 0, (__int64)&Handle);
          if ( v21 < 0 )
            goto LABEL_35;
          GenericStoreProperty = PnpGetGenericStoreProperty(
                                   (__int64)v17,
                                   (__int64)Handle,
                                   v36,
                                   v35,
                                   v18,
                                   psz,
                                   (int)a9,
                                   v32);
        }
        v21 = GenericStoreProperty;
        if ( GenericStoreProperty >= 0 )
          v21 = PnpValidatePropertyData((__int64 *)psz, *v32, *v18);
      }
    }
    else
    {
      v21 = -1073741822;
    }
LABEL_35:
    if ( Handle )
      ZwClose(Handle);
LABEL_37:
    if ( v19 )
    {
      LODWORD(v37[0]) = v21;
      v28 = v19 == PiPnpRtlObjectActionCallback
          ? PiPnpRtlObjectActionCallback(v17, v53, v54, 8LL, 2, v37)
          : guard_dispatch_icall_no_overrides(v17, v53);
      if ( v28 != -1073741822 )
      {
        if ( v28 == -1073741536 )
        {
          v21 = v37[0];
        }
        else if ( v28 )
        {
LABEL_43:
          v21 = -1073741595;
          goto LABEL_15;
        }
      }
    }
LABEL_13:
    if ( v21 != -1073741789 )
      break;
    v12 = v54;
    v13 = v53;
  }
  if ( v21 < 0 )
  {
LABEL_15:
    v22 = *v11;
    if ( !*v11 )
      return (unsigned int)v21;
    goto LABEL_16;
  }
  if ( a10 )
    *a10 = v52;
  if ( !v52 )
  {
    v22 = *v11;
    if ( *v11 )
    {
LABEL_16:
      ExFreePoolWithTag(v22, Tag);
      *v11 = 0LL;
    }
  }
  return (unsigned int)v21;
}
