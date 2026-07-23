/*
 * XREFs of MiCombineAllPhysicalMemory @ 0x1409E6848
 * Callers:
 *     MiCombineIdenticalPages @ 0x140A97650 (MiCombineIdenticalPages.c)
 * Callees:
 *     MiGetClosestNodeWithProcessors @ 0x14026FC80 (MiGetClosestNodeWithProcessors.c)
 *     ExAllocatePoolMm @ 0x1402775A0 (ExAllocatePoolMm.c)
 *     MiComputeCombineHash @ 0x140335700 (MiComputeCombineHash.c)
 *     MiCombineCandidate @ 0x140344930 (MiCombineCandidate.c)
 *     MiDereferencePageRuns @ 0x1403F89A4 (MiDereferencePageRuns.c)
 *     MiReferencePageRuns @ 0x1403F8A50 (MiReferencePageRuns.c)
 *     KeQueryNodeActiveAffinity2 @ 0x140407C40 (KeQueryNodeActiveAffinity2.c)
 *     MiGetPfnPageSizeIndexUnsynchronized @ 0x14041DC14 (MiGetPfnPageSizeIndexUnsynchronized.c)
 *     KeSetSystemMultipleGroupAffinityThread @ 0x1404C003C (KeSetSystemMultipleGroupAffinityThread.c)
 *     KeRevertToUserMultipleGroupAffinityThread @ 0x1404C80DC (KeRevertToUserMultipleGroupAffinityThread.c)
 *     PsAllocateAffinityToken @ 0x1404C9F50 (PsAllocateAffinityToken.c)
 *     PsFreeAffinityToken @ 0x1404F6110 (PsFreeAffinityToken.c)
 *     MiProcessCrcList @ 0x1409E6C70 (MiProcessCrcList.c)
 *     MiAllocateCrcList @ 0x1409E7240 (MiAllocateCrcList.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiCombineAllPhysicalMemory(__int64 *a1)
{
  __int64 *v1; // rdi
  unsigned int v2; // r14d
  int AffinityToken; // r15d
  __int64 v4; // rsi
  unsigned int v5; // ebx
  unsigned int *v6; // r12
  __int64 v7; // rax
  unsigned __int64 v8; // rdx
  __int64 v9; // rax
  char *v10; // r14
  char *v11; // rsi
  unsigned int ClosestNodeWithProcessors; // edi
  int NodeActiveAffinity2; // eax
  ULONG_PTR v14; // r9
  __int64 PoolMm; // rax
  void *v16; // r13
  void *v17; // rcx
  void *v18; // rdi
  unsigned int *v19; // rdx
  unsigned int v20; // r9d
  unsigned int v21; // r8d
  unsigned __int64 *v22; // rax
  unsigned __int64 v24; // rcx
  __int64 v25; // r13
  __int64 v26; // rdi
  unsigned int v27; // eax
  __int64 v28; // r12
  int PfnPageSizeIndexUnsynchronized; // eax
  unsigned __int64 v30; // r12
  unsigned __int64 v31; // [rsp+20h] [rbp-59h] BYREF
  void *v32; // [rsp+28h] [rbp-51h] BYREF
  int v33; // [rsp+30h] [rbp-49h] BYREF
  __int64 v34; // [rsp+38h] [rbp-41h]
  unsigned int *v35; // [rsp+40h] [rbp-39h]
  unsigned int *v36; // [rsp+48h] [rbp-31h]
  unsigned int *v37; // [rsp+50h] [rbp-29h]
  void *v38; // [rsp+58h] [rbp-21h]
  __int64 *v39; // [rsp+60h] [rbp-19h]
  unsigned int *v40; // [rsp+68h] [rbp-11h]
  __int64 v41; // [rsp+70h] [rbp-9h]
  struct _KTHREAD *CurrentThread; // [rsp+78h] [rbp-1h]
  char *v43; // [rsp+80h] [rbp+7h]
  __int64 v44; // [rsp+88h] [rbp+Fh]
  int v46; // [rsp+E8h] [rbp+6Fh] BYREF
  unsigned int v47; // [rsp+F0h] [rbp+77h] BYREF
  unsigned int v48; // [rsp+F8h] [rbp+7Fh]

  v1 = (__int64 *)*a1;
  v2 = *((_DWORD *)a1 + 35);
  AffinityToken = 0;
  v4 = *(_QWORD *)*a1;
  v41 = a1[1];
  v39 = v1;
  v48 = v2;
  CurrentThread = KeGetCurrentThread();
  v44 = v4;
  v40 = (unsigned int *)MiReferencePageRuns(v4, 1u);
  v5 = 0;
  v34 = *v40;
  v6 = &v40[4 * v34 + 4];
  v37 = v6;
  while ( v5 != (unsigned __int16)KeNumberNodes )
  {
    v7 = *(_QWORD *)(v4 + 16);
    LOWORD(v47) = 0;
    v32 = 0LL;
    LOWORD(v46) = 0;
    v8 = *(_QWORD *)(57216LL * v5 + v7 + 14976);
    if ( v8 >= 0x10 )
    {
      v31 = (40 * v8 + 4095) & 0xFFFFFFFFFFFFF000uLL;
      v9 = MiAllocateCrcList(v1, v2, &v31);
      v10 = (char *)v9;
      if ( !v9 )
      {
        AffinityToken = -1073741670;
        break;
      }
      v11 = (char *)v9;
      v43 = (char *)(v9 + 40 * (v31 / 0x28));
      ClosestNodeWithProcessors = MiGetClosestNodeWithProcessors(v5);
      NodeActiveAffinity2 = KeQueryNodeActiveAffinity2(ClosestNodeWithProcessors, 0LL, 0, (unsigned __int16 *)&v46);
      v14 = ClosestNodeWithProcessors;
      LODWORD(v14) = ClosestNodeWithProcessors | 0x80000000;
      AffinityToken = NodeActiveAffinity2;
      PoolMm = ExAllocatePoolMm(0x40uLL, 16LL * (unsigned __int16)v46, 1632069965, v14);
      v38 = (void *)PoolMm;
      v16 = (void *)PoolMm;
      if ( !PoolMm )
        goto LABEL_40;
      KeQueryNodeActiveAffinity2(ClosestNodeWithProcessors, PoolMm, v46, (unsigned __int16 *)&v47);
      AffinityToken = PsAllocateAffinityToken((__int64 *)&v32);
      v17 = v16;
      if ( AffinityToken < 0 )
        goto LABEL_39;
      v18 = v32;
      AffinityToken = KeSetSystemMultipleGroupAffinityThread((__int64)v16, v46, (__int64)v32);
      if ( AffinityToken < 0 )
      {
        PsFreeAffinityToken(v18);
        v17 = v16;
LABEL_39:
        ExFreePoolWithTag(v17, 0);
LABEL_40:
        ExFreePoolWithTag(v10, 0);
        break;
      }
      v20 = v34;
      v21 = 0;
      v47 = 0;
      if ( (_DWORD)v34 )
      {
        v19 = v6;
        v22 = (unsigned __int64 *)(v40 + 6);
        v35 = v6;
        v36 = v40 + 6;
        while ( *v19 != v5 )
        {
LABEL_11:
          ++v21;
          v19 += 2;
          v22 += 2;
          v47 = v21;
          v35 = v19;
          v36 = (unsigned int *)v22;
          if ( v21 >= v20 )
            goto LABEL_12;
        }
        v24 = *v22;
        v25 = *(v22 - 1) - 1;
        v31 = *v22;
        v26 = 48 * v25 - 0x220000000000LL;
LABEL_18:
        if ( !v24 )
        {
LABEL_34:
          v22 = (unsigned __int64 *)v36;
          v19 = v35;
          v21 = v47;
          v20 = v34;
          goto LABEL_11;
        }
        if ( (!v41 || !*(_DWORD *)(v41 + 4)) && (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 1) == 0 )
        {
          v26 += 48LL;
          ++v25;
          while ( 1 )
          {
            v27 = *(_DWORD *)(v26 + 32);
            v28 = 1LL;
            v33 = 0;
            v46 = HIWORD(v27) & 7;
            if ( (*(_QWORD *)(v26 + 40) & 0x10000000000LL) == 0
              || (PfnPageSizeIndexUnsynchronized = MiGetPfnPageSizeIndexUnsynchronized(v26, &v46, &v33),
                  v24 = v31,
                  PfnPageSizeIndexUnsynchronized == 3) )
            {
              if ( v46 > 1 )
              {
                if ( (unsigned int)MiCombineCandidate(v39, v48, (_QWORD *)v26) )
                {
                  *((_QWORD *)v11 + 2) = v25;
                  if ( (unsigned int)MiComputeCombineHash(a1, v11, 0) )
                  {
                    v11 += 40;
                    if ( v11 == v43 )
                    {
                      MiProcessCrcList(a1, v10, 0xCCCCCCCCCCCCCCCDuLL * ((v11 - v10) >> 3), v5);
                      v11 = v10;
                    }
                  }
                }
                v24 = --v31;
                goto LABEL_18;
              }
            }
            else
            {
              v28 = MiPageSizes[PfnPageSizeIndexUnsynchronized];
            }
            v30 = v28 - (v25 & (v28 - 1));
            if ( v30 >= v24 )
              goto LABEL_34;
            v25 += v30;
            v26 += 48 * v30;
            v24 -= v30;
            v31 = v24;
          }
        }
        AffinityToken = -1073741248;
LABEL_12:
        if ( v11 != v10 )
          MiProcessCrcList(a1, v10, 0xCCCCCCCCCCCCCCCDuLL * ((v11 - v10) >> 3), v5);
        v16 = v38;
        v6 = v37;
        v18 = v32;
      }
      KeRevertToUserMultipleGroupAffinityThread((__int64)v18, (__int64)v19);
      PsFreeAffinityToken(v18);
      ExFreePoolWithTag(v16, 0);
      ExFreePoolWithTag(v10, 0);
      if ( AffinityToken < 0 )
        break;
      v1 = v39;
      v4 = v44;
      v2 = v48;
    }
    ++v5;
  }
  MiDereferencePageRuns((__int64)v40);
  return (unsigned int)AffinityToken;
}
