/*
 * XREFs of UsbhBusUnlatchPdo @ 0x140029F90
 * Callers:
 *     Usbh_PCE_psPAUSED_Action @ 0x140004BE4 (Usbh_PCE_psPAUSED_Action.c)
 *     UsbhPCE_Disable @ 0x140006878 (UsbhPCE_Disable.c)
 *     UsbhDropDevice @ 0x14001846C (UsbhDropDevice.c)
 *     UsbhReset2Complete @ 0x140028D20 (UsbhReset2Complete.c)
 *     UsbhRequestPortSuspend @ 0x1400299E4 (UsbhRequestPortSuspend.c)
 *     UsbhPortDisconnect @ 0x14002A520 (UsbhPortDisconnect.c)
 *     UsbhCancelEnumeration @ 0x140034170 (UsbhCancelEnumeration.c)
 *     UsbhWcCancelEnumeration @ 0x140034FE0 (UsbhWcCancelEnumeration.c)
 *     UsbhSetEnumerationFailed @ 0x140058C08 (UsbhSetEnumerationFailed.c)
 * Callees:
 *     UsbhDerefPdo @ 0x1400160A0 (UsbhDerefPdo.c)
 *     Log @ 0x1400298B0 (Log.c)
 *     UsbhTrapFatal_Dbg @ 0x14003964C (UsbhTrapFatal_Dbg.c)
 */

void __fastcall UsbhBusUnlatchPdo(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  KIRQL v10; // bp
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rbx
  _QWORD *v16; // rsi
  _QWORD *v17; // rdx
  _QWORD *v18; // r8
  __int64 v19; // r10
  __int64 v20; // rcx
  __int64 v21; // rdx
  _QWORD *v22; // rcx
  int v23; // eax

  if ( (UsbhLogMask & 0x400) != 0 )
  {
    if ( a1 )
    {
      v8 = *(_QWORD *)(a1 + 64);
      if ( v8 )
      {
        v9 = *(_QWORD *)(v8 + 888)
           + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v8 + 880)) & *(_DWORD *)(v8 + 884));
        *(_QWORD *)(v9 + 8) = 0LL;
        *(_DWORD *)v9 = 827354229;
        *(_QWORD *)(v9 + 16) = a2;
        *(_QWORD *)(v9 + 24) = a3;
      }
    }
  }
  if ( a5 )
  {
    Log(a1, 1024, 1970032691, a2, a3);
    *(_DWORD *)(a3 + 416) = 0;
    UsbhDerefPdo(a1, a2, 0LL, 0x7050444Fu);
  }
  else
  {
    v10 = KeAcquireSpinLockRaiseToDpc(&HubG);
    qword_14006F5E0 = (__int64)&dword_14006F5E8;
    *(_DWORD *)(a3 + 416) = 0;
    if ( (UsbhLogMask & 0x400) != 0 )
    {
      if ( a1 )
      {
        v11 = *(_QWORD *)(a1 + 64);
        if ( v11 )
        {
          v12 = *(_QWORD *)(v11 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v11 + 880)) & *(_DWORD *)(v11 + 884));
          *(_QWORD *)(v12 + 8) = 0LL;
          *(_DWORD *)v12 = 844131445;
          *(_QWORD *)(v12 + 16) = a2;
          *(_QWORD *)(v12 + 24) = a3;
        }
      }
    }
    if ( _bittest(&UsbhLogMask, 8u) )
    {
      if ( a1 )
      {
        v13 = *(_QWORD *)(a1 + 64);
        if ( v13 )
        {
          v14 = *(_QWORD *)(v13 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v13 + 880)) & *(_DWORD *)(v13 + 884));
          *(_QWORD *)(v14 + 8) = 0LL;
          *(_DWORD *)v14 = 1348891236;
          *(_QWORD *)(v14 + 16) = a2;
          *(_QWORD *)(v14 + 24) = 1884308559LL;
        }
      }
    }
    if ( !a2 )
      UsbhTrapFatal_Dbg(0LL, 0LL);
    v15 = *(_QWORD *)(a2 + 64);
    if ( !v15 )
      UsbhTrapFatal_Dbg(a2, 0LL);
    if ( *(_DWORD *)v15 != 1329877064 )
      UsbhTrapFatal_Dbg(a2, *(_QWORD *)(a2 + 64));
    v16 = (_QWORD *)(v15 + 1272);
    v17 = *(_QWORD **)(v15 + 1272);
    if ( v17 == (_QWORD *)(v15 + 1272) )
      goto LABEL_32;
    do
    {
      v18 = v17 - 1;
      if ( _bittest(&UsbhLogMask, 8u) )
      {
        if ( a1 )
        {
          v19 = *(_QWORD *)(a1 + 64);
          if ( v19 )
          {
            v20 = *(_QWORD *)(v19 + 888)
                + 32LL
                * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v19 + 880)) & *(_DWORD *)(v19 + 884));
            *(_QWORD *)(v20 + 8) = 0LL;
            *(_DWORD *)v20 = 1064591724;
            *(_QWORD *)(v20 + 16) = v15;
            *(_QWORD *)(v20 + 24) = 1884308559LL;
          }
        }
      }
      if ( *((_DWORD *)v18 + 6) == 1884308559 && !v18[5] )
        break;
      v17 = (_QWORD *)*v17;
      v18 = 0LL;
    }
    while ( v17 != v16 );
    if ( !v18 )
    {
LABEL_32:
      v23 = *(_DWORD *)(v15 + 1288);
      if ( v23 )
        *(_DWORD *)(v15 + 1288) = v23 - 1;
    }
    else
    {
      v21 = v18[1];
      if ( *(_QWORD **)(v21 + 8) != v18 + 1 || (v22 = (_QWORD *)v18[2], (_QWORD *)*v22 != v18 + 1) )
        __fastfail(3u);
      *v22 = v21;
      *(_QWORD *)(v21 + 8) = v22;
      ExFreePoolWithTag(v18, 0);
    }
    if ( (_QWORD *)*v16 == v16 && !*(_DWORD *)(v15 + 1288) )
      KeSetEvent((PRKEVENT)(v15 + 1296), 0, 0);
    qword_14006F5E0 = 0LL;
    KeReleaseSpinLock(&HubG, v10);
  }
}
