/*
 * XREFs of PopThermalWorker @ 0x140A3C300
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x140204578 (PopReleaseRwLock.c)
 *     KeSetEvent @ 0x140250100 (KeSetEvent.c)
 *     IoReuseIrp @ 0x140359950 (IoReuseIrp.c)
 *     IofCallDriver @ 0x14035D320 (IofCallDriver.c)
 *     KeSetTimer2 @ 0x140370EF0 (KeSetTimer2.c)
 *     PopAcquireRwLockExclusive @ 0x140431E64 (PopAcquireRwLockExclusive.c)
 *     PopCheckAndHandleThermalConditions @ 0x14049FAD0 (PopCheckAndHandleThermalConditions.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     PopInternalAddToDumpFile @ 0x1405C8990 (PopInternalAddToDumpFile.c)
 *     PopFireThermalWmiEvent @ 0x1405CF1D4 (PopFireThermalWmiEvent.c)
 *     PopDiagTraceThermalZoneEnumeration @ 0x1405D0EF0 (PopDiagTraceThermalZoneEnumeration.c)
 *     PopDiagTraceThermalZoneThrottleDurationPerfTrack @ 0x1405D1290 (PopDiagTraceThermalZoneThrottleDurationPerfTrack.c)
 *     PopDiagTraceThermalZoneThrottlePerfTrack @ 0x1405D13C4 (PopDiagTraceThermalZoneThrottlePerfTrack.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     PopDiagTracePassiveCooling @ 0x14074A928 (PopDiagTracePassiveCooling.c)
 *     PopCheckThermalPolicy @ 0x140A3C7C8 (PopCheckThermalPolicy.c)
 *     PopDiagTraceThermalCoolingMode @ 0x140A3CA6C (PopDiagTraceThermalCoolingMode.c)
 *     PopPrepareIoctl @ 0x140A5AE80 (PopPrepareIoctl.c)
 *     PopThermalUpdatePassiveTimeTracking @ 0x140A8AAD8 (PopThermalUpdatePassiveTimeTracking.c)
 *     PopThermalUpdateActiveTimeTracking @ 0x140A9CEA4 (PopThermalUpdateActiveTimeTracking.c)
 *     PopDiagTraceActiveCooling @ 0x140AB9958 (PopDiagTraceActiveCooling.c)
 */

