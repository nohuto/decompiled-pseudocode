/*
 * XREFs of PpmHeteroHgsDetectContainmentPresence @ 0x1405D4400
 * Callers:
 *     PpmHeteroUpdateHgsConfiguration @ 0x1404E2E24 (PpmHeteroUpdateHgsConfiguration.c)
 *     PoInitSystem @ 0x140C63AE4 (PoInitSystem.c)
 * Callees:
 *     KeAddGroupAffinityEx @ 0x140287710 (KeAddGroupAffinityEx.c)
 *     KeGetPrcb @ 0x1402B0A10 (KeGetPrcb.c)
 *     ?KiSubtractAffinityEx@@YAKPEAU_KAFFINITY_EX@@00G@Z @ 0x1402B2A28 (-KiSubtractAffinityEx@@YAKPEAU_KAFFINITY_EX@@00G@Z.c)
 *     KeIsEqualAffinityEx @ 0x1403A3520 (KeIsEqualAffinityEx.c)
 *     KeEnumerateNextProcessor @ 0x140405740 (KeEnumerateNextProcessor.c)
 *     KeGetTopologySiblingAffinityForProcessor @ 0x1404DE1EC (KeGetTopologySiblingAffinityForProcessor.c)
 *     Feature_PpmParkEx__private_IsEnabledNoReportingNoInline @ 0x1405B2278 (Feature_PpmParkEx__private_IsEnabledNoReportingNoInline.c)
 *     PpmHeteroHgsCpuSupportedForContainment @ 0x1405D437C (PpmHeteroHgsCpuSupportedForContainment.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

char __fastcall PpmHeteroHgsDetectContainmentPresence(unsigned __int16 *a1, char a2)
{
  char v2; // di
  unsigned __int8 v3; // si
  int IsEqualAffinity; // eax
  struct _KPRCB *CurrentPrcb; // r14
  unsigned __int8 v6; // r12
  unsigned __int8 v7; // r15
  unsigned __int8 ArchitecturalEfficiencyClass; // r13
  unsigned __int8 v9; // di
  unsigned __int8 v10; // bl
  char v11; // bl
  unsigned __int16 *v12; // r13
  unsigned __int8 v13; // r14
  unsigned __int8 v14; // r15
  unsigned __int8 v15; // di
  unsigned __int8 v16; // bl
  char v17; // bl
  unsigned int v18; // r15d
  unsigned int v19; // r14d
  unsigned __int8 v20; // di
  unsigned int v22; // [rsp+28h] [rbp-E0h] BYREF
  char v23; // [rsp+2Ch] [rbp-DCh]
  struct _KAFFINITY_EX *v24; // [rsp+30h] [rbp-D8h] BYREF
  unsigned __int64 v25; // [rsp+38h] [rbp-D0h]
  _WORD v26[4]; // [rsp+40h] [rbp-C8h]
  __int64 v27; // [rsp+48h] [rbp-C0h]
  unsigned __int16 *v28; // [rsp+50h] [rbp-B8h]
  struct _KAFFINITY_EX v29; // [rsp+58h] [rbp-B0h] BYREF
  struct _KAFFINITY_EX v30; // [rsp+168h] [rbp+60h] BYREF

  v2 = a2;
  v23 = a2;
  v28 = a1;
  v3 = 0;
  *(_DWORD *)&v26[1] = 0;
  v26[3] = 0;
  memset_0(&v29.8, 0, sizeof(v29.8));
  v22 = 0;
  LOBYTE(IsEqualAffinity) = (unsigned __int8)memset_0(&v30.8, 0, sizeof(v30.8));
  if ( PpmHeteroHgsThreadEnabled )
  {
    LOBYTE(IsEqualAffinity) = KeNumberProcessors_0;
    LODWORD(v27) = KeNumberProcessors_0;
    if ( (unsigned int)KeNumberProcessors_0 <= 0x800 )
    {
      LOBYTE(IsEqualAffinity) = PpmHeteroHgsCpuSupportedForContainment();
      if ( (_BYTE)IsEqualAffinity )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        *(_QWORD *)&v29.Count = 2097153LL;
        memset_0(&v29.8, 0, sizeof(v29.8));
        if ( (unsigned int)Feature_PpmParkEx__private_IsEnabledNoReportingNoInline() )
          KeGetTopologySiblingAffinityForProcessor((__int64)CurrentPrcb, 5, &v29);
        else
          KeAddGroupAffinityEx(&v29.Count, CurrentPrcb->Group, CurrentPrcb->LLCMask);
        IsEqualAffinity = KeIsEqualAffinityEx(&v29.Count, &CurrentPrcb->PackageProcessorSet.Count);
        if ( !IsEqualAffinity )
        {
          v25 = v29.Bitmap[0];
          v26[0] = 0;
          v6 = -1;
          v24 = &v29;
          v7 = 0;
          ArchitecturalEfficiencyClass = -1;
          if ( !(unsigned int)KeEnumerateNextProcessor(&v22, (unsigned __int16 **)&v24) )
          {
            do
            {
              v9 = ArchitecturalEfficiencyClass;
              v10 = v7;
              CurrentPrcb = (struct _KPRCB *)KeGetPrcb(v22);
              ArchitecturalEfficiencyClass = CurrentPrcb->PowerState.ArchitecturalEfficiencyClass;
              v7 = ArchitecturalEfficiencyClass;
              if ( v10 > ArchitecturalEfficiencyClass )
                v7 = v10;
              if ( v9 < ArchitecturalEfficiencyClass )
                ArchitecturalEfficiencyClass = v9;
            }
            while ( !(unsigned int)KeEnumerateNextProcessor(&v22, (unsigned __int16 **)&v24) );
            v2 = v23;
          }
          v11 = 0;
          if ( v7 != ArchitecturalEfficiencyClass || PpmHeteroWpsContainmentEnumOverride && v7 )
            v11 = 1;
          v12 = v28;
          if ( v2 && !(unsigned int)KeIsEqualAffinityEx(&v29.Count, v28) )
            v11 = 1;
          v25 = v29.Bitmap[0];
          v24 = &v29;
          v26[0] = 0;
          while ( !(unsigned int)KeEnumerateNextProcessor(&v22, (unsigned __int16 **)&v24) )
          {
            CurrentPrcb = (struct _KPRCB *)KeGetPrcb(v22);
            CurrentPrcb->PowerState.ContainmentGroupType = v11;
          }
          *(_QWORD *)&v30.Count = 2097153LL;
          memset_0(&v30.8, 0, sizeof(v30.8));
          if ( (unsigned int)KiSubtractAffinityEx(&CurrentPrcb->PackageProcessorSet, &v29, &v30, v30.Size) )
          {
            v25 = v30.Bitmap[0];
            v26[0] = 0;
            v24 = &v30;
            v13 = 0;
            v14 = -1;
            if ( !(unsigned int)KeEnumerateNextProcessor(&v22, (unsigned __int16 **)&v24) )
            {
              do
              {
                v15 = v14;
                v16 = v13;
                v14 = *(_BYTE *)(KeGetPrcb(v22) + 35336);
                v13 = v14;
                if ( v16 > v14 )
                  v13 = v16;
                if ( v15 < v14 )
                  v14 = v15;
              }
              while ( !(unsigned int)KeEnumerateNextProcessor(&v22, (unsigned __int16 **)&v24) );
              v2 = v23;
            }
            v17 = 0;
            if ( v13 != v14 || PpmHeteroWpsContainmentEnumOverride && v13 )
              v17 = 1;
            if ( v2 && !(unsigned int)KeIsEqualAffinityEx(&v30.Count, v12) )
              v17 = 1;
            v25 = v30.Bitmap[0];
            v24 = &v30;
            v26[0] = 0;
            while ( !(unsigned int)KeEnumerateNextProcessor(&v22, (unsigned __int16 **)&v24) )
              *(_BYTE *)(KeGetPrcb(v22) + 35432) = v17;
          }
          v18 = v27;
          v19 = 0;
          if ( !(_DWORD)v27 )
            goto LABEL_50;
          do
          {
            v20 = v6;
            v6 = *(_BYTE *)(KeGetPrcb(v19) + 35432);
            LOBYTE(IsEqualAffinity) = v6;
            if ( v3 > v6 )
              LOBYTE(IsEqualAffinity) = v3;
            v3 = IsEqualAffinity;
            if ( v20 < v6 )
              v6 = v20;
            ++v19;
          }
          while ( v19 < v18 );
          if ( (_BYTE)IsEqualAffinity != v6 )
          {
LABEL_50:
            LOBYTE(IsEqualAffinity) = PpmHeteroHgsContainmentState & 0xFC | 2;
            PpmHeteroHgsContainmentState = PpmHeteroHgsContainmentState & 0xFFFFFFFC | 2;
          }
        }
      }
    }
  }
  return IsEqualAffinity;
}
