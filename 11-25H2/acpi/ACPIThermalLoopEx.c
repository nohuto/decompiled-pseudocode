/*
 * XREFs of ACPIThermalLoopEx @ 0x140037A14
 * Callers:
 *     ACPIThermalLoop @ 0x1400379FC (ACPIThermalLoop.c)
 *     ACPIThermalStartDevice @ 0x1400A78E0 (ACPIThermalStartDevice.c)
 * Callees:
 *     AMLIAsyncEvalObject @ 0x140010934 (AMLIAsyncEvalObject.c)
 *     ACPIGet @ 0x1400157F0 (ACPIGet.c)
 *     ACPIThermalTMPCallback @ 0x1400379A0 (ACPIThermalTMPCallback.c)
 *     ACPIThermalLoop @ 0x1400379FC (ACPIThermalLoop.c)
 *     ACPIThermalCompletePendingIrps @ 0x1400381F0 (ACPIThermalCompletePendingIrps.c)
 *     AcpiDiagTraceTemperatureChange @ 0x140038544 (AcpiDiagTraceTemperatureChange.c)
 *     ACPIDeviceHasFirmwareDependencies @ 0x140038694 (ACPIDeviceHasFirmwareDependencies.c)
 *     AcpiDiagTraceThermalNotification @ 0x1400386B4 (AcpiDiagTraceThermalNotification.c)
 *     ACPISetDeviceWorker @ 0x140038938 (ACPISetDeviceWorker.c)
 *     AcpiDiagTraceTemperatureTelemetry @ 0x140057534 (AcpiDiagTraceTemperatureTelemetry.c)
 */

