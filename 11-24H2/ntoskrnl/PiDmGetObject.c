/*
 * XREFs of PiDmGetObject @ 0x1408CBB70
 * Callers:
 *     PiPnpRtlEnsureObjectCached @ 0x1407264C8 (PiPnpRtlEnsureObjectCached.c)
 *     PiPnpRtlGatherContainerRemoveInfo @ 0x1407266F8 (PiPnpRtlGatherContainerRemoveInfo.c)
 *     PiPnpRtlGatherInterfaceDeleteInfo @ 0x1407268E8 (PiPnpRtlGatherInterfaceDeleteInfo.c)
 *     PiPnpRtlGatherPanelRemoveInfo @ 0x140726B98 (PiPnpRtlGatherPanelRemoveInfo.c)
 *     PiUEventHandleRegistration @ 0x14085BCBC (PiUEventHandleRegistration.c)
 *     PiDqObjectManagerEnumerateAndRegisterQuery @ 0x1408B4A8C (PiDqObjectManagerEnumerateAndRegisterQuery.c)
 *     PiDmObjectGetCachedObjectReference @ 0x1408B96C8 (PiDmObjectGetCachedObjectReference.c)
 *     PiDmObjectProcessPropertyChange @ 0x1408BA158 (PiDmObjectProcessPropertyChange.c)
 *     PiDmObjectUpdateCachedObjectProperty @ 0x1408BB2BC (PiDmObjectUpdateCachedObjectProperty.c)
 *     PiPnpRtlCmActionCallback @ 0x1408C7450 (PiPnpRtlCmActionCallback.c)
 *     PiPnpRtlObjectEventCreate @ 0x1408CB870 (PiPnpRtlObjectEventCreate.c)
 *     PiPnpRtlCacheObjectBaseKey @ 0x1408CC2D0 (PiPnpRtlCacheObjectBaseKey.c)
 *     PiPnpRtlObjectActionCallback @ 0x1408CE6A0 (PiPnpRtlObjectActionCallback.c)
 *     PiDmObjectGetCachedObjectProperty @ 0x1408D0350 (PiDmObjectGetCachedObjectProperty.c)
 *     PiDmObjectGetCachedObjectPropertyData @ 0x1409B1000 (PiDmObjectGetCachedObjectPropertyData.c)
 *     PiDmGetObjectConstraintList @ 0x1409D4AD0 (PiDmGetObjectConstraintList.c)
 *     PiDmCacheDataEncode @ 0x140A50FFC (PiDmCacheDataEncode.c)
 *     PiDmGetReferencedObjectFromProperty @ 0x140A60418 (PiDmGetReferencedObjectFromProperty.c)
 *     PiPnpRtlGatherInstallerClassChangeInfo @ 0x140AB97D4 (PiPnpRtlGatherInstallerClassChangeInfo.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402595A0 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseResourceLite @ 0x14025A450 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x140341E80 (ExAcquireResourceSharedLite.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140347D10 (PsGetCurrentServerSiloGlobals.c)
 *     RtlLookupElementGenericTableAvl @ 0x1403FFF00 (RtlLookupElementGenericTableAvl.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 */

