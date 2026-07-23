/*
 * XREFs of PpmHeteroUpdateHgsConfiguration @ 0x1404E2E24
 * Callers:
 *     PopInitializeHeteroProcessors @ 0x140AC57E0 (PopInitializeHeteroProcessors.c)
 * Callees:
 *     KeAddProcessorAffinityEx @ 0x140287740 (KeAddProcessorAffinityEx.c)
 *     ?KiOrAffinityEx@@YAKPEAU_KAFFINITY_EX@@00G@Z @ 0x1402AA18C (-KiOrAffinityEx@@YAKPEAU_KAFFINITY_EX@@00G@Z.c)
 *     KeGetPrcb @ 0x1402B0A10 (KeGetPrcb.c)
 *     KeIsForceParkingEnabled @ 0x14032B830 (KeIsForceParkingEnabled.c)
 *     KeAndAffinityEx2 @ 0x14032C8C0 (KeAndAffinityEx2.c)
 *     KeIsEmptyAffinityEx @ 0x140371960 (KeIsEmptyAffinityEx.c)
 *     ?KiCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z @ 0x14039FF30 (-KiCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z.c)
 *     KeCheckProcessorAffinityEx @ 0x1403A4AD0 (KeCheckProcessorAffinityEx.c)
 *     KeEnumerateNextProcessor @ 0x140405740 (KeEnumerateNextProcessor.c)
 *     PpmHeteroHgsCheckContainmentDecision @ 0x14044C408 (PpmHeteroHgsCheckContainmentDecision.c)
 *     PPmHeteroHgsUpdateOrderValue @ 0x14047BAB4 (PPmHeteroHgsUpdateOrderValue.c)
 *     PpmEventHgsHardwareTable @ 0x1404A81D4 (PpmEventHgsHardwareTable.c)
 *     PpmHeteroHgsGetContainmentType @ 0x1404B5E60 (PpmHeteroHgsGetContainmentType.c)
 *     PpmEventHgsHardwareTableResonChanged @ 0x1404C6008 (PpmEventHgsHardwareTableResonChanged.c)
 *     PpmEventHgsContainmentHwUpdate @ 0x1404E466C (PpmEventHgsContainmentHwUpdate.c)
 *     PpmHeteroHgsDetectContainmentPresence @ 0x1405D4400 (PpmHeteroHgsDetectContainmentPresence.c)
 *     PpmHeteroHgsEvalAndRegisterContainmentGroups @ 0x1405D47C4 (PpmHeteroHgsEvalAndRegisterContainmentGroups.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     RtlCompareMemory @ 0x1406B4930 (RtlCompareMemory.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

char PpmHeteroUpdateHgsConfiguration()
{
  char v0; // r12
  __int64 v1; // rdx
  BOOL v2; // r15d
  __int64 v3; // rax
  unsigned int v4; // esi
  unsigned int v5; // ebx
  __int64 Prcb; // r8
  __int64 v7; // rcx
  char v8; // di
  char v9; // dl
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rdx
  bool v13; // zf
  __int64 v14; // rax
  struct _KAFFINITY_EX *v15; // rcx
  unsigned int v16; // edx
  struct _KAFFINITY_EX *v17; // rcx
  char v18; // r12
  __int64 v19; // rax
  __int64 v20; // rbx
  char v21; // al
  _BYTE *v22; // rbx
  int v23; // r9d
  unsigned int v24; // r8d
  size_t i; // rdi
  char *v26; // rdx
  char v27; // al
  char v28; // r10
  char v29; // cl
  __int64 v30; // rax
  int v31; // edi
  unsigned int v32; // ebx
  unsigned int v33; // eax
  __int64 v34; // rax
  __int64 v35; // rdx
  int IsEmptyAffinity; // r10d
  unsigned int v37; // r9d
  unsigned __int16 j; // r8
  __int64 v39; // rcx
  __int64 v40; // rdx
  unsigned int v42; // [rsp+28h] [rbp-E0h] BYREF
  BOOL v43; // [rsp+2Ch] [rbp-DCh]
  __int64 v44; // [rsp+30h] [rbp-D8h] BYREF
  struct _KAFFINITY_EX *v45; // [rsp+38h] [rbp-D0h] BYREF
  unsigned __int64 v46; // [rsp+40h] [rbp-C8h]
  __int16 v47; // [rsp+48h] [rbp-C0h]
  int v48; // [rsp+4Ah] [rbp-BEh]
  __int16 v49; // [rsp+4Eh] [rbp-BAh]
  struct _KAFFINITY_EX v50; // [rsp+58h] [rbp-B0h] BYREF
  struct _KAFFINITY_EX v51; // [rsp+168h] [rbp+60h] BYREF
  struct _KAFFINITY_EX v52; // [rsp+278h] [rbp+170h] BYREF
  __int64 v53; // [rsp+388h] [rbp+280h] BYREF
  _BYTE v54[264]; // [rsp+390h] [rbp+288h] BYREF
  __int64 v55; // [rsp+498h] [rbp+390h] BYREF
  _BYTE v56[264]; // [rsp+4A0h] [rbp+398h] BYREF
  struct _KAFFINITY_EX v57; // [rsp+5A8h] [rbp+4A0h] BYREF
  struct _KAFFINITY_EX v58; // [rsp+6B8h] [rbp+5B0h] BYREF
  struct _KAFFINITY_EX v59; // [rsp+7C8h] [rbp+6C0h] BYREF

  LODWORD(v44) = 0;
  memset_0(&v57, 0, sizeof(v57));
  memset_0(&v55, 0, 0x108uLL);
  v48 = 0;
  v49 = 0;
  memset_0(&v52.8, 0, sizeof(v52.8));
  v42 = 0;
  memset_0(&v51.8, 0, sizeof(v51.8));
  memset_0(&v50, 0, sizeof(v50));
  memset_0(&v59.8, 0, sizeof(v59.8));
  memset_0(&v58, 0, sizeof(v58));
  memset_0(&v53, 0, 0x108uLL);
  v0 = 0;
  if ( PpmHeteroHgsEnabled
    && !(unsigned int)KeIsEmptyAffinityEx(&PpmCheckRegistered.Count)
    && PpmHeteroCheckWpsTableUpdated
    && (unsigned __int8)guard_dispatch_icall_no_overrides(PpmHeteroWpsUpdateInterfaceHandle, v1) )
  {
    v2 = PpmHeteroHgsPopulated == 0;
    PpmHeteroHgsPopulated = 1;
    v43 = v2;
    *(_QWORD *)&v52.Count = 2097153LL;
    memset_0(&v52.8, 0, sizeof(v52.8));
    *(_QWORD *)&PpmParkNewForceParkingMask.Count = 2097153LL;
    memset_0(&PpmParkNewForceParkingMask.8, 0, sizeof(PpmParkNewForceParkingMask.8));
    KiCopyAffinityEx(&v52, v52.Size, &PpmCheckRegistered);
    v3 = *(_QWORD *)&KeNumberProcessorsGroup0[1];
    v4 = 0;
    if ( *(_DWORD *)(v3 + 4) )
    {
      do
      {
        *(_QWORD *)&v57.Count = 2097153LL;
        memset_0(&v57.8, 0, sizeof(v57.8));
        *(_QWORD *)&v58.Count = 2097153LL;
        memset_0(&v58.8, 0, sizeof(v58.8));
        v55 = 2097153LL;
        memset_0(v56, 0, 0x100uLL);
        v53 = 2097153LL;
        memset_0(v54, 0, 0x100uLL);
        *(_QWORD *)&v59.Count = 2097153LL;
        memset_0(&v59.8, 0, sizeof(v59.8));
        v46 = PpmCheckRegistered.Bitmap[0];
        v47 = 0;
        v45 = &PpmCheckRegistered;
        if ( !(unsigned int)KeEnumerateNextProcessor(&v42, (unsigned __int16 **)&v45) )
        {
          while ( 1 )
          {
            v5 = v42;
            Prcb = KeGetPrcb(v42);
            if ( PpmHeteroCapabilitySimulation && (PpmHeteroSimulationStateConfig & 2) != 0 )
            {
              v7 = v4 + *(_DWORD *)(PpmHeteroCapabilitySimulation + 4) * v5;
              v8 = *(_BYTE *)(PpmHeteroCapabilitySimulation + 4 * v7 + 24);
              v9 = *(_BYTE *)(PpmHeteroCapabilitySimulation + 4 * v7 + 25);
              goto LABEL_16;
            }
            if ( PpmHeteroHgsVendor == 2 )
              break;
            if ( PpmHeteroHgsVendor == 1 )
            {
              v11 = 4 * PpmHeteroHgsCapabilityBits * v4;
              v12 = PpmHeteroHgsTableEntry + *(unsigned __int16 *)(Prcb + 35402);
              v8 = *(_BYTE *)(v12 + v11);
              v9 = *(_BYTE *)(v12 + v11 + 4);
              goto LABEL_14;
            }
            v8 = 1;
            v9 = 1;
LABEL_16:
            v13 = PpmHeteroHgsParkingHintEnabled == 0;
            v14 = *(_QWORD *)(Prcb + 35408);
            *(_BYTE *)(v14 + 4LL * v4 + 6) = v9;
            *(_BYTE *)(v14 + 4LL * v4 + 7) = v8;
            if ( v13 )
            {
              KeAddProcessorAffinityEx((unsigned __int16 *)&v53, v5);
              v16 = v5;
LABEL_28:
              v17 = (struct _KAFFINITY_EX *)&v55;
              goto LABEL_29;
            }
            if ( !PpmHeteroHgsThreadEnabled || !PpmHeteroHgsEePerfHintsIndependentEnabled )
            {
              if ( v9 && v8 )
              {
                KeAddProcessorAffinityEx((unsigned __int16 *)&v55, v5);
                v16 = v5;
                v17 = (struct _KAFFINITY_EX *)&v53;
              }
              else
              {
                KeAddProcessorAffinityEx(&v57.Count, v5);
                v16 = v5;
                v17 = &v58;
              }
              goto LABEL_29;
            }
            v15 = &v58;
            if ( v9 )
              v15 = (struct _KAFFINITY_EX *)&v53;
            KeAddProcessorAffinityEx(&v15->Count, v5);
            v16 = v5;
            if ( v8 )
              goto LABEL_28;
            v17 = &v57;
LABEL_29:
            KeAddProcessorAffinityEx(&v17->Count, v16);
            if ( (unsigned int)KeEnumerateNextProcessor(&v42, (unsigned __int16 **)&v45) )
              goto LABEL_30;
          }
          v10 = PpmHeteroHgsCapabilityBits * v4 + *(unsigned __int16 *)(Prcb + 35402);
          v8 = *(_BYTE *)(PpmHeteroHgsTableEntry + v10 + 1);
          v9 = *(_BYTE *)(PpmHeteroHgsTableEntry + v10);
LABEL_14:
          v5 = v42;
          goto LABEL_16;
        }
LABEL_30:
        v18 = PPmHeteroHgsUpdateOrderValue((unsigned __int16 *)&v53, &v58.Count, v4, 1) | v0;
        v0 = PPmHeteroHgsUpdateOrderValue((unsigned __int16 *)&v55, &v57.Count, v4, 0) | v18;
        KeAndAffinityEx2(&v58, &v57, (__int64)&v59);
        KeAndAffinityEx2(&v52, &v59, (__int64)&v52);
        v19 = *(_QWORD *)&KeNumberProcessorsGroup0[1];
        ++v4;
      }
      while ( v4 < *(_DWORD *)(v19 + 4) );
      LOBYTE(v2) = v43;
    }
    if ( PpmHeteroHgsParkingHintEnabled )
    {
      v46 = PpmCheckRegistered.Bitmap[0];
      v45 = &PpmCheckRegistered;
      v47 = 0;
      while ( !(unsigned int)KeEnumerateNextProcessor(&v42, (unsigned __int16 **)&v45) )
      {
        v20 = KeGetPrcb(v42);
        v21 = KeCheckProcessorAffinityEx(&v52.Count, v42);
        if ( *(_BYTE *)(v20 + 35404) != v21 )
        {
          v0 = 1;
          *(_BYTE *)(v20 + 35404) = v21;
        }
      }
    }
    if ( PpmHeteroHgsDynamicUpdateEnabled )
    {
      if ( PpmHeteroHgsDynamicUpdateReasonEnabled )
      {
        v22 = PpmHeteroHgsNewUpdateReason;
        if ( PpmHeteroHgsNewUpdateReason )
        {
          if ( PpmHeteroHgsOldUpdateReason )
          {
            v23 = 0;
            v24 = 0;
            for ( i = (unsigned int)(2 * PpmHeteroWorkloadClasses); v24 < PpmHeteroWorkloadClasses; ++v24 )
            {
              v22 = PpmHeteroHgsNewUpdateReason;
              v26 = (char *)(PpmHgsUpdateChangeReasonOffset + PpmHeteroHgsCapabilityBits * v24 + PpmHeteroHgsTableEntry);
              v27 = *v26;
              *((_BYTE *)PpmHeteroHgsNewUpdateReason + 2 * v24) = *v26;
              v28 = v26[1];
              v22[2 * v24 + 1] = v28;
              if ( (v27 & 2) != 0 && (v28 & 2) != 0 )
                ++v23;
            }
            if ( KeIsForceParkingEnabled() && v29 )
              KiCopyAffinityEx(&PpmParkNewForceParkingMask, PpmParkNewForceParkingMask.Size, &v52);
            if ( RtlCompareMemory(v22, PpmHeteroHgsOldUpdateReason, i) != i )
            {
              memmove(PpmHeteroHgsOldUpdateReason, PpmHeteroHgsNewUpdateReason, i);
              PpmEventHgsHardwareTableResonChanged(0);
            }
          }
        }
      }
    }
    if ( (PpmHeteroHgsContainmentState & 4) != 0 || v2 )
    {
      *(_QWORD *)&v50.Count = 2097153LL;
      memset_0(&v50.8, 0, sizeof(v50.8));
      v30 = *(_QWORD *)&KeNumberProcessorsGroup0[1];
      v31 = 0;
      if ( !*(_DWORD *)(v30 + 4) )
        goto LABEL_67;
LABEL_54:
      *(_QWORD *)&v51.Count = 2097153LL;
      v32 = -1;
      memset_0(&v51.8, 0, sizeof(v51.8));
      v46 = PpmCheckRegistered.Bitmap[0];
      v47 = 0;
      v45 = &PpmCheckRegistered;
      if ( (unsigned int)KeEnumerateNextProcessor(&v42, (unsigned __int16 **)&v45) )
      {
LABEL_66:
        *(_QWORD *)&v50.Count = 2097153LL;
        memset_0(&v50.8, 0, sizeof(v50.8));
        goto LABEL_67;
      }
      while ( 1 )
      {
        v33 = *(unsigned __int8 *)(PpmHeteroHgsTableEntry
                                 + (unsigned int)*(unsigned __int16 *)(KeGetPrcb(v42) + 35402)
                                 + PpmHeteroHgsCapabilityBits * v31
                                 + 1);
        if ( (_BYTE)v33 )
        {
          if ( v32 == -1 || v33 > v32 )
          {
            *(_QWORD *)&v51.Count = 2097153LL;
            v32 = v33;
            memset_0(&v51.8, 0, sizeof(v51.8));
LABEL_61:
            KeAddProcessorAffinityEx(&v51.Count, v42);
            goto LABEL_62;
          }
          if ( v33 == v32 )
            goto LABEL_61;
        }
LABEL_62:
        if ( (unsigned int)KeEnumerateNextProcessor(&v42, (unsigned __int16 **)&v45) )
        {
          LOBYTE(v2) = v43;
          if ( v32 == -1 )
            goto LABEL_66;
          KiOrAffinityEx(&v50, &v51, &v50, v50.Size);
          v34 = *(_QWORD *)&KeNumberProcessorsGroup0[1];
          if ( (unsigned int)++v31 >= *(_DWORD *)(v34 + 4) )
          {
LABEL_67:
            if ( !(unsigned int)KeIsEmptyAffinityEx(&v50.Count) )
            {
              if ( (PpmHeteroHgsContainmentState & 4) != 0 )
              {
                PpmHeteroHgsGetContainmentType(&v50.Count, (unsigned int *)&v44);
                PpmEventHgsContainmentHwUpdate(&v50, &v44, 0LL);
              }
              else if ( v2 )
              {
                LOBYTE(v35) = v2;
                PpmHeteroHgsDetectContainmentPresence(&v50, v35);
                PpmHeteroHgsEvalAndRegisterContainmentGroups();
              }
            }
            IsEmptyAffinity = KeIsEmptyAffinityEx(&v52.Count);
            if ( (PpmHeteroHgsContainmentState & 4) != 0 )
            {
              v37 = PpmParkNumNodes;
              for ( j = 0; j < v37; ++j )
              {
                v39 = *(_QWORD *)(1296LL * j + PpmParkNodes + 1280);
                if ( v39 )
                  *(_BYTE *)(v39 + 827) = IsEmptyAffinity == 0;
              }
            }
            PpmHeteroHgsCheckContainmentDecision();
            break;
          }
          goto LABEL_54;
        }
      }
    }
    PpmEventHgsHardwareTable(0);
    guard_dispatch_icall_no_overrides(PpmHeteroWpsUpdateInterfaceHandle, v40);
  }
  return v0;
}
