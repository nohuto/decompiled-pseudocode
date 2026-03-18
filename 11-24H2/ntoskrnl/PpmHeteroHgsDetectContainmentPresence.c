/*
 * XREFs of PpmHeteroHgsDetectContainmentPresence @ 0x1405D6E5C
 * Callers:
 *     PpmHeteroUpdateHgsConfiguration @ 0x140203248 (PpmHeteroUpdateHgsConfiguration.c)
 *     PoInitSystem @ 0x140C61990 (PoInitSystem.c)
 * Callees:
 *     KeAddGroupAffinityEx @ 0x140257100 (KeAddGroupAffinityEx.c)
 *     KeGetPrcb @ 0x140352980 (KeGetPrcb.c)
 *     ?KiSubtractAffinityEx@@YAKPEAU_KAFFINITY_EX@@00G@Z @ 0x140354CF8 (-KiSubtractAffinityEx@@YAKPEAU_KAFFINITY_EX@@00G@Z.c)
 *     KeIsEqualAffinityEx @ 0x1403C8980 (KeIsEqualAffinityEx.c)
 *     KeEnumerateNextProcessor @ 0x14040D4F0 (KeEnumerateNextProcessor.c)
 *     KeGetTopologySiblingAffinityForProcessor @ 0x1404E752C (KeGetTopologySiblingAffinityForProcessor.c)
 *     Feature_PpmParkEx__private_IsEnabledNoReportingNoInline @ 0x1405B5004 (Feature_PpmParkEx__private_IsEnabledNoReportingNoInline.c)
 *     PpmHeteroHgsCpuSupportedForContainment @ 0x1405D6DB0 (PpmHeteroHgsCpuSupportedForContainment.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

char __fastcall PpmHeteroHgsDetectContainmentPresence(unsigned __int16 *a1, char a2)
{
  char v2; // di
  unsigned __int8 v3; // si
  int IsEqualAffinity; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  struct _KPRCB *CurrentPrcb; // r14
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  unsigned __int8 v14; // r12
  unsigned __int8 v15; // r15
  unsigned __int8 ArchitecturalEfficiencyClass; // r13
  unsigned __int8 v17; // di
  unsigned __int8 v18; // bl
  char v19; // bl
  unsigned __int16 *v20; // r13
  unsigned __int8 v21; // r14
  unsigned __int8 v22; // r15
  unsigned __int8 v23; // di
  unsigned __int8 v24; // bl
  char v25; // bl
  unsigned int v26; // r15d
  unsigned int v27; // r14d
  unsigned __int8 v28; // di
  unsigned int v30; // [rsp+28h] [rbp-E0h] BYREF
  char v31; // [rsp+2Ch] [rbp-DCh]
  struct _KAFFINITY_EX *v32; // [rsp+30h] [rbp-D8h] BYREF
  unsigned __int64 v33; // [rsp+38h] [rbp-D0h]
  _WORD v34[4]; // [rsp+40h] [rbp-C8h]
  __int64 v35; // [rsp+48h] [rbp-C0h]
  unsigned __int16 *v36; // [rsp+50h] [rbp-B8h]
  struct _KAFFINITY_EX v37; // [rsp+58h] [rbp-B0h] BYREF
  struct _KAFFINITY_EX v38; // [rsp+168h] [rbp+60h] BYREF

  v2 = a2;
  v31 = a2;
  v36 = a1;
  v3 = 0;
  *(_DWORD *)&v34[1] = 0;
  v34[3] = 0;
  memset_0(&v37.8, 0, sizeof(v37.8));
  v30 = 0;
  LOBYTE(IsEqualAffinity) = (unsigned __int8)memset_0(&v38.8, 0, sizeof(v38.8));
  if ( PpmHeteroHgsThreadEnabled )
  {
    LOBYTE(IsEqualAffinity) = KeNumberProcessors_0;
    LODWORD(v35) = KeNumberProcessors_0;
    if ( (unsigned int)KeNumberProcessors_0 <= 0x800 )
    {
      LOBYTE(IsEqualAffinity) = PpmHeteroHgsCpuSupportedForContainment(v6, v5, v7, v8);
      if ( (_BYTE)IsEqualAffinity )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        *(_QWORD *)&v37.Count = 2097153LL;
        memset_0(&v37.8, 0, sizeof(v37.8));
        if ( (unsigned int)Feature_PpmParkEx__private_IsEnabledNoReportingNoInline(v11, v10, v12, v13) )
          KeGetTopologySiblingAffinityForProcessor((__int64)CurrentPrcb, 5, &v37);
        else
          KeAddGroupAffinityEx(&v37.Count, CurrentPrcb->Group, CurrentPrcb->LLCMask);
        IsEqualAffinity = KeIsEqualAffinityEx(&v37.Count, &CurrentPrcb->PackageProcessorSet.Count);
        if ( !IsEqualAffinity )
        {
          v33 = v37.Bitmap[0];
          v34[0] = 0;
          v14 = -1;
          v32 = &v37;
          v15 = 0;
          ArchitecturalEfficiencyClass = -1;
          if ( !(unsigned int)KeEnumerateNextProcessor(&v30, (unsigned __int16 **)&v32) )
          {
            do
            {
              v17 = ArchitecturalEfficiencyClass;
              v18 = v15;
              CurrentPrcb = (struct _KPRCB *)KeGetPrcb(v30);
              ArchitecturalEfficiencyClass = CurrentPrcb->PowerState.ArchitecturalEfficiencyClass;
              v15 = ArchitecturalEfficiencyClass;
              if ( v18 > ArchitecturalEfficiencyClass )
                v15 = v18;
              if ( v17 < ArchitecturalEfficiencyClass )
                ArchitecturalEfficiencyClass = v17;
            }
            while ( !(unsigned int)KeEnumerateNextProcessor(&v30, (unsigned __int16 **)&v32) );
            v2 = v31;
          }
          v19 = 0;
          if ( v15 != ArchitecturalEfficiencyClass || PpmHeteroWpsContainmentEnumOverride && v15 )
            v19 = 1;
          v20 = v36;
          if ( v2 && !(unsigned int)KeIsEqualAffinityEx(&v37.Count, v36) )
            v19 = 1;
          v33 = v37.Bitmap[0];
          v32 = &v37;
          v34[0] = 0;
          while ( !(unsigned int)KeEnumerateNextProcessor(&v30, (unsigned __int16 **)&v32) )
          {
            CurrentPrcb = (struct _KPRCB *)KeGetPrcb(v30);
            CurrentPrcb->PowerState.ContainmentGroupType = v19;
          }
          *(_QWORD *)&v38.Count = 2097153LL;
          memset_0(&v38.8, 0, sizeof(v38.8));
          if ( (unsigned int)KiSubtractAffinityEx(&CurrentPrcb->PackageProcessorSet, &v37, &v38, v38.Size) )
          {
            v33 = v38.Bitmap[0];
            v34[0] = 0;
            v32 = &v38;
            v21 = 0;
            v22 = -1;
            if ( !(unsigned int)KeEnumerateNextProcessor(&v30, (unsigned __int16 **)&v32) )
            {
              do
              {
                v23 = v22;
                v24 = v21;
                v22 = *(_BYTE *)(KeGetPrcb(v30) + 35336);
                v21 = v22;
                if ( v24 > v22 )
                  v21 = v24;
                if ( v23 < v22 )
                  v22 = v23;
              }
              while ( !(unsigned int)KeEnumerateNextProcessor(&v30, (unsigned __int16 **)&v32) );
              v2 = v31;
            }
            v25 = 0;
            if ( v21 != v22 || PpmHeteroWpsContainmentEnumOverride && v21 )
              v25 = 1;
            if ( v2 && !(unsigned int)KeIsEqualAffinityEx(&v38.Count, v20) )
              v25 = 1;
            v33 = v38.Bitmap[0];
            v32 = &v38;
            v34[0] = 0;
            while ( !(unsigned int)KeEnumerateNextProcessor(&v30, (unsigned __int16 **)&v32) )
              *(_BYTE *)(KeGetPrcb(v30) + 35432) = v25;
          }
          v26 = v35;
          v27 = 0;
          if ( !(_DWORD)v35 )
            goto LABEL_50;
          do
          {
            v28 = v14;
            v14 = *(_BYTE *)(KeGetPrcb(v27) + 35432);
            LOBYTE(IsEqualAffinity) = v14;
            if ( v3 > v14 )
              LOBYTE(IsEqualAffinity) = v3;
            v3 = IsEqualAffinity;
            if ( v28 < v14 )
              v14 = v28;
            ++v27;
          }
          while ( v27 < v26 );
          if ( (_BYTE)IsEqualAffinity != v14 )
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
