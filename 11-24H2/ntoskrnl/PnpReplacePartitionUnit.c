/*
 * XREFs of PnpReplacePartitionUnit @ 0x14072E220
 * Callers:
 *     IoReplacePartitionUnit @ 0x14071EB50 (IoReplacePartitionUnit.c)
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x1402105E0 (KeQueryActiveProcessorCountEx.c)
 *     KeSetEvent @ 0x1402725A0 (KeSetEvent.c)
 *     KeSetSystemGroupAffinityThread @ 0x140339650 (KeSetSystemGroupAffinityThread.c)
 *     KeRevertToUserGroupAffinityThread @ 0x14033A250 (KeRevertToUserGroupAffinityThread.c)
 *     KeWaitForSingleObject @ 0x14033E960 (KeWaitForSingleObject.c)
 *     ?KiCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z @ 0x1403B1720 (-KiCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z.c)
 *     KeIsEmptyAffinityEx @ 0x1403B55D0 (KeIsEmptyAffinityEx.c)
 *     KeCheckProcessorAffinityEx @ 0x1403C9F30 (KeCheckProcessorAffinityEx.c)
 *     IoAddTriageDumpDataBlock @ 0x1403F2880 (IoAddTriageDumpDataBlock.c)
 *     KeFindFirstSetLeftAffinityEx @ 0x14044C2E0 (KeFindFirstSetLeftAffinityEx.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     PnprQueryReplaceFeatures @ 0x1405A7BA8 (PnprQueryReplaceFeatures.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     PnprAllocateMappingReserves @ 0x14072F094 (PnprAllocateMappingReserves.c)
 *     PnprCollectResources @ 0x14072F220 (PnprCollectResources.c)
 *     PnprFreeMappingReserve @ 0x14072F56C (PnprFreeMappingReserve.c)
 *     PnprIdentifyUnits @ 0x14072F7DC (PnprIdentifyUnits.c)
 *     PnprLoadPluginDriver @ 0x14072FC94 (PnprLoadPluginDriver.c)
 *     PnprLockPagesForReplace @ 0x14072FE20 (PnprLockPagesForReplace.c)
 *     PnprLogFailureEvent @ 0x14072FE50 (PnprLogFailureEvent.c)
 *     PnprLogStartEvent @ 0x14072FF7C (PnprLogStartEvent.c)
 *     PnprLogSuccessEvent @ 0x140730050 (PnprLogSuccessEvent.c)
 *     PnprMmConstruct @ 0x140730440 (PnprMmConstruct.c)
 *     PnprMmFree @ 0x140730544 (PnprMmFree.c)
 *     PnprUnlockPagesForReplace @ 0x14073072C (PnprUnlockPagesForReplace.c)
 *     IoGetLegacyVetoList @ 0x1409B9120 (IoGetLegacyVetoList.c)
 *     MmUnloadSystemImage @ 0x140A8AD10 (MmUnloadSystemImage.c)
 *     PnprGetMillisecondCounter @ 0x140B53B94 (PnprGetMillisecondCounter.c)
 *     PnprInitiateReplaceOperation @ 0x140B53BF4 (PnprInitiateReplaceOperation.c)
 *     PnprQuiesceDevices @ 0x140B545A4 (PnprQuiesceDevices.c)
 *     PnprWakeDevices @ 0x140B551D4 (PnprWakeDevices.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

LONG __fastcall PnpReplacePartitionUnit(ULONG_PTR *a1)
{
  ULONG ActiveProcessorCount; // eax
  __int64 v3; // r15
  ULONG_PTR *v4; // rdi
  ULONG_PTR v5; // r8
  __int64 v6; // rax
  ULONG_PTR v7; // rcx
  __int64 v8; // rax
  __int64 Pool2; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rbx
  int PluginDriver; // edi
  __int64 v16; // rcx
  _WORD *v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rbx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rcx
  ULONG_PTR v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // rax
  __int64 v29; // rcx
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rcx
  _WORD *v33; // rcx
  __int64 v34; // rax
  __int64 v35; // rbx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // rcx
  __int64 v39; // rdx
  __int64 v40; // rcx
  ULONG_PTR v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // rax
  __int64 v45; // rcx
  __int64 v46; // rdx
  __int64 v47; // rcx
  int v48; // eax
  int v49; // eax
  bool v50; // di
  int v51; // eax
  int v52; // eax
  int v53; // ecx
  int v54; // eax
  int v55; // eax
  int v56; // eax
  char v57; // r15
  int ReplaceFeatures; // eax
  __int64 v59; // rcx
  int v60; // eax
  int v61; // edx
  int v62; // eax
  int v63; // eax
  int v64; // eax
  int v65; // eax
  __int64 v66; // rdx
  unsigned int v67; // eax
  __int64 v68; // rdx
  $B38C3B1372D6E954799962D5DD404846 *v69; // rcx
  __int64 v70; // r8
  int v71; // eax
  unsigned int FirstSetLeftAffinity; // eax
  unsigned int v73; // ecx
  ULONG_PTR v74; // rsi
  __int64 v75; // rsi
  void *v76; // rcx
  void *v77; // rcx
  void *v78; // rcx
  void *v79; // rcx
  ULONG v81; // [rsp+38h] [rbp-D0h]
  int v82; // [rsp+3Ch] [rbp-CCh] BYREF
  PVOID P; // [rsp+40h] [rbp-C8h] BYREF
  struct _GROUP_AFFINITY P_8; // [rsp+48h] [rbp-C0h] BYREF
  struct _GROUP_AFFINITY PreviousAffinity_8; // [rsp+58h] [rbp-B0h] BYREF
  struct _KAFFINITY_EX v86; // [rsp+68h] [rbp-A0h] BYREF
  _BYTE v87[80]; // [rsp+178h] [rbp+70h] BYREF

  P_8 = 0LL;
  memset_0(&v86.8, 0, sizeof(v86.8));
  PreviousAffinity_8 = 0LL;
  memset_0(v87, 0, sizeof(v87));
  ActiveProcessorCount = KeQueryActiveProcessorCountEx(0xFFFFu);
  v3 = ActiveProcessorCount;
  v81 = ActiveProcessorCount;
  KeWaitForSingleObject(&PnpReplaceEvent, Executive, 0, 0, 0LL);
  v4 = a1 + 1;
  if ( *((int *)a1 + 4) >= 0 )
  {
    v5 = *v4;
    if ( *v4 )
    {
      v6 = *(_QWORD *)(*(_QWORD *)(v5 + 312) + 40LL);
      if ( v6 && !_bittest((const signed __int32 *)(v6 + 396), 0x11u) )
      {
        v7 = *a1;
        if ( *a1 )
        {
          v8 = *(_QWORD *)(*(_QWORD *)(v7 + 312) + 40LL);
          if ( v8 && !_bittest((const signed __int32 *)(v8 + 396), 0x11u) )
          {
            PnprLogStartEvent(v7, *v4);
            goto LABEL_9;
          }
          IoAddTriageDumpDataBlock(v7, (PVOID)*(unsigned __int16 *)(v7 + 2));
          v16 = *(_QWORD *)(*a1 + 8);
          if ( v16 )
          {
            IoAddTriageDumpDataBlock(v16, (PVOID)(unsigned int)*(__int16 *)(v16 + 2));
            v17 = (_WORD *)(*(_QWORD *)(*a1 + 8) + 56LL);
            if ( *v17 )
            {
              IoAddTriageDumpDataBlock((ULONG)v17, (PVOID)2);
              IoAddTriageDumpDataBlock(
                *(_QWORD *)(*(_QWORD *)(*a1 + 8) + 64LL),
                (PVOID)*(unsigned __int16 *)(*(_QWORD *)(*a1 + 8) + 56LL));
            }
          }
          if ( *a1 )
          {
            v18 = *(_QWORD *)(*a1 + 312);
            if ( *(_QWORD *)(v18 + 40) )
            {
              v19 = *(_QWORD *)(v18 + 40);
              IoAddTriageDumpDataBlock(v19, (PVOID)0x388);
              if ( *(_WORD *)(v19 + 40) )
              {
                IoAddTriageDumpDataBlock(v19 + 40, (PVOID)2);
                IoAddTriageDumpDataBlock(*(_QWORD *)(v19 + 48), (PVOID)*(unsigned __int16 *)(v19 + 40));
              }
              v20 = *a1 + 312;
              if ( *a1 )
                v21 = *(_QWORD *)(*(_QWORD *)v20 + 40LL);
              else
                v21 = 0LL;
              if ( *(_WORD *)(v21 + 56) )
              {
                if ( *a1 )
                  v22 = *(_QWORD *)(*(_QWORD *)v20 + 40LL);
                else
                  LODWORD(v22) = 0;
                IoAddTriageDumpDataBlock(v22 + 56, (PVOID)2);
                if ( *a1 )
                {
                  v23 = *(_QWORD *)(*(_QWORD *)(*a1 + 312) + 40LL);
                  v24 = v23;
                }
                else
                {
                  v23 = 0LL;
                  v24 = 0LL;
                }
                IoAddTriageDumpDataBlock(*(_QWORD *)(v24 + 64), (PVOID)*(unsigned __int16 *)(v23 + 56));
              }
              v25 = *a1;
              v26 = *a1 + 312;
              if ( *a1 )
                v27 = *(_QWORD *)(*(_QWORD *)v26 + 40LL);
              else
                v27 = 0LL;
              if ( *(_QWORD *)(v27 + 16) )
              {
                v28 = v25 ? *(_QWORD *)(*(_QWORD *)v26 + 40LL) : 0LL;
                if ( *(_WORD *)(*(_QWORD *)(v28 + 16) + 56LL) )
                {
                  if ( v25 )
                    v29 = *(_QWORD *)(*(_QWORD *)v26 + 40LL);
                  else
                    v29 = 0LL;
                  IoAddTriageDumpDataBlock(*(_QWORD *)(v29 + 16) + 56, (PVOID)2);
                  if ( *a1 )
                  {
                    v30 = *(_QWORD *)(*(_QWORD *)(*a1 + 312) + 40LL);
                    v31 = v30;
                  }
                  else
                  {
                    v30 = 0LL;
                    v31 = 0LL;
                  }
                  IoAddTriageDumpDataBlock(
                    *(_QWORD *)(*(_QWORD *)(v31 + 16) + 64LL),
                    (PVOID)*(unsigned __int16 *)(*(_QWORD *)(v30 + 16) + 56LL));
                }
              }
            }
          }
        }
        KeBugCheckEx(0xCAu, 2uLL, *a1, 0LL, 0LL);
      }
      IoAddTriageDumpDataBlock(*v4, (PVOID)*(unsigned __int16 *)(v5 + 2));
      v32 = *(_QWORD *)(*v4 + 8);
      if ( v32 )
      {
        IoAddTriageDumpDataBlock(v32, (PVOID)(unsigned int)*(__int16 *)(v32 + 2));
        v33 = (_WORD *)(*(_QWORD *)(*v4 + 8) + 56LL);
        if ( *v33 )
        {
          IoAddTriageDumpDataBlock((ULONG)v33, (PVOID)2);
          IoAddTriageDumpDataBlock(
            *(_QWORD *)(*(_QWORD *)(*v4 + 8) + 64LL),
            (PVOID)*(unsigned __int16 *)(*(_QWORD *)(*v4 + 8) + 56LL));
        }
      }
      if ( *v4 )
      {
        v34 = *(_QWORD *)(*v4 + 312);
        if ( *(_QWORD *)(v34 + 40) )
        {
          v35 = *(_QWORD *)(v34 + 40);
          IoAddTriageDumpDataBlock(v35, (PVOID)0x388);
          if ( *(_WORD *)(v35 + 40) )
          {
            IoAddTriageDumpDataBlock(v35 + 40, (PVOID)2);
            IoAddTriageDumpDataBlock(*(_QWORD *)(v35 + 48), (PVOID)*(unsigned __int16 *)(v35 + 40));
          }
          v36 = *v4 + 312;
          if ( *v4 )
            v37 = *(_QWORD *)(*(_QWORD *)v36 + 40LL);
          else
            v37 = 0LL;
          if ( *(_WORD *)(v37 + 56) )
          {
            if ( *v4 )
              v38 = *(_QWORD *)(*(_QWORD *)v36 + 40LL);
            else
              LODWORD(v38) = 0;
            IoAddTriageDumpDataBlock(v38 + 56, (PVOID)2);
            if ( *v4 )
            {
              v39 = *(_QWORD *)(*(_QWORD *)(*v4 + 312) + 40LL);
              v40 = v39;
            }
            else
            {
              v39 = 0LL;
              v40 = 0LL;
            }
            IoAddTriageDumpDataBlock(*(_QWORD *)(v40 + 64), (PVOID)*(unsigned __int16 *)(v39 + 56));
          }
          v41 = *v4;
          v42 = *v4 + 312;
          if ( *v4 )
            v43 = *(_QWORD *)(*(_QWORD *)v42 + 40LL);
          else
            v43 = 0LL;
          if ( *(_QWORD *)(v43 + 16) )
          {
            v44 = v41 ? *(_QWORD *)(*(_QWORD *)v42 + 40LL) : 0LL;
            if ( *(_WORD *)(*(_QWORD *)(v44 + 16) + 56LL) )
            {
              if ( v41 )
                v45 = *(_QWORD *)(*(_QWORD *)v42 + 40LL);
              else
                v45 = 0LL;
              IoAddTriageDumpDataBlock(*(_QWORD *)(v45 + 16) + 56, (PVOID)2);
              if ( *v4 )
              {
                v46 = *(_QWORD *)(*(_QWORD *)(*v4 + 312) + 40LL);
                v47 = v46;
              }
              else
              {
                v46 = 0LL;
                v47 = 0LL;
              }
              IoAddTriageDumpDataBlock(
                *(_QWORD *)(*(_QWORD *)(v47 + 16) + 64LL),
                (PVOID)*(unsigned __int16 *)(*(_QWORD *)(v46 + 16) + 56LL));
            }
          }
        }
      }
    }
    KeBugCheckEx(0xCAu, 2uLL, *v4, 0LL, 0LL);
  }
LABEL_9:
  Pool2 = ExAllocatePool2(0x40uLL);
  v14 = Pool2;
  if ( !Pool2 )
  {
    PluginDriver = -1073741670;
    goto LABEL_164;
  }
  *(_QWORD *)Pool2 = *a1;
  *(_QWORD *)(Pool2 + 32) = *v4;
  *(_DWORD *)(Pool2 + 64) = *((_DWORD *)a1 + 4);
  *(_QWORD *)(Pool2 + 160) = Pool2 + 152;
  *(_QWORD *)(Pool2 + 152) = Pool2 + 152;
  PnprContext = Pool2;
  if ( !KeDynamicPartitioningSupported && *((int *)a1 + 4) >= 0 )
  {
    v48 = *(_DWORD *)(Pool2 + 33288);
    v11 = 170LL;
    if ( !v48 )
      v48 = 170;
    *(_DWORD *)(v14 + 33288) = v48;
    v49 = *(_DWORD *)(v14 + 33292);
    if ( !v49 )
      v49 = 2;
    *(_DWORD *)(v14 + 33292) = v49;
LABEL_86:
    PluginDriver = -1073741637;
    goto LABEL_164;
  }
  v82 = 0;
  P = 0LL;
  v50 = 0;
  if ( (int)IoGetLegacyVetoList(&P, &v82) >= 0 )
    v50 = v82 != 0;
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( v50 )
  {
    v11 = PnprContext;
    PluginDriver = -1073741621;
    v51 = *(_DWORD *)(PnprContext + 33288);
    if ( !v51 )
      v51 = 182;
    v10 = 7LL;
LABEL_95:
    *(_DWORD *)(v11 + 33288) = v51;
    v52 = *(_DWORD *)(v11 + 33292);
    if ( !v52 )
      v52 = v10;
    *(_DWORD *)(v11 + 33292) = v52;
    goto LABEL_164;
  }
  PnprGetMillisecondCounter(1LL);
  if ( *((int *)a1 + 4) < 0 )
  {
    PnprLockPagesForReplace();
    PnprQuiesceDevices(v87);
    PnprWakeDevices(v87);
    PnprUnlockPagesForReplace();
    PluginDriver = 0;
    goto LABEL_164;
  }
  PluginDriver = PnprIdentifyUnits(*(PVOID *)v14, *(PVOID *)(v14 + 32));
  if ( PluginDriver < 0 )
  {
    v10 = PnprContext;
    v53 = *(_DWORD *)(PnprContext + 33288);
    if ( !v53 )
      v53 = 219;
    v54 = *(_DWORD *)(PnprContext + 33292);
    *(_DWORD *)(PnprContext + 33288) = v53;
    v11 = 3LL;
    if ( !v54 )
      v54 = 3;
    *(_DWORD *)(v10 + 33292) = v54;
    goto LABEL_164;
  }
  PluginDriver = PnprCollectResources(v14, v14 + 32);
  if ( PluginDriver < 0 )
  {
    v11 = PnprContext;
    v10 = 232LL;
    v55 = *(_DWORD *)(PnprContext + 33288);
    if ( !v55 )
      v55 = 232;
    *(_DWORD *)(PnprContext + 33288) = v55;
    v56 = *(_DWORD *)(v11 + 33292);
    if ( !v56 )
      v56 = 1;
    goto LABEL_111;
  }
  v57 = 0;
  PluginDriver = PnprLoadPluginDriver(v14 + 33168, v14 + 33192);
  if ( PluginDriver >= 0 )
  {
    ReplaceFeatures = PnprQueryReplaceFeatures(v14 + 33192, (PVOID *)(v14 + 32));
    *(_DWORD *)(v14 + 64) |= ReplaceFeatures;
    v57 = ReplaceFeatures;
    goto LABEL_114;
  }
  if ( !*(_DWORD *)(*(_QWORD *)(v14 + 24) + 4LL) )
  {
LABEL_114:
    v59 = *(_QWORD *)(v14 + 24);
    if ( *(_DWORD *)(v59 + 4) )
    {
      v60 = *(_DWORD *)(v14 + 33200);
      if ( (v60 & 1) == 0 || !*(_QWORD *)(v14 + 33232) )
      {
        v61 = 273;
        goto LABEL_140;
      }
      if ( (v60 & 2) != 0 && !*(_QWORD *)(v14 + 33240) )
      {
        v61 = 281;
LABEL_140:
        v11 = PnprContext;
        v3 = v81;
        v64 = *(_DWORD *)(PnprContext + 33288);
        if ( !v64 )
          v64 = v61;
        v10 = 9LL;
        *(_DWORD *)(PnprContext + 33288) = v64;
        v65 = *(_DWORD *)(v11 + 33292);
        if ( !v65 )
          v65 = 9;
        *(_DWORD *)(v11 + 33292) = v65;
        goto LABEL_86;
      }
      PluginDriver = PnprMmConstruct(v59, v14 + 152);
      if ( PluginDriver < 0 )
      {
        v10 = 293LL;
        goto LABEL_122;
      }
      if ( (v57 & 8) != 0 )
      {
        *(_DWORD *)(*(_QWORD *)(v14 + 56) + 4LL) = 0;
      }
      else if ( !*(_QWORD *)(v14 + 33272) || (*(_DWORD *)(v14 + 64) & 0x20) != 0 )
      {
        v61 = 317;
        goto LABEL_140;
      }
      v3 = v81;
      PluginDriver = PnprAllocateMappingReserves(v14 + 136, v14 + 144, v81);
      if ( PluginDriver < 0 )
      {
        v11 = PnprContext;
        v51 = *(_DWORD *)(PnprContext + 33288);
        if ( !v51 )
          v51 = 332;
        v10 = 10LL;
        goto LABEL_95;
      }
      *(_QWORD *)(v14 + 168) = 0LL;
    }
    else
    {
      v3 = v81;
    }
    if ( (*(_DWORD *)(v14 + 64) & 0x20) != 0 && !*(_QWORD *)(v14 + 33280) )
    {
      v11 = PnprContext;
      PluginDriver = -1073741637;
      v51 = *(_DWORD *)(PnprContext + 33288);
      if ( !v51 )
        v51 = 352;
      v10 = 9LL;
      goto LABEL_95;
    }
    *(_DWORD *)(v14 + 176) = v3;
    *(_QWORD *)&v86.Count = 2097153LL;
    memset_0(&v86.8, 0, sizeof(v86.8));
    KiCopyAffinityEx(&v86, v86.Size, &KeActiveProcessors);
    v66 = *(_QWORD *)(v14 + 16);
    v67 = *(_DWORD *)(v66 + 8);
    if ( v67 )
    {
      v68 = *(_QWORD *)v66 - (_QWORD)&v86.8;
      v69 = &v86.8;
      v70 = v67;
      do
      {
        v69->Bitmap[0] &= ~*(unsigned __int64 *)((char *)v69->Bitmap + v68);
        v69 = ($B38C3B1372D6E954799962D5DD404846 *)((char *)v69 + 8);
        --v70;
      }
      while ( v70 );
    }
    if ( !(unsigned int)KeIsEmptyAffinityEx(&v86.Count) )
    {
      if ( (unsigned int)KeCheckProcessorAffinityEx(&v86.Count, 0) )
        FirstSetLeftAffinity = 0;
      else
        FirstSetLeftAffinity = KeFindFirstSetLeftAffinityEx((__int16 *)&v86);
      *(_DWORD *)(v14 + 180) = FirstSetLeftAffinity;
      v73 = *((_DWORD *)KiGlobalState + FirstSetLeftAffinity);
      *(_QWORD *)&P_8.Group = (unsigned __int16)(v73 >> 6);
      P_8.Mask = 1LL << (v73 & 0x3F);
      KeSetSystemGroupAffinityThread(&P_8, &PreviousAffinity_8);
      PluginDriver = PnprInitiateReplaceOperation();
      KeRevertToUserGroupAffinityThread(&PreviousAffinity_8);
      goto LABEL_164;
    }
    v11 = PnprContext;
    PluginDriver = -1073741621;
    v71 = *(_DWORD *)(PnprContext + 33288);
    if ( !v71 )
      v71 = 379;
    v10 = 6LL;
    *(_DWORD *)(PnprContext + 33288) = v71;
    v56 = *(_DWORD *)(v11 + 33292);
    if ( !v56 )
      v56 = 6;
LABEL_111:
    *(_DWORD *)(v11 + 33292) = v56;
    goto LABEL_164;
  }
  v10 = 258LL;
LABEL_122:
  v11 = PnprContext;
  v3 = v81;
  v62 = *(_DWORD *)(PnprContext + 33288);
  if ( !v62 )
    v62 = v10;
  *(_DWORD *)(PnprContext + 33288) = v62;
  v63 = *(_DWORD *)(v11 + 33292);
  if ( !v63 )
    v63 = 1;
  *(_DWORD *)(v11 + 33292) = v63;
LABEL_164:
  if ( *((int *)a1 + 4) >= 0 )
  {
    if ( PluginDriver < 0 )
    {
      PnprLogFailureEvent(*a1, a1[1], (unsigned int)PluginDriver);
    }
    else
    {
      *(_DWORD *)(v14 + 33344) = PnprGetMillisecondCounter(0LL);
      PnprLogSuccessEvent();
    }
  }
  if ( v14 )
  {
    v74 = *(_QWORD *)(v14 + 33168);
    if ( v74 )
    {
      if ( *(_QWORD *)(v14 + 33208) )
        guard_dispatch_icall_no_overrides(v11, v10, v12, v13);
      MmUnloadSystemImage(v74);
    }
    if ( *(_QWORD *)(v14 + 136) && *(_QWORD *)(v14 + 144) )
    {
      if ( (_DWORD)v3 )
      {
        v75 = 0LL;
        do
        {
          PnprFreeMappingReserve(v75 + *(_QWORD *)(v14 + 136));
          PnprFreeMappingReserve(v75 + *(_QWORD *)(v14 + 144));
          v75 += 24LL;
          --v3;
        }
        while ( v3 );
      }
      ExFreePoolWithTag(*(PVOID *)(v14 + 136), 0x51706E50u);
      ExFreePoolWithTag(*(PVOID *)(v14 + 144), 0x51706E50u);
    }
    PnprMmFree(v14 + 152);
    v76 = *(void **)(v14 + 16);
    if ( v76 )
    {
      ExFreePoolWithTag(v76, 0x51706E50u);
      *(_QWORD *)(v14 + 16) = 0LL;
    }
    v77 = *(void **)(v14 + 24);
    if ( v77 )
    {
      ExFreePoolWithTag(v77, 0x51706E50u);
      *(_QWORD *)(v14 + 24) = 0LL;
    }
    v78 = *(void **)(v14 + 48);
    if ( v78 )
    {
      ExFreePoolWithTag(v78, 0x51706E50u);
      *(_QWORD *)(v14 + 48) = 0LL;
    }
    v79 = *(void **)(v14 + 56);
    if ( v79 )
    {
      ExFreePoolWithTag(v79, 0x51706E50u);
      *(_QWORD *)(v14 + 56) = 0LL;
    }
    ExFreePoolWithTag((PVOID)v14, 0x51706E50u);
  }
  KeSetEvent(&PnpReplaceEvent, 0, 0);
  *((_DWORD *)a1 + 5) = PluginDriver;
  return KeSetEvent((PRKEVENT)a1 + 1, 0, 0);
}