__int64 __fastcall PopThermalWorker(__int64 a1)
{
  signed __int64 *v1; // r15
  __int64 v3; // r14
  IRP *v4; // rbp
  struct _DEVICE_OBJECT *BugCheckParameter4; // r13
  int v6; // r8d
  int Status; // eax
  char v8; // al
  char v9; // dl
  char v10; // cl
  char v11; // al
  __int64 v12; // rcx
  __int64 v13; // rax
  __int128 *v14; // r9
  IRP *v15; // rbx
  struct _IO_STACK_LOCATION *v16; // rax
  struct _IO_STACK_LOCATION *v17; // rax
  char v19; // al
  char v20; // r15
  int v21; // r12d
  __int64 v22; // rdx
  unsigned int v23; // edi
  unsigned int v24; // ebp
  char v25; // cl
  char v26; // al
  __int64 v27; // rax
  IRP *v28; // rbx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  char v30; // cl
  int v31; // eax
  int v32; // ecx
  char v33; // al
  int v34; // r9d
  int v35; // eax
  int v36; // edx
  __int64 v37; // rdx
  __int64 v38; // rdx
  unsigned int v39; // ecx
  char v40; // al
  __int64 v41; // r8
  char v42; // al
  __int64 v43; // r8
  char v44; // cl
  char v45; // al
  char v46; // al
  char v47; // [rsp+30h] [rbp-58h]
  char v48; // [rsp+31h] [rbp-57h] BYREF
  char v49; // [rsp+32h] [rbp-56h]
  int v50; // [rsp+34h] [rbp-54h] BYREF
  IRP *v51; // [rsp+38h] [rbp-50h]
  __int128 v52; // [rsp+40h] [rbp-48h] BYREF

  v1 = (signed __int64 *)(a1 + 432);
  v47 = 0;
  v49 = 0;
  v52 = 0LL;
  v3 = MEMORY[0xFFFFF78000000008];
  v4 = *(IRP **)(a1 + 56);
  BugCheckParameter4 = *(struct _DEVICE_OBJECT **)(a1 + 48);
  v51 = v4;
  v48 = 0;
  v50 = 0;
  PopAcquireRwLockExclusive((unsigned __int64 *)(a1 + 432));
  if ( *(_BYTE *)(a1 + 66) )
  {
    *(_BYTE *)(a1 + 64) = 0;
LABEL_36:
    KeSetEvent((PRKEVENT)(a1 + 448), 0, 0);
    return PopReleaseRwLock(v1);
  }
  Status = v4->IoStatus.Status;
  if ( Status < 0 )
  {
    if ( Status != -1073741667 && Status != -1073741536 )
    {
      if ( *(_BYTE *)(a1 + 64) != 7 )
      {
        *(_BYTE *)(a1 + 64) = 5;
        goto LABEL_36;
      }
      *(_BYTE *)(a1 + 64) = 1;
    }
    goto LABEL_4;
  }
  if ( *(_BYTE *)(a1 + 64) == 1 )
  {
    v19 = *(_BYTE *)(a1 + 65);
    *(_QWORD *)(a1 + 240) = v3;
    if ( (v19 & 2) == 0 )
    {
      *(_BYTE *)(a1 + 65) = v19 | 2;
      PopDiagTraceThermalZoneEnumeration(a1);
    }
    PopCheckThermalPolicy(a1, v3, &v48, &v50);
    KeSetEvent((PRKEVENT)(a1 + 472), 0, 0);
    v20 = v48;
    v21 = v50;
    goto LABEL_28;
  }
  if ( *(_BYTE *)(a1 + 64) != 2 )
  {
    switch ( *(_BYTE *)(a1 + 64) )
    {
      case 3:
        *(_BYTE *)(a1 + 69) = *(_BYTE *)(a1 + 70);
        break;
      case 4:
        *(_DWORD *)(a1 + 80) = *(_DWORD *)(a1 + 84);
        break;
      case 6:
        *(_BYTE *)(a1 + 505) = *(_BYTE *)(a1 + 144);
        *(_BYTE *)(a1 + 64) = 10;
        break;
      default:
        switch ( *(_BYTE *)(a1 + 64) )
        {
          case 7:
            *(_BYTE *)(a1 + 228) = 1;
            *(_BYTE *)(a1 + 64) = 8;
            break;
          case 8:
            break;
          case 0xA:
            *(_BYTE *)(a1 + 64) = 7;
            goto LABEL_4;
          default:
            PopInternalAddToDumpFile((__int64)v4, 0xD0u, (__int64)BugCheckParameter4);
            KeBugCheckEx(0xA0u, 0x500uLL, 5uLL, (ULONG_PTR)v4, (ULONG_PTR)BugCheckParameter4);
        }
        v39 = *(_DWORD *)(a1 + 216);
        v20 = v39 < 0x64;
        v40 = *(_BYTE *)(a1 + 65);
        v21 = 10 * (*(_DWORD *)(a1 + 80) - v39);
        if ( (v40 & 2) == 0 )
        {
          *(_BYTE *)(a1 + 65) = v40 | 2;
          PopDiagTraceThermalZoneEnumeration(a1);
        }
LABEL_28:
        v22 = *(unsigned __int8 *)(a1 + 69);
        v23 = *(_DWORD *)(a1 + 220);
        v24 = *(unsigned __int8 *)(a1 + 144);
        if ( v23 == (_DWORD)v22 )
        {
          v25 = *(_BYTE *)(a1 + 65);
          v26 = v25 & 4;
          if ( v23 >= v24 )
          {
            if ( !v26 )
              goto LABEL_43;
          }
          else if ( v26 )
          {
            goto LABEL_43;
          }
        }
        *(_BYTE *)(a1 + 70) = *(_BYTE *)(a1 + 220);
        PopThermalUpdateActiveTimeTracking(a1 + 504, v22);
        v42 = *(_BYTE *)(a1 + 65);
        v47 = 1;
        if ( v23 >= v24 )
        {
          if ( (v42 & 4) != 0 )
          {
            PopDiagTraceActiveCooling(a1 + 112, BugCheckParameter4, 0LL, 0LL);
            PopDiagTraceActiveCooling(a1 + 112, BugCheckParameter4, 0LL, 1LL);
          }
        }
        else if ( (v42 & 4) == 0 )
        {
          LOBYTE(v41) = 1;
          PopDiagTraceActiveCooling(a1 + 112, BugCheckParameter4, v41, 0LL);
          LOBYTE(v43) = 1;
          PopDiagTraceActiveCooling(a1 + 112, BugCheckParameter4, v43, 1LL);
          *(_QWORD *)(a1 + 248) = v3;
        }
        v44 = *(_BYTE *)(a1 + 65);
        if ( v23 < v24 )
          v25 = v44 | 4;
        else
          v25 = v44 & 0xFB;
        *(_BYTE *)(a1 + 65) = v25;
LABEL_43:
        if ( *(_DWORD *)(a1 + 216) == *(_DWORD *)(a1 + 80) )
        {
          v30 = v25 & 1;
          if ( v20 )
          {
            if ( v30 )
            {
LABEL_46:
              PopCheckAndHandleThermalConditions(a1);
              v8 = v47;
              v1 = (signed __int64 *)(a1 + 432);
              v4 = v51;
              goto LABEL_5;
            }
          }
          else if ( !v30 )
          {
            goto LABEL_46;
          }
        }
        else
        {
          LOBYTE(v22) = *(_BYTE *)(a1 + 80);
          PopThermalUpdatePassiveTimeTracking(a1 + 504, v22);
          v31 = *(_DWORD *)(a1 + 216);
          v32 = *(_DWORD *)(a1 + 128);
          v49 = 1;
          *(_DWORD *)(a1 + 84) = v31;
          PopDiagTraceThermalZoneThrottlePerfTrack(v32, 100 - v31, (__int64)BugCheckParameter4);
        }
        PopDiagTracePassiveCooling(a1 + 112, (__int64)BugCheckParameter4, v20, v21, 0);
        v33 = *(_BYTE *)(a1 + 65);
        if ( v20 )
        {
          if ( (v33 & 1) == 0 )
          {
            PopDiagTracePassiveCooling(a1 + 112, (__int64)BugCheckParameter4, 1, v21, 1u);
            *(_QWORD *)(a1 + 256) = v3;
          }
        }
        else if ( (v33 & 1) != 0 )
        {
          PopDiagTracePassiveCooling(a1 + 112, (__int64)BugCheckParameter4, 0, v21, 1u);
          PopDiagTraceThermalZoneThrottleDurationPerfTrack(
            (v3 - *(_QWORD *)(a1 + 256)) / 0x2710uLL,
            (__int64)BugCheckParameter4);
        }
        v45 = *(_BYTE *)(a1 + 65);
        if ( v20 )
          v46 = v45 | 1;
        else
          v46 = v45 & 0xFE;
        *(_BYTE *)(a1 + 65) = v46;
        goto LABEL_46;
    }
LABEL_4:
    v8 = 0;
    goto LABEL_5;
  }
  *(_BYTE *)(a1 + 67) = *(_BYTE *)(a1 + 68);
  PopDiagTraceThermalCoolingMode(BugCheckParameter4);
  if ( WmiThermalPolicyEventEnabled )
    PopFireThermalWmiEvent(*(_BYTE *)(a1 + 67));
  v8 = 1;
LABEL_5:
  v9 = v49;
  v10 = v8;
  if ( *(_BYTE *)(a1 + 69) != *(_BYTE *)(a1 + 70) )
    v10 = 1;
  v11 = *(_BYTE *)(a1 + 64);
  if ( *(_DWORD *)(a1 + 80) != *(_DWORD *)(a1 + 84) )
    v9 = 1;
  switch ( v11 )
  {
    case 6:
      goto LABEL_21;
    case 10:
      v34 = a1 + 1040;
      v35 = 16;
      v36 = 2703512;
LABEL_96:
      PopPrepareIoctl(*(_QWORD *)(a1 + 56), v36, 0, v34, v35, v35);
      goto LABEL_22;
    case 7:
LABEL_61:
      v34 = a1 + 204;
      v35 = 24;
      *(_DWORD *)(a1 + 204) = 1;
      v36 = 2703508;
      goto LABEL_96;
  }
  if ( v10 )
  {
    LOBYTE(v6) = 1;
    *(_BYTE *)(a1 + 64) = 3;
    PopPrepareIoctl(*(_QWORD *)(a1 + 56), 2719880, v6, a1 + 70, 4, 0);
    goto LABEL_22;
  }
  if ( v9 )
  {
    LOBYTE(v6) = 1;
    *(_BYTE *)(a1 + 64) = 4;
    PopPrepareIoctl(*(_QWORD *)(a1 + 56), 2719884, v6, a1 + 84, 4, 0);
    goto LABEL_22;
  }
  if ( *(unsigned __int8 *)(a1 + 67) != PopCoolingMode )
  {
    v28 = *(IRP **)(a1 + 56);
    *(_BYTE *)(a1 + 68) = PopCoolingMode;
    *(_BYTE *)(a1 + 64) = 2;
    IoReuseIrp(v28, -1073741637);
    CurrentStackLocation = v28->Tail.Overlay.CurrentStackLocation;
    CurrentStackLocation[-1].MajorFunction = 15;
    CurrentStackLocation[-1].Parameters.Read.Length = 0;
    CurrentStackLocation[-1].Parameters.Read.ByteOffset.LowPart = 2719876;
    CurrentStackLocation[-1].Parameters.Create.Options = 1;
    v28->AssociatedIrp.MasterIrp = (struct _IRP *)(a1 + 68);
    goto LABEL_22;
  }
  if ( *(_BYTE *)(a1 + 228) )
  {
    *(_BYTE *)(a1 + 64) = 8;
    *(_BYTE *)(a1 + 208) = 1;
    goto LABEL_61;
  }
  v12 = 0LL;
  *(_BYTE *)(a1 + 64) = 1;
  if ( (*(_BYTE *)(a1 + 65) & 1) != 0 )
  {
    v13 = *(unsigned int *)(a1 + 104);
    if ( (_DWORD)v13 )
    {
      v27 = *(_QWORD *)(a1 + 96) + v13;
      if ( v27 > v3 )
        v12 = v27;
      else
        *(_DWORD *)(a1 + 112) = 0;
    }
  }
  v14 = 0LL;
  if ( PopThermalPollingMode )
  {
    v37 = *(_QWORD *)(a1 + 232);
    if ( v37 )
    {
      v38 = *(_QWORD *)(a1 + 240) + v37;
      if ( v38 <= v3 )
      {
        *(_DWORD *)(a1 + 112) = 0;
        v12 = 0LL;
      }
      else if ( !v12 || v12 >= v38 )
      {
        v12 = v38;
      }
    }
    if ( !PopThermalPollingWakesAllowed )
    {
      *((_QWORD *)&v52 + 1) = -1LL;
      v14 = &v52;
    }
  }
  if ( v12 )
    KeSetTimer2(a1 + 296, (LARGE_INTEGER)(v3 - v12), 0LL, (__int64)v14);
LABEL_21:
  v15 = *(IRP **)(a1 + 56);
  IoReuseIrp(v15, -1073741637);
  v16 = v15->Tail.Overlay.CurrentStackLocation;
  v16[-1].MajorFunction = 15;
  v16[-1].Parameters.Read.ByteOffset.LowPart = 2703488;
  v16[-1].Parameters.Create.Options = 92;
  v16[-1].Parameters.Read.Length = 92;
  v15->AssociatedIrp.MasterIrp = (struct _IRP *)(a1 + 112);
LABEL_22:
  v17 = v4->Tail.Overlay.CurrentStackLocation;
  v17[-1].CompletionRoutine = (PIO_COMPLETION_ROUTINE)PopThermalIrpComplete;
  v17[-1].Context = (PVOID)a1;
  v17[-1].Control = -32;
  IofCallDriver(BugCheckParameter4, v4);
  return PopReleaseRwLock(v1);
}
