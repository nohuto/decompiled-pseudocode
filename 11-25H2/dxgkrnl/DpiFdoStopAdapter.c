/*
 * XREFs of DpiFdoStopAdapter @ 0x1402412FC
 * Callers:
 *     DpiFdoHandleStopDevice @ 0x14023B6E0 (DpiFdoHandleStopDevice.c)
 *     DpiKsrStopAdapter @ 0x14024A5C0 (DpiKsrStopAdapter.c)
 *     DpiLdaStopAllAdaptersInChain @ 0x14024CD98 (DpiLdaStopAllAdaptersInChain.c)
 * Callees:
 *     ?AcquireMiniportListMutex@@YAXXZ @ 0x140042008 (-AcquireMiniportListMutex@@YAXXZ.c)
 *     ?ReleaseMiniportListMutex@@YAXXZ @ 0x14004204C (-ReleaseMiniportListMutex@@YAXXZ.c)
 *     DpiFdoIsPostDevice @ 0x14004DB50 (DpiFdoIsPostDevice.c)
 *     DpiFdoIsMsBddAnchoredDevice @ 0x1400593B8 (DpiFdoIsMsBddAnchoredDevice.c)
 *     DpiRemoveAdapter @ 0x14007C36C (DpiRemoveAdapter.c)
 *     Feature_Bugfix_WaitForCallOutReadyInNotificationForPnPStop__private_IsEnabledDeviceUsageNoInline @ 0x14007D5C4 (Feature_Bugfix_WaitForCallOutReadyInNotificationForPnPStop__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     memset @ 0x14009FCC0 (memset.c)
 *     DxgkStartPnPStop @ 0x14019E5EC (DxgkStartPnPStop.c)
 *     DxgkCompletePnPTransition @ 0x1401F6448 (DxgkCompletePnPTransition.c)
 *     DxgkStartPnPTransition @ 0x1401F6848 (DxgkStartPnPTransition.c)
 *     DpiDestroyBlockList @ 0x140232588 (DpiDestroyBlockList.c)
 *     DpiFdoDestroyRelatedObjects @ 0x140236C10 (DpiFdoDestroyRelatedObjects.c)
 *     DpiFdoDisconnectInterrupt @ 0x140236CB8 (DpiFdoDisconnectInterrupt.c)
 *     DpiFdoIsDevicePresent @ 0x14023D6C0 (DpiFdoIsDevicePresent.c)
 *     DpiFdoStopDeviceAndReleasePostDisplayOwnership @ 0x1402419C8 (DpiFdoStopDeviceAndReleasePostDisplayOwnership.c)
 *     DpiFdoDetermineAffectedSession @ 0x140243560 (DpiFdoDetermineAffectedSession.c)
 *     DpiPnpNotifyGdi @ 0x140243BC0 (DpiPnpNotifyGdi.c)
 *     ?DpiBrightnessStopDevice@@YAJPEAU_DEVICE_OBJECT@@@Z @ 0x140246E7C (-DpiBrightnessStopDevice@@YAJPEAU_DEVICE_OBJECT@@@Z.c)
 *     DpiFdoDisarmWaitWake @ 0x14024D45C (DpiFdoDisarmWaitWake.c)
 *     DpiDxgkDdiStopDevice @ 0x14024DB58 (DpiDxgkDdiStopDevice.c)
 *     ?DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z @ 0x14037580C (-DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z.c)
 *     DpiDxgkDdiDisplayDetectControl @ 0x140375ABC (DpiDxgkDdiDisplayDetectControl.c)
 */

