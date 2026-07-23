/*
 * XREFs of PpmParkRegisterParking @ 0x1405D72D0
 * Callers:
 *     PpmCheckInitProcessors @ 0x140AC506C (PpmCheckInitProcessors.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14027E340 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeAddGroupAffinityEx @ 0x140287710 (KeAddGroupAffinityEx.c)
 *     KeGetPrcb @ 0x1402B0A10 (KeGetPrcb.c)
 *     KeEnumerateNextSchedulerSubNodeInNode @ 0x14032FEC0 (KeEnumerateNextSchedulerSubNodeInNode.c)
 *     PopExecuteOnTargetProcessors @ 0x140370234 (PopExecuteOnTargetProcessors.c)
 *     KeEnumerateNextProcessor @ 0x140405740 (KeEnumerateNextProcessor.c)
 *     PpmHeteroIsMultiClassParkingEnabled @ 0x140407990 (PpmHeteroIsMultiClassParkingEnabled.c)
 *     KeInitializeSchedulerSubNodeEnumerationContext @ 0x140412310 (KeInitializeSchedulerSubNodeEnumerationContext.c)
 *     PpmParkApplyPolicy @ 0x1404E4B18 (PpmParkApplyPolicy.c)
 *     Feature_PpmParkEx__private_IsEnabledDeviceUsageNoInline @ 0x1405B2224 (Feature_PpmParkEx__private_IsEnabledDeviceUsageNoInline.c)
 *     PpmHeteroHgsRegisterContainmentGroups @ 0x1405D49AC (PpmHeteroHgsRegisterContainmentGroups.c)
 *     PpmParkRegisterRestriction @ 0x1405D7B9C (PpmParkRegisterRestriction.c)
 *     PpmParkRegisterParkingEx @ 0x1405E1218 (PpmParkRegisterParkingEx.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     PpmIdleInitializeConcurrency @ 0x140748410 (PpmIdleInitializeConcurrency.c)
 *     PpmParkFreeAllParkNodes @ 0x14075D778 (PpmParkFreeAllParkNodes.c)
 *     PpmParkParkingAvailable @ 0x140A6B7A0 (PpmParkParkingAvailable.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
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
  unsigned int v12; // ebx
  unsigned int v13; // esi
  unsigned int v14; // r12d
  __int64 v15; // rcx
  __int16 v16; // r14
  __int64 v17; // r15
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // r15
  __int64 v20; // rdx
  __int64 v21; // rbx
  char *v22; // r13
  unsigned __int8 v23; // si
  __int64 v24; // rdx
  unsigned int v25; // ecx
  __int64 v26; // rdi
  __int64 Prcb; // rax
  _WORD *v28; // rax
  __int64 v29; // rcx
  unsigned __int8 v30; // cl
  int v31; // r14d
  unsigned int v32; // edx
  __int64 v33; // rax
  unsigned __int16 *v34; // rcx
  __int64 v35; // r9
  unsigned int v36; // edi
  __int64 v37; // r15
  __int64 v38; // rsi
  int v39; // eax
  __int64 v40; // r9
  void *v41; // rax
  void *v42; // rsi
  unsigned int *v43; // rbx
  __int64 v44; // r15
  unsigned int v45; // eax
  void *v46; // rcx
  size_t v47; // r8
  size_t v48; // rsi
  size_t v49; // rsi
  __int64 v50; // rcx
  unsigned int v51; // r14d
  void *v52; // rcx
  unsigned __int16 *v53; // rdi
  int v54; // eax
  unsigned int v55; // eax
  size_t v56; // r8
  size_t v57; // rsi
  size_t v58; // rsi
  KIRQL v59; // dl
  PVOID v60; // rbx
  __int64 v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // r8
  __int64 v64; // r9
  char v66; // [rsp+38h] [rbp-D0h]
  unsigned int v67; // [rsp+3Ch] [rbp-CCh]
  unsigned int v68; // [rsp+40h] [rbp-C8h]
  unsigned __int8 v69; // [rsp+44h] [rbp-C4h]
  __int64 v70; // [rsp+48h] [rbp-C0h] BYREF
  unsigned int v71; // [rsp+50h] [rbp-B8h] BYREF
  unsigned int v72; // [rsp+54h] [rbp-B4h]
  unsigned int v73; // [rsp+58h] [rbp-B0h]
  unsigned int v74; // [rsp+5Ch] [rbp-ACh]
  __int64 v75; // [rsp+60h] [rbp-A8h]
  PVOID v76; // [rsp+68h] [rbp-A0h]
  __int64 Pool2; // [rsp+70h] [rbp-98h]
  PVOID P; // [rsp+78h] [rbp-90h]
  PVOID v79; // [rsp+80h] [rbp-88h]
  __int64 v80; // [rsp+88h] [rbp-80h]
  __int128 v81; // [rsp+90h] [rbp-78h] BYREF
  __int128 v82; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v83; // [rsp+B0h] [rbp-58h]
  __int128 v84; // [rsp+B8h] [rbp-50h] BYREF
  __int64 v85; // [rsp+C8h] [rbp-40h]
  __int64 v86; // [rsp+D8h] [rbp-30h] BYREF
  _BYTE v87[264]; // [rsp+E0h] [rbp-28h] BYREF

  memset_0(&v86, 0, 0x108uLL);
  v83 = 0LL;
  v71 = 0;
  v70 = 0LL;
  v82 = 0LL;
  v85 = 0LL;
  v81 = 0LL;
  v84 = 0LL;
  if ( (unsigned int)Feature_PpmParkEx__private_IsEnabledDeviceUsageNoInline() )
    return PpmParkRegisterParkingEx();
  P = 0LL;
  v0 = PpmMaxCoreClasses;
  v76 = 0LL;
  if ( (unsigned __int8)PpmMaxCoreClasses < 2u )
    v0 = 2;
  v79 = 0LL;
  v69 = v0;
  v73 = 0;
  v66 = 0;
  if ( PpmParkNodes )
  {
    v76 = (PVOID)PpmParkNodes;
    v79 = (PVOID)PpmParkHistograms;
    v73 = PpmParkNumNodes;
    if ( PpmParkNumNodes )
    {
      v1 = (_BYTE *)(PpmParkNodes + 1184);
      v2 = (unsigned int)PpmParkNumNodes;
      do
      {
        if ( *((_QWORD *)v1 - 10) && (*v1 & 8) != 0 )
        {
          v86 = 2097153LL;
          memset_0(v87, 0, 0x100uLL);
          KeAddGroupAffinityEx((unsigned __int16 *)&v86, *((_WORD *)v1 - 590), *((_QWORD *)v1 - 146));
          PopExecuteOnTargetProcessors((__int64)&v86, (__int64)PpmIdleRemoveConcurrency, 0LL, 0LL);
        }
        v1 += 1296;
        --v2;
      }
      while ( v2 );
    }
  }
  v3 = 0;
  v4 = 0;
  for ( i = 0; i < (unsigned __int16)KeNumberNodes; ++i )
  {
    KeInitializeSchedulerSubNodeEnumerationContext(&v84, KeNodeBlock[i]);
    while ( !(unsigned int)KeEnumerateNextSchedulerSubNodeInNode(&v84, &v70) )
      ++v4;
  }
  Pool2 = ExAllocatePool2(0x40uLL, 1296 * v4, 0x704D5050u);
  v6 = Pool2;
  if ( !Pool2 )
    goto LABEL_85;
  v7 = v0;
  v67 = v4;
  v72 = v0;
  v8 = ExAllocatePool2(0x40uLL, 640 * v4 * v0, 0x704D5050u);
  if ( !v8 )
  {
    v3 = v4;
    goto LABEL_85;
  }
  v9 = 0;
  if ( v4 )
  {
    v10 = (_QWORD *)(v6 + 1288);
    do
    {
      v11 = v9 * v0;
      ++v9;
      *v10 = v8 + 640 * v11;
      v10 += 162;
    }
    while ( v9 < v4 );
  }
  v12 = 0;
  v68 = 0;
  v13 = 0;
  v14 = 0;
  v74 = 0;
  if ( !KeNumberNodes )
  {
LABEL_72:
    v41 = (void *)ExAllocatePool2(0x40uLL, 8LL * v12, 0x704D5050u);
    P = v41;
    if ( v41 )
    {
      v42 = v41;
      if ( v67 )
      {
        v43 = (unsigned int *)(v6 + 1160);
        v70 = v67;
        v44 = v67;
        do
        {
          v45 = *((unsigned __int16 *)v43 - 575);
          v46 = v42;
          *((_QWORD *)v43 - 6) = v42;
          v47 = 8LL * ++v45;
          v48 = (size_t)v42 + v47;
          *v43 = v45;
          *((_QWORD *)v43 - 5) = v48;
          v49 = v47 + v48;
          *((_QWORD *)v43 - 4) = v49;
          v42 = (void *)(v47 + v49);
          memmove(v46, (const void *)(*((_QWORD *)v43 - 7) + 328LL), v47);
          memmove(*((void **)v43 - 5), (const void *)(*((_QWORD *)v43 - 7) + 328LL), 8LL * *v43);
          v50 = *((_QWORD *)v43 - 7);
          *((_QWORD *)v43 - 3) = *(_QWORD *)(v50 + 24);
          *((_QWORD *)v43 - 2) = *(_QWORD *)(v50 + 24);
          if ( *((_BYTE *)v43 + 25) )
          {
            v51 = 0;
            if ( *((_BYTE *)v43 - 1148) )
            {
              do
              {
                v52 = v42;
                v53 = (unsigned __int16 *)(*((_QWORD *)v43 + 16) + 640LL * v51);
                v54 = *v53;
                if ( (_WORD)v54 )
                {
                  *((_QWORD *)v53 + 72) = v42;
                  v55 = v54 + 1;
                  v56 = 8LL * v55;
                  v57 = (size_t)v42 + v56;
                  *((_DWORD *)v53 + 156) = v55;
                  *((_QWORD *)v53 + 73) = v57;
                  v58 = v56 + v57;
                  *((_QWORD *)v53 + 74) = v58;
                  v42 = (void *)(v56 + v58);
                  memmove(v52, (const void *)(*((_QWORD *)v53 + 71) + 328LL), v56);
                  memmove(
                    *((void **)v53 + 73),
                    (const void *)(*((_QWORD *)v53 + 71) + 328LL),
                    8LL * *((unsigned int *)v53 + 156));
                  *((_QWORD *)v53 + 75) = *(_QWORD *)(*((_QWORD *)v53 + 71) + 24LL);
                  *((_QWORD *)v53 + 76) = *(_QWORD *)(*((_QWORD *)v53 + 71) + 24LL);
                }
                ++v51;
              }
              while ( v51 < *((unsigned __int8 *)v43 - 1148) );
              v44 = v70;
            }
          }
          v43 += 324;
          v70 = --v44;
        }
        while ( v44 );
      }
      v66 = 1;
    }
    goto LABEL_83;
  }
  while ( 1 )
  {
    KeInitializeSchedulerSubNodeEnumerationContext(&v84, KeNodeBlock[v14]);
    if ( !(unsigned int)KeEnumerateNextSchedulerSubNodeInNode(&v84, &v70) )
      break;
LABEL_70:
    v74 = ++v14;
    if ( v14 >= (unsigned __int16)KeNumberNodes )
    {
      v12 = v68;
      goto LABEL_72;
    }
  }
  while ( 1 )
  {
    v15 = v70;
    v81 = 0LL;
    v17 = *(_QWORD *)(v70 + 128);
    WORD4(v81) = *(_WORD *)(v70 + 136);
    v16 = WORD4(v81);
    if ( WORD4(v81) >= PpmCheckRegistered.Count )
      v18 = 0LL;
    else
      v18 = PpmCheckRegistered.Bitmap[WORD4(v81)];
    v19 = v18 & v17;
    *(_QWORD *)&v81 = v19;
    if ( !v19 )
      goto LABEL_69;
    v20 = 1296LL * v13;
    v21 = v20 + v6;
    *(_WORD *)(v21 + 4) = WORD4(v81);
    *(_WORD *)(v21 + 6) = v14;
    *(_WORD *)(v21 + 8) = *(_WORD *)(v15 + 140);
    v80 = v20 + v6;
    *(_QWORD *)(v21 + 16) = v19;
    if ( v13 >= v73
      || (v22 = (char *)v76 + v20, *(unsigned __int16 *)((char *)v76 + v20 + 6) != v14)
      || *((_WORD *)v22 + 4) != *(_WORD *)(v15 + 140) )
    {
      v22 = 0LL;
    }
    LODWORD(v75) = v13 + 1;
    v23 = 0;
    if ( v69 )
    {
      do
      {
        if ( !PpmHeteroIsMultiClassParkingEnabled() && (_DWORD)v24 )
          v24 = v25;
        LOWORD(v83) = v16;
        v26 = *(_QWORD *)(v21 + 1288) + 640 * v24;
        *((_QWORD *)&v82 + 1) = v19;
        *(_QWORD *)&v82 = 0LL;
        if ( !(unsigned int)KeEnumerateNextProcessor(&v71, (unsigned __int16 **)&v82) )
        {
          do
          {
            Prcb = KeGetPrcb(v71);
            if ( *(_BYTE *)(Prcb + 35336) == v23 )
            {
              ++*(_WORD *)v26;
              *(_QWORD *)(v26 + 24) |= *(_QWORD *)(Prcb + 200);
            }
          }
          while ( !(unsigned int)KeEnumerateNextProcessor(&v71, (unsigned __int16 **)&v82) );
          v21 = v80;
        }
        ++v23;
      }
      while ( v23 < v69 );
      v14 = v74;
      v7 = v72;
    }
    if ( v7 )
    {
      v28 = *(_WORD **)(v21 + 1288);
      v29 = v7;
      do
      {
        if ( *v28 )
          ++*(_BYTE *)(v21 + 12);
        v28 += 320;
        --v29;
      }
      while ( v29 );
    }
    if ( !*(_QWORD *)(v21 + 1280) && (PpmHeteroHgsContainmentState & 2) != 0 )
      PpmHeteroHgsRegisterContainmentGroups(v21, (__int64)v22, (__int64 *)&v81);
    v30 = *(_BYTE *)(v21 + 12);
    *(_BYTE *)(v21 + 1185) = v30 > 1u;
    if ( v30 <= 1u )
      *(_BYTE *)(v21 + 1184) |= 4u;
    v31 = 0;
    v32 = 0;
    if ( v30 )
    {
      do
      {
        v33 = v32++;
        v34 = (unsigned __int16 *)(*(_QWORD *)(v21 + 1288) + 640 * v33);
        LODWORD(v33) = *v34;
        v31 += v33;
        v34[3] = v33;
        v34[4] = v33;
        v34[5] = v33;
      }
      while ( v32 < *(unsigned __int8 *)(v21 + 12) );
    }
    v86 = 2097153LL;
    v68 += v31 + 2 * v31 + 3;
    memset_0(v87, 0, 0x100uLL);
    KeAddGroupAffinityEx((unsigned __int16 *)&v86, *(_WORD *)(v21 + 4), *(_QWORD *)(v21 + 16));
    if ( v22 )
      v35 = *((_QWORD *)v22 + 138);
    else
      v35 = 0LL;
    if ( (int)PpmIdleInitializeConcurrency(0LL, &v86, v21 + 1104, v35) < 0 )
      goto LABEL_83;
    if ( *(_BYTE *)(v21 + 1185) )
      break;
LABEL_68:
    *(_WORD *)(v21 + 10) = (unsigned __int8)v31;
    *(_WORD *)(v21 + 1170) = (unsigned __int8)v31;
    *(_WORD *)(v21 + 1174) = (unsigned __int8)v31;
    PpmParkRegisterRestriction(v21);
    v6 = Pool2;
    v13 = v75;
LABEL_69:
    if ( (unsigned int)KeEnumerateNextSchedulerSubNodeInNode(&v84, &v70) )
      goto LABEL_70;
  }
  v36 = 0;
  if ( !*(_BYTE *)(v21 + 12) )
  {
LABEL_67:
    v7 = v72;
    goto LABEL_68;
  }
  while ( 1 )
  {
    v37 = *(_QWORD *)(v21 + 1288);
    v38 = 640LL * v36;
    v39 = *(unsigned __int16 *)(v38 + v37);
    if ( (_WORD)v39 )
    {
      v86 = 2097153LL;
      v68 += v39 + 2 * v39 + 3;
      memset_0(v87, 0, 0x100uLL);
      KeAddGroupAffinityEx((unsigned __int16 *)&v86, *(_WORD *)(v21 + 4), *(_QWORD *)(v38 + v37 + 24));
      if ( v22 && v36 < (unsigned __int8)v22[12] )
        v40 = *(_QWORD *)(*((_QWORD *)v22 + 161) + v38 + 568);
      else
        v40 = 0LL;
      if ( (int)PpmIdleInitializeConcurrency(0LL, &v86, v38 + v37 + 568, v40) < 0 )
        break;
    }
    if ( ++v36 >= *(unsigned __int8 *)(v21 + 12) )
      goto LABEL_67;
  }
LABEL_83:
  v3 = v67;
LABEL_85:
  v59 = KeAcquireSpinLockRaiseToDpc(&PpmParkStateLock);
  v60 = 0LL;
  PpmParkNodes = Pool2 & -(__int64)(v66 != 0);
  if ( !v66 )
    v60 = P;
  PpmParkNumNodes = v66 != 0 ? v3 : 0;
  PpmParkHistograms = (unsigned __int64)P & -(__int64)(v66 != 0);
  KeReleaseSpinLock(&PpmParkStateLock, v59);
  PpmParkFreeAllParkNodes(v76, v66);
  if ( v60 )
    ExFreePoolWithTag(v60, 0x704D5050u);
  if ( v79 )
    ExFreePoolWithTag(v79, 0x704D5050u);
  PpmParkApplyPolicy(v62, v61, v63, v64);
  return PpmParkParkingAvailable();
}
