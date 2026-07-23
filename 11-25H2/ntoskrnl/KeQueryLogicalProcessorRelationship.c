/*
 * XREFs of KeQueryLogicalProcessorRelationship @ 0x140266270
 * Callers:
 *     ExpQuerySystemInformation @ 0x1409DB5B0 (ExpQuerySystemInformation.c)
 * Callees:
 *     KeAddGroupAffinityEx @ 0x140256130 (KeAddGroupAffinityEx.c)
 *     KeAndGroupAffinityEx @ 0x140266EB0 (KeAndGroupAffinityEx.c)
 *     KiTryPopulateLogicalProcessorInformation @ 0x140266F24 (KiTryPopulateLogicalProcessorInformation.c)
 *     ?KiAndAffinityExNoResult@@YAKPEAU_KAFFINITY_EX@@0@Z @ 0x14026704C (-KiAndAffinityExNoResult@@YAKPEAU_KAFFINITY_EX@@0@Z.c)
 *     KeGetNodePrimarySubNode @ 0x1402676D4 (KeGetNodePrimarySubNode.c)
 *     ?KiCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z @ 0x140271570 (-KiCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z.c)
 *     KeOrAffinityEx2 @ 0x1402720D0 (KeOrAffinityEx2.c)
 *     KeQueryMaximumProcessorCountEx @ 0x1402BD630 (KeQueryMaximumProcessorCountEx.c)
 *     KeQueryNodeActiveAffinityEx @ 0x140305020 (KeQueryNodeActiveAffinityEx.c)
 *     KeQueryActiveProcessorCountEx @ 0x1403AE660 (KeQueryActiveProcessorCountEx.c)
 *     KeGetProcessorIndexFromNumber @ 0x1403B30F0 (KeGetProcessorIndexFromNumber.c)
 *     KeGetTopologySiblingAffinityForProcessor @ 0x1404808CC (KeGetTopologySiblingAffinityForProcessor.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

NTSTATUS __stdcall KeQueryLogicalProcessorRelationship(
        PPROCESSOR_NUMBER ProcessorNumber,
        LOGICAL_PROCESSOR_RELATIONSHIP RelationshipType,
        PSYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX Information,
        PULONG Length)
{
  LOGICAL_PROCESSOR_RELATIONSHIP v4; // ebx
  __int16 v6; // r15
  int v7; // esi
  struct _KAFFINITY_EX *v8; // r14
  unsigned int v9; // eax
  int v10; // ecx
  size_t v11; // r13
  size_t v12; // rdi
  struct _KAFFINITY_EX *v13; // rax
  PPROCESSOR_NUMBER v14; // r13
  ULONG ProcessorIndexFromNumber; // edi
  ULONG v16; // r12d
  struct _KAFFINITY_EX *v17; // r15
  unsigned __int16 *v18; // rcx
  __int64 v19; // r13
  unsigned int v20; // esi
  unsigned int v21; // esi
  ULONG v22; // r8d
  NTSTATUS v23; // ebx
  __int64 v25; // r14
  __int64 Pool2; // rax
  _DWORD *v27; // rsi
  unsigned __int16 v28; // r14
  __int64 v29; // rsi
  int v30; // eax
  BYTE v31; // al
  DWORD v32; // edi
  unsigned int v33; // r14d
  __int64 v34; // rbx
  WORD v35; // r8
  unsigned __int16 v36; // dx
  __int64 v37; // r10
  DWORD v38; // edx
  int v39; // eax
  int v40; // edx
  DWORD v41; // eax
  __int64 v42; // rbx
  char *v43; // rdi
  unsigned __int16 v44; // r9
  unsigned __int64 v45; // rcx
  unsigned __int16 v46; // r8
  unsigned __int16 k; // ax
  bool v48; // zf
  int v49; // eax
  __int64 v50; // rbx
  unsigned int v51; // r14d
  _SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX::$293D76B56AB4224063B0E84352A448B8 *p_Processor; // rdi
  __int64 v53; // rsi
  __int64 v54; // rcx
  __int64 NodePrimarySubNode; // rax
  unsigned __int64 v56; // r9
  int v57; // r10d
  __int64 v58; // r14
  unsigned int v59; // r12d
  __int64 v60; // rdi
  struct _KAFFINITY_EX *v61; // r8
  struct _KAFFINITY_EX *v62; // rbx
  unsigned int v63; // eax
  __int64 v64; // rdx
  unsigned __int16 i; // cx
  unsigned __int64 v66; // rdx
  unsigned __int16 Group; // si
  WORD v68; // r9
  unsigned __int16 j; // dx
  DWORD v70; // r8d
  __int64 v71; // rdx
  unsigned __int64 v72; // rcx
  unsigned __int16 v73; // r11
  unsigned __int16 v74; // r9
  unsigned __int16 Count; // ax
  unsigned __int64 v76; // r10
  __int64 v77; // rsi
  __int64 v78; // rdx
  __int64 v79; // rax
  unsigned __int64 v80; // r11
  __int64 v81; // rcx
  __int64 v82; // rax
  int v83; // eax
  unsigned int v84; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int16 v85; // [rsp+54h] [rbp-ACh]
  unsigned int v86; // [rsp+58h] [rbp-A8h] BYREF
  ULONG v87; // [rsp+5Ch] [rbp-A4h]
  int v88; // [rsp+60h] [rbp-A0h]
  ULONG v89; // [rsp+64h] [rbp-9Ch]
  ULONG v90; // [rsp+68h] [rbp-98h]
  unsigned __int16 *v91; // [rsp+70h] [rbp-90h]
  struct _KAFFINITY_EX *v92; // [rsp+78h] [rbp-88h]
  ULONG v93; // [rsp+80h] [rbp-80h]
  struct _KAFFINITY_EX *v94; // [rsp+88h] [rbp-78h]
  __int128 v95; // [rsp+90h] [rbp-70h] BYREF
  struct _KAFFINITY_EX *v96; // [rsp+A0h] [rbp-60h]
  struct _KAFFINITY_EX *v97; // [rsp+A8h] [rbp-58h]
  struct _KAFFINITY_EX *v98; // [rsp+B0h] [rbp-50h]
  struct _KAFFINITY_EX *v99; // [rsp+C0h] [rbp-40h] BYREF
  struct _KAFFINITY_EX *v100[2]; // [rsp+C8h] [rbp-38h]
  __int64 v101; // [rsp+D8h] [rbp-28h]
  __int64 v102; // [rsp+E0h] [rbp-20h]
  size_t v103; // [rsp+E8h] [rbp-18h]
  unsigned __int16 *p_Count; // [rsp+F0h] [rbp-10h]
  struct _KAFFINITY_EX *v105; // [rsp+F8h] [rbp-8h]
  struct _KAFFINITY_EX *v106; // [rsp+100h] [rbp+0h]
  struct _KAFFINITY_EX *v107; // [rsp+108h] [rbp+8h]

  v4 = RelationshipType;
  memset_0(&v99, 0, 0x50uLL);
  v6 = KiMaximumGroups;
  v7 = 0;
  v87 = *Length;
  v8 = 0LL;
  v88 = 0;
  v9 = 0;
  v84 = 0;
  v10 = 236;
  v92 = 0LL;
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
    Pool2 = ExAllocatePool2(0x40uLL);
    v92 = (struct _KAFFINITY_EX *)Pool2;
    if ( !Pool2 )
      return -1073741670;
    v27 = (_DWORD *)(Pool2 + 4);
    do
    {
      *((_WORD *)v27 - 2) = 1;
      *((_WORD *)v27 - 1) = v6;
      *v27 = 0;
      memset_0(v27 + 1, 0, v11);
      v27 = (_DWORD *)((char *)v27 + v12);
      --v25;
    }
    while ( v25 );
    v4 = RelationshipType;
    v7 = 0;
    v8 = v92;
    v10 = 236;
  }
  v13 = v8;
  if ( v4 == RelationAll || (unsigned int)v4 <= RelationProcessorModule && _bittest(&v10, v4) )
  {
    v99 = v8;
    v13 = (struct _KAFFINITY_EX *)((char *)v8 + v12);
    if ( v4 == RelationAll || v4 == RelationCache )
    {
      v100[0] = (struct _KAFFINITY_EX *)((char *)v8 + v12);
      v100[1] = (struct _KAFFINITY_EX *)((char *)v13 + v12);
      v101 = (__int64)v13 + v12 + v12;
      v102 = v12 + v101;
      v103 = v12 + v12 + v101;
      v13 = (struct _KAFFINITY_EX *)(v12 + v103);
      if ( v4 == RelationAll )
        goto LABEL_174;
    }
  }
  if ( v4 == RelationProcessorCore )
  {
LABEL_174:
    p_Count = &v13->Count;
    v13 = (struct _KAFFINITY_EX *)((char *)v13 + v12);
    if ( v4 == RelationAll )
      goto LABEL_128;
  }
  if ( v4 == RelationProcessorPackage )
  {
LABEL_128:
    v105 = v13;
    v13 = (struct _KAFFINITY_EX *)((char *)v13 + v12);
  }
  if ( v4 == RelationProcessorDie )
  {
    v106 = v13;
  }
  else if ( v4 == RelationAll || v4 == RelationProcessorModule )
  {
    v107 = v13;
  }
  v14 = ProcessorNumber;
  if ( ProcessorNumber )
  {
    ProcessorIndexFromNumber = KeGetProcessorIndexFromNumber(ProcessorNumber);
    v90 = ProcessorIndexFromNumber;
    if ( ProcessorIndexFromNumber >= (unsigned int)KeNumberProcessors_0 )
    {
      v23 = -1073741811;
      goto LABEL_48;
    }
    v16 = ProcessorIndexFromNumber;
  }
  else
  {
    ProcessorIndexFromNumber = 0;
    v90 = 0;
    v16 = KeNumberProcessors_0 - 1;
  }
  v17 = v99;
  v94 = v99;
  v93 = v16;
  v89 = ProcessorIndexFromNumber;
  v95 = 0LL;
  if ( ProcessorIndexFromNumber <= v16 )
  {
    v18 = p_Count;
    v98 = v107;
    v97 = v106;
    v96 = v105;
    v91 = p_Count;
    v85 = WORD4(v95);
    while ( 1 )
    {
      v19 = KiProcessorBlock[ProcessorIndexFromNumber];
      if ( v4 == RelationProcessorPackage || v4 == RelationAll )
      {
        KiCopyAffinityEx(v17, v17->Size, (struct _KAFFINITY_EX *)(v19 + 35856));
        v84 = 0;
        v86 = 0;
        v39 = KiTryPopulateLogicalProcessorInformation(
                v17,
                v96,
                (__int64)Information,
                v87,
                v7,
                (__int64)&v84,
                (__int64)&v86);
        v84 += v7;
        if ( v39 < 0 )
        {
          v18 = v91;
          v88 = v39;
        }
        else
        {
          if ( v86 )
            Information = (PSYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX)((char *)Information + v86);
          v18 = v91;
        }
      }
      if ( v4 && v4 != RelationAll
        || (v28 = *(unsigned __int8 *)(v19 + 208),
            v29 = *(_QWORD *)(v19 + 36448),
            v85 = v28,
            WORD4(v95) = v28,
            *(_QWORD *)&v95 = v29,
            v30 = KeAndGroupAffinityEx(v18, &v95, 0LL),
            !ProcessorNumber)
        && v30 )
      {
        v20 = v84;
      }
      else
      {
        KeAddGroupAffinityEx(v91, v28, v29);
        v31 = *(_QWORD *)(v19 + 200) != v29;
        v20 = v84 + 48;
        v84 = v20;
        if ( v20 <= v87 )
        {
          Information->Processor.Flags = v31;
          Information->Relationship = RelationProcessorCore;
          Information->Size = 48;
          v48 = *(_BYTE *)(v19 + 35336) == 0;
          Information->Processor.GroupCount = 1;
          Information->Processor.EfficiencyClass = !v48;
          *(_OWORD *)((char *)&Information->NumaNode.NodeNumber + 2) = 0LL;
          *(_DWORD *)&Information->Group.Reserved[14] = 0;
          *(_OWORD *)&Information->Group.GroupInfo[0].MaximumProcessorCount = 0LL;
          Information->Processor.GroupMask[0].Group = *(unsigned __int8 *)(v19 + 208);
          Information->Processor.GroupMask[0].Mask = *(_QWORD *)(v19 + 36448);
          Information = (PSYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX)((char *)Information + 48);
        }
        else
        {
          v88 = -1073741820;
        }
      }
      if ( v4 == RelationProcessorDie )
      {
        KeGetTopologySiblingAffinityForProcessor(v19, 3LL, v17);
        v84 = 0;
        v86 = 0;
        v83 = KiTryPopulateLogicalProcessorInformation(
                v17,
                v97,
                (__int64)Information,
                v87,
                v20,
                (__int64)&v84,
                (__int64)&v86);
        v84 += v20;
        if ( v83 >= 0 )
        {
          if ( v86 )
            Information = (PSYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX)((char *)Information + v86);
        }
        else
        {
          v88 = v83;
        }
      }
      else
      {
        if ( v4 == RelationProcessorModule || v4 == RelationAll )
        {
          KiCopyAffinityEx(v17, v17->Size, (struct _KAFFINITY_EX *)(v19 + 40720));
          v84 = 0;
          v86 = 0;
          v49 = KiTryPopulateLogicalProcessorInformation(
                  v17,
                  v98,
                  (__int64)Information,
                  v87,
                  v20,
                  (__int64)&v84,
                  (__int64)&v86);
          v84 += v20;
          if ( v49 >= 0 )
          {
            if ( v86 )
              Information = (PSYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX)((char *)Information + v86);
          }
          else
          {
            v88 = v49;
          }
        }
        if ( v4 == RelationCache || v4 == RelationAll )
        {
          v58 = 0LL;
          if ( *(_DWORD *)(v19 + 35732) )
          {
            v59 = v84;
            LOWORD(v60) = v85;
            while ( 1 )
            {
              v61 = (struct _KAFFINITY_EX *)(v19 + 264LL * (unsigned int)v58 + 44800);
              if ( KiSplitLargeCaches )
              {
                v60 = *(unsigned __int8 *)(v19 + 208);
                v77 = (unsigned __int16)v60 >= v61->Count ? 0LL : v61->Bitmap[v60];
                v62 = v94;
                *(_QWORD *)&v95 = v77;
                memset_0(&v94->8, 0, 8LL * v94->Count);
                v62->Count = 1;
                KeAddGroupAffinityEx(&v62->Count, v60, v77);
              }
              else
              {
                v62 = v94;
                KiCopyAffinityEx(v94, v94->Size, v61);
              }
              v63 = KiAndAffinityExNoResult(v62, v100[v58]);
              if ( ProcessorNumber )
                break;
              if ( !v63 )
              {
                KeOrAffinityEx2(v62, v64, v64);
                for ( i = 0; i < v62->Count; ++i )
                {
                  v66 = v62->Bitmap[i];
                  if ( v66 )
                  {
                    LOWORD(v60) = i;
                    v95 = v66;
                    break;
                  }
                }
                Group = v60;
                goto LABEL_118;
              }
              v17 = v94;
LABEL_124:
              v58 = (unsigned int)(v58 + 1);
              if ( (unsigned int)v58 >= *(_DWORD *)(v19 + 35732) )
              {
                v4 = RelationshipType;
                v85 = v60;
                ProcessorIndexFromNumber = v90;
                v84 = v59;
                v16 = v93;
                goto LABEL_37;
              }
            }
            KeOrAffinityEx2(v62, v64, v64);
            Group = ProcessorNumber->Group;
LABEL_118:
            v68 = 0;
            for ( j = 0; j < v62->Count; ++j )
            {
              if ( v62->Bitmap[j] )
                ++v68;
            }
            v17 = v94;
            v70 = (16 * v68 + 47) & 0xFFFFFFF8;
            v59 += v70;
            if ( v59 <= v87 )
            {
              v71 = v19 + 12 * v58;
              LOWORD(v60) = Group;
              Information->Relationship = RelationCache;
              Information->Size = v70;
              Information->Processor.Flags = *(_BYTE *)(v71 + 35672);
              Information->Processor.EfficiencyClass = *(_BYTE *)(v71 + 35673);
              Information->Cache.LineSize = *(_WORD *)(v71 + 35674);
              Information->Cache.CacheSize = *(_DWORD *)(v71 + 35676);
              Information->Cache.Type = *(_DWORD *)(v71 + 35680);
              Information->Cache.GroupCount = v68;
              *(_OWORD *)&Information->Group.Reserved[8] = 0LL;
              *(_WORD *)&Information->Group.GroupInfo[0].Reserved[2] = 0;
              if ( Group >= v17->Count )
                v72 = 0LL;
              else
                v72 = v17->Bitmap[Group];
              *(_OWORD *)&Information->Group.GroupInfo[0].Reserved[6] = 0LL;
              Information->Cache.GroupMask.Group = Group;
              v73 = 1;
              Information->Cache.GroupMask.Mask = v72;
              v74 = 0;
              Count = v17->Count;
              *(_QWORD *)&v95 = v72;
              if ( Count )
              {
                do
                {
                  if ( v74 != Group )
                  {
                    LOWORD(v60) = v74;
                    if ( v74 >= Count )
                    {
                      *(_QWORD *)&v95 = 0LL;
                    }
                    else
                    {
                      v76 = v17->Bitmap[v74];
                      *(_QWORD *)&v95 = v76;
                      if ( v76 )
                      {
                        v78 = 2LL * v73;
                        v79 = v73 + 3LL;
                        *(_QWORD *)&Information->Group.GroupInfo[0].Reserved[8 * v78 + 14] = 0LL;
                        ++v73;
                        *(&Information->Cache.GroupMask.Mask + v78) = v76;
                        *((_WORD *)&Information->Relationship + 8 * v79) = v74;
                      }
                    }
                  }
                  Count = v17->Count;
                  ++v74;
                }
                while ( v74 < v17->Count );
              }
              Information = (PSYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX)((char *)Information + v70);
            }
            else
            {
              v88 = -1073741820;
            }
            goto LABEL_124;
          }
        }
      }
LABEL_37:
      v18 = v91;
      v90 = ++ProcessorIndexFromNumber;
      if ( ProcessorIndexFromNumber > v16 )
        break;
      v7 = v84;
    }
    v8 = v92;
    v14 = ProcessorNumber;
  }
  if ( v4 == RelationNumaNode )
  {
    v50 = 0LL;
    v51 = v84;
    p_Processor = (_SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX::$293D76B56AB4224063B0E84352A448B8 *)&Information->Processor;
    v53 = v89;
    do
    {
      v54 = KeNodeBlock[v50];
      if ( v14 )
        NodePrimarySubNode = *(_QWORD *)(v54 + 8LL * v14->Group + 32);
      else
        NodePrimarySubNode = KeGetNodePrimarySubNode(v54, 0x140000000uLL);
      if ( NodePrimarySubNode )
      {
        v56 = *(_QWORD *)(NodePrimarySubNode + 128);
        v57 = *(unsigned __int16 *)(NodePrimarySubNode + 136);
        if ( !v14
          || ((*((_DWORD *)KiGlobalState + v53) >> 6 == v57) & (unsigned int)(v56 >> (*((_DWORD *)KiGlobalState + v53) & 0x3F))) != 0 )
        {
          v51 += 48;
          if ( v51 > v87 )
          {
            v88 = -1073741820;
          }
          else
          {
            HIDWORD(p_Processor[-1].Group.GroupInfo[0].ActiveProcessorMask) = 48;
            p_Processor->NumaNode.NodeNumber = v50;
            LODWORD(p_Processor[-1].Group.GroupInfo[0].ActiveProcessorMask) = 1;
            *(_DWORD *)&p_Processor->Group.Reserved[16] = 0x10000;
            *(_OWORD *)p_Processor->Group.Reserved = 0LL;
            *(_OWORD *)&p_Processor->Group.GroupInfo[0].MaximumProcessorCount = 0LL;
            p_Processor->Processor.GroupMask[0].Group = v57;
            p_Processor->Processor.GroupMask[0].Mask = v56;
            p_Processor = (_SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX::$293D76B56AB4224063B0E84352A448B8 *)((char *)p_Processor + 48);
          }
        }
      }
      v50 = (unsigned int)(v50 + 1);
    }
    while ( (unsigned int)v50 < (unsigned __int16)KeNumberNodes );
    v84 = v51;
    v8 = v92;
    goto LABEL_45;
  }
  if ( v4 == RelationNumaNodeEx || v4 == RelationAll )
  {
    v21 = 0;
    v32 = 0;
    if ( KeNumberNodes )
    {
      v33 = v84;
      v34 = v89;
      do
      {
        if ( !v14 || *(unsigned __int16 *)(*(_QWORD *)(KiProcessorBlock[v34] + 192) + 138LL) == v32 )
        {
          KeQueryNodeActiveAffinityEx((unsigned __int16)v32, v17, 0LL);
          v35 = 0;
          v36 = 0;
          v37 = *(unsigned __int8 *)(KeNodeBlock[v32] + 12);
          if ( v17->Count )
          {
            do
            {
              if ( v17->Bitmap[v36] )
                ++v35;
              ++v36;
            }
            while ( v36 < v17->Count );
            if ( v35 )
            {
              v38 = (16 * v35 + 39) & 0xFFFFFFF8;
              v33 += v38;
              if ( v33 <= v87 )
              {
                v44 = 1;
                Information->Relationship = RelationNumaNode;
                Information->Size = v38;
                Information->NumaNode.NodeNumber = v32;
                Information->Processor.GroupCount = v35;
                *(_OWORD *)Information->Group.Reserved = 0LL;
                *(_WORD *)&Information->Group.Reserved[16] = 0;
                if ( (unsigned __int16)v37 >= v17->Count )
                  v45 = 0LL;
                else
                  v45 = v17->Bitmap[v37];
                *(_OWORD *)&Information->Group.GroupInfo[0].MaximumProcessorCount = 0LL;
                Information->Processor.GroupMask[0].Group = v37;
                v46 = 0;
                Information->Processor.GroupMask[0].Mask = v45;
                for ( k = v17->Count; v46 < v17->Count; ++v46 )
                {
                  if ( v46 != (_WORD)v37 && v46 < k )
                  {
                    v80 = v17->Bitmap[v46];
                    if ( v80 )
                    {
                      v81 = v44;
                      v82 = 2 * (v44++ + 2LL);
                      *((_QWORD *)&Information->Processor.Flags + v82) = 0LL;
                      Information->Processor.GroupMask[v81].Group = v46;
                      *((_QWORD *)&Information->Relationship + v82) = v80;
                    }
                  }
                  k = v17->Count;
                }
                Information = (PSYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX)((char *)Information + v38);
              }
              else
              {
                v88 = -1073741820;
              }
            }
          }
        }
        ++v32;
      }
      while ( v32 < (unsigned __int16)KeNumberNodes );
      v4 = RelationshipType;
      v84 = v33;
      v8 = v92;
    }
  }
  else
  {
    v21 = 0;
  }
  if ( v4 != RelationGroup && (v4 != RelationAll || v14) )
  {
LABEL_45:
    v22 = v84;
LABEL_46:
    v23 = v88;
    if ( !v88 && !v22 )
      v23 = -1073741823;
    goto LABEL_47;
  }
  v40 = (unsigned __int16)KiActiveGroups;
  v41 = (48 * (unsigned __int16)KiActiveGroups + 39) & 0xFFFFFFF8;
  v22 = v41 + v84;
  v84 = v22;
  if ( v22 <= v87 )
  {
    Information->Size = v41;
    Information->Relationship = RelationGroup;
    Information->Group.MaximumGroupCount = KiMaximumGroups;
    Information->Cache.LineSize = v40;
    *(_OWORD *)Information->Group.Reserved = 0LL;
    *(_DWORD *)&Information->Group.Reserved[16] = 0;
    if ( !v40 )
      goto LABEL_46;
    do
    {
      v42 = v21;
      v43 = (char *)Information + 48 * v21;
      v43[32] = KeQueryMaximumProcessorCountEx(v21);
      v43[33] = KeQueryActiveProcessorCountEx(v21++);
      *((_QWORD *)v43 + 9) = KeActiveProcessors.Bitmap[v42];
      *(_OWORD *)(v43 + 34) = 0LL;
      *(_OWORD *)(v43 + 50) = 0LL;
      *(_DWORD *)(v43 + 66) = 0;
      *((_WORD *)v43 + 35) = 0;
    }
    while ( v21 < (unsigned __int16)KiActiveGroups );
    v8 = v92;
    goto LABEL_45;
  }
  v23 = -1073741820;
LABEL_47:
  *Length = v22;
LABEL_48:
  if ( v8 )
    ExFreePoolWithTag(v8, 0);
  return v23;
}
