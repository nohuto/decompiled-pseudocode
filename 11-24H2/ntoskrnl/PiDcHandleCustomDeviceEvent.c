/*
 * XREFs of PiDcHandleCustomDeviceEvent @ 0x1409EC964
 * Callers:
 *     PnpProcessCustomDeviceEvent @ 0x1409EC484 (PnpProcessCustomDeviceEvent.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x14022BF50 (ExAcquireResourceExclusiveLite.c)
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14028AA60 (ExReleaseResourceLite.c)
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     RtlStringCbCopyW @ 0x140425B00 (RtlStringCbCopyW.c)
 *     _wcsicmp @ 0x1404FBC70 (_wcsicmp.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     _CmMoveBaseContainer @ 0x14081AC7C (_CmMoveBaseContainer.c)
 *     PnpQueryDeviceRelations @ 0x1408B8FB8 (PnpQueryDeviceRelations.c)
 *     _CmGetDeviceRegProp @ 0x1408C35E0 (_CmGetDeviceRegProp.c)
 *     PiPnpRtlBeginOperation @ 0x1408C99A8 (PiPnpRtlBeginOperation.c)
 *     PiPnpRtlEndOperation @ 0x1408C9B88 (PiPnpRtlEndOperation.c)
 *     _CmGetDeviceContainerIdFromBase @ 0x14097BA80 (_CmGetDeviceContainerIdFromBase.c)
 *     _CmIsLocalMachineContainer @ 0x140A70D84 (_CmIsLocalMachineContainer.c)
 *     PiDcContainerRequiresConfiguration @ 0x140A99C50 (PiDcContainerRequiresConfiguration.c)
 */

