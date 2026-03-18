/*
 * XREFs of PpmParkRegisterParking @ 0x1405D9FB4
 * Callers:
 *     PpmCheckInitProcessors @ 0x140AC75E0 (PpmCheckInitProcessors.c)
 * Callees:
 *     KeEnumerateNextSchedulerSubNodeInNode @ 0x1402088E0 (KeEnumerateNextSchedulerSubNodeInNode.c)
 *     KeReleaseSpinLock @ 0x14024DD30 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140254B20 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeAddGroupAffinityEx @ 0x140257100 (KeAddGroupAffinityEx.c)
 *     KeGetPrcb @ 0x140352980 (KeGetPrcb.c)
 *     PopExecuteOnTargetProcessors @ 0x1403529A4 (PopExecuteOnTargetProcessors.c)
 *     KeEnumerateNextProcessor @ 0x14040D4F0 (KeEnumerateNextProcessor.c)
 *     PpmHeteroIsMultiClassParkingEnabled @ 0x140417BE0 (PpmHeteroIsMultiClassParkingEnabled.c)
 *     KeInitializeSchedulerSubNodeEnumerationContext @ 0x14041DF40 (KeInitializeSchedulerSubNodeEnumerationContext.c)
 *     PpmParkApplyPolicy @ 0x1404ED2F4 (PpmParkApplyPolicy.c)
 *     Feature_PpmParkEx__private_IsEnabledDeviceUsageNoInline @ 0x1405B4FB0 (Feature_PpmParkEx__private_IsEnabledDeviceUsageNoInline.c)
 *     PpmHeteroHgsRegisterContainmentGroups @ 0x1405D7408 (PpmHeteroHgsRegisterContainmentGroups.c)
 *     PpmParkRegisterRestriction @ 0x1405DA87C (PpmParkRegisterRestriction.c)
 *     PpmParkRegisterParkingEx @ 0x1405E3C90 (PpmParkRegisterParkingEx.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memmove @ 0x1406BFC40 (memmove.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     PpmIdleInitializeConcurrency @ 0x14074A0E0 (PpmIdleInitializeConcurrency.c)
 *     PpmParkFreeAllParkNodes @ 0x14075E7D8 (PpmParkFreeAllParkNodes.c)
 *     PpmParkParkingAvailable @ 0x140A723C0 (PpmParkParkingAvailable.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 PpmParkRegisterParking()
{
  unsigned __int8 v0; // si
  _BYTE *v1; // rbx
  __int64 v2; // rdi
  unsigned int v3; // r14d
  unsigned int v4; // ebx
  unsigned int i; // edi
  __int64 v6; // r13
  unsigned int v7; // edi
  __int64 v8; // r9
  unsigned int v9; // edx
  _QWORD *v10; // r8
  __int64 v11; // rcx
  unsigned int v12; // esi
  unsigned int v13; // r12d
  __int64 v14; // rcx
  __int16 v15; // r14
  __int64 v16; // r15
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // r15
  __int64 v19; // rdx
  __int64 v20; // rbx
  char *v21; // r13
  unsigned __int8 v22; // si
  __int64 v23; // rdx
  unsigned int v24; // ecx
  __int64 v25; // rdi
  __int64 Prcb; // rax
  _WORD *v27; // rax
  __int64 v28; // rcx
  unsigned __int8 v29; // cl
  int v30; // r14d
  unsigned int v31; // edx
  __int64 v32; // rax
  unsigned __int16 *v33; // rcx
  __int64 v34; // r9
  unsigned int v35; // edi
  __int64 v36; // r15
  __int64 v37; // rsi
  int v38; // eax
  __int64 v39; // r9
  void *v40; // rax
  void *v41; // rsi
  unsigned int *v42; // rbx
  __int64 v43; // r15
  unsigned int v44; // eax
  void *v45; // rcx
  size_t v46; // r8
  size_t v47; // rsi
  size_t v48; // rsi
  __int64 v49; // rcx
  unsigned int v50; // r14d
  void *v51; // rcx
  unsigned __int16 *v52; // rdi
  int v53; // eax
  unsigned int v54; // eax
  size_t v55; // r8
  size_t v56; // rsi
  size_t v57; // rsi
  KIRQL v58; // dl
  PVOID v59; // rbx
  __int64 v60; // rdx
  __int64 v61; // rcx
  __int64 v62; // r8
  __int64 v63; // r9
  char v65; // [rsp+38h] [rbp-D0h]
  unsigned int v66; // [rsp+3Ch] [rbp-CCh]
  int v67; // [rsp+40h] [rbp-C8h]
  unsigned __int8 v68; // [rsp+44h] [rbp-C4h]
  __int64 v69; // [rsp+48h] [rbp-C0h] BYREF
  unsigned int v70; // [rsp+50h] [rbp-B8h] BYREF
  unsigned int v71; // [rsp+54h] [rbp-B4h]
  unsigned int v72; // [rsp+58h] [rbp-B0h]
  unsigned int v73; // [rsp+5Ch] [rbp-ACh]
  __int64 v74; // [rsp+60h] [rbp-A8h]
  PVOID v75; // [rsp+68h] [rbp-A0h]
  __int64 Pool2; // [rsp+70h] [rbp-98h]
  PVOID P; // [rsp+78h] [rbp-90h]
  PVOID v78; // [rsp+80h] [rbp-88h]
  __int64 v79; // [rsp+88h] [rbp-80h]
  __int128 v80; // [rsp+90h] [rbp-78h] BYREF
  __int128 v81; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v82; // [rsp+B0h] [rbp-58h]
  __int128 v83; // [rsp+B8h] [rbp-50h] BYREF
  __int64 v84; // [rsp+C8h] [rbp-40h]
  __int64 v85; // [rsp+D8h] [rbp-30h] BYREF
  _BYTE v86[264]; // [rsp+E0h] [rbp-28h] BYREF

  memset_0(&v85, 0, 0x108uLL);
  v82 = 0LL;
  v70 = 0;
  v69 = 0LL;
  v81 = 0LL;
  v84 = 0LL;
  v80 = 0LL;
  v83 = 0LL;
  if ( (unsigned int)Feature_PpmParkEx__private_IsEnabledDeviceUsageNoInline() )
    return PpmParkRegisterParkingEx();
  P = 0LL;
  v0 = PpmMaxCoreClasses;
  v75 = 0LL;
  if ( (unsigned __int8)PpmMaxCoreClasses < 2u )
    v0 = 2;
  v78 = 0LL;
  v68 = v0;
  v72 = 0;
  v65 = 0;
  if ( PpmParkNodes )
  {
    v75 = (PVOID)PpmParkNodes;
    v78 = (PVOID)PpmParkHistograms;
    v72 = PpmParkNumNodes;
    if ( PpmParkNumNodes )
    {
      v1 = (_BYTE *)(PpmParkNodes + 1184);
      v2 = (unsigned int)PpmParkNumNodes;
      do
      {
        if ( *((_QWORD *)v1 - 10) && (*v1 & 8) != 0 )
        {
          v85 = 2097153LL;
          memset_0(v86, 0, 0x100uLL);
          KeAddGroupAffinityEx((unsigned __int16 *)&v85, *((_WORD *)v1 - 590), *((_QWORD *)v1 - 146));
          PopExecuteOnTargetProcessors((__int64)&v85, (__int64)PpmIdleRemoveConcurrency, 0LL, 0LL);
        }
        v1 += 1288;
        --v2;
      }
      while ( v2 );
    }
  }
  v3 = 0;
  v4 = 0;
  for ( i = 0; i < (unsigned __int16)KeNumberNodes; ++i )
  {
    KeInitializeSchedulerSubNodeEnumerationContext(&v83, KeNodeBlock[i]);
    while ( !(unsigned int)KeEnumerateNextSchedulerSubNodeInNode(&v83, &v69) )
      ++v4;
  }
  Pool2 = ExAllocatePool2(0x40uLL);
  v6 = Pool2;
  if ( !Pool2 )
    goto LABEL_84;
  v7 = v0;
  v66 = v4;
  v71 = v0;
  v8 = ExAllocatePool2(0x40uLL);
  if ( !v8 )
  {
    v3 = v4;
    goto LABEL_84;
  }
  v9 = 0;
  if ( v4 )
  {
    v10 = (_QWORD *)(v6 + 1280);
    do
    {
      v11 = v9 * v0;
      ++v9;
      *v10 = v8 + 640 * v11;
      v10 += 161;
    }
    while ( v9 < v4 );
  }
  v67 = 0;
  v12 = 0;
  v13 = 0;
  v73 = 0;
  if ( !KeNumberNodes )
  {
LABEL_71:
    v40 = (void *)ExAllocatePool2(0x40uLL);
    P = v40;
    if ( v40 )
    {
      v41 = v40;
      if ( v66 )
      {
        v42 = (unsigned int *)(v6 + 1160);
        v69 = v66;
        v43 = v66;
        do
        {
          v44 = *((unsigned __int16 *)v42 - 575);
          v45 = v41;
          *((_QWORD *)v42 - 6) = v41;
          v46 = 8LL * ++v44;
          v47 = (size_t)v41 + v46;
          *v42 = v44;
          *((_QWORD *)v42 - 5) = v47;
          v48 = v46 + v47;
          *((_QWORD *)v42 - 4) = v48;
          v41 = (void *)(v46 + v48);
          memmove(v45, (const void *)(*((_QWORD *)v42 - 7) + 328LL), v46);
          memmove(*((void **)v42 - 5), (const void *)(*((_QWORD *)v42 - 7) + 328LL), 8LL * *v42);
          v49 = *((_QWORD *)v42 - 7);
          *((_QWORD *)v42 - 3) = *(_QWORD *)(v49 + 24);
          *((_QWORD *)v42 - 2) = *(_QWORD *)(v49 + 24);
          if ( *((_BYTE *)v42 + 25) )
          {
            v50 = 0;
            if ( *((_BYTE *)v42 - 1148) )
            {
              do
              {
                v51 = v41;
                v52 = (unsigned __int16 *)(*((_QWORD *)v42 + 15) + 640LL * v50);
                v53 = *v52;
                if ( (_WORD)v53 )
                {
                  *((_QWORD *)v52 + 72) = v41;
                  v54 = v53 + 1;
                  v55 = 8LL * v54;
                  v56 = (size_t)v41 + v55;
                  *((_DWORD *)v52 + 156) = v54;
                  *((_QWORD *)v52 + 73) = v56;
                  v57 = v55 + v56;
                  *((_QWORD *)v52 + 74) = v57;
                  v41 = (void *)(v55 + v57);
                  memmove(v51, (const void *)(*((_QWORD *)v52 + 71) + 328LL), v55);
                  memmove(
                    *((void **)v52 + 73),
                    (const void *)(*((_QWORD *)v52 + 71) + 328LL),
                    8LL * *((unsigned int *)v52 + 156));
                  *((_QWORD *)v52 + 75) = *(_QWORD *)(*((_QWORD *)v52 + 71) + 24LL);
                  *((_QWORD *)v52 + 76) = *(_QWORD *)(*((_QWORD *)v52 + 71) + 24LL);
                }
                ++v50;
              }
              while ( v50 < *((unsigned __int8 *)v42 - 1148) );
              v43 = v69;
            }
          }
          v42 += 322;
          v69 = --v43;
        }
        while ( v43 );
      }
      v65 = 1;
    }
    goto LABEL_82;
  }
  while ( 1 )
  {
    KeInitializeSchedulerSubNodeEnumerationContext(&v83, KeNodeBlock[v13]);
    if ( !(unsigned int)KeEnumerateNextSchedulerSubNodeInNode(&v83, &v69) )
      break;
LABEL_70:
    v73 = ++v13;
    if ( v13 >= (unsigned __int16)KeNumberNodes )
      goto LABEL_71;
  }
  while ( 1 )
  {
    v14 = v69;
    v80 = 0LL;
    v16 = *(_QWORD *)(v69 + 128);
    WORD4(v80) = *(_WORD *)(v69 + 136);
    v15 = WORD4(v80);
    if ( WORD4(v80) >= PpmCheckRegistered.Count )
      v17 = 0LL;
    else
      v17 = PpmCheckRegistered.Bitmap[WORD4(v80)];
    v18 = v17 & v16;
    *(_QWORD *)&v80 = v18;
    if ( !v18 )
      goto LABEL_69;
    v19 = 1288LL * v12;
    v20 = v19 + v6;
    *(_WORD *)(v20 + 4) = WORD4(v80);
    *(_WORD *)(v20 + 6) = v13;
    *(_WORD *)(v20 + 8) = *(_WORD *)(v14 + 140);
    v79 = v19 + v6;
    *(_QWORD *)(v20 + 16) = v18;
    if ( v12 >= v72
      || (v21 = (char *)v75 + v19, *(unsigned __int16 *)((char *)v75 + v19 + 6) != v13)
      || *((_WORD *)v21 + 4) != *(_WORD *)(v14 + 140) )
    {
      v21 = 0LL;
    }
    LODWORD(v74) = v12 + 1;
    v22 = 0;
    if ( v68 )
    {
      do
      {
        if ( !PpmHeteroIsMultiClassParkingEnabled() && (_DWORD)v23 )
          v23 = v24;
        LOWORD(v82) = v15;
        v25 = *(_QWORD *)(v20 + 1280) + 640 * v23;
        *((_QWORD *)&v81 + 1) = v18;
        *(_QWORD *)&v81 = 0LL;
        if ( !(unsigned int)KeEnumerateNextProcessor(&v70, (unsigned __int16 **)&v81) )
        {
          do
          {
            Prcb = KeGetPrcb(v70);
            if ( *(_BYTE *)(Prcb + 35336) == v22 )
            {
              ++*(_WORD *)v25;
              *(_QWORD *)(v25 + 24) |= *(_QWORD *)(Prcb + 200);
            }
          }
          while ( !(unsigned int)KeEnumerateNextProcessor(&v70, (unsigned __int16 **)&v81) );
          v20 = v79;
        }
        ++v22;
      }
      while ( v22 < v68 );
      v13 = v73;
      v7 = v71;
    }
    if ( v7 )
    {
      v27 = *(_WORD **)(v20 + 1280);
      v28 = v7;
      do
      {
        if ( *v27 )
          ++*(_BYTE *)(v20 + 12);
        v27 += 320;
        --v28;
      }
      while ( v28 );
    }
    if ( !*(_QWORD *)(v20 + 1272) && (PpmHeteroHgsContainmentState & 2) != 0 )
      PpmHeteroHgsRegisterContainmentGroups(v20, (__int64)v21, (__int64 *)&v80);
    v29 = *(_BYTE *)(v20 + 12);
    *(_BYTE *)(v20 + 1185) = v29 > 1u;
    if ( v29 <= 1u )
      *(_BYTE *)(v20 + 1184) |= 4u;
    v30 = 0;
    v31 = 0;
    if ( v29 )
    {
      do
      {
        v32 = v31++;
        v33 = (unsigned __int16 *)(*(_QWORD *)(v20 + 1280) + 640 * v32);
        LODWORD(v32) = *v33;
        v30 += v32;
        v33[3] = v32;
        v33[4] = v32;
        v33[5] = v32;
      }
      while ( v31 < *(unsigned __int8 *)(v20 + 12) );
    }
    v85 = 2097153LL;
    v67 += v30 + 2 * v30 + 3;
    memset_0(v86, 0, 0x100uLL);
    KeAddGroupAffinityEx((unsigned __int16 *)&v85, *(_WORD *)(v20 + 4), *(_QWORD *)(v20 + 16));
    if ( v21 )
      v34 = *((_QWORD *)v21 + 138);
    else
      v34 = 0LL;
    if ( (int)PpmIdleInitializeConcurrency(0LL, &v85, v20 + 1104, v34) < 0 )
      goto LABEL_82;
    if ( *(_BYTE *)(v20 + 1185) )
      break;
LABEL_68:
    *(_WORD *)(v20 + 10) = (unsigned __int8)v30;
    *(_WORD *)(v20 + 1170) = (unsigned __int8)v30;
    *(_WORD *)(v20 + 1174) = (unsigned __int8)v30;
    PpmParkRegisterRestriction(v20);
    v6 = Pool2;
    v12 = v74;
LABEL_69:
    if ( (unsigned int)KeEnumerateNextSchedulerSubNodeInNode(&v83, &v69) )
      goto LABEL_70;
  }
  v35 = 0;
  if ( !*(_BYTE *)(v20 + 12) )
  {
LABEL_67:
    v7 = v71;
    goto LABEL_68;
  }
  while ( 1 )
  {
    v36 = *(_QWORD *)(v20 + 1280);
    v37 = 640LL * v35;
    v38 = *(unsigned __int16 *)(v37 + v36);
    if ( (_WORD)v38 )
    {
      v85 = 2097153LL;
      v67 += v38 + 2 * v38 + 3;
      memset_0(v86, 0, 0x100uLL);
      KeAddGroupAffinityEx((unsigned __int16 *)&v85, *(_WORD *)(v20 + 4), *(_QWORD *)(v37 + v36 + 24));
      if ( v21 && v35 < (unsigned __int8)v21[12] )
        v39 = *(_QWORD *)(*((_QWORD *)v21 + 160) + v37 + 568);
      else
        v39 = 0LL;
      if ( (int)PpmIdleInitializeConcurrency(0LL, &v85, v37 + v36 + 568, v39) < 0 )
        break;
    }
    if ( ++v35 >= *(unsigned __int8 *)(v20 + 12) )
      goto LABEL_67;
  }
LABEL_82:
  v3 = v66;
LABEL_84:
  v58 = KeAcquireSpinLockRaiseToDpc(&PpmParkStateLock);
  v59 = 0LL;
  PpmParkNodes = Pool2 & -(__int64)(v65 != 0);
  if ( !v65 )
    v59 = P;
  PpmParkNumNodes = v65 != 0 ? v3 : 0;
  PpmParkHistograms = (unsigned __int64)P & -(__int64)(v65 != 0);
  KeReleaseSpinLock(&PpmParkStateLock, v58);
  PpmParkFreeAllParkNodes(v75, v65);
  if ( v59 )
    ExFreePoolWithTag(v59, 0x704D5050u);
  if ( v78 )
    ExFreePoolWithTag(v78, 0x704D5050u);
  PpmParkApplyPolicy(v61, v60, v62, v63);
  return PpmParkParkingAvailable();
}
