/*
 * XREFs of PpmParkRegisterParking @ 0x1405D55E0
 * Callers:
 *     PpmCheckInitProcessors @ 0x140AC1BF8 (PpmCheckInitProcessors.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402535A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeAddGroupAffinityEx @ 0x140256130 (KeAddGroupAffinityEx.c)
 *     KeReleaseSpinLock @ 0x1402EA780 (KeReleaseSpinLock.c)
 *     KeEnumerateNextSchedulerSubNodeInNode @ 0x140304F78 (KeEnumerateNextSchedulerSubNodeInNode.c)
 *     KeGetPrcb @ 0x1403B0CC0 (KeGetPrcb.c)
 *     PopExecuteOnTargetProcessors @ 0x1403B2EE8 (PopExecuteOnTargetProcessors.c)
 *     KeEnumerateNextProcessor @ 0x140405FA0 (KeEnumerateNextProcessor.c)
 *     PpmHeteroIsMultiClassParkingEnabled @ 0x140409E50 (PpmHeteroIsMultiClassParkingEnabled.c)
 *     KeInitializeSchedulerSubNodeEnumerationContext @ 0x1404206E0 (KeInitializeSchedulerSubNodeEnumerationContext.c)
 *     PpmParkApplyPolicy @ 0x1404E9D84 (PpmParkApplyPolicy.c)
 *     PpmHeteroHgsRegisterContainmentGroups @ 0x1405D2974 (PpmHeteroHgsRegisterContainmentGroups.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     PpmIdleInitializeConcurrency @ 0x14073E060 (PpmIdleInitializeConcurrency.c)
 *     PpmParkFreeAllParkNodes @ 0x140751DE0 (PpmParkFreeAllParkNodes.c)
 *     PpmParkParkingAvailable @ 0x140A4D7C8 (PpmParkParkingAvailable.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 PpmParkRegisterParking()
{
  unsigned int v0; // r13d
  int v1; // r12d
  unsigned int v2; // r14d
  _BYTE *v3; // rbx
  __int64 v4; // rdi
  unsigned int v5; // r15d
  unsigned int v6; // ebx
  unsigned int v7; // edi
  __int64 v8; // rsi
  __int64 v9; // r9
  unsigned int v10; // edx
  _QWORD *v11; // r8
  __int64 v12; // rcx
  unsigned int v13; // edi
  unsigned int v14; // r12d
  __int64 v15; // rcx
  __int16 v16; // r14
  __int64 v17; // r15
  unsigned __int64 v18; // rdx
  void *v19; // r15
  __int64 v20; // rdx
  __int64 v21; // rbx
  char *v22; // r13
  unsigned __int8 v23; // al
  unsigned __int8 v24; // di
  unsigned int v25; // edx
  unsigned int v26; // r9d
  __int64 v27; // rsi
  __int64 Prcb; // rax
  __int64 v29; // rdi
  unsigned int v30; // ecx
  __int64 v31; // rdx
  unsigned int i; // eax
  _BYTE *v33; // rax
  __int64 v34; // rcx
  unsigned __int8 v35; // cl
  int v36; // r15d
  unsigned int v37; // edx
  __int64 v38; // rax
  unsigned __int8 *v39; // rcx
  __int64 v40; // r8
  unsigned int j; // edi
  __int64 v42; // r14
  __int64 v43; // rsi
  int v44; // eax
  __int64 v45; // r8
  int v46; // eax
  __int64 v47; // rax
  void *v48; // rax
  void *v49; // rdi
  unsigned int *v50; // rbx
  __int64 v51; // r15
  unsigned int v52; // eax
  void *v53; // rcx
  size_t v54; // r8
  size_t v55; // rdi
  size_t v56; // rdi
  __int64 v57; // rcx
  void *v58; // rcx
  unsigned __int8 *v59; // rsi
  int v60; // eax
  unsigned int v61; // eax
  size_t v62; // r8
  size_t v63; // rdi
  size_t v64; // rdi
  KIRQL v65; // dl
  PVOID v66; // rbx
  unsigned int v68; // [rsp+3Ch] [rbp-CCh]
  int v69; // [rsp+40h] [rbp-C8h]
  int v70; // [rsp+44h] [rbp-C4h]
  unsigned int v71; // [rsp+48h] [rbp-C0h] BYREF
  int v72; // [rsp+4Ch] [rbp-BCh]
  __int64 v73; // [rsp+50h] [rbp-B8h] BYREF
  unsigned int v74; // [rsp+58h] [rbp-B0h]
  unsigned int v75; // [rsp+5Ch] [rbp-ACh]
  __int64 Pool2; // [rsp+60h] [rbp-A8h]
  PVOID v77; // [rsp+68h] [rbp-A0h]
  PVOID P; // [rsp+70h] [rbp-98h]
  PVOID v79; // [rsp+78h] [rbp-90h]
  PVOID v80[2]; // [rsp+80h] [rbp-88h] BYREF
  __int128 v81; // [rsp+90h] [rbp-78h] BYREF
  __int64 v82; // [rsp+A0h] [rbp-68h]
  __int128 v83; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v84; // [rsp+B8h] [rbp-50h]
  __int64 v85; // [rsp+C8h] [rbp-40h] BYREF
  _BYTE v86[264]; // [rsp+D0h] [rbp-38h] BYREF

  memset_0(&v85, 0, 0x108uLL);
  v82 = 0LL;
  v84 = 0LL;
  v0 = 0;
  v71 = 0;
  v73 = 0LL;
  v1 = (unsigned __int8)PpmMaxCoreClasses;
  P = 0LL;
  if ( (unsigned __int8)PpmMaxCoreClasses < 2u )
    v1 = 2;
  v77 = 0LL;
  v72 = v1;
  LOBYTE(v2) = 0;
  v79 = 0LL;
  v70 = 0;
  v81 = 0LL;
  *(_OWORD *)v80 = 0LL;
  v83 = 0LL;
  if ( PpmParkNodes )
  {
    v0 = PpmParkNumNodes;
    v77 = (PVOID)PpmParkNodes;
    v79 = (PVOID)PpmParkHistograms;
    v70 = PpmParkNumNodes;
    if ( PpmParkNumNodes )
    {
      v3 = (_BYTE *)(PpmParkNodes + 120);
      v4 = (unsigned int)PpmParkNumNodes;
      do
      {
        if ( *((_QWORD *)v3 - 9) && (*v3 & 8) != 0 )
        {
          v85 = 2097153LL;
          memset_0(v86, 0, 0x100uLL);
          KeAddGroupAffinityEx((unsigned __int16 *)&v85, *((_WORD *)v3 - 58), *((_QWORD *)v3 - 13));
          PopExecuteOnTargetProcessors((__int64)&v85, (__int64)PpmIdleRemoveConcurrency, 0LL, 0LL);
        }
        v3 += 208;
        --v4;
      }
      while ( v4 );
      LOBYTE(v1) = v72;
    }
  }
  v5 = 0;
  v6 = 0;
  v7 = 0;
  if ( KeNumberNodes )
  {
    do
    {
      KeInitializeSchedulerSubNodeEnumerationContext(&v83, KeNodeBlock[v7]);
      while ( !(unsigned int)KeEnumerateNextSchedulerSubNodeInNode(&v83, &v73) )
        ++v6;
      ++v7;
    }
    while ( v7 < (unsigned __int16)KeNumberNodes );
    v0 = v70;
    LOBYTE(v2) = 0;
  }
  Pool2 = ExAllocatePool2(0x40uLL);
  v8 = Pool2;
  if ( Pool2 )
  {
    v68 = v6;
    v9 = ExAllocatePool2(0x40uLL);
    if ( v9 )
    {
      v2 = 0;
      v10 = 0;
      if ( v6 )
      {
        v11 = (_QWORD *)(v8 + 200);
        do
        {
          v12 = v10 * (unsigned __int8)v1;
          ++v10;
          *v11 = v9 + 104 * v12;
          v11 += 26;
        }
        while ( v10 < v6 );
      }
      v69 = 0;
      v13 = 0;
      v14 = 0;
      v75 = 0;
      while ( v14 < (unsigned __int16)KeNumberNodes )
      {
        KeInitializeSchedulerSubNodeEnumerationContext(&v83, KeNodeBlock[v14]);
        while ( !(unsigned int)KeEnumerateNextSchedulerSubNodeInNode(&v83, &v73) )
        {
          v15 = v73;
          *(_OWORD *)v80 = 0LL;
          v17 = *(_QWORD *)(v73 + 128);
          LOWORD(v80[1]) = *(_WORD *)(v73 + 136);
          v16 = (__int16)v80[1];
          if ( LOWORD(v80[1]) >= PpmCheckRegistered.Count )
            v18 = 0LL;
          else
            v18 = PpmCheckRegistered.Bitmap[LOWORD(v80[1])];
          v19 = (void *)(v18 & v17);
          v80[0] = v19;
          if ( v19 )
          {
            v20 = 208LL * v13;
            v21 = v20 + v8;
            *(_WORD *)(v21 + 4) = v80[1];
            *(_WORD *)(v21 + 6) = v14;
            *(_WORD *)(v21 + 8) = *(_WORD *)(v15 + 140);
            *(_QWORD *)(v21 + 16) = v19;
            if ( v13 >= v0
              || (v22 = (char *)v77 + v20, *(unsigned __int16 *)((char *)v77 + v20 + 6) != v14)
              || *((_WORD *)v22 + 4) != *(_WORD *)(v15 + 140) )
            {
              v22 = 0LL;
            }
            v23 = v72;
            v74 = v13 + 1;
            v24 = 0;
            if ( (_BYTE)v72 )
            {
              do
              {
                if ( !PpmHeteroIsMultiClassParkingEnabled() && v25 )
                  v25 = v26;
                LOWORD(v82) = v16;
                v27 = *(_QWORD *)(v21 + 200) + 104LL * v25;
                *((_QWORD *)&v81 + 1) = v19;
                *(_QWORD *)&v81 = 0LL;
                while ( !(unsigned int)KeEnumerateNextProcessor(&v71, (unsigned __int16 **)&v81) )
                {
                  Prcb = KeGetPrcb(v71);
                  if ( *(_BYTE *)(Prcb + 35336) == v24 )
                  {
                    ++*(_BYTE *)v27;
                    *(_QWORD *)(v27 + 16) |= *(_QWORD *)(Prcb + 200);
                  }
                }
                v23 = v72;
                ++v24;
              }
              while ( v24 < (unsigned __int8)v72 );
              v14 = v75;
              v8 = Pool2;
            }
            v2 = 0;
            v29 = v23;
            v30 = 0;
            if ( v23 )
            {
              v31 = 0LL;
              do
              {
                if ( !*(_BYTE *)(v31 + *(_QWORD *)(v21 + 200)) )
                {
                  for ( i = v30 + 1; i < (unsigned int)v29; ++i )
                    ;
                }
                ++v30;
                v31 += 104LL;
              }
              while ( v30 < (unsigned int)v29 );
              v33 = *(_BYTE **)(v21 + 200);
              v34 = v29;
              do
              {
                if ( *v33 )
                  ++*(_BYTE *)(v21 + 11);
                v33 += 104;
                --v34;
              }
              while ( v34 );
            }
            if ( !*(_QWORD *)(v21 + 192) && (PpmHeteroHgsContainmentState & 2) != 0 )
              PpmHeteroHgsRegisterContainmentGroups(v21, (__int64)v22, (__int64)v80);
            v35 = *(_BYTE *)(v21 + 11);
            *(_BYTE *)(v21 + 121) = v35 > 1u;
            if ( v35 <= 1u )
              *(_BYTE *)(v21 + 120) |= 4u;
            v36 = 0;
            v37 = 0;
            if ( v35 )
            {
              do
              {
                v38 = v37++;
                v39 = (unsigned __int8 *)(*(_QWORD *)(v21 + 200) + 104 * v38);
                LODWORD(v38) = *v39;
                v36 += v38;
                v39[3] = v38;
                v39[4] = v38;
                v39[5] = v38;
              }
              while ( v37 < *(unsigned __int8 *)(v21 + 11) );
            }
            v85 = 2097153LL;
            v69 += v36 + 2 * v36 + 3;
            memset_0(v86, 0, 0x100uLL);
            KeAddGroupAffinityEx((unsigned __int16 *)&v85, *(_WORD *)(v21 + 4), *(_QWORD *)(v21 + 16));
            if ( v22 )
              v40 = *((_QWORD *)v22 + 6);
            else
              v40 = 0LL;
            if ( (int)PpmIdleInitializeConcurrency(&v85, v21 + 48, v40) < 0 )
              goto LABEL_95;
            if ( *(_BYTE *)(v21 + 121) )
            {
              for ( j = 0; j < *(unsigned __int8 *)(v21 + 11); ++j )
              {
                v42 = *(_QWORD *)(v21 + 200);
                v43 = 104LL * j;
                v44 = *(unsigned __int8 *)(v43 + v42);
                if ( (_BYTE)v44 )
                {
                  v85 = 2097153LL;
                  v69 += v44 + 2 * v44 + 3;
                  memset_0(v86, 0, 0x100uLL);
                  KeAddGroupAffinityEx((unsigned __int16 *)&v85, *(_WORD *)(v21 + 4), *(_QWORD *)(v43 + v42 + 16));
                  if ( v22 && j < (unsigned __int8)v22[11] )
                    v45 = *(_QWORD *)(*((_QWORD *)v22 + 25) + v43 + 32);
                  else
                    v45 = 0LL;
                  v46 = PpmIdleInitializeConcurrency(&v85, v43 + v42 + 32, v45);
                  v2 = 0;
                  if ( v46 < 0 )
                    goto LABEL_95;
                }
                else
                {
                  v2 = 0;
                }
              }
              v8 = Pool2;
            }
            *(_BYTE *)(v21 + 10) = v36;
            *(_BYTE *)(v21 + 113) = v36;
            *(_BYTE *)(v21 + 115) = v36;
            *(_DWORD *)(v21 + 160) = 1;
            v47 = ExAllocatePool2(0x40uLL);
            v13 = v74;
            v0 = v70;
            if ( v47 )
            {
              *(_QWORD *)(v21 + 176) = v47;
              *(_DWORD *)(v21 + 160) = 2;
            }
          }
          else
          {
            v2 = 0;
          }
        }
        v75 = ++v14;
      }
      v48 = (void *)ExAllocatePool2(0x40uLL);
      P = v48;
      if ( v48 )
      {
        v49 = v48;
        if ( v68 )
        {
          v50 = (unsigned int *)(v8 + 104);
          v73 = v68;
          v51 = v68;
          do
          {
            v52 = *((unsigned __int8 *)v50 - 94);
            v53 = v49;
            *((_QWORD *)v50 - 6) = v49;
            v54 = 8LL * ++v52;
            v55 = (size_t)v49 + v54;
            *v50 = v52;
            *((_QWORD *)v50 - 5) = v55;
            v56 = v54 + v55;
            *((_QWORD *)v50 - 4) = v56;
            v49 = (void *)(v54 + v56);
            memmove(v53, (const void *)(*((_QWORD *)v50 - 7) + 328LL), v54);
            memmove(*((void **)v50 - 5), (const void *)(*((_QWORD *)v50 - 7) + 328LL), 8LL * *v50);
            v57 = *((_QWORD *)v50 - 7);
            *((_QWORD *)v50 - 3) = *(_QWORD *)(v57 + 24);
            *((_QWORD *)v50 - 2) = *(_QWORD *)(v57 + 24);
            if ( *((_BYTE *)v50 + 17) )
            {
              if ( *((_BYTE *)v50 - 93) )
              {
                do
                {
                  v58 = v49;
                  v59 = (unsigned __int8 *)(*((_QWORD *)v50 + 12) + 104LL * v2);
                  v60 = *v59;
                  if ( (_BYTE)v60 )
                  {
                    *((_QWORD *)v59 + 5) = v49;
                    v61 = v60 + 1;
                    v62 = 8LL * v61;
                    v63 = (size_t)v49 + v62;
                    *((_DWORD *)v59 + 22) = v61;
                    *((_QWORD *)v59 + 6) = v63;
                    v64 = v62 + v63;
                    *((_QWORD *)v59 + 7) = v64;
                    v49 = (void *)(v62 + v64);
                    memmove(v58, (const void *)(*((_QWORD *)v59 + 4) + 328LL), v62);
                    memmove(
                      *((void **)v59 + 6),
                      (const void *)(*((_QWORD *)v59 + 4) + 328LL),
                      8LL * *((unsigned int *)v59 + 22));
                    *((_QWORD *)v59 + 8) = *(_QWORD *)(*((_QWORD *)v59 + 4) + 24LL);
                    *((_QWORD *)v59 + 9) = *(_QWORD *)(*((_QWORD *)v59 + 4) + 24LL);
                  }
                  ++v2;
                }
                while ( v2 < *((unsigned __int8 *)v50 - 93) );
                v51 = v73;
              }
              v2 = 0;
            }
            v50 += 52;
            v73 = --v51;
          }
          while ( v51 );
        }
        LOBYTE(v2) = 1;
      }
      else
      {
        LOBYTE(v2) = 0;
      }
LABEL_95:
      v5 = v68;
    }
    else
    {
      v5 = v6;
    }
  }
  v65 = KeAcquireSpinLockRaiseToDpc(&PpmParkStateLock);
  v66 = 0LL;
  PpmParkNodes = Pool2 & -(__int64)((_BYTE)v2 != 0);
  if ( !(_BYTE)v2 )
    v66 = P;
  PpmParkNumNodes = (_BYTE)v2 != 0 ? v5 : 0;
  PpmParkHistograms = (unsigned __int64)P & -(__int64)((_BYTE)v2 != 0);
  KeReleaseSpinLock(&PpmParkStateLock, v65);
  PpmParkFreeAllParkNodes(v77, v2);
  if ( v66 )
    ExFreePoolWithTag(v66, 0x704D5050u);
  if ( v79 )
    ExFreePoolWithTag(v79, 0x704D5050u);
  PpmParkApplyPolicy();
  return PpmParkParkingAvailable();
}