__int64 __fastcall DpiFdoStopAdapter(struct _DEVICE_OBJECT *a1, __int64 a2)
{
  char *DeviceExtension; // rdi
  __int64 v5; // r13
  int v6; // eax
  int v7; // eax
  __int64 v8; // rax
  __int64 v9; // r14
  struct _PNP_TRANS_TOKEN *started; // rbx
  DXGADAPTER *v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rdx
  int v14; // eax
  unsigned int v15; // r9d
  __int64 *v16; // r8
  __int64 v17; // rcx
  __int128 *v18; // rax
  int IsDevicePresent; // eax
  char v20; // bl
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // rcx
  unsigned __int64 v25; // rdx
  PLARGE_INTEGER Timeout; // [rsp+20h] [rbp-59h]
  int Timeouta; // [rsp+20h] [rbp-59h]
  __int64 v29; // [rsp+28h] [rbp-51h]
  char v30[16]; // [rsp+30h] [rbp-49h] BYREF
  _OWORD v31[5]; // [rsp+40h] [rbp-39h] BYREF
  __int128 v32; // [rsp+90h] [rbp+17h] BYREF
  __int64 v33; // [rsp+A0h] [rbp+27h]

  v30[0] = 0;
  memset(v31, 0, 0x48uLL);
  DeviceExtension = (char *)a1->DeviceExtension;
  v5 = *((_QWORD *)DeviceExtension + 5);
  *(_DWORD *)&DeviceExtension[4 * (*((_DWORD *)DeviceExtension + 69) & 7) + 244] = *((_DWORD *)DeviceExtension + 60);
  v6 = *((_DWORD *)DeviceExtension + 59);
  ++*((_DWORD *)DeviceExtension + 69);
  *((_DWORD *)DeviceExtension + 60) = v6;
  v7 = *((_DWORD *)DeviceExtension + 688);
  *((_DWORD *)DeviceExtension + 59) = 4;
  if ( (v7 & 1) == 0 )
    DpiFdoDisarmWaitWake(a1);
  if ( *((_DWORD *)DeviceExtension + 4) == 1953656900 && *((_DWORD *)DeviceExtension + 5) == 2 )
  {
    v8 = *((_QWORD *)DeviceExtension + 337);
    v31[0] = 0x480000001EuLL;
    DWORD1(v31[3]) = (unsigned int)a1 & 0xFFFF00;
    memset(&v31[1], 0, 28);
    LODWORD(v31[3]) = 36;
    *((_QWORD *)&v31[3] + 1) = 0LL;
    *(_QWORD *)&v31[4] = v8;
    DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v31, *((_QWORD *)DeviceExtension + 736));
    if ( !DeviceExtension[480] )
      KeWaitForSingleObject(DeviceExtension + 4264, Executive, 0, 0, 0LL);
    v9 = DpiFdoDetermineAffectedSession(*((_QWORD *)DeviceExtension + 3));
    started = (struct _PNP_TRANS_TOKEN *)DxgkStartPnPTransition(0LL, v9);
    if ( !started )
    {
      WdLogSingleEntry1(6LL, -1073741670LL);
      WdLogGlobalForLineNumber = 17487;
    }
    if ( *((_DWORD *)DeviceExtension + 1030) != 3 )
    {
      v11 = (DXGADAPTER *)*((_QWORD *)DeviceExtension + 504);
      if ( v11 )
        DxgkStartPnPStop(v11);
    }
    if ( (DeviceExtension[4040] & 1) != 0 || (struct _DEVICE_OBJECT *)qword_14015DD68 == a1 )
    {
      v12 = *((_QWORD *)DeviceExtension + 6);
      v13 = *((_QWORD *)DeviceExtension + 5);
      v32 = 0LL;
      LODWORD(v32) = 83886077;
      v33 = 0LL;
      v14 = DpiDxgkDdiDisplayDetectControl(DeviceExtension, v13, v12, &v32, Timeout, v29);
      if ( v14 < 0 )
      {
        WdLogSingleEntry2(2LL, *(_QWORD *)(v5 + 1128), v14);
        WdLogGlobalForLineNumber = 17530;
      }
      if ( (struct _DEVICE_OBJECT *)qword_14015DD70 == a1 )
      {
        LOBYTE(word_14015DD5C) = 0;
        qword_14015DD70 = 0LL;
      }
      if ( (struct _DEVICE_OBJECT *)qword_14015DD68 == a1 )
      {
        word_14015DD5C = 0;
        qword_14015DD68 = 0LL;
      }
      ExReleaseResourceLite(*((PERESOURCE *)DeviceExtension + 21));
      ReleaseMiniportListMutex();
      if ( (DeviceExtension[4040] & 1) != 0 )
      {
        LOBYTE(Timeouta) = (unsigned int)Feature_Bugfix_WaitForCallOutReadyInNotificationForPnPStop__private_IsEnabledDeviceUsageNoInline() != 0;
        DpiPnpNotifyGdi(a1, 0LL, started, v9, Timeouta, a2);
      }
      else
      {
        DxgkCompletePnPTransition(started);
      }
      AcquireMiniportListMutex();
      ExAcquireResourceExclusiveLite(*((PERESOURCE *)DeviceExtension + 21), 1u);
    }
    else
    {
      DxgkCompletePnPTransition(started);
    }
    IoSetDeviceInterfaceState((PUNICODE_STRING)DeviceExtension + 178, 0);
    if ( *((_QWORD *)DeviceExtension + 359) )
      IoSetDeviceInterfaceState((PUNICODE_STRING)DeviceExtension + 179, 0);
    if ( DeviceExtension[5816] )
    {
      IoSetDeviceInterfaceState((PUNICODE_STRING)(DeviceExtension + 5800), 0);
      RtlFreeUnicodeString((PUNICODE_STRING)(DeviceExtension + 5800));
    }
    if ( *((_QWORD *)DeviceExtension + 361) )
      IoSetDeviceInterfaceState((PUNICODE_STRING)DeviceExtension + 180, 0);
    if ( *((_QWORD *)DeviceExtension + 365) )
      IoSetDeviceInterfaceState((PUNICODE_STRING)DeviceExtension + 182, 0);
    if ( *((_QWORD *)DeviceExtension + 367) )
      IoSetDeviceInterfaceState((PUNICODE_STRING)DeviceExtension + 183, 0);
    if ( *((_QWORD *)DeviceExtension + 371) )
      IoSetDeviceInterfaceState((PUNICODE_STRING)DeviceExtension + 185, 0);
    if ( *((_QWORD *)DeviceExtension + 369) )
      IoSetDeviceInterfaceState((PUNICODE_STRING)DeviceExtension + 184, 0);
    if ( *((_QWORD *)DeviceExtension + 373) )
      IoSetDeviceInterfaceState((PUNICODE_STRING)DeviceExtension + 186, 0);
    if ( *((_QWORD *)DeviceExtension + 363) )
      IoSetDeviceInterfaceState((PUNICODE_STRING)DeviceExtension + 181, 0);
    if ( DpiFdoIsMsBddAnchoredDevice((__int64)a1) && dword_14015E154 != -1 )
    {
      KeEnterCriticalRegion();
      ExAcquireResourceSharedLite((PERESOURCE)(DeviceExtension + 3440), 1u);
      v15 = 0;
      v16 = (__int64 *)*((_QWORD *)DeviceExtension + 473);
      if ( *((_DWORD *)DeviceExtension + 950) )
      {
        v17 = *((_QWORD *)DeviceExtension + 473);
        do
        {
          if ( *v16 == v17 )
            break;
          if ( *((_DWORD *)v16 + 126) == dword_14015E154 )
          {
            v18 = (__int128 *)v16[116];
            if ( v18 )
            {
              xmmword_14015E0D0 = *v18;
              xmmword_14015E0E0 = v18[1];
              xmmword_14015E0F0 = v18[2];
              xmmword_14015E100 = v18[3];
              xmmword_14015E110 = v18[4];
              xmmword_14015E120 = v18[5];
              xmmword_14015E130 = v18[6];
              xmmword_14015E140 = v18[7];
              v17 = *((_QWORD *)DeviceExtension + 473);
            }
          }
          v16 = (__int64 *)*v16;
          ++v15;
        }
        while ( v15 < *((_DWORD *)DeviceExtension + 950) );
      }
      ExReleaseResourceLite((PERESOURCE)(DeviceExtension + 3440));
      KeLeaveCriticalRegion();
    }
    DpiFdoDestroyRelatedObjects((__int64)a1, a2);
    DpiBrightnessStopDevice(a1);
    DpiDestroyBlockList((__int64)DeviceExtension);
    if ( *((_DWORD *)DeviceExtension + 1030) != 3 )
      DpiRemoveAdapter((__int64)DeviceExtension, 0, 0, 1);
    KeSetEvent((PRKEVENT)(DeviceExtension + 3664), 0, 0);
  }
  else
  {
    v31[0] = 0x4000000006uLL;
    DWORD1(v31[3]) = (unsigned int)a1 & 0xFFFF00;
    memset(&v31[1], 0, 28);
    LODWORD(v31[3]) = 36;
    *((_QWORD *)&v31[3] + 1) = 0LL;
    DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v31, 0x200000000uLL);
  }
  IsDevicePresent = DpiFdoIsDevicePresent((__int64)DeviceExtension, v30);
  v20 = v30[0];
  if ( IsDevicePresent < 0 )
    v20 = 1;
  LOBYTE(v21) = DpiFdoIsMsBddAnchoredDevice((__int64)a1);
  if ( (_BYTE)v21 || DpiFdoIsPostDevice(v22) )
  {
    if ( v20 )
    {
      v23 = (unsigned int)DpiFdoStopDeviceAndReleasePostDisplayOwnership(a1, 0LL);
    }
    else if ( (_BYTE)v21 )
    {
      dword_14015E150 = 2;
    }
  }
  if ( *((_DWORD *)DeviceExtension + 4) == 1953656900 && *((_DWORD *)DeviceExtension + 5) == 2 )
    DeviceExtension[4040] &= ~4u;
  if ( v20 && (int)v23 < 0 )
    DpiDxgkDdiStopDevice(v5, *((_QWORD *)DeviceExtension + 6));
  if ( *((_QWORD *)DeviceExtension + 174) )
    DpiFdoDisconnectInterrupt((__int64)a1);
  v24 = *((_QWORD *)DeviceExtension + 61);
  if ( v24 )
  {
    PoFxUnregisterDevice(v24, v21, v23);
    *(_QWORD *)(*((_QWORD *)DeviceExtension + 504) + 3232LL) = 0LL;
    *((_QWORD *)DeviceExtension + 61) = 0LL;
  }
  memset(v31, 0, 0x48uLL);
  v31[0] = 0x4000000006uLL;
  memset(&v31[1], 0, 28);
  LODWORD(v31[3]) = 36;
  DWORD1(v31[3]) = (unsigned int)a1 & 0xFFFF00;
  *((_QWORD *)&v31[3] + 1) = 1LL;
  if ( *((_DWORD *)DeviceExtension + 4) == 1953656900 && *((_DWORD *)DeviceExtension + 5) == 2 )
    v25 = *((_QWORD *)DeviceExtension + 736);
  else
    v25 = 0x200000000LL;
  return DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v31, v25);
}