void __fastcall ACPIThermalLoopEx(__int64 a1, int a2, int a3)
{
  __int64 v3; // rsi
  KSPIN_LOCK *v4; // r14
  KIRQL v8; // al
  int v9; // ebp
  KIRQL v10; // r15
  char v11; // r12
  int v12; // ecx
  __int64 i; // rdx
  int v14; // ecx
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // r8
  int v18; // eax
  int v19; // eax
  int v20; // eax
  int v21; // eax
  int v22; // eax
  unsigned int v23; // r8d
  unsigned int v24; // eax
  unsigned int v25; // r9d
  unsigned int v26; // ecx
  unsigned int v27; // eax
  __int64 v28; // rdx
  KIRQL v29; // al
  _QWORD *v30; // rdx
  _QWORD *v31; // rcx
  __int64 v32; // r9
  int v33; // edx
  unsigned int v34; // edx
  unsigned int v35; // ecx
  unsigned int v36; // edx
  unsigned int v37; // eax
  unsigned int v38; // ecx
  unsigned int v39; // ecx

  v3 = *(_QWORD *)(a1 + 200);
  v4 = (KSPIN_LOCK *)(a1 + 184);
  v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 184));
  v9 = ~a2 & (*(_DWORD *)(a1 + 192) | a3);
  v10 = v8;
  *(_DWORD *)(a1 + 192) = v9;
  v11 = 1;
  if ( v9 >= 0 )
  {
    *(_DWORD *)(a1 + 192) = v9 | 0x80000000;
    while ( 1 )
    {
      while ( 1 )
      {
        if ( !v11 )
          goto LABEL_4;
LABEL_5:
        v12 = *(_DWORD *)(a1 + 192);
        if ( (v12 & 0x40000000) != 0 )
          goto LABEL_34;
        if ( (v12 & 0x10000000) == 0 )
        {
          *(_DWORD *)(a1 + 192) = v12 | 0x8000000;
          if ( (v12 & 0x8000000) == 0 )
            ACPISetDeviceWorker(a1, 0x2000LL);
        }
        i = *(unsigned int *)(a1 + 192);
        if ( (i & 0x8000000) != 0 )
        {
LABEL_34:
          *(_DWORD *)(a1 + 192) &= ~0x80000000;
          v4 = (KSPIN_LOCK *)(a1 + 184);
          goto LABEL_35;
        }
        if ( (i & 0x10) != 0 )
          break;
        *(_DWORD *)(a1 + 192) = i | 0x40000010;
        v28 = 17LL;
LABEL_49:
        ACPISetDeviceWorker(a1, v28);
      }
      if ( (i & 8) == 0 )
        break;
      v14 = *(_DWORD *)(a1 + 192);
      if ( (i & 2) == 0 || !*(_QWORD *)(v3 + 120) )
        goto LABEL_11;
      v23 = *(_DWORD *)(v3 + 104);
      if ( v23 )
      {
        v24 = *(_DWORD *)(v3 + 108);
        if ( v24 > v23 && *(_DWORD *)(v3 + 16) <= v24 - v23 )
        {
          v14 = i & 0xFFFFFBFF;
          *(_DWORD *)(a1 + 192) = i & 0xFFFFFBFF;
        }
        LODWORD(i) = v14;
        v25 = *(_DWORD *)(v3 + 104);
        if ( ~*(_DWORD *)(v3 + 108) > v25 && *(_DWORD *)(v3 + 16) >= *(_DWORD *)(v3 + 108) + v25 )
        {
          LODWORD(i) = v14 & 0xFFFFFBFF;
          *(_DWORD *)(a1 + 192) = v14 & 0xFFFFFBFF;
        }
      }
      v26 = *(_DWORD *)(v3 + 20);
      v27 = i;
      if ( v26 )
      {
        if ( *(_DWORD *)(v3 + 108) < v26 )
        {
          if ( *(_DWORD *)(v3 + 16) < v26 )
            goto LABEL_64;
LABEL_63:
          v27 = i & 0xFFFFFBFF;
          *(_DWORD *)(a1 + 192) = i & 0xFFFFFBFF;
          goto LABEL_64;
        }
        if ( *(_DWORD *)(v3 + 108) > v26 && *(_DWORD *)(v3 + 16) <= v26 )
          goto LABEL_63;
      }
LABEL_64:
      v34 = *(_DWORD *)(v3 + 28);
      v35 = v27;
      if ( !v34 )
        goto LABEL_71;
      if ( *(_DWORD *)(v3 + 108) < v34 )
      {
        if ( *(_DWORD *)(v3 + 16) < v34 )
          goto LABEL_71;
LABEL_70:
        v35 = v27 & 0xFFFFFBFF;
        *(_DWORD *)(a1 + 192) = v27 & 0xFFFFFBFF;
        goto LABEL_71;
      }
      if ( *(_DWORD *)(v3 + 108) > v34 && *(_DWORD *)(v3 + 16) <= v34 )
        goto LABEL_70;
LABEL_71:
      v36 = *(_DWORD *)(v3 + 76);
      v37 = v35;
      if ( !v36 )
        goto LABEL_78;
      if ( *(_DWORD *)(v3 + 108) < v36 )
      {
        if ( *(_DWORD *)(v3 + 16) < v36 )
          goto LABEL_78;
LABEL_77:
        v37 = v35 & 0xFFFFFBFF;
        *(_DWORD *)(a1 + 192) = v35 & 0xFFFFFBFF;
        goto LABEL_78;
      }
      if ( *(_DWORD *)(v3 + 108) > v36 && *(_DWORD *)(v3 + 16) <= v36 )
        goto LABEL_77;
LABEL_78:
      v38 = *(_DWORD *)(v3 + 24);
      if ( !v38 )
        goto LABEL_85;
      if ( *(_DWORD *)(v3 + 108) < v38 )
      {
        if ( *(_DWORD *)(v3 + 16) < v38 )
          goto LABEL_85;
LABEL_84:
        *(_DWORD *)(a1 + 192) = v37 & 0xFFFFFBFF;
        goto LABEL_85;
      }
      if ( *(_DWORD *)(v3 + 108) > v38 && *(_DWORD *)(v3 + 16) <= v38 )
        goto LABEL_84;
LABEL_85:
      for ( i = 0LL; (unsigned int)i < *(unsigned __int8 *)(v3 + 32); i = (unsigned int)(i + 1) )
      {
        v39 = *(_DWORD *)(v3 + 4LL * (unsigned int)i + 36);
        if ( v39 )
        {
          if ( *(_DWORD *)(v3 + 108) >= v39 )
          {
            if ( *(_DWORD *)(v3 + 108) <= v39 || *(_DWORD *)(v3 + 16) > v39 )
              continue;
LABEL_92:
            *(_DWORD *)(a1 + 192) &= ~0x400u;
            continue;
          }
          if ( *(_DWORD *)(v3 + 16) >= v39 )
            goto LABEL_92;
        }
      }
      v14 = *(_DWORD *)(a1 + 192);
      if ( (v14 & 0x400) == 0 )
      {
        *(_DWORD *)(a1 + 192) = v14 & 0xBFFFF9FF | 0x40000400;
        *(_DWORD *)(v3 + 108) = *(_DWORD *)(v3 + 16);
        KeReleaseSpinLock(v4, v10);
        v32 = *(unsigned int *)(v3 + 108);
        v33 = 1230259295;
        goto LABEL_56;
      }
LABEL_11:
      if ( (v14 & 4) == 0 )
      {
        v28 = 4LL;
        *(_DWORD *)(a1 + 192) = v14 | 0x40000004;
        goto LABEL_49;
      }
      if ( (v14 & 1) == 0 )
      {
        v28 = 1LL;
        *(_DWORD *)(a1 + 192) = v14 | 0x40000001;
        goto LABEL_49;
      }
      if ( (v14 & 0x100) == 0 )
      {
        v28 = 256LL;
        *(_DWORD *)(a1 + 192) = v14 | 0x40000100;
        goto LABEL_49;
      }
      LOBYTE(i) = *(_BYTE *)(*(_QWORD *)(a1 + 200) + 274LL);
      if ( (v14 & 0x202) == 2 && (_BYTE)i )
      {
        v28 = 512LL;
        *(_DWORD *)(a1 + 192) = v14 | 0x44000200;
        goto LABEL_49;
      }
      if ( (v14 & 0x20000002) == 0x20000002 )
        goto LABEL_34;
      if ( *(_BYTE *)(v3 + 273) || (v14 & 2) != 0 )
      {
        if ( (v14 & 0x40) == 0 )
        {
          *(_DWORD *)(a1 + 192) = v14 | 0x40;
          AcpiDiagTraceThermalNotification(v3, a1, 128LL);
        }
        v19 = *(_DWORD *)(a1 + 192);
        if ( (v19 & 0x80u) == 0 )
        {
          *(_DWORD *)(a1 + 192) = v19 | 0x80;
          AcpiDiagTraceThermalNotification(v3, a1, 129LL);
        }
        v20 = *(_DWORD *)(a1 + 192);
        if ( (v20 & 0x800) == 0 )
        {
          *(_DWORD *)(a1 + 192) = v20 | 0x800;
          AcpiDiagTraceTemperatureChange(v3, a1);
        }
        v21 = *(_DWORD *)(a1 + 192);
        if ( (v21 & 0x4000) == 0 )
        {
          *(_DWORD *)(a1 + 192) = v21 | 0x4000;
          AcpiDiagTraceTemperatureTelemetry(a1, i);
        }
        v22 = *(_DWORD *)(a1 + 192);
        if ( (v22 & 0x1000) == 0 )
        {
          *(_DWORD *)(a1 + 192) = v22 | 0x1000;
          KeReleaseSpinLock(v4, v10);
          v29 = KeAcquireSpinLockRaiseToDpc(&AcpiThermalConstraintLock);
          v30 = (_QWORD *)qword_140089CA8;
          v31 = (_QWORD *)(a1 + 208);
          if ( *(__int64 **)qword_140089CA8 != &AcpiThermalZoneList )
            __fastfail(3u);
          *(_QWORD *)(a1 + 216) = qword_140089CA8;
          *v31 = &AcpiThermalZoneList;
          *v30 = v31;
          qword_140089CA8 = a1 + 208;
          KeReleaseSpinLock(&AcpiThermalConstraintLock, v29);
LABEL_4:
          v10 = KeAcquireSpinLockRaiseToDpc(v4);
          v11 = 1;
          goto LABEL_5;
        }
        if ( !(unsigned __int8)ACPIThermalCompletePendingIrps(a1, i) )
          goto LABEL_34;
      }
      else
      {
        ++*(_DWORD *)v3;
        v15 = *(_DWORD *)(a1 + 192) | 2;
        *(_DWORD *)(a1 + 192) = v15;
        if ( (_BYTE)i )
        {
          v28 = 514LL;
          *(_DWORD *)(a1 + 192) = v15 | 0x44000200;
          goto LABEL_49;
        }
        if ( *(_QWORD *)(v3 + 112) )
        {
          *(_DWORD *)(a1 + 192) = v15 | 0x40000000;
          KeReleaseSpinLock(v4, v10);
          *(_OWORD *)(v3 + 136) = 0LL;
          *(_OWORD *)(v3 + 152) = 0LL;
          *(_QWORD *)(v3 + 168) = 0LL;
          v11 = 0;
          if ( !(unsigned __int8)ACPIDeviceHasFirmwareDependencies(a1, v16, v17) || *(_DWORD *)(a1 + 548) == 1 )
          {
            v18 = AMLIAsyncEvalObject(*(__int64 **)(v3 + 112), v3 + 136, 0, 0LL, ACPIThermalTMPCallback, a1);
            if ( v18 != 259 )
              goto LABEL_23;
            goto LABEL_4;
          }
          v18 = -1073741661;
LABEL_23:
          ACPIThermalTMPCallback(*(_QWORD *)(v3 + 112), v18, v3 + 136, a1);
        }
        else
        {
          *(_DWORD *)(a1 + 192) = v15 & 0xEFFFFFFF;
        }
      }
    }
    *(_DWORD *)(a1 + 192) = i | 0x40000008;
    KeReleaseSpinLock(v4, v10);
    v32 = *(unsigned int *)(v3 + 100);
    v33 = 1346589535;
LABEL_56:
    if ( (unsigned int)ACPIGet(a1, v33, 546308096, v32, 4, (__int64)ACPIThermalComplete, a1, 0LL, 0LL) != 259 )
      ACPIThermalLoop(a1, 0x40000000LL);
    goto LABEL_4;
  }
LABEL_35:
  KeReleaseSpinLock(v4, v10);
}
