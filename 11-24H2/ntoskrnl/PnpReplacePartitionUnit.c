/*
 * XREFs of PnpReplacePartitionUnit @ 0x14072C230
 * Callers:
 *     IoReplacePartitionUnit @ 0x14071C6E0 (IoReplacePartitionUnit.c)
 * Callees:
 *     KeSetEvent @ 0x140227B30 (KeSetEvent.c)
 *     KeSetSystemGroupAffinityThread @ 0x140318B30 (KeSetSystemGroupAffinityThread.c)
 *     KeRevertToUserGroupAffinityThread @ 0x140319730 (KeRevertToUserGroupAffinityThread.c)
 *     KeWaitForSingleObject @ 0x14031DE40 (KeWaitForSingleObject.c)
 *     KeQueryActiveProcessorCountEx @ 0x140339940 (KeQueryActiveProcessorCountEx.c)
 *     KeIsEmptyAffinityEx @ 0x140371960 (KeIsEmptyAffinityEx.c)
 *     ?KiCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z @ 0x14039FF30 (-KiCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z.c)
 *     KeCheckProcessorAffinityEx @ 0x1403A4AD0 (KeCheckProcessorAffinityEx.c)
 *     IoAddTriageDumpDataBlock @ 0x1403E65A0 (IoAddTriageDumpDataBlock.c)
 *     KeFindFirstSetLeftAffinityEx @ 0x1404431E0 (KeFindFirstSetLeftAffinityEx.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     PnprQueryReplaceFeatures @ 0x1405A4B98 (PnprQueryReplaceFeatures.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     PnprAllocateMappingReserves @ 0x14072D0A4 (PnprAllocateMappingReserves.c)
 *     PnprCollectResources @ 0x14072D230 (PnprCollectResources.c)
 *     PnprFreeMappingReserve @ 0x14072D57C (PnprFreeMappingReserve.c)
 *     PnprIdentifyUnits @ 0x14072D7EC (PnprIdentifyUnits.c)
 *     PnprLoadPluginDriver @ 0x14072DCA4 (PnprLoadPluginDriver.c)
 *     PnprLockPagesForReplace @ 0x14072DE30 (PnprLockPagesForReplace.c)
 *     PnprLogFailureEvent @ 0x14072DE60 (PnprLogFailureEvent.c)
 *     PnprLogStartEvent @ 0x14072DF8C (PnprLogStartEvent.c)
 *     PnprLogSuccessEvent @ 0x14072E060 (PnprLogSuccessEvent.c)
 *     PnprMmConstruct @ 0x14072E450 (PnprMmConstruct.c)
 *     PnprMmFree @ 0x14072E554 (PnprMmFree.c)
 *     PnprUnlockPagesForReplace @ 0x14072E73C (PnprUnlockPagesForReplace.c)
 *     IoGetLegacyVetoList @ 0x14099F770 (IoGetLegacyVetoList.c)
 *     MmUnloadSystemImage @ 0x140A87050 (MmUnloadSystemImage.c)
 *     PnprGetMillisecondCounter @ 0x140B55BE4 (PnprGetMillisecondCounter.c)
 *     PnprInitiateReplaceOperation @ 0x140B55C44 (PnprInitiateReplaceOperation.c)
 *     PnprQuiesceDevices @ 0x140B565F4 (PnprQuiesceDevices.c)
 *     PnprWakeDevices @ 0x140B57224 (PnprWakeDevices.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
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
  __int64 v12; // rbx
  int PluginDriver; // edi
  __int64 v14; // rcx
  _WORD *v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rbx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rcx
  ULONG_PTR v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rcx
  _WORD *v31; // rcx
  __int64 v32; // rax
  __int64 v33; // rbx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // rcx
  __int64 v37; // rdx
  __int64 v38; // rcx
  ULONG_PTR v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // rax
  __int64 v43; // rcx
  __int64 v44; // rdx
  __int64 v45; // rcx
  int v46; // eax
  int v47; // eax
  bool v48; // di
  int v49; // eax
  int v50; // eax
  int v51; // ecx
  int v52; // eax
  int v53; // eax
  int v54; // eax
  char v55; // r15
  int ReplaceFeatures; // eax
  __int64 v57; // rcx
  int v58; // eax
  int v59; // edx
  int v60; // eax
  int v61; // eax
  int v62; // eax
  int v63; // eax
  __int64 v64; // rdx
  unsigned int v65; // eax
  __int64 v66; // rdx
  $B38C3B1372D6E954799962D5DD404846 *v67; // rcx
  __int64 v68; // r8
  int v69; // eax
  unsigned int FirstSetLeftAffinity; // eax
  unsigned int v71; // ecx
  ULONG_PTR v72; // rsi
  __int64 v73; // rsi
  void *v74; // rcx
  void *v75; // rcx
  void *v76; // rcx
  void *v77; // rcx
  ULONG v79; // [rsp+38h] [rbp-D0h]
  int v80; // [rsp+3Ch] [rbp-CCh] BYREF
  PVOID P; // [rsp+40h] [rbp-C8h] BYREF
  _GROUP_AFFINITY P_8; // [rsp+48h] [rbp-C0h] BYREF
  _GROUP_AFFINITY PreviousAffinity_8; // [rsp+58h] [rbp-B0h] BYREF
  struct _KAFFINITY_EX v84; // [rsp+68h] [rbp-A0h] BYREF
  _BYTE v85[80]; // [rsp+178h] [rbp+70h] BYREF

  P_8 = 0LL;
  memset_0(&v84.8, 0, sizeof(v84.8));
  PreviousAffinity_8 = 0LL;
  memset_0(v85, 0, sizeof(v85));
  ActiveProcessorCount = KeQueryActiveProcessorCountEx(0xFFFFu);
  v3 = ActiveProcessorCount;
  v79 = ActiveProcessorCount;
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
          v14 = *(_QWORD *)(*a1 + 8);
          if ( v14 )
          {
            IoAddTriageDumpDataBlock(v14, (PVOID)(unsigned int)*(__int16 *)(v14 + 2));
            v15 = (_WORD *)(*(_QWORD *)(*a1 + 8) + 56LL);
            if ( *v15 )
            {
              IoAddTriageDumpDataBlock((ULONG)v15, (PVOID)2);
              IoAddTriageDumpDataBlock(
                *(_QWORD *)(*(_QWORD *)(*a1 + 8) + 64LL),
                (PVOID)*(unsigned __int16 *)(*(_QWORD *)(*a1 + 8) + 56LL));
            }
          }
          if ( *a1 )
          {
            v16 = *(_QWORD *)(*a1 + 312);
            if ( *(_QWORD *)(v16 + 40) )
            {
              v17 = *(_QWORD *)(v16 + 40);
              IoAddTriageDumpDataBlock(v17, (PVOID)0x388);
              if ( *(_WORD *)(v17 + 40) )
              {
                IoAddTriageDumpDataBlock(v17 + 40, (PVOID)2);
                IoAddTriageDumpDataBlock(*(_QWORD *)(v17 + 48), (PVOID)*(unsigned __int16 *)(v17 + 40));
              }
              v18 = *a1 + 312;
              if ( *a1 )
                v19 = *(_QWORD *)(*(_QWORD *)v18 + 40LL);
              else
                v19 = 0LL;
              if ( *(_WORD *)(v19 + 56) )
              {
                if ( *a1 )
                  v20 = *(_QWORD *)(*(_QWORD *)v18 + 40LL);
                else
                  LODWORD(v20) = 0;
                IoAddTriageDumpDataBlock(v20 + 56, (PVOID)2);
                if ( *a1 )
                {
                  v21 = *(_QWORD *)(*(_QWORD *)(*a1 + 312) + 40LL);
                  v22 = v21;
                }
                else
                {
                  v21 = 0LL;
                  v22 = 0LL;
                }
                IoAddTriageDumpDataBlock(*(_QWORD *)(v22 + 64), (PVOID)*(unsigned __int16 *)(v21 + 56));
              }
              v23 = *a1;
              v24 = *a1 + 312;
              if ( *a1 )
                v25 = *(_QWORD *)(*(_QWORD *)v24 + 40LL);
              else
                v25 = 0LL;
              if ( *(_QWORD *)(v25 + 16) )
              {
                v26 = v23 ? *(_QWORD *)(*(_QWORD *)v24 + 40LL) : 0LL;
                if ( *(_WORD *)(*(_QWORD *)(v26 + 16) + 56LL) )
                {
                  if ( v23 )
                    v27 = *(_QWORD *)(*(_QWORD *)v24 + 40LL);
                  else
                    v27 = 0LL;
                  IoAddTriageDumpDataBlock(*(_QWORD *)(v27 + 16) + 56, (PVOID)2);
                  if ( *a1 )
                  {
                    v28 = *(_QWORD *)(*(_QWORD *)(*a1 + 312) + 40LL);
                    v29 = v28;
                  }
                  else
                  {
                    v28 = 0LL;
                    v29 = 0LL;
                  }
                  IoAddTriageDumpDataBlock(
                    *(_QWORD *)(*(_QWORD *)(v29 + 16) + 64LL),
                    (PVOID)*(unsigned __int16 *)(*(_QWORD *)(v28 + 16) + 56LL));
                }
              }
            }
          }
        }
        KeBugCheckEx(0xCAu, 2uLL, *a1, 0LL, 0LL);
      }
      IoAddTriageDumpDataBlock(*v4, (PVOID)*(unsigned __int16 *)(v5 + 2));
      v30 = *(_QWORD *)(*v4 + 8);
      if ( v30 )
      {
        IoAddTriageDumpDataBlock(v30, (PVOID)(unsigned int)*(__int16 *)(v30 + 2));
        v31 = (_WORD *)(*(_QWORD *)(*v4 + 8) + 56LL);
        if ( *v31 )
        {
          IoAddTriageDumpDataBlock((ULONG)v31, (PVOID)2);
          IoAddTriageDumpDataBlock(
            *(_QWORD *)(*(_QWORD *)(*v4 + 8) + 64LL),
            (PVOID)*(unsigned __int16 *)(*(_QWORD *)(*v4 + 8) + 56LL));
        }
      }
      if ( *v4 )
      {
        v32 = *(_QWORD *)(*v4 + 312);
        if ( *(_QWORD *)(v32 + 40) )
        {
          v33 = *(_QWORD *)(v32 + 40);
          IoAddTriageDumpDataBlock(v33, (PVOID)0x388);
          if ( *(_WORD *)(v33 + 40) )
          {
            IoAddTriageDumpDataBlock(v33 + 40, (PVOID)2);
            IoAddTriageDumpDataBlock(*(_QWORD *)(v33 + 48), (PVOID)*(unsigned __int16 *)(v33 + 40));
          }
          v34 = *v4 + 312;
          if ( *v4 )
            v35 = *(_QWORD *)(*(_QWORD *)v34 + 40LL);
          else
            v35 = 0LL;
          if ( *(_WORD *)(v35 + 56) )
          {
            if ( *v4 )
              v36 = *(_QWORD *)(*(_QWORD *)v34 + 40LL);
            else
              LODWORD(v36) = 0;
            IoAddTriageDumpDataBlock(v36 + 56, (PVOID)2);
            if ( *v4 )
            {
              v37 = *(_QWORD *)(*(_QWORD *)(*v4 + 312) + 40LL);
              v38 = v37;
            }
            else
            {
              v37 = 0LL;
              v38 = 0LL;
            }
            IoAddTriageDumpDataBlock(*(_QWORD *)(v38 + 64), (PVOID)*(unsigned __int16 *)(v37 + 56));
          }
          v39 = *v4;
          v40 = *v4 + 312;
          if ( *v4 )
            v41 = *(_QWORD *)(*(_QWORD *)v40 + 40LL);
          else
            v41 = 0LL;
          if ( *(_QWORD *)(v41 + 16) )
          {
            v42 = v39 ? *(_QWORD *)(*(_QWORD *)v40 + 40LL) : 0LL;
            if ( *(_WORD *)(*(_QWORD *)(v42 + 16) + 56LL) )
            {
              if ( v39 )
                v43 = *(_QWORD *)(*(_QWORD *)v40 + 40LL);
              else
                v43 = 0LL;
              IoAddTriageDumpDataBlock(*(_QWORD *)(v43 + 16) + 56, (PVOID)2);
              if ( *v4 )
              {
                v44 = *(_QWORD *)(*(_QWORD *)(*v4 + 312) + 40LL);
                v45 = v44;
              }
              else
              {
                v44 = 0LL;
                v45 = 0LL;
              }
              IoAddTriageDumpDataBlock(
                *(_QWORD *)(*(_QWORD *)(v45 + 16) + 64LL),
                (PVOID)*(unsigned __int16 *)(*(_QWORD *)(v44 + 16) + 56LL));
            }
          }
        }
      }
    }
    KeBugCheckEx(0xCAu, 2uLL, *v4, 0LL, 0LL);
  }
LABEL_9:
  Pool2 = ExAllocatePool2(0x40uLL, 0x8248uLL, 0x51706E50u);
  v12 = Pool2;
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
    v46 = *(_DWORD *)(Pool2 + 33288);
    v11 = 170LL;
    if ( !v46 )
      v46 = 170;
    *(_DWORD *)(v12 + 33288) = v46;
    v47 = *(_DWORD *)(v12 + 33292);
    if ( !v47 )
      v47 = 2;
    *(_DWORD *)(v12 + 33292) = v47;
LABEL_86:
    PluginDriver = -1073741637;
    goto LABEL_164;
  }
  v80 = 0;
  P = 0LL;
  v48 = 0;
  if ( (int)IoGetLegacyVetoList(&P, &v80) >= 0 )
    v48 = v80 != 0;
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( v48 )
  {
    v11 = PnprContext;
    PluginDriver = -1073741621;
    v49 = *(_DWORD *)(PnprContext + 33288);
    if ( !v49 )
      v49 = 182;
    v10 = 7LL;
LABEL_95:
    *(_DWORD *)(v11 + 33288) = v49;
    v50 = *(_DWORD *)(v11 + 33292);
    if ( !v50 )
      v50 = v10;
    *(_DWORD *)(v11 + 33292) = v50;
    goto LABEL_164;
  }
  PnprGetMillisecondCounter(1LL);
  if ( *((int *)a1 + 4) < 0 )
  {
    PnprLockPagesForReplace();
    PnprQuiesceDevices(v85);
    PnprWakeDevices(v85);
    PnprUnlockPagesForReplace();
    PluginDriver = 0;
    goto LABEL_164;
  }
  PluginDriver = PnprIdentifyUnits(*(PVOID *)v12, *(PVOID *)(v12 + 32));
  if ( PluginDriver < 0 )
  {
    v10 = PnprContext;
    v51 = *(_DWORD *)(PnprContext + 33288);
    if ( !v51 )
      v51 = 219;
    v52 = *(_DWORD *)(PnprContext + 33292);
    *(_DWORD *)(PnprContext + 33288) = v51;
    v11 = 3LL;
    if ( !v52 )
      v52 = 3;
    *(_DWORD *)(v10 + 33292) = v52;
    goto LABEL_164;
  }
  PluginDriver = PnprCollectResources(v12, v12 + 32);
  if ( PluginDriver < 0 )
  {
    v11 = PnprContext;
    v10 = 232LL;
    v53 = *(_DWORD *)(PnprContext + 33288);
    if ( !v53 )
      v53 = 232;
    *(_DWORD *)(PnprContext + 33288) = v53;
    v54 = *(_DWORD *)(v11 + 33292);
    if ( !v54 )
      v54 = 1;
    goto LABEL_111;
  }
  v55 = 0;
  PluginDriver = PnprLoadPluginDriver(v12 + 33168, v12 + 33192);
  if ( PluginDriver >= 0 )
  {
    ReplaceFeatures = PnprQueryReplaceFeatures(v12 + 33192, (PVOID *)(v12 + 32));
    *(_DWORD *)(v12 + 64) |= ReplaceFeatures;
    v55 = ReplaceFeatures;
    goto LABEL_114;
  }
  if ( !*(_DWORD *)(*(_QWORD *)(v12 + 24) + 4LL) )
  {
LABEL_114:
    v57 = *(_QWORD *)(v12 + 24);
    if ( *(_DWORD *)(v57 + 4) )
    {
      v58 = *(_DWORD *)(v12 + 33200);
      if ( (v58 & 1) == 0 || !*(_QWORD *)(v12 + 33232) )
      {
        v59 = 273;
        goto LABEL_140;
      }
      if ( (v58 & 2) != 0 && !*(_QWORD *)(v12 + 33240) )
      {
        v59 = 281;
LABEL_140:
        v11 = PnprContext;
        v3 = v79;
        v62 = *(_DWORD *)(PnprContext + 33288);
        if ( !v62 )
          v62 = v59;
        v10 = 9LL;
        *(_DWORD *)(PnprContext + 33288) = v62;
        v63 = *(_DWORD *)(v11 + 33292);
        if ( !v63 )
          v63 = 9;
        *(_DWORD *)(v11 + 33292) = v63;
        goto LABEL_86;
      }
      PluginDriver = PnprMmConstruct(v57, v12 + 152);
      if ( PluginDriver < 0 )
      {
        v10 = 293LL;
        goto LABEL_122;
      }
      if ( (v55 & 8) != 0 )
      {
        *(_DWORD *)(*(_QWORD *)(v12 + 56) + 4LL) = 0;
      }
      else if ( !*(_QWORD *)(v12 + 33272) || (*(_DWORD *)(v12 + 64) & 0x20) != 0 )
      {
        v59 = 317;
        goto LABEL_140;
      }
      v3 = v79;
      PluginDriver = PnprAllocateMappingReserves(v12 + 136, v12 + 144, v79);
      if ( PluginDriver < 0 )
      {
        v11 = PnprContext;
        v49 = *(_DWORD *)(PnprContext + 33288);
        if ( !v49 )
          v49 = 332;
        v10 = 10LL;
        goto LABEL_95;
      }
      *(_QWORD *)(v12 + 168) = 0LL;
    }
    else
    {
      v3 = v79;
    }
    if ( (*(_DWORD *)(v12 + 64) & 0x20) != 0 && !*(_QWORD *)(v12 + 33280) )
    {
      v11 = PnprContext;
      PluginDriver = -1073741637;
      v49 = *(_DWORD *)(PnprContext + 33288);
      if ( !v49 )
        v49 = 352;
      v10 = 9LL;
      goto LABEL_95;
    }
    *(_DWORD *)(v12 + 176) = v3;
    *(_QWORD *)&v84.Count = 2097153LL;
    memset_0(&v84.8, 0, sizeof(v84.8));
    KiCopyAffinityEx(&v84, v84.Size, &KeActiveProcessors);
    v64 = *(_QWORD *)(v12 + 16);
    v65 = *(_DWORD *)(v64 + 8);
    if ( v65 )
    {
      v66 = *(_QWORD *)v64 - (_QWORD)&v84.8;
      v67 = &v84.8;
      v68 = v65;
      do
      {
        v67->Bitmap[0] &= ~*(unsigned __int64 *)((char *)v67->Bitmap + v66);
        v67 = ($B38C3B1372D6E954799962D5DD404846 *)((char *)v67 + 8);
        --v68;
      }
      while ( v68 );
    }
    if ( !(unsigned int)KeIsEmptyAffinityEx(&v84.Count) )
    {
      if ( (unsigned int)KeCheckProcessorAffinityEx(&v84.Count, 0) )
        FirstSetLeftAffinity = 0;
      else
        FirstSetLeftAffinity = KeFindFirstSetLeftAffinityEx((__int16 *)&v84);
      *(_DWORD *)(v12 + 180) = FirstSetLeftAffinity;
      v71 = *((_DWORD *)KiGlobalState + FirstSetLeftAffinity);
      *(_QWORD *)&P_8.Group = (unsigned __int16)(v71 >> 6);
      P_8.Mask = 1LL << (v71 & 0x3F);
      KeSetSystemGroupAffinityThread(&P_8, &PreviousAffinity_8);
      PluginDriver = PnprInitiateReplaceOperation();
      KeRevertToUserGroupAffinityThread(&PreviousAffinity_8);
      goto LABEL_164;
    }
    v11 = PnprContext;
    PluginDriver = -1073741621;
    v69 = *(_DWORD *)(PnprContext + 33288);
    if ( !v69 )
      v69 = 379;
    v10 = 6LL;
    *(_DWORD *)(PnprContext + 33288) = v69;
    v54 = *(_DWORD *)(v11 + 33292);
    if ( !v54 )
      v54 = 6;
LABEL_111:
    *(_DWORD *)(v11 + 33292) = v54;
    goto LABEL_164;
  }
  v10 = 258LL;
LABEL_122:
  v11 = PnprContext;
  v3 = v79;
  v60 = *(_DWORD *)(PnprContext + 33288);
  if ( !v60 )
    v60 = v10;
  *(_DWORD *)(PnprContext + 33288) = v60;
  v61 = *(_DWORD *)(v11 + 33292);
  if ( !v61 )
    v61 = 1;
  *(_DWORD *)(v11 + 33292) = v61;
LABEL_164:
  if ( *((int *)a1 + 4) >= 0 )
  {
    if ( PluginDriver < 0 )
    {
      PnprLogFailureEvent(*a1, a1[1], (unsigned int)PluginDriver);
    }
    else
    {
      *(_DWORD *)(v12 + 33344) = PnprGetMillisecondCounter(0LL);
      PnprLogSuccessEvent();
    }
  }
  if ( v12 )
  {
    v72 = *(_QWORD *)(v12 + 33168);
    if ( v72 )
    {
      if ( *(_QWORD *)(v12 + 33208) )
        guard_dispatch_icall_no_overrides(v11, v10);
      MmUnloadSystemImage(v72);
    }
    if ( *(_QWORD *)(v12 + 136) && *(_QWORD *)(v12 + 144) )
    {
      if ( (_DWORD)v3 )
      {
        v73 = 0LL;
        do
        {
          PnprFreeMappingReserve(v73 + *(_QWORD *)(v12 + 136));
          PnprFreeMappingReserve(v73 + *(_QWORD *)(v12 + 144));
          v73 += 24LL;
          --v3;
        }
        while ( v3 );
      }
      ExFreePoolWithTag(*(PVOID *)(v12 + 136), 0x51706E50u);
      ExFreePoolWithTag(*(PVOID *)(v12 + 144), 0x51706E50u);
    }
    PnprMmFree(v12 + 152);
    v74 = *(void **)(v12 + 16);
    if ( v74 )
    {
      ExFreePoolWithTag(v74, 0x51706E50u);
      *(_QWORD *)(v12 + 16) = 0LL;
    }
    v75 = *(void **)(v12 + 24);
    if ( v75 )
    {
      ExFreePoolWithTag(v75, 0x51706E50u);
      *(_QWORD *)(v12 + 24) = 0LL;
    }
    v76 = *(void **)(v12 + 48);
    if ( v76 )
    {
      ExFreePoolWithTag(v76, 0x51706E50u);
      *(_QWORD *)(v12 + 48) = 0LL;
    }
    v77 = *(void **)(v12 + 56);
    if ( v77 )
    {
      ExFreePoolWithTag(v77, 0x51706E50u);
      *(_QWORD *)(v12 + 56) = 0LL;
    }
    ExFreePoolWithTag((PVOID)v12, 0x51706E50u);
  }
  KeSetEvent(&PnpReplaceEvent, 0, 0);
  *((_DWORD *)a1 + 5) = PluginDriver;
  return KeSetEvent((PRKEVENT)a1 + 1, 0, 0);
}
