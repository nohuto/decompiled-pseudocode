/*
 * XREFs of UsbhQueryBusRelations @ 0x140024E3C
 * Callers:
 *     UsbhFdoPnp_QueryDeviceRelations @ 0x140039CF0 (UsbhFdoPnp_QueryDeviceRelations.c)
 * Callees:
 *     Usbh_SSH_Event @ 0x14000A9E0 (Usbh_SSH_Event.c)
 *     FdoExt @ 0x14000BE50 (FdoExt.c)
 *     UsbhEtwLogHubIrpEvent @ 0x140018260 (UsbhEtwLogHubIrpEvent.c)
 *     UsbhAcquirePdoStateLock @ 0x140023C80 (UsbhAcquirePdoStateLock.c)
 *     SET_PDO_HWPNPSTATE @ 0x140024C28 (SET_PDO_HWPNPSTATE.c)
 *     Log @ 0x1400298B0 (Log.c)
 *     __security_check_cookie @ 0x140060F40 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140060F80 (_guard_dispatch_icall.c)
 *     memmove @ 0x140061040 (memmove.c)
 */

__int64 __fastcall UsbhQueryBusRelations(__int64 a1, IRP *a2)
{
  __int64 v2; // rbp
  int ActivityIdIrp; // esi
  _DWORD *v6; // rax
  __int128 *v7; // r13
  _DWORD *v8; // r15
  __int64 v9; // r8
  __int64 v10; // rdx
  __int64 v11; // rcx
  unsigned int *Information; // rsi
  NTSTATUS v13; // eax
  unsigned int v14; // r10d
  _DWORD *v16; // rax
  __int64 v17; // r9
  _DWORD *v18; // rax
  _DWORD *Pool2; // rax
  _DWORD *v20; // r14
  unsigned int v21; // r15d
  PVOID *v22; // r14
  _DWORD *v23; // rax
  __int64 v24; // rcx
  _QWORD *i; // rbp
  _QWORD *v26; // rsi
  KSPIN_LOCK **v27; // rbp
  KSPIN_LOCK *v28; // rsi
  KSPIN_LOCK *v29; // rax
  KSPIN_LOCK *v30; // r13
  KIRQL v31; // al
  KSPIN_LOCK **v32; // rcx
  _DWORD *v33; // rax
  KIRQL v34; // dl
  __int64 v35; // [rsp+20h] [rbp-78h]
  __int64 v36; // [rsp+28h] [rbp-70h]
  KIRQL v37; // [rsp+30h] [rbp-68h]
  __int128 *v38; // [rsp+38h] [rbp-60h]
  __int128 v39; // [rsp+40h] [rbp-58h] BYREF

  v2 = 0LL;
  v39 = 0LL;
  if ( a2 && g_IoGetActivityIdIrp )
    ActivityIdIrp = g_IoGetActivityIdIrp(a2, &v39);
  else
    ActivityIdIrp = -1073741823;
  v6 = FdoExt(a1);
  v7 = &v39;
  if ( ActivityIdIrp < 0 )
    v7 = 0LL;
  v38 = v7;
  v8 = v6;
  UsbhEtwLogHubIrpEvent(a1, 0LL, v7, &USBHUB_ETW_EVENT_HUB_QUERY_BUSRELATIONS_DISPATCH, 0, 0);
  v9 = (int)v8[340];
  if ( (UsbhLogMask & 2) != 0 )
  {
    if ( a1 )
    {
      v10 = *(_QWORD *)(a1 + 64);
      if ( v10 )
      {
        v11 = *(_QWORD *)(v10 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v10 + 880)) & *(_DWORD *)(v10 + 884));
        *(_DWORD *)v11 = 827474513;
        *(_QWORD *)(v11 + 8) = 0LL;
        *(_QWORD *)(v11 + 16) = a2;
        *(_QWORD *)(v11 + 24) = v9;
      }
    }
  }
  Information = (unsigned int *)a2->IoStatus.Information;
  if ( Information )
    v2 = *Information;
  if ( v8[340] == 5 )
  {
    v16 = FdoExt(a1);
    Usbh_SSH_Event(a1, 6LL, (__int64)(v16 + 346), v17);
    v18 = FdoExt(a1);
    Pool2 = (_DWORD *)ExAllocatePool2(
                        64LL,
                        8LL * ((unsigned int)v2 + *((unsigned __int8 *)v18 + 2938) - 1) + 16,
                        1112885333LL);
    v20 = Pool2;
    if ( Pool2 )
    {
      if ( (_DWORD)v2 )
      {
        *Pool2 = v2;
        memmove(Pool2 + 4, Information + 2, 8LL * (unsigned int)v2);
      }
      if ( Information )
        ExFreePoolWithTag(Information, 0);
      Log(a1, 2, 1363300914, (_DWORD)a2, (__int64)v20);
      v23 = FdoExt(a1);
      UsbhAcquirePdoStateLock(v24, (__int64)(v23 + 346), 8);
      v8[226] = 0;
      for ( i = (_QWORD *)*((_QWORD *)v8 + 601); i != (_QWORD *)(v8 + 1202); i = (_QWORD *)*i )
      {
        v26 = i - 165;
        Log(a1, 2, 1902277169, (_DWORD)i - 1320, 0LL);
        FdoExt(a1);
        if ( !i[152] )
          v26[317] = MEMORY[0xFFFFF78000000014];
        ObfReferenceObject((PVOID)v26[105]);
        *(_QWORD *)&v20[2 * (*v20)++ + 2] = v26[105];
        SET_PDO_HWPNPSTATE(v26[105], 3, 8);
      }
      v27 = (KSPIN_LOCK **)(v8 + 1206);
      while ( 1 )
      {
        v28 = *v27;
        if ( *v27 == (KSPIN_LOCK *)v27 )
          break;
        if ( (KSPIN_LOCK **)v28[1] != v27 )
          goto LABEL_39;
        v29 = (KSPIN_LOCK *)*v28;
        if ( *(KSPIN_LOCK **)(*v28 + 8) != v28 )
          goto LABEL_39;
        *v27 = v29;
        v30 = v28 - 165;
        v29[1] = (KSPIN_LOCK)v27;
        Log(a1, 2, 1902277170, (_DWORD)v28 - 1320, 0LL);
        SET_PDO_HWPNPSTATE(*(v28 - 60), 5, 9);
        *v28 = 0LL;
        v28[1] = 0LL;
        v31 = KeAcquireSpinLockRaiseToDpc(v28 + 186);
        v37 = v31;
        if ( *((_DWORD *)v28 + 374) == 1 )
        {
          *((_DWORD *)v30 + 704) = 0;
          USBD_RemoveDeviceFromGlobalList(v30[105]);
          v31 = v37;
        }
        KeReleaseSpinLock(v30 + 351, v31);
        v32 = (KSPIN_LOCK **)*((_QWORD *)v8 + 606);
        if ( *v32 != (KSPIN_LOCK *)(v8 + 1210) )
LABEL_39:
          __fastfail(3u);
        *v28 = (KSPIN_LOCK)(v8 + 1210);
        v28[1] = (KSPIN_LOCK)v32;
        *v32 = v28;
        *((_QWORD *)v8 + 606) = v28;
      }
      v33 = FdoExt(a1);
      v33[380] = 0;
      qword_14006F5E0 = 0LL;
      v34 = *((_BYTE *)v33 + 1516);
      v33[368] = 1734964085;
      KeReleaseSpinLock(&HubG, v34);
      ++a2->CurrentLocation;
      ++a2->Tail.Overlay.CurrentStackLocation;
      a2->IoStatus.Status = 0;
      a2->IoStatus.Information = (unsigned __int64)v20;
      v7 = v38;
      v21 = IofCallDriver(*((PDEVICE_OBJECT *)v8 + 151), a2);
    }
    else
    {
      v21 = -1073741670;
      Log(a1, 2, 1363300915, (_DWORD)a2, 0LL);
      a2->IoStatus.Information = 0LL;
      if ( (_DWORD)v2 )
      {
        v22 = (PVOID *)(Information + 2);
        do
        {
          ObfDereferenceObject(*v22++);
          --v2;
        }
        while ( v2 );
      }
      if ( Information )
        ExFreePoolWithTag(Information, 0);
      a2->IoStatus.Status = -1073741670;
      IofCompleteRequest(a2, 0);
    }
    LODWORD(v36) = 0;
    LODWORD(v35) = 0;
    UsbhEtwLogHubIrpEvent(a1, 0LL, v7, &USBHUB_ETW_EVENT_HUB_QUERY_BUSRELATIONS_COMPLETE, v35, v36);
    return v21;
  }
  else
  {
    ++a2->CurrentLocation;
    ++a2->Tail.Overlay.CurrentStackLocation;
    a2->IoStatus.Status = 0;
    v13 = IofCallDriver(*((PDEVICE_OBJECT *)v8 + 151), a2);
    Log(a1, 2, 1363300897, 0, v13);
    return v14;
  }
}
