/*
 * XREFs of PpmParkRegisterParkingEx @ 0x1405E3C90
 * Callers:
 *     PpmParkRegisterParking @ 0x1405D9FB4 (PpmParkRegisterParking.c)
 * Callees:
 *     KeAndAffinityEx2 @ 0x1402052E0 (KeAndAffinityEx2.c)
 *     KeEnumerateNextSchedulerSubNodeInNode @ 0x1402088E0 (KeEnumerateNextSchedulerSubNodeInNode.c)
 *     KeQueryNodeActiveAffinityEx @ 0x140208AA0 (KeQueryNodeActiveAffinityEx.c)
 *     KeReleaseSpinLock @ 0x14024DD30 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140254B20 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeAddGroupAffinityEx @ 0x140257100 (KeAddGroupAffinityEx.c)
 *     PopExecuteOnTargetProcessors @ 0x1403529A4 (PopExecuteOnTargetProcessors.c)
 *     ?KiCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z @ 0x1403B1720 (-KiCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z.c)
 *     KeIsEmptyAffinityEx @ 0x1403B55D0 (KeIsEmptyAffinityEx.c)
 *     KeInitializeSchedulerSubNodeEnumerationContext @ 0x14041DF40 (KeInitializeSchedulerSubNodeEnumerationContext.c)
 *     PpmParkApplyPolicy @ 0x1404ED2F4 (PpmParkApplyPolicy.c)
 *     Feature_PpmParkExNuma_GnrOnly__private_IsEnabledDeviceUsageNoInline @ 0x1405E129C (Feature_PpmParkExNuma_GnrOnly__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_PpmParkExNuma__private_IsEnabledDeviceUsageNoInline @ 0x1405E12F0 (Feature_PpmParkExNuma__private_IsEnabledDeviceUsageNoInline.c)
 *     PpmParkInitParkNode @ 0x1405E3894 (PpmParkInitParkNode.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memmove @ 0x1406BFC40 (memmove.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     PpmParkFreeAllParkNodes @ 0x14075E7D8 (PpmParkFreeAllParkNodes.c)
 *     PpmParkParkingAvailable @ 0x140A723C0 (PpmParkParkingAvailable.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
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
  int v20; // edi
  __int64 v21; // r15
  __int64 v22; // r14
  char *v23; // rdx
  __int64 v24; // r14
  __int64 v25; // r12
  unsigned __int64 v26; // rcx
  __int64 v27; // r15
  _WORD *v28; // r13
  char *v29; // rdx
  void *v30; // rax
  void *v31; // rsi
  unsigned int *v32; // rbx
  __int64 v33; // r15
  unsigned int v34; // eax
  void *v35; // rcx
  size_t v36; // r8
  size_t v37; // rsi
  size_t v38; // rsi
  __int64 v39; // rcx
  unsigned int v40; // r14d
  void *v41; // rcx
  unsigned __int16 *v42; // rdi
  int v43; // eax
  unsigned int v44; // eax
  size_t v45; // r8
  size_t v46; // rsi
  size_t v47; // rsi
  KIRQL v48; // dl
  PVOID v49; // rbx
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r8
  __int64 v53; // r9
  char v55; // [rsp+38h] [rbp-D0h]
  unsigned int v56; // [rsp+3Ch] [rbp-CCh]
  unsigned int v57; // [rsp+40h] [rbp-C8h]
  int v58; // [rsp+44h] [rbp-C4h] BYREF
  __int64 v59; // [rsp+48h] [rbp-C0h] BYREF
  PVOID v60; // [rsp+50h] [rbp-B8h]
  __int64 Pool2; // [rsp+58h] [rbp-B0h]
  PVOID P; // [rsp+60h] [rbp-A8h]
  PVOID v63; // [rsp+68h] [rbp-A0h]
  _QWORD v64[5]; // [rsp+70h] [rbp-98h] BYREF
  struct _KAFFINITY_EX v65; // [rsp+98h] [rbp-70h] BYREF

  memset_0(&v65, 0, sizeof(v65));
  v0 = 0;
  v1 = (unsigned __int8)PpmMaxCoreClasses;
  v59 = 0LL;
  PpmParkUseWholeNumaNode = 0;
  memset(&v64[1], 0, 24);
  if ( (unsigned __int8)PpmMaxCoreClasses < 2u )
    v1 = 2;
  v58 = v1;
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
  v60 = 0LL;
  v63 = 0LL;
  v57 = 0;
  v55 = 0;
  if ( PpmParkNodes )
  {
    v6 = PpmParkNumNodes;
    v60 = (PVOID)PpmParkNodes;
    v63 = (PVOID)PpmParkHistograms;
    v57 = PpmParkNumNodes;
    if ( PpmParkNumNodes )
    {
      v7 = (_BYTE *)(PpmParkNodes + 1184);
      v8 = (unsigned int)PpmParkNumNodes;
      do
      {
        if ( *((_QWORD *)v7 - 10) && (*v7 & 8) != 0 )
          PopExecuteOnTargetProcessors((__int64)(v7 - 1136), (__int64)PpmIdleRemoveConcurrency, 0LL, 0LL);
        v7 += 1288;
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
      *(_QWORD *)&v65.Count = 2097153LL;
      v11 = v10;
      memset_0(&v65.8, 0, sizeof(v65.8));
      KeQueryNodeActiveAffinityEx(v0, &v65.Count, 0LL);
      KeAndAffinityEx2(&v65, &PpmCheckRegistered, (__int64)&v65);
      ++v10;
      if ( (unsigned int)KeIsEmptyAffinityEx(&v65.Count) )
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
      KeInitializeSchedulerSubNodeEnumerationContext(&v64[1], KeNodeBlock[v12]);
      while ( !(unsigned int)KeEnumerateNextSchedulerSubNodeInNode(&v64[1], &v59) )
      {
        v13 = *(unsigned __int16 *)(v59 + 136);
        if ( (unsigned __int16)v13 >= PpmCheckRegistered.Count )
          v14 = 0LL;
        else
          v14 = PpmCheckRegistered.Bitmap[v13];
        if ( (v14 & *(_QWORD *)(v59 + 128)) != 0 )
          ++v10;
      }
      ++v12;
    }
    while ( v12 < (unsigned __int16)KeNumberNodes );
  }
  v6 = v57;
  LOBYTE(v1) = v58;
LABEL_35:
  Pool2 = ExAllocatePool2(0x40uLL);
  v15 = Pool2;
  if ( !Pool2 )
    goto LABEL_78;
  v56 = v10;
  v16 = ExAllocatePool2(0x40uLL);
  if ( v16 )
  {
    v17 = 0;
    if ( v10 )
    {
      v18 = (_QWORD *)(v15 + 1280);
      do
      {
        v19 = v17 * (unsigned __int8)v1;
        ++v17;
        *v18 = v16 + 640 * v19;
        v18 += 161;
      }
      while ( v17 < v10 );
    }
    v20 = 0;
    v58 = 0;
    if ( KeNumberNodes )
    {
      while ( 1 )
      {
        if ( PpmParkUseWholeNumaNode )
        {
          *(_QWORD *)&v65.Count = 2097153LL;
          memset_0(&v65.8, 0, sizeof(v65.8));
          KeQueryNodeActiveAffinityEx(v20, &v65.Count, 0LL);
          KeAndAffinityEx2(&v65, &PpmCheckRegistered, (__int64)&v65);
          if ( !(unsigned int)KeIsEmptyAffinityEx(&v65.Count) )
          {
            v21 = 1288LL * v0;
            v22 = v21 + v15;
            *(_WORD *)(v22 + 6) = v20;
            *(_QWORD *)(v22 + 48) = 2097153LL;
            memset_0((void *)(v21 + v15 + 56), 0, 0x100uLL);
            KiCopyAffinityEx((struct _KAFFINITY_EX *)(v22 + 48), *(_WORD *)(v22 + 50), &v65);
            if ( v0 >= v6 || (v23 = (char *)v60 + v21, *(unsigned __int16 *)((char *)v60 + v21 + 6) != v20) )
              v23 = 0LL;
            ++v0;
            if ( (int)PpmParkInitParkNode(v21 + v15, (__int64)v23, &v58) < 0 )
              goto LABEL_75;
          }
        }
        else
        {
          KeInitializeSchedulerSubNodeEnumerationContext(&v64[1], KeNodeBlock[v20]);
          while ( !(unsigned int)KeEnumerateNextSchedulerSubNodeInNode(&v64[1], &v59) )
          {
            v24 = v59;
            v25 = *(unsigned __int16 *)(v59 + 136);
            if ( (unsigned __int16)v25 >= PpmCheckRegistered.Count )
              v26 = 0LL;
            else
              v26 = PpmCheckRegistered.Bitmap[v25];
            v27 = v26 & *(_QWORD *)(v59 + 128);
            if ( v27 )
            {
              v28 = (_WORD *)(1288LL * v0 + v15);
              v64[0] = 1288LL * v0;
              v28[3] = v20;
              v28[4] = *(_WORD *)(v24 + 140);
              *((_QWORD *)v28 + 6) = 2097153LL;
              memset_0(v28 + 28, 0, 0x100uLL);
              KeAddGroupAffinityEx(v28 + 24, v25, v27);
              if ( v0 >= v57
                || (v29 = (char *)v60 + v64[0], *(unsigned __int16 *)((char *)v60 + v64[0] + 6) != v20)
                || *((_WORD *)v29 + 4) != *(_WORD *)(v24 + 140) )
              {
                v29 = 0LL;
              }
              ++v0;
              if ( (int)PpmParkInitParkNode((__int64)v28, (__int64)v29, &v58) < 0 )
                goto LABEL_75;
              v15 = Pool2;
            }
          }
        }
        if ( ++v20 >= (unsigned int)(unsigned __int16)KeNumberNodes )
          break;
        v6 = v57;
      }
    }
    if ( v0 != v56 )
      goto LABEL_75;
    v30 = (void *)ExAllocatePool2(0x40uLL);
    P = v30;
    if ( v30 )
    {
      v31 = v30;
      if ( v56 )
      {
        v32 = (unsigned int *)(v15 + 1160);
        v59 = v56;
        v33 = v56;
        do
        {
          v34 = *((unsigned __int16 *)v32 - 575);
          v35 = v31;
          *((_QWORD *)v32 - 6) = v31;
          v36 = 8LL * ++v34;
          v37 = (size_t)v31 + v36;
          *v32 = v34;
          *((_QWORD *)v32 - 5) = v37;
          v38 = v36 + v37;
          *((_QWORD *)v32 - 4) = v38;
          v31 = (void *)(v36 + v38);
          memmove(v35, (const void *)(*((_QWORD *)v32 - 7) + 328LL), v36);
          memmove(*((void **)v32 - 5), (const void *)(*((_QWORD *)v32 - 7) + 328LL), 8LL * *v32);
          v39 = *((_QWORD *)v32 - 7);
          *((_QWORD *)v32 - 3) = *(_QWORD *)(v39 + 24);
          *((_QWORD *)v32 - 2) = *(_QWORD *)(v39 + 24);
          if ( *((_BYTE *)v32 + 25) )
          {
            v40 = 0;
            if ( *((_BYTE *)v32 - 1148) )
            {
              do
              {
                v41 = v31;
                v42 = (unsigned __int16 *)(*((_QWORD *)v32 + 15) + 640LL * v40);
                v43 = *v42;
                if ( (_WORD)v43 )
                {
                  *((_QWORD *)v42 + 72) = v31;
                  v44 = v43 + 1;
                  v45 = 8LL * v44;
                  v46 = (size_t)v31 + v45;
                  *((_DWORD *)v42 + 156) = v44;
                  *((_QWORD *)v42 + 73) = v46;
                  v47 = v45 + v46;
                  *((_QWORD *)v42 + 74) = v47;
                  v31 = (void *)(v45 + v47);
                  memmove(v41, (const void *)(*((_QWORD *)v42 + 71) + 328LL), v45);
                  memmove(
                    *((void **)v42 + 73),
                    (const void *)(*((_QWORD *)v42 + 71) + 328LL),
                    8LL * *((unsigned int *)v42 + 156));
                  *((_QWORD *)v42 + 75) = *(_QWORD *)(*((_QWORD *)v42 + 71) + 24LL);
                  *((_QWORD *)v42 + 76) = *(_QWORD *)(*((_QWORD *)v42 + 71) + 24LL);
                }
                ++v40;
              }
              while ( v40 < *((unsigned __int8 *)v32 - 1148) );
              v33 = v59;
            }
          }
          v32 += 322;
          v59 = --v33;
        }
        while ( v33 );
      }
      v55 = 1;
LABEL_75:
      v9 = v56;
      goto LABEL_78;
    }
    v9 = v56;
  }
  else
  {
    v9 = v10;
  }
LABEL_78:
  v48 = KeAcquireSpinLockRaiseToDpc(&PpmParkStateLock);
  v49 = 0LL;
  PpmParkNodes = Pool2 & -(__int64)(v55 != 0);
  if ( !v55 )
    v49 = P;
  PpmParkNumNodes = v55 != 0 ? v9 : 0;
  PpmParkHistograms = (unsigned __int64)P & -(__int64)(v55 != 0);
  KeReleaseSpinLock(&PpmParkStateLock, v48);
  PpmParkFreeAllParkNodes(v60, v55);
  if ( v49 )
    ExFreePoolWithTag(v49, 0x704D5050u);
  if ( v63 )
    ExFreePoolWithTag(v63, 0x704D5050u);
  PpmParkApplyPolicy(v51, v50, v52, v53);
  return PpmParkParkingAvailable();
}
