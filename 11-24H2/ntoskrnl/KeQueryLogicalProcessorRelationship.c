/*
 * XREFs of KeQueryLogicalProcessorRelationship @ 0x14032DFF0
 * Callers:
 *     ExpQuerySystemInformation @ 0x140ADDAE0 (ExpQuerySystemInformation.c)
 * Callees:
 *     KeGetNodePrimarySubNode @ 0x14026FD94 (KeGetNodePrimarySubNode.c)
 *     KeAddGroupAffinityEx @ 0x140287710 (KeAddGroupAffinityEx.c)
 *     KeQueryMaximumProcessorCountEx @ 0x14031D920 (KeQueryMaximumProcessorCountEx.c)
 *     KeOrAffinityEx2 @ 0x14032DDD0 (KeOrAffinityEx2.c)
 *     KiTryPopulateLogicalProcessorInformation @ 0x14032DDF8 (KiTryPopulateLogicalProcessorInformation.c)
 *     ?KiAndAffinityExNoResult@@YAKPEAU_KAFFINITY_EX@@0@Z @ 0x14032DF20 (-KiAndAffinityExNoResult@@YAKPEAU_KAFFINITY_EX@@0@Z.c)
 *     KeAndGroupAffinityEx @ 0x14032DF70 (KeAndGroupAffinityEx.c)
 *     KeQueryNodeActiveAffinityEx @ 0x140330080 (KeQueryNodeActiveAffinityEx.c)
 *     KeQueryActiveProcessorCountEx @ 0x140339940 (KeQueryActiveProcessorCountEx.c)
 *     KeGetProcessorIndexFromNumber @ 0x140370440 (KeGetProcessorIndexFromNumber.c)
 *     ?KiCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z @ 0x14039FF30 (-KiCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z.c)
 *     KeGetTopologySiblingAffinityForProcessor @ 0x1404DE1EC (KeGetTopologySiblingAffinityForProcessor.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

NTSTATUS __stdcall KeQueryLogicalProcessorRelationship(
        PPROCESSOR_NUMBER ProcessorNumber,
        LOGICAL_PROCESSOR_RELATIONSHIP RelationshipType,
        PSYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX Information,
        PULONG Length)
{
  LOGICAL_PROCESSOR_RELATIONSHIP v4; // ebx
  _PROCESSOR_NUMBER *v5; // r12
  __int16 v7; // r14
  struct _KAFFINITY_EX *v8; // r13
  unsigned int v9; // eax
  int v10; // ecx
  size_t v11; // r15
  size_t v12; // rdi
  struct _KAFFINITY_EX *v13; // rax
  ULONG ProcessorIndexFromNumber; // edi
  ULONG v15; // r12d
  struct _KAFFINITY_EX *v16; // r15
  unsigned __int16 *v17; // rcx
  unsigned int v18; // r14d
  __int64 v19; // r13
  PPROCESSOR_NUMBER v20; // r14
  unsigned int v21; // esi
  ULONG v22; // r8d
  NTSTATUS v23; // ebx
  __int64 v25; // r12
  __int64 Pool2; // rax
  _DWORD *v27; // rsi
  __int64 v28; // rsi
  int v29; // eax
  DWORD v30; // edi
  unsigned int v31; // r13d
  __int64 v32; // rbx
  WORD v33; // r8
  unsigned __int16 v34; // dx
  __int64 v35; // r10
  DWORD v36; // edx
  int v37; // eax
  unsigned int v38; // esi
  int v39; // edx
  DWORD v40; // eax
  __int64 v41; // rbx
  char *v42; // rdi
  unsigned __int16 v43; // r9
  unsigned __int64 v44; // rcx
  unsigned __int16 v45; // r8
  unsigned __int16 k; // ax
  bool v47; // zf
  int v48; // eax
  __int64 v49; // rsi
  unsigned int v50; // r12d
  __int64 v51; // rdi
  struct _KAFFINITY_EX *v52; // r8
  int v53; // eax
  struct _KAFFINITY_EX *v54; // rdx
  unsigned __int16 i; // cx
  unsigned __int64 v56; // rdx
  unsigned __int16 Group; // r15
  struct _KAFFINITY_EX *v58; // rbx
  WORD v59; // r9
  unsigned __int16 j; // dx
  DWORD v61; // r8d
  __int64 v62; // rsi
  unsigned int v63; // ebx
  _SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX::$293D76B56AB4224063B0E84352A448B8 *p_Processor; // rdi
  __int64 v65; // rcx
  PPROCESSOR_NUMBER v66; // rdx
  __int64 NodePrimarySubNode; // rax
  unsigned __int64 v68; // r9
  int v69; // r10d
  __int64 v70; // rdx
  unsigned __int64 v71; // rcx
  unsigned __int16 v72; // r9
  unsigned __int16 v73; // r11
  unsigned __int16 Count; // ax
  unsigned __int64 v75; // r10
  __int64 v76; // r15
  unsigned __int16 *v77; // rbx
  __int64 v78; // r8
  __int64 v79; // rdx
  __int64 v80; // rax
  unsigned __int64 v81; // r11
  __int64 v82; // rcx
  __int64 v83; // rax
  int v84; // eax
  unsigned int v85; // [rsp+50h] [rbp-B0h]
  unsigned __int16 v86; // [rsp+54h] [rbp-ACh]
  __int64 v87; // [rsp+58h] [rbp-A8h] BYREF
  int v88; // [rsp+60h] [rbp-A0h]
  int v89; // [rsp+64h] [rbp-9Ch]
  ULONG v90; // [rsp+68h] [rbp-98h]
  ULONG v91; // [rsp+6Ch] [rbp-94h]
  unsigned __int16 *v92; // [rsp+70h] [rbp-90h]
  ULONG v93; // [rsp+78h] [rbp-88h]
  struct _KAFFINITY_EX *v94; // [rsp+80h] [rbp-80h]
  struct _KAFFINITY_EX *v95; // [rsp+88h] [rbp-78h]
  __int128 v96; // [rsp+90h] [rbp-70h] BYREF
  struct _KAFFINITY_EX *v97; // [rsp+A0h] [rbp-60h]
  struct _KAFFINITY_EX *v98; // [rsp+A8h] [rbp-58h]
  struct _KAFFINITY_EX *v99; // [rsp+B0h] [rbp-50h]
  struct _KAFFINITY_EX *v100; // [rsp+C0h] [rbp-40h] BYREF
  struct _KAFFINITY_EX *v101[2]; // [rsp+C8h] [rbp-38h]
  char *v102; // [rsp+D8h] [rbp-28h]
  char *v103; // [rsp+E0h] [rbp-20h]
  size_t v104; // [rsp+E8h] [rbp-18h]
  unsigned __int16 *p_Count; // [rsp+F0h] [rbp-10h]
  struct _KAFFINITY_EX *v106; // [rsp+F8h] [rbp-8h]
  struct _KAFFINITY_EX *v107; // [rsp+100h] [rbp+0h]
  struct _KAFFINITY_EX *v108; // [rsp+108h] [rbp+8h]

  v4 = RelationshipType;
  v5 = ProcessorNumber;
  memset_0(&v100, 0, 0x50uLL);
  v7 = KiMaximumGroups;
  v8 = 0LL;
  v88 = *Length;
  v9 = 0;
  v89 = 0;
  v10 = 236;
  v85 = 0;
  v95 = 0LL;
  v11 = 8LL * (unsigned __int16)KiMaximumGroups;
  v12 = v11 + 8;
  if ( ((v4 == RelationAll
      || (unsigned int)v4 <= RelationProcessorModule && _bittest(&v10, v4) && (v9 = 1, v4 == RelationCache))
     && (v9 = 6, v4 == RelationAll)
     || v4 == RelationProcessorCore)
    && (++v9, v4 == RelationAll)
    || v4 == RelationProcessorPackage )
  {
    ++v9;
  }
  if ( v4 == RelationProcessorDie || v4 == RelationAll || v4 == RelationProcessorModule )
    ++v9;
  if ( v9 )
  {
    v25 = v9;
    Pool2 = ExAllocatePool2(0x40uLL, v12 * v9, 0x504C514Bu);
    v95 = (struct _KAFFINITY_EX *)Pool2;
    v8 = (struct _KAFFINITY_EX *)Pool2;
    if ( !Pool2 )
      return -1073741670;
    v27 = (_DWORD *)(Pool2 + 4);
    do
    {
      *((_WORD *)v27 - 2) = 1;
      *((_WORD *)v27 - 1) = v7;
      *v27 = 0;
      memset_0(v27 + 1, 0, v11);
      v27 = (_DWORD *)((char *)v27 + v12);
      --v25;
    }
    while ( v25 );
    v4 = RelationshipType;
    v5 = ProcessorNumber;
    v10 = 236;
  }
  v13 = v8;
  if ( v4 == RelationAll || (unsigned int)v4 <= RelationProcessorModule && _bittest(&v10, v4) )
  {
    v100 = v8;
    v13 = (struct _KAFFINITY_EX *)((char *)v8 + v12);
    if ( v4 == RelationAll || v4 == RelationCache )
    {
      v101[0] = (struct _KAFFINITY_EX *)((char *)v8 + v12);
      v101[1] = (struct _KAFFINITY_EX *)((char *)v13 + v12);
      v102 = (char *)v13 + v12 + v12;
      v103 = &v102[v12];
      v104 = (size_t)&v102[v12 + v12];
      v13 = (struct _KAFFINITY_EX *)(v12 + v104);
      if ( v4 == RelationAll )
        goto LABEL_171;
    }
  }
  if ( v4 == RelationProcessorCore )
  {
LABEL_171:
    p_Count = &v13->Count;
    v13 = (struct _KAFFINITY_EX *)((char *)v13 + v12);
    if ( v4 == RelationAll )
      goto LABEL_133;
  }
  if ( v4 == RelationProcessorPackage )
  {
LABEL_133:
    v106 = v13;
    v13 = (struct _KAFFINITY_EX *)((char *)v13 + v12);
  }
  if ( v4 == RelationProcessorDie )
  {
    v107 = v13;
  }
  else if ( v4 == RelationAll || v4 == RelationProcessorModule )
  {
    v108 = v13;
  }
  if ( v5 )
  {
    ProcessorIndexFromNumber = KeGetProcessorIndexFromNumber(v5);
    v91 = ProcessorIndexFromNumber;
    if ( ProcessorIndexFromNumber >= (unsigned int)KeNumberProcessors_0 )
    {
      v23 = -1073741811;
      goto LABEL_47;
    }
    v15 = ProcessorIndexFromNumber;
  }
  else
  {
    ProcessorIndexFromNumber = 0;
    v15 = KeNumberProcessors_0 - 1;
    v91 = 0;
  }
  v16 = v100;
  v94 = v100;
  v93 = v15;
  v90 = ProcessorIndexFromNumber;
  v96 = 0LL;
  if ( ProcessorIndexFromNumber <= v15 )
  {
    v17 = p_Count;
    v18 = 0;
    v99 = v108;
    v98 = v107;
    v97 = v106;
    v86 = WORD4(v96);
    v92 = p_Count;
    do
    {
      v19 = KiProcessorBlock[ProcessorIndexFromNumber];
      if ( v4 == RelationProcessorPackage || v4 == RelationAll )
      {
        KeGetTopologySiblingAffinityForProcessor(v19, 4LL, v16);
        v87 = 0LL;
        v37 = KiTryPopulateLogicalProcessorInformation(
                v16,
                v97,
                ProcessorNumber != 0LL,
                3,
                (__int64)Information,
                v88,
                v85,
                (unsigned int *)&v87,
                (unsigned int *)&v87 + 1);
        v38 = v87 + v85;
        v85 += v87;
        if ( v37 < 0 )
        {
          v17 = v92;
          v18 = v38;
          v89 = v37;
        }
        else
        {
          if ( HIDWORD(v87) )
            Information = (PSYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX)((char *)Information + HIDWORD(v87));
          v17 = v92;
          v18 = v38;
        }
      }
      if ( v4 == RelationProcessorCore || v4 == RelationAll )
      {
        v28 = *(_QWORD *)(v19 + 36448);
        v86 = *(unsigned __int8 *)(v19 + 208);
        WORD4(v96) = v86;
        *(_QWORD *)&v96 = v28;
        v29 = KeAndGroupAffinityEx(v17, (__int64)&v96, 0LL);
        if ( ProcessorNumber || !v29 )
        {
          KeAddGroupAffinityEx(v92, v86, v28);
          v18 += 48;
          v85 = v18;
          if ( v18 <= v88 )
          {
            Information->Processor.Flags = *(_QWORD *)(v19 + 200) != v28;
            Information->Relationship = RelationProcessorCore;
            Information->Size = 48;
            v47 = *(_BYTE *)(v19 + 35336) == 0;
            Information->Processor.GroupCount = 1;
            Information->Processor.EfficiencyClass = !v47;
            *(_OWORD *)((char *)&Information->NumaNode.NodeNumber + 2) = 0LL;
            *(_DWORD *)&Information->Group.Reserved[14] = 0;
            *(_OWORD *)&Information->Group.GroupInfo[0].MaximumProcessorCount = 0LL;
            Information->Processor.GroupMask[0].Group = *(unsigned __int8 *)(v19 + 208);
            Information->Processor.GroupMask[0].Mask = *(_QWORD *)(v19 + 36448);
            Information = (PSYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX)((char *)Information + 48);
          }
          else
          {
            v89 = -1073741820;
          }
        }
      }
      if ( v4 == RelationProcessorDie )
      {
        KeGetTopologySiblingAffinityForProcessor(v19, 3LL, v16);
        v87 = 0LL;
        v84 = KiTryPopulateLogicalProcessorInformation(
                v16,
                v98,
                ProcessorNumber != 0LL,
                5,
                (__int64)Information,
                v88,
                v18,
                (unsigned int *)&v87,
                (unsigned int *)&v87 + 1);
        v18 += v87;
        v85 = v18;
        if ( v84 >= 0 )
        {
          if ( HIDWORD(v87) )
            Information = (PSYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX)((char *)Information + HIDWORD(v87));
        }
        else
        {
          v89 = v84;
        }
      }
      else
      {
        if ( v4 == RelationProcessorModule || v4 == RelationAll )
        {
          KeGetTopologySiblingAffinityForProcessor(v19, 2LL, v16);
          v87 = 0LL;
          v48 = KiTryPopulateLogicalProcessorInformation(
                  v16,
                  v99,
                  ProcessorNumber != 0LL,
                  7,
                  (__int64)Information,
                  v88,
                  v18,
                  (unsigned int *)&v87,
                  (unsigned int *)&v87 + 1);
          v18 += v87;
          v85 = v18;
          if ( v48 >= 0 )
          {
            if ( HIDWORD(v87) )
              Information = (PSYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX)((char *)Information + HIDWORD(v87));
          }
          else
          {
            v89 = v48;
          }
        }
        if ( v4 == RelationCache || v4 == RelationAll )
        {
          v49 = 0LL;
          if ( *(_DWORD *)(v19 + 35732) )
          {
            v50 = v85;
            LOWORD(v51) = v86;
            while ( 1 )
            {
              v52 = (struct _KAFFINITY_EX *)(v19 + 264LL * (unsigned int)v49 + 44800);
              if ( KiSplitLargeCaches )
              {
                v51 = *(unsigned __int8 *)(v19 + 208);
                v76 = (unsigned __int16)v51 >= v52->Count ? 0LL : v52->Bitmap[v51];
                v77 = &v94->Count;
                *(_QWORD *)&v96 = v76;
                memset_0(&v94->8, 0, 8LL * v94->Count);
                v78 = v76;
                *v77 = 1;
                v16 = (struct _KAFFINITY_EX *)v77;
                KeAddGroupAffinityEx(v77, v51, v78);
              }
              else
              {
                KiCopyAffinityEx(v16, v16->Size, v52);
              }
              v53 = KiAndAffinityExNoResult(v16, v101[v49]);
              if ( ProcessorNumber )
                break;
              if ( !v53 )
              {
                KeOrAffinityEx2(v16, v54, v54);
                for ( i = 0; i < v16->Count; ++i )
                {
                  v56 = v16->Bitmap[i];
                  if ( v56 )
                  {
                    LOWORD(v51) = i;
                    v96 = v56;
                    break;
                  }
                }
                Group = v51;
                goto LABEL_107;
              }
LABEL_114:
              v49 = (unsigned int)(v49 + 1);
              if ( (unsigned int)v49 >= *(_DWORD *)(v19 + 35732) )
              {
                v4 = RelationshipType;
                v85 = v50;
                v18 = v50;
                v15 = v93;
                v86 = v51;
                ProcessorIndexFromNumber = v91;
                goto LABEL_36;
              }
            }
            KeOrAffinityEx2(v16, v54, v54);
            Group = ProcessorNumber->Group;
LABEL_107:
            v58 = v94;
            v59 = 0;
            for ( j = 0; j < v94->Count; ++j )
            {
              if ( v94->Bitmap[j] )
                ++v59;
            }
            v61 = (16 * v59 + 47) & 0xFFFFFFF8;
            v50 += v61;
            if ( v50 <= v88 )
            {
              v70 = v19 + 12 * v49;
              LOWORD(v51) = Group;
              Information->Relationship = RelationCache;
              Information->Size = v61;
              Information->Processor.Flags = *(_BYTE *)(v70 + 35672);
              Information->Processor.EfficiencyClass = *(_BYTE *)(v70 + 35673);
              Information->Cache.LineSize = *(_WORD *)(v70 + 35674);
              Information->Cache.CacheSize = *(_DWORD *)(v70 + 35676);
              Information->Cache.Type = *(_DWORD *)(v70 + 35680);
              Information->Cache.GroupCount = v59;
              *(_OWORD *)&Information->Group.Reserved[8] = 0LL;
              *(_WORD *)&Information->Group.GroupInfo[0].Reserved[2] = 0;
              if ( Group >= v58->Count )
                v71 = 0LL;
              else
                v71 = v58->Bitmap[Group];
              *(_OWORD *)&Information->Group.GroupInfo[0].Reserved[6] = 0LL;
              Information->Cache.GroupMask.Group = Group;
              v72 = 0;
              Information->Cache.GroupMask.Mask = v71;
              v73 = 1;
              Count = v58->Count;
              *(_QWORD *)&v96 = v71;
              if ( Count )
              {
                do
                {
                  if ( v72 != Group )
                  {
                    LOWORD(v51) = v72;
                    if ( v72 >= Count )
                    {
                      *(_QWORD *)&v96 = 0LL;
                    }
                    else
                    {
                      v75 = v58->Bitmap[v72];
                      *(_QWORD *)&v96 = v75;
                      if ( v75 )
                      {
                        v79 = 2LL * v73;
                        v80 = v73 + 3LL;
                        *(_QWORD *)&Information->Group.GroupInfo[0].Reserved[8 * v79 + 14] = 0LL;
                        ++v73;
                        *(&Information->Cache.GroupMask.Mask + v79) = v75;
                        *((_WORD *)&Information->Relationship + 8 * v80) = v72;
                      }
                    }
                  }
                  Count = v58->Count;
                  ++v72;
                }
                while ( v72 < v58->Count );
              }
              Information = (PSYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX)((char *)Information + v61);
            }
            else
            {
              v89 = -1073741820;
            }
            v16 = v94;
            goto LABEL_114;
          }
        }
      }
LABEL_36:
      v17 = v92;
      v91 = ++ProcessorIndexFromNumber;
    }
    while ( ProcessorIndexFromNumber <= v15 );
    v8 = v95;
  }
  if ( v4 == RelationNumaNode )
  {
    v62 = v90;
    v63 = 0;
    p_Processor = (_SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX::$293D76B56AB4224063B0E84352A448B8 *)&Information->Processor;
    do
    {
      v65 = KeNodeBlock[v63];
      v66 = ProcessorNumber;
      if ( ProcessorNumber )
      {
        NodePrimarySubNode = *(_QWORD *)(v65 + 8LL * ProcessorNumber->Group + 32);
      }
      else
      {
        NodePrimarySubNode = KeGetNodePrimarySubNode(v65);
        v66 = 0LL;
      }
      if ( NodePrimarySubNode )
      {
        v68 = *(_QWORD *)(NodePrimarySubNode + 128);
        v69 = *(unsigned __int16 *)(NodePrimarySubNode + 136);
        if ( !v66
          || ((*((_DWORD *)KiGlobalState + v62) >> 6 == v69) & (unsigned int)(v68 >> (*((_DWORD *)KiGlobalState + v62) & 0x3F))) != 0 )
        {
          v85 += 48;
          if ( v85 > v88 )
          {
            v89 = -1073741820;
          }
          else
          {
            HIDWORD(p_Processor[-1].Group.GroupInfo[0].ActiveProcessorMask) = 48;
            p_Processor->NumaNode.NodeNumber = v63;
            LODWORD(p_Processor[-1].Group.GroupInfo[0].ActiveProcessorMask) = 1;
            *(_DWORD *)&p_Processor->Group.Reserved[16] = 0x10000;
            *(_OWORD *)p_Processor->Group.Reserved = 0LL;
            *(_OWORD *)&p_Processor->Group.GroupInfo[0].MaximumProcessorCount = 0LL;
            p_Processor->Processor.GroupMask[0].Group = v69;
            p_Processor->Processor.GroupMask[0].Mask = v68;
            p_Processor = (_SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX::$293D76B56AB4224063B0E84352A448B8 *)((char *)p_Processor + 48);
          }
        }
      }
      ++v63;
    }
    while ( v63 < (unsigned __int16)KeNumberNodes );
LABEL_79:
    v8 = v95;
LABEL_44:
    v22 = v85;
LABEL_45:
    v23 = v89;
    if ( !v89 && !v22 )
      v23 = -1073741823;
    goto LABEL_46;
  }
  if ( v4 == RelationNumaNodeEx || v4 == RelationAll )
  {
    v20 = ProcessorNumber;
    v21 = 0;
    v30 = 0;
    if ( KeNumberNodes )
    {
      v31 = v85;
      v32 = v90;
      do
      {
        if ( !ProcessorNumber || *(unsigned __int16 *)(*(_QWORD *)(KiProcessorBlock[v32] + 192) + 138LL) == v30 )
        {
          KeQueryNodeActiveAffinityEx((unsigned __int16)v30, v16, 0LL);
          v33 = 0;
          v34 = 0;
          v35 = *(unsigned __int8 *)(KeNodeBlock[v30] + 12);
          if ( v16->Count )
          {
            do
            {
              if ( v16->Bitmap[v34] )
                ++v33;
              ++v34;
            }
            while ( v34 < v16->Count );
            if ( v33 )
            {
              v36 = (16 * v33 + 39) & 0xFFFFFFF8;
              v31 += v36;
              if ( v31 <= v88 )
              {
                v43 = 1;
                Information->Relationship = RelationNumaNode;
                Information->Size = v36;
                Information->NumaNode.NodeNumber = v30;
                Information->Processor.GroupCount = v33;
                *(_OWORD *)Information->Group.Reserved = 0LL;
                *(_WORD *)&Information->Group.Reserved[16] = 0;
                if ( (unsigned __int16)v35 >= v16->Count )
                  v44 = 0LL;
                else
                  v44 = v16->Bitmap[v35];
                *(_OWORD *)&Information->Group.GroupInfo[0].MaximumProcessorCount = 0LL;
                Information->Processor.GroupMask[0].Group = v35;
                v45 = 0;
                Information->Processor.GroupMask[0].Mask = v44;
                for ( k = v16->Count; v45 < v16->Count; ++v45 )
                {
                  if ( v45 != (_WORD)v35 && v45 < k )
                  {
                    v81 = v16->Bitmap[v45];
                    if ( v81 )
                    {
                      v82 = v43;
                      v83 = 2 * (v43++ + 2LL);
                      *((_QWORD *)&Information->Processor.Flags + v83) = 0LL;
                      Information->Processor.GroupMask[v82].Group = v45;
                      *((_QWORD *)&Information->Relationship + v83) = v81;
                    }
                  }
                  k = v16->Count;
                }
                Information = (PSYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX)((char *)Information + v36);
              }
              else
              {
                v89 = -1073741820;
              }
            }
          }
        }
        ++v30;
      }
      while ( v30 < (unsigned __int16)KeNumberNodes );
      v4 = RelationshipType;
      v85 = v31;
      v8 = v95;
    }
  }
  else
  {
    v20 = ProcessorNumber;
    v21 = 0;
  }
  if ( v4 != RelationGroup && (v4 != RelationAll || v20) )
    goto LABEL_44;
  v39 = (unsigned __int16)KiActiveGroups;
  v40 = (48 * (unsigned __int16)KiActiveGroups + 39) & 0xFFFFFFF8;
  v22 = v40 + v85;
  v85 = v22;
  if ( v22 <= v88 )
  {
    Information->Size = v40;
    Information->Relationship = RelationGroup;
    Information->Group.MaximumGroupCount = KiMaximumGroups;
    Information->Cache.LineSize = v39;
    *(_OWORD *)Information->Group.Reserved = 0LL;
    *(_DWORD *)&Information->Group.Reserved[16] = 0;
    if ( !v39 )
      goto LABEL_45;
    do
    {
      v41 = v21;
      v42 = (char *)Information + 48 * v21;
      v42[32] = KeQueryMaximumProcessorCountEx(v21);
      v42[33] = KeQueryActiveProcessorCountEx(v21++);
      *((_QWORD *)v42 + 9) = KeActiveProcessors.Bitmap[v41];
      *(_OWORD *)(v42 + 34) = 0LL;
      *(_OWORD *)(v42 + 50) = 0LL;
      *(_DWORD *)(v42 + 66) = 0;
      *((_WORD *)v42 + 35) = 0;
    }
    while ( v21 < (unsigned __int16)KiActiveGroups );
    goto LABEL_79;
  }
  v23 = -1073741820;
LABEL_46:
  *Length = v22;
LABEL_47:
  if ( v8 )
    ExFreePoolWithTag(v8, 0);
  return v23;
}