__int64 __fastcall PiDmGetObject(int a1, unsigned __int16 *a2, _QWORD *a3)
{
  unsigned int v3; // edi
  struct _ERESOURCE *v6; // rsi
  struct _KTHREAD *CurrentThread; // rax
  int Flink; // r8d
  __int64 v9; // rcx
  _WORD *v10; // rax
  int v11; // eax
  unsigned __int16 v12; // dx
  struct _LIST_ENTRY *CurrentServerSiloGlobals; // rax
  int v14; // r9d
  unsigned __int16 v15; // dx
  int v16; // r10d
  struct _LIST_ENTRY *v17; // r11
  unsigned __int64 v18; // rax
  __int64 *v19; // rax
  __int64 v20; // rax
  int v22; // ecx
  int v23; // ecx
  int v24; // ecx
  int v25; // ecx
  __int64 *Buffer; // [rsp+30h] [rbp-A8h] BYREF
  __int64 v27; // [rsp+40h] [rbp-98h] BYREF
  __int128 v28; // [rsp+48h] [rbp-90h]
  __int128 v29; // [rsp+58h] [rbp-80h]
  __int128 v30; // [rsp+68h] [rbp-70h]
  __int128 v31; // [rsp+78h] [rbp-60h]
  __int128 v32; // [rsp+88h] [rbp-50h]
  __int128 v33; // [rsp+98h] [rbp-40h]
  __int64 v34; // [rsp+A8h] [rbp-30h]

  v3 = 0;
  v6 = 0LL;
  if ( a1 == 3 )
  {
    v6 = &PiDmDeviceInterfaceManager;
  }
  else
  {
    v22 = a1 - 1;
    if ( v22 )
    {
      v23 = v22 - 1;
      if ( v23 )
      {
        v24 = v23 - 2;
        if ( v24 )
        {
          v25 = v24 - 1;
          if ( v25 )
          {
            if ( v25 == 1 )
              v6 = (struct _ERESOURCE *)&PiDmDevicePanelManager;
          }
          else
          {
            v6 = (struct _ERESOURCE *)&PiDmDeviceContainerManager;
          }
        }
        else
        {
          v6 = (struct _ERESOURCE *)&PiDmDeviceInterfaceClassManager;
        }
      }
      else
      {
        v6 = (struct _ERESOURCE *)&PiDmDeviceInstallerClassManager;
      }
    }
    else
    {
      v6 = (struct _ERESOURCE *)&PiDmDeviceManager;
    }
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite(v6, 1u);
  v27 = 0LL;
  v34 = 0LL;
  Buffer = &v27;
  v28 = 0LL;
  v29 = 0LL;
  v30 = 0LL;
  v31 = 0LL;
  v32 = 0LL;
  v33 = 0LL;
  if ( !a2 )
    goto LABEL_23;
  Flink = (int)v6[2].SystemResourcesList.Flink;
  v9 = 0x7FFFLL;
  *((_QWORD *)&v28 + 1) = a2;
  DWORD1(v29) = Flink;
  v10 = a2;
  do
  {
    if ( !*v10 )
      break;
    ++v10;
    --v9;
  }
  while ( v9 );
  v11 = -1073741811;
  if ( v9 )
  {
    v11 = 0;
    v12 = 2 * (0x7FFF - v9);
  }
  else
  {
    a2 = 0LL;
    v12 = 0;
  }
  if ( v11 < 0 )
    goto LABEL_23;
  if ( Flink == 3 )
  {
    if ( v12 <= 8u )
    {
LABEL_23:
      *a3 = 0LL;
      goto LABEL_24;
    }
    a2 += 4;
  }
  CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
  v16 = v15 >> 1;
  v17 = CurrentServerSiloGlobals[75].Flink;
  for ( LODWORD(v29) = 0; v16; v14 = (unsigned __int16)v18 + 65599 * v14 )
  {
    v18 = *a2++;
    --v16;
    if ( (unsigned int)v18 >= 0x61 )
    {
      if ( (unsigned int)v18 > 0x7A )
      {
        if ( v17 && (unsigned __int16)v18 >= 0xC0u )
          LOWORD(v18) = *((_WORD *)&v17->Flink
                        + (v18 & 0xF)
                        + *((unsigned __int16 *)&v17->Flink
                          + ((unsigned __int8)v18 >> 4)
                          + (unsigned int)*((unsigned __int16 *)&v17->Flink + (v18 >> 8))))
                      + v18;
      }
      else
      {
        LOWORD(v18) = v18 - 32;
      }
    }
  }
  LODWORD(v29) = v14;
  v19 = (__int64 *)RtlLookupElementGenericTableAvl((PRTL_AVL_TABLE)&v6[1], &Buffer);
  if ( !v19 )
    goto LABEL_23;
  v20 = *v19;
  *a3 = v20;
  if ( !v20 )
  {
LABEL_24:
    v3 = -1073741772;
    goto LABEL_19;
  }
  _InterlockedIncrement((volatile signed __int32 *)(v20 + 8));
LABEL_19:
  ExReleaseResourceLite(v6);
  KeLeaveCriticalRegionThread();
  return v3;
}
