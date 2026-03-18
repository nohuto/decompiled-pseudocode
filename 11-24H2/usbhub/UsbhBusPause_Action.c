/*
 * XREFs of UsbhBusPause_Action @ 0x140005D1C
 * Callers:
 *     Usbh_BS_BusRun @ 0x14001ED80 (Usbh_BS_BusRun.c)
 * Callees:
 *     UsbhSsh_CheckHubIdle @ 0x1400044C4 (UsbhSsh_CheckHubIdle.c)
 *     UsbhQueuePauseChange @ 0x140006628 (UsbhQueuePauseChange.c)
 *     UsbhPCE_Disable @ 0x140006878 (UsbhPCE_Disable.c)
 *     PdoExt @ 0x140006D10 (PdoExt.c)
 *     FdoExt @ 0x14000BE50 (FdoExt.c)
 *     UsbhPostInterrupt @ 0x140020930 (UsbhPostInterrupt.c)
 */

__int64 __fastcall UsbhBusPause_Action(PDEVICE_OBJECT DeviceObject, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rbx
  void *DeviceExtension; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  void *v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  unsigned __int16 i; // r14
  void *v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rcx
  __int64 v20; // rbx
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rcx
  __int64 v25; // r13
  void *v26; // rdx
  __int64 v27; // rcx
  void *v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  void *v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rbp
  void *v34; // rdx
  __int64 v35; // rcx
  void *v36; // rdx
  KIRQL v37; // di
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 v40; // rcx
  __int64 v41; // rbx
  __int64 v42; // rdx
  __int64 v43; // r8
  __int64 v44; // r9
  __int64 v45; // rcx
  __int64 v46; // r8
  void *v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // rbx
  __int64 Pool2; // rax
  _QWORD *v51; // rax
  _QWORD *v52; // rdx
  __int64 v53; // rbx
  void *v54; // rdx
  __int64 v55; // rcx
  KIRQL v56; // r15
  void *v57; // r8
  __int64 v58; // rdx
  __int64 v59; // rbx
  _QWORD *v60; // rdi
  _QWORD *v61; // rdx
  _QWORD *v62; // r8
  void *v63; // r9
  __int64 v64; // rcx
  __int64 v65; // rdx
  _QWORD *v66; // rcx
  int v67; // eax
  void *v68; // rdx
  __int64 v69; // rcx

  v6 = FdoExt(DeviceObject, a2, a3, a4);
  if ( _bittest(&UsbhLogMask, 0xBu) )
  {
    if ( DeviceObject )
    {
      DeviceExtension = DeviceObject->DeviceExtension;
      if ( DeviceExtension )
      {
        v8 = *((_QWORD *)DeviceExtension + 111)
           + 32LL
           * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)DeviceExtension + 220) & *((_DWORD *)DeviceExtension + 221));
        *(_DWORD *)v8 = 829776240;
        *(_QWORD *)(v8 + 8) = 0LL;
        *(_QWORD *)(v8 + 16) = 0LL;
        *(_QWORD *)(v8 + 24) = 0LL;
      }
    }
  }
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v6 + 2712), 0xFFFFFFFF) == 1 )
  {
    v9 = *(_QWORD *)(v6 + 2664);
    if ( _bittest(&UsbhLogMask, 0xBu) )
    {
      if ( DeviceObject )
      {
        v10 = DeviceObject->DeviceExtension;
        if ( v10 )
        {
          v11 = *((_QWORD *)v10 + 111)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v10 + 220) & *((_DWORD *)v10 + 221));
          *(_DWORD *)v11 = 1363763555;
          *(_QWORD *)(v11 + 8) = 0LL;
          *(_QWORD *)(v11 + 16) = v9;
          *(_QWORD *)(v11 + 24) = 0LL;
        }
      }
    }
    IoCancelIrp(*(PIRP *)(v6 + 2664));
  }
  KeWaitForSingleObject((PVOID)(v6 + 2688), Executive, 0, 0, 0LL);
  if ( *(_DWORD *)(a2 + 128) == 2 && (int)UsbhSsh_CheckHubIdle((__int64)DeviceObject, v12, v13, v14) < 0 )
  {
    *(_DWORD *)(v6 + 2712) = 0;
    KeResetEvent((PRKEVENT)(v6 + 2688));
    UsbhPostInterrupt(DeviceObject);
    return 3221225473LL;
  }
  else
  {
    for ( i = 1; i <= *(unsigned __int8 *)(FdoExt(DeviceObject, v12, v13, v14) + 2938); ++i )
    {
      if ( (UsbhLogMask & 8) != 0 )
      {
        if ( DeviceObject )
        {
          v16 = DeviceObject->DeviceExtension;
          if ( v16 )
          {
            v19 = *((_QWORD *)v16 + 111)
                + 32LL
                * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v16 + 220) & *((_DWORD *)v16 + 221));
            *(_DWORD *)v19 = 1413771367;
            *(_QWORD *)(v19 + 16) = i;
            *(_QWORD *)(v19 + 8) = 0LL;
            *(_QWORD *)(v19 + 24) = 0LL;
          }
        }
      }
      if ( i )
      {
        v20 = FdoExt(DeviceObject, v16, v17, v18);
        if ( i <= *(unsigned __int8 *)(FdoExt(DeviceObject, v21, v22, v23) + 2938)
          && (v24 = *(_QWORD *)(v20 + 3056)) != 0 )
        {
          v25 = v24 + 2928LL * i - 2928;
          if ( (UsbhLogMask & 8) != 0 )
          {
            if ( DeviceObject )
            {
              v26 = DeviceObject->DeviceExtension;
              if ( v26 )
              {
                v27 = *((_QWORD *)v26 + 111)
                    + 32LL
                    * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v26 + 220) & *((_DWORD *)v26 + 221));
                *(_DWORD *)v27 = 1044672615;
                *(_QWORD *)(v27 + 8) = 0LL;
                *(_QWORD *)(v27 + 16) = i;
                *(_QWORD *)(v27 + 24) = v25;
              }
            }
          }
        }
        else
        {
          v25 = 0LL;
        }
      }
      else
      {
        v25 = 0LL;
      }
      if ( (UsbhLogMask & 0x800) != 0 )
      {
        if ( DeviceObject )
        {
          v28 = DeviceObject->DeviceExtension;
          if ( v28 )
          {
            v29 = *((_QWORD *)v28 + 111)
                + 32LL
                * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v28 + 220) & *((_DWORD *)v28 + 221));
            *(_DWORD *)v29 = 1467310448;
            *(_QWORD *)(v29 + 24) = i;
            *(_QWORD *)(v29 + 8) = 0LL;
            *(_QWORD *)(v29 + 16) = 0LL;
          }
        }
      }
      if ( v25 )
      {
        v30 = *(int *)(v25 + 696);
        if ( (UsbhLogMask & 0x800) != 0 )
        {
          if ( DeviceObject )
          {
            v31 = DeviceObject->DeviceExtension;
            if ( v31 )
            {
              v32 = *((_QWORD *)v31 + 111)
                  + 32LL
                  * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v31 + 220) & *((_DWORD *)v31 + 221));
              *(_DWORD *)v32 = 846553456;
              *(_QWORD *)(v32 + 24) = i;
              *(_QWORD *)(v32 + 8) = 0LL;
              *(_QWORD *)(v32 + 16) = v30;
            }
          }
        }
      }
      if ( *(_DWORD *)(a2 + 128) == 6 )
        KeWaitForSingleObject((PVOID)(v25 + 520), Executive, 0, 0, 0LL);
      v33 = 0LL;
      if ( (UsbhLogMask & 0x100) != 0 )
      {
        if ( DeviceObject )
        {
          v34 = DeviceObject->DeviceExtension;
          if ( v34 )
          {
            v35 = *((_QWORD *)v34 + 111)
                + 32LL
                * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v34 + 220) & *((_DWORD *)v34 + 221));
            *(_DWORD *)v35 = 1329877100;
            *(_QWORD *)(v35 + 16) = i;
            *(_QWORD *)(v35 + 8) = 0LL;
            *(_QWORD *)(v35 + 24) = 1348564304LL;
          }
        }
      }
      v37 = KeAcquireSpinLockRaiseToDpc(&HubG);
      qword_14006F5E0 = (__int64)&dword_14006F5E8;
      if ( (UsbhLogMask & 8) != 0 )
      {
        if ( DeviceObject )
        {
          v36 = DeviceObject->DeviceExtension;
          if ( v36 )
          {
            v40 = *((_QWORD *)v36 + 111)
                + 32LL
                * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v36 + 220) & *((_DWORD *)v36 + 221));
            *(_DWORD *)v40 = 1413771367;
            *(_QWORD *)(v40 + 16) = i;
            *(_QWORD *)(v40 + 8) = 0LL;
            *(_QWORD *)(v40 + 24) = 0LL;
          }
        }
      }
      if ( i )
      {
        v41 = FdoExt(DeviceObject, v36, v38, v39);
        if ( i <= *(unsigned __int8 *)(FdoExt(DeviceObject, v42, v43, v44) + 2938) )
        {
          v45 = *(_QWORD *)(v41 + 3056);
          if ( v45 )
          {
            v46 = v45 + 2928LL * i - 2928;
            if ( (UsbhLogMask & 8) != 0 )
            {
              if ( DeviceObject )
              {
                v47 = DeviceObject->DeviceExtension;
                if ( v47 )
                {
                  v48 = *((_QWORD *)v47 + 111)
                      + 32LL
                      * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v47 + 220) & *((_DWORD *)v47 + 221));
                  *(_DWORD *)v48 = 1044672615;
                  *(_QWORD *)(v48 + 8) = 0LL;
                  *(_QWORD *)(v48 + 16) = i;
                  *(_QWORD *)(v48 + 24) = v46;
                }
              }
            }
            if ( v46 )
            {
              v33 = *(_QWORD *)(v46 + 392);
              if ( v33 )
              {
                v49 = PdoExt(*(_QWORD *)(v46 + 392));
                Pool2 = ExAllocatePool2(64LL, 48LL, 1112885333LL);
                if ( Pool2 )
                {
                  *(_DWORD *)Pool2 = 1668571500;
                  *(_QWORD *)(Pool2 + 32) = v33;
                  *(_DWORD *)(Pool2 + 24) = 1348564304;
                  *(_QWORD *)(Pool2 + 40) = 0LL;
                  v51 = (_QWORD *)(Pool2 + 8);
                  v52 = *(_QWORD **)(v49 + 1280);
                  if ( *v52 != v49 + 1272 )
                    goto LABEL_97;
                  *v51 = v49 + 1272;
                  v51[1] = v52;
                  *v52 = v51;
                  *(_QWORD *)(v49 + 1280) = v51;
                }
                else
                {
                  ++*(_DWORD *)(v49 + 1288);
                }
              }
            }
          }
        }
      }
      qword_14006F5E0 = 0LL;
      KeReleaseSpinLock(&HubG, v37);
      if ( v33 )
      {
        v53 = PdoExt(v33);
        KeWaitForSingleObject((PVOID)(v53 + 2896), Executive, 0, 0, 0LL);
        *(_DWORD *)(v53 + 1420) |= 0x10000000u;
        KeSetEvent((PRKEVENT)(v53 + 2896), 0, 0);
        if ( _bittest(&UsbhLogMask, 8u) )
        {
          if ( DeviceObject )
          {
            v54 = DeviceObject->DeviceExtension;
            if ( v54 )
            {
              v55 = *((_QWORD *)v54 + 111)
                  + 32LL
                  * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v54 + 220) & *((_DWORD *)v54 + 221));
              *(_DWORD *)v55 = 1329877109;
              *(_QWORD *)(v55 + 8) = 0LL;
              *(_QWORD *)(v55 + 16) = v33;
              *(_QWORD *)(v55 + 24) = 1348564304LL;
            }
          }
        }
        v56 = KeAcquireSpinLockRaiseToDpc(&HubG);
        qword_14006F5E0 = (__int64)&dword_14006F5E8;
        if ( _bittest(&UsbhLogMask, 8u) )
        {
          if ( DeviceObject )
          {
            v57 = DeviceObject->DeviceExtension;
            if ( v57 )
            {
              v58 = *((_QWORD *)v57 + 111)
                  + 32LL
                  * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v57 + 220) & *((_DWORD *)v57 + 221));
              *(_QWORD *)(v58 + 8) = 0LL;
              *(_DWORD *)v58 = 1348891236;
              *(_QWORD *)(v58 + 16) = v33;
              *(_QWORD *)(v58 + 24) = 1348564304LL;
            }
          }
        }
        v59 = PdoExt(v33);
        v60 = (_QWORD *)(v59 + 1272);
        v61 = *(_QWORD **)(v59 + 1272);
        if ( v61 == (_QWORD *)(v59 + 1272) )
          goto LABEL_84;
        do
        {
          v62 = v61 - 1;
          if ( (UsbhLogMask & 0x100) != 0 )
          {
            if ( DeviceObject )
            {
              v63 = DeviceObject->DeviceExtension;
              if ( v63 )
              {
                v64 = *((_QWORD *)v63 + 111)
                    + 32LL
                    * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v63 + 220) & *((_DWORD *)v63 + 221));
                *(_QWORD *)(v64 + 8) = 0LL;
                *(_DWORD *)v64 = 1064591724;
                *(_QWORD *)(v64 + 16) = v59;
                *(_QWORD *)(v64 + 24) = 1348564304LL;
              }
            }
          }
          if ( *((_DWORD *)v62 + 6) == 1348564304 && !v62[5] )
            break;
          v61 = (_QWORD *)*v61;
          v62 = 0LL;
        }
        while ( v61 != v60 );
        if ( !v62 )
        {
LABEL_84:
          v67 = *(_DWORD *)(v59 + 1288);
          if ( v67 )
            *(_DWORD *)(v59 + 1288) = v67 - 1;
        }
        else
        {
          v65 = v62[1];
          if ( *(_QWORD **)(v65 + 8) != v62 + 1 || (v66 = (_QWORD *)v62[2], (_QWORD *)*v66 != v62 + 1) )
LABEL_97:
            __fastfail(3u);
          *v66 = v65;
          *(_QWORD *)(v65 + 8) = v66;
          ExFreePoolWithTag(v62, 0);
        }
        if ( (_QWORD *)*v60 == v60 && !*(_DWORD *)(v59 + 1288) )
          KeSetEvent((PRKEVENT)(v59 + 1296), 0, 0);
        qword_14006F5E0 = 0LL;
        KeReleaseSpinLock(&HubG, v56);
      }
      UsbhQueuePauseChange(DeviceObject, i, a2);
      UsbhPCE_Disable(DeviceObject, i, a2);
      if ( *(_DWORD *)(a2 + 128) == 6 )
        KeSetEvent((PRKEVENT)(v25 + 520), 0, 0);
    }
    if ( (UsbhLogMask & 0x800) != 0 )
    {
      if ( DeviceObject )
      {
        v68 = DeviceObject->DeviceExtension;
        if ( v68 )
        {
          v69 = *((_QWORD *)v68 + 111)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v68 + 220) & *((_DWORD *)v68 + 221));
          *(_DWORD *)v69 = 1047880048;
          *(_QWORD *)(v69 + 8) = 0LL;
          *(_QWORD *)(v69 + 16) = 0LL;
          *(_QWORD *)(v69 + 24) = 0LL;
        }
      }
    }
    return 0LL;
  }
}