__int64 __fastcall PiDcHandleCustomDeviceEvent(__int64 a1)
{
  int DeviceRelations; // ebx
  __int64 v3; // rcx
  __int64 v4; // rax
  _DWORD *v6; // rax
  struct _KTHREAD *CurrentThread; // rax
  __int64 v8; // rdi
  int v9; // eax
  _DWORD *v10; // rcx
  bool v11; // r14
  __int64 v12; // rax
  __int64 v13; // rsi
  const WCHAR *v14; // rsi
  int DeviceRegProp; // eax
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rdi
  int v19; // [rsp+40h] [rbp-C0h] BYREF
  _DWORD v20[3]; // [rsp+44h] [rbp-BCh] BYREF
  PVOID P[2]; // [rsp+50h] [rbp-B0h] BYREF
  wchar_t pszSrc[40]; // [rsp+60h] [rbp-A0h] BYREF
  wchar_t Str2[40]; // [rsp+B0h] [rbp-50h] BYREF
  wchar_t Str1[40]; // [rsp+100h] [rbp+0h] BYREF
  wchar_t v25[40]; // [rsp+150h] [rbp+50h] BYREF

  DeviceRelations = 0;
  v19 = 0;
  memset(v20, 0, sizeof(v20));
  v3 = *(_QWORD *)(a1 + 168);
  P[0] = 0LL;
  v4 = *(_QWORD *)(v3 + 4) - *(_QWORD *)&GUID_TARGET_DEVICE_TRANSPORT_RELATIONS_CHANGED.Data1;
  if ( !v4 )
    v4 = *(_QWORD *)(v3 + 12) - *(_QWORD *)GUID_TARGET_DEVICE_TRANSPORT_RELATIONS_CHANGED.Data4;
  if ( !v4 )
  {
    DeviceRelations = PiPnpRtlBeginOperation(P);
    if ( DeviceRelations >= 0 )
    {
      DeviceRelations = PnpQueryDeviceRelations(*(_QWORD *)(a1 + 160), 6, 0LL, (__int64)&v20[1]);
      if ( DeviceRelations >= 0 )
      {
        v6 = *(_DWORD **)&v20[1];
        if ( !*(_QWORD *)&v20[1] )
        {
LABEL_38:
          if ( P[0] )
            PiPnpRtlEndOperation((PVOID **)P[0]);
          return (unsigned int)DeviceRelations;
        }
        if ( !**(_DWORD **)&v20[1] )
        {
LABEL_35:
          if ( v6 )
          {
            v18 = 0LL;
            if ( *v6 )
            {
              do
              {
                ObfDereferenceObject(*(PVOID *)&v6[2 * v18 + 2]);
                v6 = *(_DWORD **)&v20[1];
                v18 = (unsigned int)(v18 + 1);
              }
              while ( (unsigned int)v18 < **(_DWORD **)&v20[1] );
            }
          }
          goto LABEL_38;
        }
        CurrentThread = KeGetCurrentThread();
        --CurrentThread->KernelApcDisable;
        ExAcquireResourceExclusiveLite(&PnpRegistryDeviceResource, 1u);
        v19 = 78;
        if ( (int)CmGetDeviceRegProp(
                    *(__int64 *)&PiPnpRtlCtx,
                    a1 + 176,
                    0LL,
                    0x25u,
                    (__int64)v20,
                    (__int64)Str1,
                    (__int64)&v19,
                    0) >= 0
          && v20[0] == 1
          && v19 == 78 )
        {
          DeviceRelations = CmGetDeviceContainerIdFromBase(
                              *(_QWORD **)&PiPnpRtlCtx,
                              (const WCHAR *)(a1 + 176),
                              Str1,
                              Str2);
          if ( DeviceRelations >= 0 )
          {
            v8 = 0LL;
            v9 = wcsicmp(Str1, Str2);
            v10 = *(_DWORD **)&v20[1];
            v11 = v9 != 0;
            while ( (unsigned int)v8 < *v10 )
            {
              v12 = *(_QWORD *)&v10[2 * v8 + 2];
              if ( v12 )
              {
                v13 = *(_QWORD *)(*(_QWORD *)(v12 + 312) + 40LL);
                if ( v13 )
                {
                  v14 = *(const WCHAR **)(v13 + 48);
                  if ( v14 )
                  {
                    v19 = 78;
                    DeviceRegProp = CmGetDeviceRegProp(
                                      *(__int64 *)&PiPnpRtlCtx,
                                      (__int64)v14,
                                      0LL,
                                      0x25u,
                                      (__int64)v20,
                                      (__int64)v25,
                                      (__int64)&v19,
                                      0);
                    DeviceRelations = DeviceRegProp;
                    if ( DeviceRegProp != -1073741275 )
                    {
                      if ( DeviceRegProp < 0 || v20[0] != 1 || v19 != 78 )
                        goto LABEL_32;
                      DeviceRelations = CmGetDeviceContainerIdFromBase(*(_QWORD **)&PiPnpRtlCtx, v14, v25, pszSrc);
                      if ( DeviceRelations < 0 )
                        break;
                      if ( !v11 )
                      {
                        DeviceRelations = CmMoveBaseContainer(v16, (__int64)Str1, (__int64)Str2, (int)pszSrc);
                        PiDcContainerRequiresConfiguration(pszSrc);
                        if ( DeviceRelations < 0 )
                          break;
                        DeviceRelations = RtlStringCbCopyW(Str2, 0x4EuLL, pszSrc);
                        if ( DeviceRelations < 0 )
                          break;
                        v11 = 1;
                      }
                      if ( wcsicmp(pszSrc, Str2) )
                      {
                        if ( !(unsigned __int8)CmIsLocalMachineContainer(*(_QWORD *)&PiPnpRtlCtx) )
                        {
                          DeviceRelations = CmMoveBaseContainer(v17, (__int64)v25, (__int64)pszSrc, (int)Str2);
                          PiDcContainerRequiresConfiguration(Str2);
                          if ( DeviceRelations < 0 )
                            break;
                        }
                      }
                    }
                    v10 = *(_DWORD **)&v20[1];
                  }
                }
              }
              v8 = (unsigned int)(v8 + 1);
            }
          }
        }
        else
        {
LABEL_32:
          DeviceRelations = -1073739509;
        }
        ExReleaseResourceLite(&PnpRegistryDeviceResource);
        KeLeaveCriticalRegion();
      }
    }
    v6 = *(_DWORD **)&v20[1];
    goto LABEL_35;
  }
  return (unsigned int)DeviceRelations;
}
