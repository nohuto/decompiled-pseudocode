/*
 * XREFs of PpmParkRegisterParkingEx @ 0x1405E1218
 * Callers:
 *     PpmParkRegisterParking @ 0x1405D72D0 (PpmParkRegisterParking.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14027E340 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeAddGroupAffinityEx @ 0x140287710 (KeAddGroupAffinityEx.c)
 *     KeAndAffinityEx2 @ 0x14032C8C0 (KeAndAffinityEx2.c)
 *     KeEnumerateNextSchedulerSubNodeInNode @ 0x14032FEC0 (KeEnumerateNextSchedulerSubNodeInNode.c)
 *     KeQueryNodeActiveAffinityEx @ 0x140330080 (KeQueryNodeActiveAffinityEx.c)
 *     PopExecuteOnTargetProcessors @ 0x140370234 (PopExecuteOnTargetProcessors.c)
 *     KeIsEmptyAffinityEx @ 0x140371960 (KeIsEmptyAffinityEx.c)
 *     ?KiCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z @ 0x14039FF30 (-KiCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z.c)
 *     KeInitializeSchedulerSubNodeEnumerationContext @ 0x140412310 (KeInitializeSchedulerSubNodeEnumerationContext.c)
 *     PpmParkApplyPolicy @ 0x1404E4B18 (PpmParkApplyPolicy.c)
 *     Feature_PpmParkExNuma_GnrOnly__private_IsEnabledDeviceUsageNoInline @ 0x1405DE8BC (Feature_PpmParkExNuma_GnrOnly__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_PpmParkExNuma__private_IsEnabledDeviceUsageNoInline @ 0x1405DE910 (Feature_PpmParkExNuma__private_IsEnabledDeviceUsageNoInline.c)
 *     PpmParkInitParkNode @ 0x1405E0E1C (PpmParkInitParkNode.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     PpmParkFreeAllParkNodes @ 0x14075D778 (PpmParkFreeAllParkNodes.c)
 *     PpmParkParkingAvailable @ 0x140A6B7A0 (PpmParkParkingAvailable.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 PpmParkRegisterParkingEx()
{
  unsigned int v0; // esi
  int v1; // r14d
  struct _KPRCB *CurrentPrcb; // rax
  unsigned __int64 v3; // rax
  bool v4; // zf
  char v5; // al
  unsigned int v6; // r12d
  _BYTE *v7; // rbx
  __int64 v8; // rdi
  unsigned int v9; // r15d
  unsigned int v10; // edi
  unsigned int v11; // ebx
  unsigned int v12; // ebx
  __int64 v13; // rax
  unsigned __int64 v14; // rcx
  __int64 v15; // r13
  __int64 v16; // r9
  unsigned int v17; // edx
  _QWORD *v18; // r8
  __int64 v19; // rcx
  unsigned int v20; // eax
  int v21; // edi
  __int64 v22; // r15
  __int64 v23; // r14
  char *v24; // rdx
  __int64 v25; // r14
  __int64 v26; // r12
  unsigned __int64 v27; // rcx
  __int64 v28; // r15
  _WORD *v29; // r13
  char *v30; // rdx
  void *v31; // rax
  void *v32; // rsi
  unsigned int *v33; // rbx
  __int64 v34; // r15
  unsigned int v35; // eax
  void *v36; // rcx
  size_t v37; // r8
  size_t v38; // rsi
  size_t v39; // rsi
  __int64 v40; // rcx
  unsigned int v41; // r14d
  void *v42; // rcx
  unsigned __int16 *v43; // rdi
  int v44; // eax
  unsigned int v45; // eax
  size_t v46; // r8
  size_t v47; // rsi
  size_t v48; // rsi
  KIRQL v49; // dl
  PVOID v50; // rbx
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // r8
  __int64 v54; // r9
  char v56; // [rsp+38h] [rbp-D0h]
  unsigned int v57; // [rsp+3Ch] [rbp-CCh]
  unsigned int v58; // [rsp+40h] [rbp-C8h]
  int v59; // [rsp+44h] [rbp-C4h] BYREF
  __int64 v60; // [rsp+48h] [rbp-C0h] BYREF
  PVOID v61; // [rsp+50h] [rbp-B8h]
  __int64 Pool2; // [rsp+58h] [rbp-B0h]
  PVOID P; // [rsp+60h] [rbp-A8h]
  PVOID v64; // [rsp+68h] [rbp-A0h]
  _QWORD v65[5]; // [rsp+70h] [rbp-98h] BYREF
  struct _KAFFINITY_EX v66; // [rsp+98h] [rbp-70h] BYREF

  memset_0(&v66, 0, sizeof(v66));
  v0 = 0;
  v1 = (unsigned __int8)PpmMaxCoreClasses;
  v60 = 0LL;
  PpmParkUseWholeNumaNode = 0;
  memset(&v65[1], 0, 24);
  if ( (unsigned __int8)PpmMaxCoreClasses < 2u )
    v1 = 2;
  v59 = v1;
  if ( (unsigned int)Feature_PpmParkExNuma__private_IsEnabledDeviceUsageNoInline() )
  {
    PpmParkUseWholeNumaNode = 1;
  }
  else if ( (unsigned int)Feature_PpmParkExNuma_GnrOnly__private_IsEnabledDeviceUsageNoInline() )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    if ( CurrentPrcb->CpuVendor != 2
      || CurrentPrcb->CpuType != 6
      || CurrentPrcb->CpuModel != 0xAD
      || (v3 = __readmsr(0x17u),
          v4 = (((((unsigned __int64)HIDWORD(v3) << 32) | (unsigned int)v3) >> 50) & 7) == 1,
          v5 = 1,
          !v4) )
    {
      v5 = 0;
    }
    PpmParkUseWholeNumaNode = v5;
  }
  v6 = 0;
  P = 0LL;
  v61 = 0LL;
  v64 = 0LL;
  v58 = 0;
  v56 = 0;
  if ( PpmParkNodes )
  {
    v6 = PpmParkNumNodes;
    v61 = (PVOID)PpmParkNodes;
    v64 = (PVOID)PpmParkHistograms;
    v58 = PpmParkNumNodes;
    if ( PpmParkNumNodes )
    {
      v7 = (_BYTE *)(PpmParkNodes + 1184);
      v8 = (unsigned int)PpmParkNumNodes;
      do
      {
        if ( *((_QWORD *)v7 - 10) && (*v7 & 8) != 0 )
          PopExecuteOnTargetProcessors((__int64)(v7 - 1136), (__int64)PpmIdleRemoveConcurrency, 0LL, 0LL);
        v7 += 1296;
        --v8;
      }
      while ( v8 );
    }
  }
  v9 = 0;
  v10 = 0;
  if ( PpmParkUseWholeNumaNode )
  {
    if ( !KeNumberNodes )
      goto LABEL_35;
    do
    {
      *(_QWORD *)&v66.Count = 2097153LL;
      v11 = v10;
      memset_0(&v66.8, 0, sizeof(v66.8));
      KeQueryNodeActiveAffinityEx(v0, &v66.Count, 0LL);
      KeAndAffinityEx2(&v66, &PpmCheckRegistered, (__int64)&v66);
      ++v10;
      if ( (unsigned int)KeIsEmptyAffinityEx(&v66.Count) )
        v10 = v11;
      ++v0;
    }
    while ( v0 < (unsigned __int16)KeNumberNodes );
    v9 = 0;
    v0 = 0;
  }
  else
  {
    v12 = 0;
    if ( !KeNumberNodes )
      goto LABEL_35;
    do
    {
      KeInitializeSchedulerSubNodeEnumerationContext(&v65[1], KeNodeBlock[v12]);
      while ( !(unsigned int)KeEnumerateNextSchedulerSubNodeInNode(&v65[1], &v60) )
      {
        v13 = *(unsigned __int16 *)(v60 + 136);
        if ( (unsigned __int16)v13 >= PpmCheckRegistered.Count )
          v14 = 0LL;
        else
          v14 = PpmCheckRegistered.Bitmap[v13];
        if ( (v14 & *(_QWORD *)(v60 + 128)) != 0 )
          ++v10;
      }
      ++v12;
    }
    while ( v12 < (unsigned __int16)KeNumberNodes );
  }
  v6 = v58;
  LOBYTE(v1) = v59;
LABEL_35:
  Pool2 = ExAllocatePool2(0x40uLL, 1296 * v10, 0x704D5050u);
  v15 = Pool2;
  if ( !Pool2 )
    goto LABEL_79;
  v57 = v10;
  v16 = ExAllocatePool2(0x40uLL, 640 * v10 * (unsigned __int8)v1, 0x704D5050u);
  if ( v16 )
  {
    v17 = 0;
    if ( v10 )
    {
      v18 = (_QWORD *)(v15 + 1288);
      do
      {
        v19 = v17 * (unsigned __int8)v1;
        ++v17;
        *v18 = v16 + 640 * v19;
        v18 += 162;
      }
      while ( v17 < v10 );
    }
    v20 = 0;
    v21 = 0;
    v59 = 0;
    if ( KeNumberNodes )
    {
      while ( 1 )
      {
        if ( PpmParkUseWholeNumaNode )
        {
          *(_QWORD *)&v66.Count = 2097153LL;
          memset_0(&v66.8, 0, sizeof(v66.8));
          KeQueryNodeActiveAffinityEx(v21, &v66.Count, 0LL);
          KeAndAffinityEx2(&v66, &PpmCheckRegistered, (__int64)&v66);
          if ( !(unsigned int)KeIsEmptyAffinityEx(&v66.Count) )
          {
            v22 = 1296LL * v0;
            v23 = v22 + v15;
            *(_WORD *)(v23 + 6) = v21;
            *(_QWORD *)(v23 + 48) = 2097153LL;
            memset_0((void *)(v22 + v15 + 56), 0, 0x100uLL);
            KiCopyAffinityEx((struct _KAFFINITY_EX *)(v23 + 48), *(_WORD *)(v23 + 50), &v66);
            if ( v0 >= v6 || (v24 = (char *)v61 + v22, *(unsigned __int16 *)((char *)v61 + v22 + 6) != v21) )
              v24 = 0LL;
            ++v0;
            if ( (int)PpmParkInitParkNode(v22 + v15, (__int64)v24, &v59) < 0 )
              goto LABEL_76;
          }
        }
        else
        {
          KeInitializeSchedulerSubNodeEnumerationContext(&v65[1], KeNodeBlock[v21]);
          while ( !(unsigned int)KeEnumerateNextSchedulerSubNodeInNode(&v65[1], &v60) )
          {
            v25 = v60;
            v26 = *(unsigned __int16 *)(v60 + 136);
            if ( (unsigned __int16)v26 >= PpmCheckRegistered.Count )
              v27 = 0LL;
            else
              v27 = PpmCheckRegistered.Bitmap[v26];
            v28 = v27 & *(_QWORD *)(v60 + 128);
            if ( v28 )
            {
              v29 = (_WORD *)(1296LL * v0 + v15);
              v65[0] = 1296LL * v0;
              v29[3] = v21;
              v29[4] = *(_WORD *)(v25 + 140);
              *((_QWORD *)v29 + 6) = 2097153LL;
              memset_0(v29 + 28, 0, 0x100uLL);
              KeAddGroupAffinityEx(v29 + 24, v26, v28);
              if ( v0 >= v58
                || (v30 = (char *)v61 + v65[0], *(unsigned __int16 *)((char *)v61 + v65[0] + 6) != v21)
                || *((_WORD *)v30 + 4) != *(_WORD *)(v25 + 140) )
              {
                v30 = 0LL;
              }
              ++v0;
              if ( (int)PpmParkInitParkNode((__int64)v29, (__int64)v30, &v59) < 0 )
                goto LABEL_76;
              v15 = Pool2;
            }
          }
        }
        if ( ++v21 >= (unsigned int)(unsigned __int16)KeNumberNodes )
          break;
        v6 = v58;
      }
      v20 = v59;
    }
    if ( v0 != v57 )
      goto LABEL_76;
    v31 = (void *)ExAllocatePool2(0x40uLL, 8LL * v20, 0x704D5050u);
    P = v31;
    if ( v31 )
    {
      v32 = v31;
      if ( v57 )
      {
        v33 = (unsigned int *)(v15 + 1160);
        v60 = v57;
        v34 = v57;
        do
        {
          v35 = *((unsigned __int16 *)v33 - 575);
          v36 = v32;
          *((_QWORD *)v33 - 6) = v32;
          v37 = 8LL * ++v35;
          v38 = (size_t)v32 + v37;
          *v33 = v35;
          *((_QWORD *)v33 - 5) = v38;
          v39 = v37 + v38;
          *((_QWORD *)v33 - 4) = v39;
          v32 = (void *)(v37 + v39);
          memmove(v36, (const void *)(*((_QWORD *)v33 - 7) + 328LL), v37);
          memmove(*((void **)v33 - 5), (const void *)(*((_QWORD *)v33 - 7) + 328LL), 8LL * *v33);
          v40 = *((_QWORD *)v33 - 7);
          *((_QWORD *)v33 - 3) = *(_QWORD *)(v40 + 24);
          *((_QWORD *)v33 - 2) = *(_QWORD *)(v40 + 24);
          if ( *((_BYTE *)v33 + 25) )
          {
            v41 = 0;
            if ( *((_BYTE *)v33 - 1148) )
            {
              do
              {
                v42 = v32;
                v43 = (unsigned __int16 *)(*((_QWORD *)v33 + 16) + 640LL * v41);
                v44 = *v43;
                if ( (_WORD)v44 )
                {
                  *((_QWORD *)v43 + 72) = v32;
                  v45 = v44 + 1;
                  v46 = 8LL * v45;
                  v47 = (size_t)v32 + v46;
                  *((_DWORD *)v43 + 156) = v45;
                  *((_QWORD *)v43 + 73) = v47;
                  v48 = v46 + v47;
                  *((_QWORD *)v43 + 74) = v48;
                  v32 = (void *)(v46 + v48);
                  memmove(v42, (const void *)(*((_QWORD *)v43 + 71) + 328LL), v46);
                  memmove(
                    *((void **)v43 + 73),
                    (const void *)(*((_QWORD *)v43 + 71) + 328LL),
                    8LL * *((unsigned int *)v43 + 156));
                  *((_QWORD *)v43 + 75) = *(_QWORD *)(*((_QWORD *)v43 + 71) + 24LL);
                  *((_QWORD *)v43 + 76) = *(_QWORD *)(*((_QWORD *)v43 + 71) + 24LL);
                }
                ++v41;
              }
              while ( v41 < *((unsigned __int8 *)v33 - 1148) );
              v34 = v60;
            }
          }
          v33 += 324;
          v60 = --v34;
        }
        while ( v34 );
      }
      v56 = 1;
LABEL_76:
      v9 = v57;
      goto LABEL_79;
    }
    v9 = v57;
  }
  else
  {
    v9 = v10;
  }
LABEL_79:
  v49 = KeAcquireSpinLockRaiseToDpc(&PpmParkStateLock);
  v50 = 0LL;
  PpmParkNodes = Pool2 & -(__int64)(v56 != 0);
  if ( !v56 )
    v50 = P;
  PpmParkNumNodes = v56 != 0 ? v9 : 0;
  PpmParkHistograms = (unsigned __int64)P & -(__int64)(v56 != 0);
  KeReleaseSpinLock(&PpmParkStateLock, v49);
  PpmParkFreeAllParkNodes(v61, v56);
  if ( v50 )
    ExFreePoolWithTag(v50, 0x704D5050u);
  if ( v64 )
    ExFreePoolWithTag(v64, 0x704D5050u);
  PpmParkApplyPolicy(v52, v51, v53, v54);
  return PpmParkParkingAvailable();
}
