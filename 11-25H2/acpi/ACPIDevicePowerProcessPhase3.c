/*
 * XREFs of ACPIDevicePowerProcessPhase3 @ 0x140027DFC
 * Callers:
 *     ACPIDevicePowerDpc @ 0x140026120 (ACPIDevicePowerDpc.c)
 * Callees:
 *     AMLIAsyncEvalObject @ 0x140010934 (AMLIAsyncEvalObject.c)
 *     WPP_RECORDER_SF_ @ 0x1400283FC (WPP_RECORDER_SF_.c)
 *     ACPIIsPowerNodeMissingDependencies @ 0x140028978 (ACPIIsPowerNodeMissingDependencies.c)
 *     WPP_RECORDER_SF_qsL @ 0x1400290C0 (WPP_RECORDER_SF_qsL.c)
 *     ACPIDeviceCompletePhase3Off @ 0x140029F00 (ACPIDeviceCompletePhase3Off.c)
 *     WPP_RECORDER_SF_qL @ 0x14002A120 (WPP_RECORDER_SF_qL.c)
 *     _guard_dispatch_icall @ 0x140070B90 (_guard_dispatch_icall.c)
 */

__int64 ACPIDevicePowerProcessPhase3()
{
  unsigned int v0; // edi
  char v1; // bp
  char v2; // r13
  char v3; // r12
  __int64 *v4; // rdx
  __int64 v5; // rbx
  _QWORD *v6; // r9
  __int32 v7; // ecx
  _QWORD *v8; // r8
  __int64 v9; // rdx
  int v10; // eax
  char v11; // r8
  __int64 *v12; // rsi
  __int64 v13; // rbx
  unsigned int v14; // eax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 *v18; // rsi
  const char *v19; // r15
  __int64 (__fastcall *v20)(); // r14
  int v21; // edx
  unsigned int v22; // edi
  __int64 v23; // rax
  bool v24; // zf
  int v25; // edx
  __int64 *v26; // [rsp+90h] [rbp+18h]

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      4,
      10,
      70,
      (__int64)&WPP_2c64a3eb75823feba16c7995e2df05b8_Traceguids);
  v0 = 0;
  v1 = 0;
  KeAcquireSpinLockAtDpcLevel(&AcpiPowerLock);
  while ( 2 )
  {
    if ( Phase3PendingOffWorkCount )
    {
      v2 = 1;
    }
    else
    {
      Phase3CurrentOffResourceOrder = -1;
      v2 = 0;
    }
    if ( Phase3PendingOnWorkCount )
    {
      v3 = 1;
    }
    else
    {
      v3 = 0;
      Phase3CurrentOnResourceOrder = 0;
    }
    if ( !Phase3PendingOnWorkCount && !Phase3PendingOffWorkCount )
      v1 = 1;
    v4 = (__int64 *)AcpiPowerNodeList;
    ++Phase3PendingOnWorkCount;
LABEL_10:
    while ( 2 )
    {
      if ( v4 == &AcpiPowerNodeList
        || (v5 = (__int64)v4, v4 = (__int64 *)*v4, v26 = v4, v3)
        && *(unsigned __int8 *)(v5 + 40) > (unsigned int)Phase3CurrentOnResourceOrder )
      {
        v11 = 0;
        goto LABEL_21;
      }
      if ( !v2
        || *(unsigned __int8 *)(v5 + 40) <= (unsigned int)Phase3CurrentOffResourceOrder
        || _InterlockedCompareExchange((volatile signed __int32 *)(v5 + 64), 1, 1) != 3 )
      {
        if ( _InterlockedCompareExchange((volatile signed __int32 *)(v5 + 64), 4, 3) != 3 )
          continue;
        v1 = 0;
        v6 = *(_QWORD **)(v5 + 48);
        v7 = 0;
        if ( v6 == (_QWORD *)(v5 + 48) )
          goto LABEL_47;
        while ( 1 )
        {
          v8 = v6;
          v9 = *(v6 - 1);
          v6 = (_QWORD *)*v6;
          if ( _InterlockedCompareExchange((volatile signed __int32 *)(v9 + 552), 0, 0) && *((_BYTE *)v8 - 16) )
            goto LABEL_44;
          v10 = *(_DWORD *)(v9 + 544);
          if ( v10 == *((_DWORD *)v8 - 5) )
            break;
LABEL_45:
          if ( v6 == (_QWORD *)(v5 + 48) )
          {
            v4 = v26;
LABEL_47:
            _InterlockedExchange((volatile __int32 *)(v5 + 24), v7);
            v16 = *(_QWORD *)(v5 + 16);
            if ( (v16 & 0x440) == 0 && ((v16 & 0x2220) != 0 || v7) )
            {
              _InterlockedCompareExchange((volatile signed __int32 *)(v5 + 64), 1, 4);
              ++Phase3PendingOnWorkCount;
              *(_DWORD *)(v5 + 68) = 0;
              KeReleaseSpinLockFromDpcLevel(&AcpiPowerLock);
              v17 = *(_QWORD *)(v5 + 16) & 0x2000LL;
              if ( (*(_QWORD *)(v5 + 16) & 0x2000) != 0 )
                v18 = *(__int64 **)(v5 + 88);
              else
                v18 = *(__int64 **)(v5 + 72);
              v19 = "_RST";
              if ( !v17 )
                v19 = "_ON";
              v20 = ACPIDeviceCompletePhase3Reset;
              if ( !v17 )
                v20 = ACPIDeviceCompletePhase3On;
              if ( (unsigned __int8)ACPIIsPowerNodeMissingDependencies(v5) )
              {
                v22 = -1073741661;
              }
              else
              {
                v22 = AMLIAsyncEvalObject(v18, 0LL, 0, 0LL, v20, v5);
                v23 = *(_QWORD *)(v5 + 16);
                if ( (v23 & 0x2000) != 0 )
                  *(_QWORD *)(v5 + 16) = v23 & 0xFFFFFFFFFFFFDFFFuLL;
              }
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                WPP_RECORDER_SF_qsL(
                  WPP_GLOBAL_Control->DeviceExtension,
                  v21,
                  10,
                  71,
                  (__int64)&WPP_2c64a3eb75823feba16c7995e2df05b8_Traceguids,
                  v5,
                  (__int64)v19,
                  v22);
              if ( v22 != 259 )
                ((void (__fastcall *)(__int64 *, _QWORD, _QWORD, __int64))v20)(v18, v22, 0LL, v5);
              KeAcquireSpinLockAtDpcLevel(&AcpiPowerLock);
              v4 = v26;
              v24 = v22 == 259;
              v0 = 0;
              if ( v24 && !v3 )
              {
                v3 = 1;
                Phase3CurrentOnResourceOrder = *(unsigned __int8 *)(v5 + 40);
              }
            }
            goto LABEL_10;
          }
        }
        if ( v10 == 4 )
        {
          if ( ((*(_DWORD *)(v9 + 8) & 0x800LL) == 0 || (*(_DWORD *)(v9 + 1120) & 0x10000000) != 0)
            && !*(_BYTE *)(v9 + 665) )
          {
            goto LABEL_45;
          }
        }
        else if ( v10 == 1 )
        {
          *(_BYTE *)(v9 + 665) = 0;
        }
LABEL_44:
        ++v7;
        goto LABEL_45;
      }
      break;
    }
    v11 = 1;
LABEL_21:
    if ( !--Phase3PendingOnWorkCount )
    {
      Phase3CurrentOnResourceOrder = 0;
      goto LABEL_23;
    }
    if ( !v3 )
    {
LABEL_23:
      if ( v4 == &AcpiPowerNodeList || v11 )
      {
        do
        {
          ++Phase3PendingOffWorkCount;
          v12 = (__int64 *)qword_14008B138;
          while ( v12 != &AcpiPowerNodeList )
          {
            v13 = (__int64)v12;
            v12 = (__int64 *)v12[1];
            v14 = *(unsigned __int8 *)(v13 + 40);
            if ( v14 <= Phase3CurrentOffResourceOrder )
            {
              if ( v2 && v14 < Phase3CurrentOffResourceOrder )
                break;
              if ( _InterlockedCompareExchange((volatile signed __int32 *)(v13 + 64), 1, 4) == 4 )
              {
                ++Phase3PendingOffWorkCount;
                v1 = 0;
                *(_DWORD *)(v13 + 68) = 0;
                KeReleaseSpinLockFromDpcLevel(&AcpiPowerLock);
                if ( (unsigned __int8)ACPIIsPowerNodeMissingDependencies(v13) )
                {
                  v0 = -1073741661;
                }
                else if ( (AcpiOverrideAttributes & 0x4000000) == 0 || !AcpiKsrInProgress )
                {
                  v0 = AMLIAsyncEvalObject(*(__int64 **)(v13 + 80), 0LL, 0, 0LL, ACPIDeviceCompletePhase3Off, v13);
                }
                if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                {
                  LOBYTE(v25) = 4;
                  WPP_RECORDER_SF_qL(
                    WPP_GLOBAL_Control->DeviceExtension,
                    v25,
                    10,
                    72,
                    (__int64)&WPP_2c64a3eb75823feba16c7995e2df05b8_Traceguids,
                    v13,
                    v0);
                }
                if ( v0 != 259 )
                  ACPIDeviceCompletePhase3Off(*(_QWORD *)(v13 + 80), v0, 0LL, v13);
                KeAcquireSpinLockAtDpcLevel(&AcpiPowerLock);
                if ( v0 == 259 )
                {
                  v2 = 1;
                  Phase3CurrentOffResourceOrder = *(unsigned __int8 *)(v13 + 40);
                }
                v0 = 0;
              }
            }
          }
          if ( --Phase3PendingOffWorkCount )
          {
            if ( v2 )
              goto LABEL_36;
          }
          else
          {
            Phase3CurrentOffResourceOrder = -1;
            v2 = 0;
          }
        }
        while ( v12 != &AcpiPowerNodeList );
        if ( v1 )
          break;
      }
      continue;
    }
    break;
  }
LABEL_36:
  if ( Phase3PendingOnWorkCount > 0 || Phase3PendingOffWorkCount > 0 )
    v1 = 0;
  KeReleaseSpinLockFromDpcLevel(&AcpiPowerLock);
  return v1 == 0 ? 0x103 : 0;
}
