/*
 * XREFs of PpmHeteroHgsDetectContainmentPresence @ 0x1405D23A8
 * Callers:
 *     PpmHeteroUpdateHgsConfiguration @ 0x140267B4C (PpmHeteroUpdateHgsConfiguration.c)
 *     PoInitSystem @ 0x140C50674 (PoInitSystem.c)
 * Callees:
 *     KeAddGroupAffinityEx @ 0x140256130 (KeAddGroupAffinityEx.c)
 *     KeIsEqualAffinityEx @ 0x14026BB80 (KeIsEqualAffinityEx.c)
 *     ?KiSubtractAffinityEx@@YAKPEAU_KAFFINITY_EX@@00G@Z @ 0x1403ADE18 (-KiSubtractAffinityEx@@YAKPEAU_KAFFINITY_EX@@00G@Z.c)
 *     KeGetPrcb @ 0x1403B0CC0 (KeGetPrcb.c)
 *     KeEnumerateNextProcessor @ 0x140405FA0 (KeEnumerateNextProcessor.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

char __fastcall PpmHeteroHgsDetectContainmentPresence(unsigned __int16 *a1, char a2)
{
  char v2; // di
  unsigned __int8 v3; // si
  struct _KPRCB *CurrentPrcb; // rax
  unsigned __int8 CpuModel; // al
  __int64 v6; // rcx
  struct _KPRCB *Prcb; // r13
  unsigned __int8 v8; // r12
  unsigned __int8 v9; // r14
  unsigned __int8 ArchitecturalEfficiencyClass; // r15
  unsigned __int8 v11; // di
  unsigned __int8 v12; // bl
  char v13; // bl
  unsigned __int8 v14; // r14
  unsigned __int8 v15; // r15
  unsigned __int8 v16; // di
  unsigned __int8 v17; // bl
  char v18; // bl
  unsigned int v19; // r15d
  unsigned int v20; // r14d
  unsigned __int8 v21; // di
  unsigned int v23; // [rsp+28h] [rbp-E0h] BYREF
  char v24; // [rsp+2Ch] [rbp-DCh]
  struct _KAFFINITY_EX *v25; // [rsp+30h] [rbp-D8h] BYREF
  unsigned __int64 v26; // [rsp+38h] [rbp-D0h]
  _WORD v27[4]; // [rsp+40h] [rbp-C8h]
  __int64 v28; // [rsp+48h] [rbp-C0h]
  unsigned __int16 *v29; // [rsp+50h] [rbp-B8h]
  struct _KAFFINITY_EX v30; // [rsp+58h] [rbp-B0h] BYREF
  struct _KAFFINITY_EX v31; // [rsp+168h] [rbp+60h] BYREF

  v2 = a2;
  v24 = a2;
  v29 = a1;
  v3 = 0;
  *(_DWORD *)&v27[1] = 0;
  v27[3] = 0;
  memset_0(&v30.8, 0, sizeof(v30.8));
  v23 = 0;
  LOBYTE(CurrentPrcb) = (unsigned __int8)memset_0(&v31.8, 0, sizeof(v31.8));
  if ( PpmHeteroHgsThreadEnabled )
  {
    LOBYTE(CurrentPrcb) = KeNumberProcessors_0;
    LODWORD(v28) = KeNumberProcessors_0;
    if ( (unsigned int)KeNumberProcessors_0 <= 0x800 )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      if ( CurrentPrcb->CpuVendor == 2 && CurrentPrcb->CpuType == 6 )
      {
        CpuModel = CurrentPrcb->CpuModel;
        if ( CpuModel == 0xAA
          || (LOBYTE(CurrentPrcb) = CpuModel + 84, (unsigned __int8)CurrentPrcb <= 0x21u)
          && (v6 = 0x306030201LL, _bittest64(&v6, (unsigned __int64)CurrentPrcb)) )
        {
          Prcb = KeGetCurrentPrcb();
          *(_QWORD *)&v30.Count = 2097153LL;
          memset_0(&v30.8, 0, sizeof(v30.8));
          KeAddGroupAffinityEx(&v30.Count, Prcb->Group, Prcb->LLCMask);
          LODWORD(CurrentPrcb) = KeIsEqualAffinityEx(&v30.Count, &Prcb->PackageProcessorSet.Count);
          if ( !(_DWORD)CurrentPrcb )
          {
            v26 = v30.Bitmap[0];
            v27[0] = 0;
            v8 = -1;
            v25 = &v30;
            v9 = 0;
            ArchitecturalEfficiencyClass = -1;
            if ( !(unsigned int)KeEnumerateNextProcessor(&v23, (unsigned __int16 **)&v25) )
            {
              do
              {
                v11 = ArchitecturalEfficiencyClass;
                v12 = v9;
                Prcb = (struct _KPRCB *)KeGetPrcb(v23);
                ArchitecturalEfficiencyClass = Prcb->PowerState.ArchitecturalEfficiencyClass;
                v9 = ArchitecturalEfficiencyClass;
                if ( v12 > ArchitecturalEfficiencyClass )
                  v9 = v12;
                if ( v11 < ArchitecturalEfficiencyClass )
                  ArchitecturalEfficiencyClass = v11;
              }
              while ( !(unsigned int)KeEnumerateNextProcessor(&v23, (unsigned __int16 **)&v25) );
              v2 = v24;
            }
            v13 = 0;
            if ( v9 != ArchitecturalEfficiencyClass || PpmHeteroWpsContainmentEnumOverride && v9 )
              v13 = 1;
            if ( v2 && !(unsigned int)KeIsEqualAffinityEx(&v30.Count, v29) )
              v13 = 1;
            v26 = v30.Bitmap[0];
            v25 = &v30;
            v27[0] = 0;
            while ( !(unsigned int)KeEnumerateNextProcessor(&v23, (unsigned __int16 **)&v25) )
            {
              Prcb = (struct _KPRCB *)KeGetPrcb(v23);
              Prcb->PowerState.ContainmentGroupType = v13;
            }
            *(_QWORD *)&v31.Count = 2097153LL;
            memset_0(&v31.8, 0, sizeof(v31.8));
            if ( (unsigned int)KiSubtractAffinityEx(&Prcb->PackageProcessorSet, &v30, &v31, v31.Size) )
            {
              v26 = v31.Bitmap[0];
              v27[0] = 0;
              v25 = &v31;
              v14 = 0;
              v15 = -1;
              if ( !(unsigned int)KeEnumerateNextProcessor(&v23, (unsigned __int16 **)&v25) )
              {
                do
                {
                  v16 = v15;
                  v17 = v14;
                  v15 = *(_BYTE *)(KeGetPrcb(v23) + 35336);
                  v14 = v15;
                  if ( v17 > v15 )
                    v14 = v17;
                  if ( v16 < v15 )
                    v15 = v16;
                }
                while ( !(unsigned int)KeEnumerateNextProcessor(&v23, (unsigned __int16 **)&v25) );
                v2 = v24;
              }
              v18 = 0;
              if ( v14 != v15 || PpmHeteroWpsContainmentEnumOverride && v14 )
                v18 = 1;
              if ( v2 && !(unsigned int)KeIsEqualAffinityEx(&v31.Count, v29) )
                v18 = 1;
              v26 = v31.Bitmap[0];
              v25 = &v31;
              v27[0] = 0;
              while ( !(unsigned int)KeEnumerateNextProcessor(&v23, (unsigned __int16 **)&v25) )
                *(_BYTE *)(KeGetPrcb(v23) + 35432) = v18;
            }
            v19 = v28;
            v20 = 0;
            if ( !(_DWORD)v28 )
              goto LABEL_51;
            do
            {
              v21 = v8;
              v8 = *(_BYTE *)(KeGetPrcb(v20) + 35432);
              LOBYTE(CurrentPrcb) = v8;
              if ( v3 > v8 )
                LOBYTE(CurrentPrcb) = v3;
              v3 = (unsigned __int8)CurrentPrcb;
              if ( v21 < v8 )
                v8 = v21;
              ++v20;
            }
            while ( v20 < v19 );
            if ( (_BYTE)CurrentPrcb != v8 )
            {
LABEL_51:
              LOBYTE(CurrentPrcb) = PpmHeteroHgsContainmentState & 0xFC | 2;
              PpmHeteroHgsContainmentState = PpmHeteroHgsContainmentState & 0xFFFFFFFC | 2;
            }
          }
        }
      }
    }
  }
  return (char)CurrentPrcb;
}
