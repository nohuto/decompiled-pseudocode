/*
 * XREFs of PnpReplacePartitionUnit @ 0x1407222A0
 * Callers:
 *     IoReplacePartitionUnit @ 0x140712A50 (IoReplacePartitionUnit.c)
 * Callees:
 *     KeSetEvent @ 0x140250100 (KeSetEvent.c)
 *     KeCheckProcessorAffinityEx @ 0x14026BAA0 (KeCheckProcessorAffinityEx.c)
 *     ?KiCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z @ 0x140271570 (-KiCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z.c)
 *     KeSetSystemGroupAffinityThread @ 0x1402783E0 (KeSetSystemGroupAffinityThread.c)
 *     KeRevertToUserGroupAffinityThread @ 0x140278FE0 (KeRevertToUserGroupAffinityThread.c)
 *     KeWaitForSingleObject @ 0x14029C6A0 (KeWaitForSingleObject.c)
 *     KeIsEmptyAffinityEx @ 0x140377880 (KeIsEmptyAffinityEx.c)
 *     KeQueryActiveProcessorCountEx @ 0x1403AE660 (KeQueryActiveProcessorCountEx.c)
 *     IoAddTriageDumpDataBlock @ 0x14041F7F0 (IoAddTriageDumpDataBlock.c)
 *     KeFindFirstSetLeftAffinityEx @ 0x14044CAD0 (KeFindFirstSetLeftAffinityEx.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     PnprQueryReplaceFeatures @ 0x1405A4398 (PnprQueryReplaceFeatures.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     PnprAllocateMappingReserves @ 0x140723114 (PnprAllocateMappingReserves.c)
 *     PnprCollectResources @ 0x1407232A0 (PnprCollectResources.c)
 *     PnprFreeMappingReserve @ 0x1407235EC (PnprFreeMappingReserve.c)
 *     PnprIdentifyUnits @ 0x14072385C (PnprIdentifyUnits.c)
 *     PnprLoadPluginDriver @ 0x140723D14 (PnprLoadPluginDriver.c)
 *     PnprLockPagesForReplace @ 0x140723EA0 (PnprLockPagesForReplace.c)
 *     PnprLogFailureEvent @ 0x140723ED0 (PnprLogFailureEvent.c)
 *     PnprLogStartEvent @ 0x140723FFC (PnprLogStartEvent.c)
 *     PnprLogSuccessEvent @ 0x1407240D0 (PnprLogSuccessEvent.c)
 *     PnprMmConstruct @ 0x1407244C0 (PnprMmConstruct.c)
 *     PnprMmFree @ 0x1407245C4 (PnprMmFree.c)
 *     PnprUnlockPagesForReplace @ 0x1407247AC (PnprUnlockPagesForReplace.c)
 *     IoGetLegacyVetoList @ 0x140A10B20 (IoGetLegacyVetoList.c)
 *     MmUnloadSystemImage @ 0x140A86260 (MmUnloadSystemImage.c)
 *     PnprGetMillisecondCounter @ 0x140B43B94 (PnprGetMillisecondCounter.c)
 *     PnprInitiateReplaceOperation @ 0x140B43BF4 (PnprInitiateReplaceOperation.c)
 *     PnprQuiesceDevices @ 0x140B445A4 (PnprQuiesceDevices.c)
 *     PnprWakeDevices @ 0x140B451D4 (PnprWakeDevices.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
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
  __int64 v10; // rcx
  __int64 v11; // rbx
  int PluginDriver; // edi
  __int64 v13; // rcx
  _WORD *v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rbx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rcx
  ULONG_PTR v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // rax
  __int64 v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rcx
  _WORD *v30; // rcx
  __int64 v31; // rax
  __int64 v32; // rbx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // rcx
  __int64 v36; // rdx
  __int64 v37; // rcx
  ULONG_PTR v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // rax
  __int64 v42; // rcx
  __int64 v43; // rdx
  __int64 v44; // rcx
  int v45; // eax
  int v46; // eax
  bool v47; // di
  int v48; // eax
  int v49; // edx
  int v50; // eax
  __int64 v51; // rdx
  int v52; // ecx
  int v53; // eax
  int v54; // eax
  int v55; // eax
  char v56; // r15
  int ReplaceFeatures; // eax
  __int64 v58; // rcx
  int v59; // eax
  int v60; // edx
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
  _GROUP_AFFINITY P_8; // [rsp+48h] [rbp-C0h] BYREF
  _GROUP_AFFINITY PreviousAffinity_8; // [rsp+58h] [rbp-B0h] BYREF
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
          v13 = *(_QWORD *)(*a1 + 8);
          if ( v13 )
          {
            IoAddTriageDumpDataBlock(v13, (PVOID)(unsigned int)*(__int16 *)(v13 + 2));
            v14 = (_WORD *)(*(_QWORD *)(*a1 + 8) + 56LL);
            if ( *v14 )
            {
              IoAddTriageDumpDataBlock((ULONG)v14, (PVOID)2);
              IoAddTriageDumpDataBlock(
                *(_QWORD *)(*(_QWORD *)(*a1 + 8) + 64LL),
                (PVOID)*(unsigned __int16 *)(*(_QWORD *)(*a1 + 8) + 56LL));
            }
          }
          if ( *a1 )
          {
            v15 = *(_QWORD *)(*a1 + 312);
            if ( *(_QWORD *)(v15 + 40) )
            {
              v16 = *(_QWORD *)(v15 + 40);
              IoAddTriageDumpDataBlock(v16, (PVOID)0x388);
              if ( *(_WORD *)(v16 + 40) )
              {
                IoAddTriageDumpDataBlock(v16 + 40, (PVOID)2);
                IoAddTriageDumpDataBlock(*(_QWORD *)(v16 + 48), (PVOID)*(unsigned __int16 *)(v16 + 40));
              }
              v17 = *a1 + 312;
              if ( *a1 )
                v18 = *(_QWORD *)(*(_QWORD *)v17 + 40LL);
              else
                v18 = 0LL;
              if ( *(_WORD *)(v18 + 56) )
              {
                if ( *a1 )
                  v19 = *(_QWORD *)(*(_QWORD *)v17 + 40LL);
                else
                  LODWORD(v19) = 0;
                IoAddTriageDumpDataBlock(v19 + 56, (PVOID)2);
                if ( *a1 )
                {
                  v20 = *(_QWORD *)(*(_QWORD *)(*a1 + 312) + 40LL);
                  v21 = v20;
                }
                else
                {
                  v20 = 0LL;
                  v21 = 0LL;
                }
                IoAddTriageDumpDataBlock(*(_QWORD *)(v21 + 64), (PVOID)*(unsigned __int16 *)(v20 + 56));
              }
              v22 = *a1;
              v23 = *a1 + 312;
              if ( *a1 )
                v24 = *(_QWORD *)(*(_QWORD *)v23 + 40LL);
              else
                v24 = 0LL;
              if ( *(_QWORD *)(v24 + 16) )
              {
                v25 = v22 ? *(_QWORD *)(*(_QWORD *)v23 + 40LL) : 0LL;
                if ( *(_WORD *)(*(_QWORD *)(v25 + 16) + 56LL) )
                {
                  if ( v22 )
                    v26 = *(_QWORD *)(*(_QWORD *)v23 + 40LL);
                  else
                    v26 = 0LL;
                  IoAddTriageDumpDataBlock(*(_QWORD *)(v26 + 16) + 56, (PVOID)2);
                  if ( *a1 )
                  {
                    v27 = *(_QWORD *)(*(_QWORD *)(*a1 + 312) + 40LL);
                    v28 = v27;
                  }
                  else
                  {
                    v27 = 0LL;
                    v28 = 0LL;
                  }
                  IoAddTriageDumpDataBlock(
                    *(_QWORD *)(*(_QWORD *)(v28 + 16) + 64LL),
                    (PVOID)*(unsigned __int16 *)(*(_QWORD *)(v27 + 16) + 56LL));
                }
              }
            }
          }
        }
        KeBugCheckEx(0xCAu, 2uLL, *a1, 0LL, 0LL);
      }
      IoAddTriageDumpDataBlock(*v4, (PVOID)*(unsigned __int16 *)(v5 + 2));
      v29 = *(_QWORD *)(*v4 + 8);
      if ( v29 )
      {
        IoAddTriageDumpDataBlock(v29, (PVOID)(unsigned int)*(__int16 *)(v29 + 2));
        v30 = (_WORD *)(*(_QWORD *)(*v4 + 8) + 56LL);
        if ( *v30 )
        {
          IoAddTriageDumpDataBlock((ULONG)v30, (PVOID)2);
          IoAddTriageDumpDataBlock(
            *(_QWORD *)(*(_QWORD *)(*v4 + 8) + 64LL),
            (PVOID)*(unsigned __int16 *)(*(_QWORD *)(*v4 + 8) + 56LL));
        }
      }
      if ( *v4 )
      {
        v31 = *(_QWORD *)(*v4 + 312);
        if ( *(_QWORD *)(v31 + 40) )
        {
          v32 = *(_QWORD *)(v31 + 40);
          IoAddTriageDumpDataBlock(v32, (PVOID)0x388);
          if ( *(_WORD *)(v32 + 40) )
          {
            IoAddTriageDumpDataBlock(v32 + 40, (PVOID)2);
            IoAddTriageDumpDataBlock(*(_QWORD *)(v32 + 48), (PVOID)*(unsigned __int16 *)(v32 + 40));
          }
          v33 = *v4 + 312;
          if ( *v4 )
            v34 = *(_QWORD *)(*(_QWORD *)v33 + 40LL);
          else
            v34 = 0LL;
          if ( *(_WORD *)(v34 + 56) )
          {
            if ( *v4 )
              v35 = *(_QWORD *)(*(_QWORD *)v33 + 40LL);
            else
              LODWORD(v35) = 0;
            IoAddTriageDumpDataBlock(v35 + 56, (PVOID)2);
            if ( *v4 )
            {
              v36 = *(_QWORD *)(*(_QWORD *)(*v4 + 312) + 40LL);
              v37 = v36;
            }
            else
            {
              v36 = 0LL;
              v37 = 0LL;
            }
            IoAddTriageDumpDataBlock(*(_QWORD *)(v37 + 64), (PVOID)*(unsigned __int16 *)(v36 + 56));
          }
          v38 = *v4;
          v39 = *v4 + 312;
          if ( *v4 )
            v40 = *(_QWORD *)(*(_QWORD *)v39 + 40LL);
          else
            v40 = 0LL;
          if ( *(_QWORD *)(v40 + 16) )
          {
            v41 = v38 ? *(_QWORD *)(*(_QWORD *)v39 + 40LL) : 0LL;
            if ( *(_WORD *)(*(_QWORD *)(v41 + 16) + 56LL) )
            {
              if ( v38 )
                v42 = *(_QWORD *)(*(_QWORD *)v39 + 40LL);
              else
                v42 = 0LL;
              IoAddTriageDumpDataBlock(*(_QWORD *)(v42 + 16) + 56, (PVOID)2);
              if ( *v4 )
              {
                v43 = *(_QWORD *)(*(_QWORD *)(*v4 + 312) + 40LL);
                v44 = v43;
              }
              else
              {
                v43 = 0LL;
                v44 = 0LL;
              }
              IoAddTriageDumpDataBlock(
                *(_QWORD *)(*(_QWORD *)(v44 + 16) + 64LL),
                (PVOID)*(unsigned __int16 *)(*(_QWORD *)(v43 + 16) + 56LL));
            }
          }
        }
      }
    }
    KeBugCheckEx(0xCAu, 2uLL, *v4, 0LL, 0LL);
  }
LABEL_9:
  Pool2 = ExAllocatePool2(0x40uLL);
  v11 = Pool2;
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
    v45 = *(_DWORD *)(Pool2 + 33288);
    v10 = 170LL;
    if ( !v45 )
      v45 = 170;
    *(_DWORD *)(v11 + 33288) = v45;
    v46 = *(_DWORD *)(v11 + 33292);
    if ( !v46 )
      v46 = 2;
    *(_DWORD *)(v11 + 33292) = v46;
LABEL_86:
    PluginDriver = -1073741637;
    goto LABEL_164;
  }
  v82 = 0;
  P = 0LL;
  v47 = 0;
  if ( (int)IoGetLegacyVetoList(&P, &v82) >= 0 )
    v47 = v82 != 0;
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( v47 )
  {
    v10 = PnprContext;
    PluginDriver = -1073741621;
    v48 = *(_DWORD *)(PnprContext + 33288);
    if ( !v48 )
      v48 = 182;
    v49 = 7;
LABEL_95:
    *(_DWORD *)(v10 + 33288) = v48;
    v50 = *(_DWORD *)(v10 + 33292);
    if ( !v50 )
      v50 = v49;
    *(_DWORD *)(v10 + 33292) = v50;
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
  PluginDriver = PnprIdentifyUnits(*(PVOID *)v11, *(PVOID *)(v11 + 32));
  if ( PluginDriver < 0 )
  {
    v51 = PnprContext;
    v52 = *(_DWORD *)(PnprContext + 33288);
    if ( !v52 )
      v52 = 219;
    v53 = *(_DWORD *)(PnprContext + 33292);
    *(_DWORD *)(PnprContext + 33288) = v52;
    v10 = 3LL;
    if ( !v53 )
      v53 = 3;
    *(_DWORD *)(v51 + 33292) = v53;
    goto LABEL_164;
  }
  PluginDriver = PnprCollectResources(v11, v11 + 32);
  if ( PluginDriver < 0 )
  {
    v10 = PnprContext;
    v54 = *(_DWORD *)(PnprContext + 33288);
    if ( !v54 )
      v54 = 232;
    *(_DWORD *)(PnprContext + 33288) = v54;
    v55 = *(_DWORD *)(v10 + 33292);
    if ( !v55 )
      v55 = 1;
    goto LABEL_111;
  }
  v56 = 0;
  PluginDriver = PnprLoadPluginDriver(v11 + 33168, v11 + 33192);
  if ( PluginDriver >= 0 )
  {
    ReplaceFeatures = PnprQueryReplaceFeatures(v11 + 33192, (PVOID *)(v11 + 32));
    *(_DWORD *)(v11 + 64) |= ReplaceFeatures;
    v56 = ReplaceFeatures;
    goto LABEL_114;
  }
  if ( !*(_DWORD *)(*(_QWORD *)(v11 + 24) + 4LL) )
  {
LABEL_114:
    v58 = *(_QWORD *)(v11 + 24);
    if ( *(_DWORD *)(v58 + 4) )
    {
      v59 = *(_DWORD *)(v11 + 33200);
      if ( (v59 & 1) == 0 || !*(_QWORD *)(v11 + 33232) )
      {
        v60 = 273;
        goto LABEL_140;
      }
      if ( (v59 & 2) != 0 && !*(_QWORD *)(v11 + 33240) )
      {
        v60 = 281;
LABEL_140:
        v10 = PnprContext;
        v3 = v81;
        v64 = *(_DWORD *)(PnprContext + 33288);
        if ( !v64 )
          v64 = v60;
        *(_DWORD *)(PnprContext + 33288) = v64;
        v65 = *(_DWORD *)(v10 + 33292);
        if ( !v65 )
          v65 = 9;
        *(_DWORD *)(v10 + 33292) = v65;
        goto LABEL_86;
      }
      PluginDriver = PnprMmConstruct(v58, v11 + 152);
      if ( PluginDriver < 0 )
      {
        v61 = 293;
        goto LABEL_122;
      }
      if ( (v56 & 8) != 0 )
      {
        *(_DWORD *)(*(_QWORD *)(v11 + 56) + 4LL) = 0;
      }
      else if ( !*(_QWORD *)(v11 + 33272) || (*(_DWORD *)(v11 + 64) & 0x20) != 0 )
      {
        v60 = 317;
        goto LABEL_140;
      }
      v3 = v81;
      PluginDriver = PnprAllocateMappingReserves(v11 + 136, v11 + 144, v81);
      if ( PluginDriver < 0 )
      {
        v10 = PnprContext;
        v48 = *(_DWORD *)(PnprContext + 33288);
        if ( !v48 )
          v48 = 332;
        v49 = 10;
        goto LABEL_95;
      }
      *(_QWORD *)(v11 + 168) = 0LL;
    }
    else
    {
      v3 = v81;
    }
    if ( (*(_DWORD *)(v11 + 64) & 0x20) != 0 && !*(_QWORD *)(v11 + 33280) )
    {
      v10 = PnprContext;
      PluginDriver = -1073741637;
      v48 = *(_DWORD *)(PnprContext + 33288);
      if ( !v48 )
        v48 = 352;
      v49 = 9;
      goto LABEL_95;
    }
    *(_DWORD *)(v11 + 176) = v3;
    *(_QWORD *)&v86.Count = 2097153LL;
    memset_0(&v86.8, 0, sizeof(v86.8));
    KiCopyAffinityEx(&v86, v86.Size, &KeActiveProcessors);
    v66 = *(_QWORD *)(v11 + 16);
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
      *(_DWORD *)(v11 + 180) = FirstSetLeftAffinity;
      v73 = *((_DWORD *)KiGlobalState + FirstSetLeftAffinity);
      *(_QWORD *)&P_8.Group = (unsigned __int16)(v73 >> 6);
      P_8.Mask = 1LL << (v73 & 0x3F);
      KeSetSystemGroupAffinityThread(&P_8, &PreviousAffinity_8);
      PluginDriver = PnprInitiateReplaceOperation();
      KeRevertToUserGroupAffinityThread(&PreviousAffinity_8);
      goto LABEL_164;
    }
    v10 = PnprContext;
    PluginDriver = -1073741621;
    v71 = *(_DWORD *)(PnprContext + 33288);
    if ( !v71 )
      v71 = 379;
    *(_DWORD *)(PnprContext + 33288) = v71;
    v55 = *(_DWORD *)(v10 + 33292);
    if ( !v55 )
      v55 = 6;
LABEL_111:
    *(_DWORD *)(v10 + 33292) = v55;
    goto LABEL_164;
  }
  v61 = 258;
LABEL_122:
  v10 = PnprContext;
  v3 = v81;
  v62 = *(_DWORD *)(PnprContext + 33288);
  if ( !v62 )
    v62 = v61;
  *(_DWORD *)(PnprContext + 33288) = v62;
  v63 = *(_DWORD *)(v10 + 33292);
  if ( !v63 )
    v63 = 1;
  *(_DWORD *)(v10 + 33292) = v63;
LABEL_164:
  if ( *((int *)a1 + 4) >= 0 )
  {
    if ( PluginDriver < 0 )
    {
      PnprLogFailureEvent(*a1, a1[1], (unsigned int)PluginDriver);
    }
    else
    {
      *(_DWORD *)(v11 + 33344) = PnprGetMillisecondCounter(0LL);
      PnprLogSuccessEvent();
    }
  }
  if ( v11 )
  {
    v74 = *(_QWORD *)(v11 + 33168);
    if ( v74 )
    {
      if ( *(_QWORD *)(v11 + 33208) )
        guard_dispatch_icall_no_overrides(v10);
      MmUnloadSystemImage(v74);
    }
    if ( *(_QWORD *)(v11 + 136) && *(_QWORD *)(v11 + 144) )
    {
      if ( (_DWORD)v3 )
      {
        v75 = 0LL;
        do
        {
          PnprFreeMappingReserve(v75 + *(_QWORD *)(v11 + 136));
          PnprFreeMappingReserve(v75 + *(_QWORD *)(v11 + 144));
          v75 += 24LL;
          --v3;
        }
        while ( v3 );
      }
      ExFreePoolWithTag(*(PVOID *)(v11 + 136), 0x51706E50u);
      ExFreePoolWithTag(*(PVOID *)(v11 + 144), 0x51706E50u);
    }
    PnprMmFree(v11 + 152);
    v76 = *(void **)(v11 + 16);
    if ( v76 )
    {
      ExFreePoolWithTag(v76, 0x51706E50u);
      *(_QWORD *)(v11 + 16) = 0LL;
    }
    v77 = *(void **)(v11 + 24);
    if ( v77 )
    {
      ExFreePoolWithTag(v77, 0x51706E50u);
      *(_QWORD *)(v11 + 24) = 0LL;
    }
    v78 = *(void **)(v11 + 48);
    if ( v78 )
    {
      ExFreePoolWithTag(v78, 0x51706E50u);
      *(_QWORD *)(v11 + 48) = 0LL;
    }
    v79 = *(void **)(v11 + 56);
    if ( v79 )
    {
      ExFreePoolWithTag(v79, 0x51706E50u);
      *(_QWORD *)(v11 + 56) = 0LL;
    }
    ExFreePoolWithTag((PVOID)v11, 0x51706E50u);
  }
  KeSetEvent(&PnpReplaceEvent, 0, 0);
  *((_DWORD *)a1 + 5) = PluginDriver;
  return KeSetEvent((PRKEVENT)a1 + 1, 0, 0);
}
