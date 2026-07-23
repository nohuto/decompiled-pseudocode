/*
 * XREFs of PnpProcessRelation @ 0x140A54854
 * Callers:
 *     PnpBuildRemovalRelationList @ 0x1409BC6DC (PnpBuildRemovalRelationList.c)
 *     PnpProcessDependencyRelations @ 0x1409BF64C (PnpProcessDependencyRelations.c)
 *     PnpProcessRelation @ 0x140A54854 (PnpProcessRelation.c)
 *     PnpProcessBusRelations @ 0x140A54BAC (PnpProcessBusRelations.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     IoAddTriageDumpDataBlock @ 0x1403E65A0 (IoAddTriageDumpDataBlock.c)
 *     RtlCopyUnicodeString @ 0x1403FA370 (RtlCopyUnicodeString.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     IopMergeRelationLists @ 0x140731730 (IopMergeRelationLists.c)
 *     IopRemoveRelationFromList @ 0x140731898 (IopRemoveRelationFromList.c)
 *     IopCancelPendingEject @ 0x1407318D4 (IopCancelPendingEject.c)
 *     PipClearDevNodeFlags @ 0x1408B8F2C (PipClearDevNodeFlags.c)
 *     PnpQueryDeviceRelations @ 0x1408B8FB8 (PnpQueryDeviceRelations.c)
 *     PipIsDeviceInDeviceObjectList @ 0x1409BDEE0 (PipIsDeviceInDeviceObjectList.c)
 *     PnpProcessDependencyRelations @ 0x1409BF64C (PnpProcessDependencyRelations.c)
 *     PnpProcessRelation @ 0x140A54854 (PnpProcessRelation.c)
 *     IopAddRelationToList @ 0x140A54B0C (IopAddRelationToList.c)
 *     PnpProcessBusRelations @ 0x140A54BAC (PnpProcessBusRelations.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PnpProcessRelation(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        unsigned int **BugCheckParameter3)
{
  __int64 v5; // rbx
  unsigned int v7; // ebp
  ULONG_PTR v10; // r12
  __int64 *v11; // rsi
  int v12; // eax
  ULONG_PTR BugCheckParameter4; // r15
  __int64 result; // rax
  int v15; // ecx
  unsigned int *v16; // rcx
  unsigned int k; // r15d
  unsigned int j; // r15d
  ULONG_PTR v19; // rsi
  __int64 v20; // rcx
  __int64 v21; // rcx
  int v22; // r12d
  __int64 v23; // rcx
  _WORD *v24; // rcx
  __int64 *i; // r14
  int v26; // ecx
  __int64 v27; // rcx
  unsigned __int16 *v28; // rdi
  _WORD *v29; // rcx
  __int64 v30; // rax
  __int64 v31; // rcx
  ULONG_PTR v32; // rsi
  __int64 v33; // rcx
  __int64 v34; // rcx
  __int64 v35; // rcx
  _WORD *v36; // rcx
  __int64 v37; // rcx
  unsigned __int16 *v38; // rdi
  _WORD *v39; // rcx
  __int64 v40; // rax
  __int64 v41; // rcx
  unsigned int **v42; // rcx
  __int64 v43; // rcx
  __int64 v44; // rcx
  _WORD *v45; // rcx
  __int64 v46; // rcx
  __int64 v47; // rax
  __int64 v48; // rsi
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // r8
  __int64 v52; // rcx
  __int64 v53; // rcx
  __int64 v54; // r8
  __int64 v55; // rcx
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // r8
  __int64 v59; // rax
  __int64 v60; // rcx
  __int64 v61; // rcx
  __int64 v62; // r8
  __int64 v63; // rax
  __int64 *v64; // rcx
  __int64 v65; // r8
  __int64 v66; // rax
  __int64 v67; // rcx
  __int64 v68; // rax
  __int64 v69; // rsi
  __int64 v70; // rdx
  __int64 v71; // rcx
  __int64 v72; // r8
  __int64 v73; // rcx
  __int64 v74; // rcx
  __int64 v75; // r8
  __int64 v76; // rcx
  __int64 v77; // rdx
  __int64 v78; // rcx
  __int64 v79; // r8
  __int64 v80; // rax
  __int64 v81; // rcx
  __int64 v82; // rcx
  PVOID P[2]; // [rsp+30h] [rbp-38h] BYREF
  int v84; // [rsp+80h] [rbp+18h]

  v84 = a3;
  v5 = 0LL;
  P[0] = 0LL;
  v7 = a3;
  if ( (a2 & 0xFFFFFFFB) != 0 )
  {
    if ( *(_DWORD *)(a1 + 300) == 790 )
      return 0LL;
    goto LABEL_3;
  }
  v26 = *(_DWORD *)(a1 + 300);
  if ( (unsigned int)(v26 - 784) <= 1 || v26 == 790 )
  {
    *(_DWORD *)a4 = 13;
    goto LABEL_156;
  }
  if ( *(int *)(a1 + 656) > 0 || ((v26 - 787) & 0xFFFFFFFD) == 0 )
  {
    *(_DWORD *)a4 = 5;
LABEL_156:
    RtlCopyUnicodeString((PUNICODE_STRING)(a4 + 8), (PCUNICODE_STRING)(a1 + 40));
    return 3221225473LL;
  }
  if ( v26 == 780 || v26 == 781 )
    return 3221225488LL;
LABEL_3:
  v10 = (ULONG_PTR)BugCheckParameter3;
  v11 = (__int64 *)(a1 + 32);
  v12 = IopAddRelationToList(BugCheckParameter3, *(_QWORD *)(a1 + 32), a3, 0LL);
  BugCheckParameter4 = v12;
  if ( v12 )
  {
    if ( v12 == -1073741771 )
    {
      LODWORD(BugCheckParameter4) = PnpProcessBusRelations(a1, a2, v7, a4, BugCheckParameter3);
    }
    else if ( v12 != -1073741670 )
    {
      if ( *v11 )
      {
        IoAddTriageDumpDataBlock(*v11, (PVOID)*(unsigned __int16 *)(*v11 + 2));
        v64 = (__int64 *)(a1 + 32);
        v65 = *(_QWORD *)(*v11 + 8);
        if ( v65 )
        {
          IoAddTriageDumpDataBlock(*(_QWORD *)(*v11 + 8), (PVOID)(unsigned int)*(__int16 *)(v65 + 2));
          v64 = (__int64 *)(a1 + 32);
          v66 = *(_QWORD *)(*v11 + 8);
          if ( *(_WORD *)(v66 + 56) )
          {
            IoAddTriageDumpDataBlock(v66 + 56, (PVOID)2);
            IoAddTriageDumpDataBlock(
              *(_QWORD *)(*(_QWORD *)(*v11 + 8) + 64LL),
              (PVOID)*(unsigned __int16 *)(*(_QWORD *)(*v11 + 8) + 56LL));
            v64 = (__int64 *)(a1 + 32);
          }
        }
        v67 = *v64;
        if ( v67 )
        {
          v68 = *(_QWORD *)(v67 + 312);
          if ( *(_QWORD *)(v68 + 40) )
          {
            v69 = *(_QWORD *)(v68 + 40);
            IoAddTriageDumpDataBlock(v69, (PVOID)0x388);
            if ( *(_WORD *)(v69 + 40) )
            {
              IoAddTriageDumpDataBlock(v69 + 40, (PVOID)2);
              IoAddTriageDumpDataBlock(*(_QWORD *)(v69 + 48), (PVOID)*(unsigned __int16 *)(v69 + 40));
            }
            v70 = *(_QWORD *)(a1 + 32);
            v71 = v70 + 312;
            if ( v70 )
              v72 = *(_QWORD *)(*(_QWORD *)v71 + 40LL);
            else
              v72 = 0LL;
            if ( *(_WORD *)(v72 + 56) )
            {
              if ( v70 )
                v73 = *(_QWORD *)(*(_QWORD *)v71 + 40LL);
              else
                LODWORD(v73) = 0;
              IoAddTriageDumpDataBlock(v73 + 56, (PVOID)2);
              v74 = *(_QWORD *)(a1 + 32);
              if ( v74 )
              {
                v75 = *(_QWORD *)(*(_QWORD *)(v74 + 312) + 40LL);
                v76 = v75;
              }
              else
              {
                v75 = 0LL;
                v76 = 0LL;
              }
              IoAddTriageDumpDataBlock(*(_QWORD *)(v75 + 64), (PVOID)*(unsigned __int16 *)(v76 + 56));
            }
            v77 = *(_QWORD *)(a1 + 32);
            v78 = v77 + 312;
            if ( v77 )
              v79 = *(_QWORD *)(*(_QWORD *)v78 + 40LL);
            else
              v79 = 0LL;
            if ( *(_QWORD *)(v79 + 16) )
            {
              v80 = v77 ? *(_QWORD *)(*(_QWORD *)v78 + 40LL) : 0LL;
              if ( *(_WORD *)(*(_QWORD *)(v80 + 16) + 56LL) )
              {
                if ( v77 )
                  v81 = *(_QWORD *)(*(_QWORD *)v78 + 40LL);
                else
                  v81 = 0LL;
                IoAddTriageDumpDataBlock(*(_QWORD *)(v81 + 16) + 56, (PVOID)2);
                v82 = *(_QWORD *)(a1 + 32);
                if ( v82 )
                  v5 = *(_QWORD *)(*(_QWORD *)(v82 + 312) + 40LL);
                IoAddTriageDumpDataBlock(
                  *(_QWORD *)(*(_QWORD *)(v5 + 16) + 64LL),
                  (PVOID)*(unsigned __int16 *)(*(_QWORD *)(v5 + 16) + 56LL));
              }
            }
          }
        }
      }
      KeBugCheckEx(0xCAu, 7uLL, *(_QWORD *)(a1 + 32), (ULONG_PTR)BugCheckParameter3, BugCheckParameter4);
    }
    return (unsigned int)BugCheckParameter4;
  }
  if ( (*(_DWORD *)(a1 + 396) & 0x80000) != 0 )
  {
    for ( i = (__int64 *)IopPendingEjects; ; i = (__int64 *)*i )
    {
      if ( i == &IopPendingEjects )
      {
        v43 = *(_QWORD *)(a1 + 32);
        if ( v43 )
        {
          IoAddTriageDumpDataBlock(v43, (PVOID)*(unsigned __int16 *)(v43 + 2));
          v44 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8LL);
          if ( v44 )
          {
            IoAddTriageDumpDataBlock(v44, (PVOID)(unsigned int)*(__int16 *)(v44 + 2));
            v45 = (_WORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 8LL) + 56LL);
            if ( *v45 )
            {
              IoAddTriageDumpDataBlock((ULONG)v45, (PVOID)2);
              IoAddTriageDumpDataBlock(
                *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 8LL) + 64LL),
                (PVOID)*(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 8LL) + 56LL));
            }
          }
          v46 = *(_QWORD *)(a1 + 32);
          if ( v46 )
          {
            v47 = *(_QWORD *)(v46 + 312);
            if ( *(_QWORD *)(v47 + 40) )
            {
              v48 = *(_QWORD *)(v47 + 40);
              IoAddTriageDumpDataBlock(v48, (PVOID)0x388);
              if ( *(_WORD *)(v48 + 40) )
              {
                IoAddTriageDumpDataBlock(v48 + 40, (PVOID)2);
                IoAddTriageDumpDataBlock(*(_QWORD *)(v48 + 48), (PVOID)*(unsigned __int16 *)(v48 + 40));
              }
              v49 = *(_QWORD *)(a1 + 32);
              v50 = v49 + 312;
              if ( v49 )
                v51 = *(_QWORD *)(*(_QWORD *)v50 + 40LL);
              else
                v51 = 0LL;
              if ( *(_WORD *)(v51 + 56) )
              {
                if ( v49 )
                  v52 = *(_QWORD *)(*(_QWORD *)v50 + 40LL);
                else
                  LODWORD(v52) = 0;
                IoAddTriageDumpDataBlock(v52 + 56, (PVOID)2);
                v53 = *(_QWORD *)(a1 + 32);
                if ( v53 )
                {
                  v54 = *(_QWORD *)(*(_QWORD *)(v53 + 312) + 40LL);
                  v55 = v54;
                }
                else
                {
                  v54 = 0LL;
                  v55 = 0LL;
                }
                IoAddTriageDumpDataBlock(*(_QWORD *)(v54 + 64), (PVOID)*(unsigned __int16 *)(v55 + 56));
              }
              v56 = *(_QWORD *)(a1 + 32);
              v57 = v56 + 312;
              if ( v56 )
                v58 = *(_QWORD *)(*(_QWORD *)v57 + 40LL);
              else
                v58 = 0LL;
              if ( *(_QWORD *)(v58 + 16) )
              {
                v59 = v56 ? *(_QWORD *)(*(_QWORD *)v57 + 40LL) : 0LL;
                if ( *(_WORD *)(*(_QWORD *)(v59 + 16) + 56LL) )
                {
                  if ( v56 )
                    v60 = *(_QWORD *)(*(_QWORD *)v57 + 40LL);
                  else
                    v60 = 0LL;
                  IoAddTriageDumpDataBlock(*(_QWORD *)(v60 + 16) + 56, (PVOID)2);
                  v61 = *(_QWORD *)(a1 + 32);
                  if ( v61 )
                  {
                    v62 = *(_QWORD *)(*(_QWORD *)(v61 + 312) + 40LL);
                    v63 = v62;
                  }
                  else
                  {
                    v62 = 0LL;
                    v63 = 0LL;
                  }
                  IoAddTriageDumpDataBlock(
                    *(_QWORD *)(*(_QWORD *)(v62 + 16) + 64LL),
                    (PVOID)*(unsigned __int16 *)(*(_QWORD *)(v63 + 16) + 56LL));
                }
              }
            }
          }
        }
        KeBugCheckEx(0xCAu, 6uLL, *(_QWORD *)(a1 + 32), 0LL, 0LL);
      }
      v42 = (unsigned int **)i[8];
      if ( v42 )
      {
        if ( PipIsDeviceInDeviceObjectList(*v42, *v11, 0LL) )
          break;
      }
    }
    if ( a2 == 4 )
    {
      LODWORD(BugCheckParameter4) = IopRemoveRelationFromList(BugCheckParameter3, *(_QWORD *)(a1 + 32));
      IopCancelPendingEject((__int64)i);
      IopMergeRelationLists(BugCheckParameter3, i[8], 0);
      if ( v84 == 2 )
        IopAddRelationToList(BugCheckParameter3, *(_QWORD *)(a1 + 32), 2LL, 0LL);
      return (unsigned int)BugCheckParameter4;
    }
    if ( a2 )
    {
      LODWORD(BugCheckParameter4) = IopRemoveRelationFromList((unsigned int **)i[8], *(_QWORD *)(a1 + 32));
      PipClearDevNodeFlags(a1, 0x80000);
      return (unsigned int)BugCheckParameter4;
    }
    return 3221225473LL;
  }
  result = PnpProcessBusRelations(a1, a2, v7, a4, BugCheckParameter3);
  if ( (int)result < 0 )
    return result;
  v15 = *(_DWORD *)(a1 + 300);
  if ( v15 != 785 )
  {
    if ( v15 != 784 )
      goto LABEL_8;
    v11 = (__int64 *)(a1 + 32);
  }
  v15 = *(_DWORD *)(a1 + 304);
LABEL_8:
  if ( ((unsigned int)(v15 - 777) <= 1 || (unsigned int)(v15 - 780) <= 1)
    && (int)PnpQueryDeviceRelations(*v11, 3, 0LL, (__int64)P) >= 0 )
  {
    v16 = (unsigned int *)P[0];
    if ( P[0] )
    {
      for ( j = 0; j < *v16; ++j )
      {
        v19 = *(_QWORD *)&v16[2 * j + 2];
        v20 = *(_QWORD *)(v19 + 312);
        if ( (*(_DWORD *)(v20 + 32) & 2) != 0 || (v21 = *(_QWORD *)(v20 + 40)) == 0 || !*(_QWORD *)(v21 + 16) )
        {
          IoAddTriageDumpDataBlock(v19, (PVOID)*(unsigned __int16 *)(v19 + 2));
          v23 = *(_QWORD *)(v19 + 8);
          if ( v23 )
          {
            IoAddTriageDumpDataBlock(v23, (PVOID)(unsigned int)*(__int16 *)(v23 + 2));
            v24 = (_WORD *)(*(_QWORD *)(v19 + 8) + 56LL);
            if ( *v24 )
            {
              IoAddTriageDumpDataBlock((ULONG)v24, (PVOID)2);
              IoAddTriageDumpDataBlock(
                *(_QWORD *)(*(_QWORD *)(v19 + 8) + 64LL),
                (PVOID)*(unsigned __int16 *)(*(_QWORD *)(v19 + 8) + 56LL));
            }
          }
          v27 = *(_QWORD *)(*(_QWORD *)(v19 + 312) + 40LL);
          if ( v27 )
          {
            v28 = (unsigned __int16 *)(v27 + 40);
            IoAddTriageDumpDataBlock(v27, (PVOID)0x388);
            if ( *v28 )
            {
              IoAddTriageDumpDataBlock((ULONG)v28, (PVOID)2);
              IoAddTriageDumpDataBlock(*((_QWORD *)v28 + 1), (PVOID)*v28);
            }
            v29 = (_WORD *)(*(_QWORD *)(*(_QWORD *)(v19 + 312) + 40LL) + 56LL);
            if ( *v29 )
            {
              IoAddTriageDumpDataBlock((ULONG)v29, (PVOID)2);
              IoAddTriageDumpDataBlock(
                *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v19 + 312) + 40LL) + 64LL),
                (PVOID)*(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(v19 + 312) + 40LL) + 56LL));
            }
            v30 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v19 + 312) + 40LL) + 16LL);
            if ( v30 && *(_WORD *)(v30 + 56) )
            {
              IoAddTriageDumpDataBlock(v30 + 56, (PVOID)2);
              v31 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v19 + 312) + 40LL) + 16LL);
              IoAddTriageDumpDataBlock(*(_QWORD *)(v31 + 64), (PVOID)*(unsigned __int16 *)(v31 + 56));
            }
          }
          KeBugCheckEx(0xCAu, 0xBuLL, v19, 3uLL, 0LL);
        }
        v22 = PnpProcessRelation(v21, a2, 0, a4, v10);
        ObfDereferenceObject((PVOID)v19);
        v16 = (unsigned int *)P[0];
        if ( v22 < 0 )
        {
LABEL_30:
          ExFreePoolWithTag(v16, 0);
          return (unsigned int)v22;
        }
        v10 = (ULONG_PTR)BugCheckParameter3;
      }
      ExFreePoolWithTag(v16, 0);
    }
  }
  if ( a2 )
  {
    if ( a2 - 5 > 1 && (int)PnpQueryDeviceRelations(*(_QWORD *)(a1 + 32), 1, 0LL, (__int64)P) >= 0 )
    {
      v16 = (unsigned int *)P[0];
      if ( P[0] )
      {
        for ( k = 0; k < *v16; ++k )
        {
          v32 = *(_QWORD *)&v16[2 * k + 2];
          v33 = *(_QWORD *)(v32 + 312);
          if ( (*(_DWORD *)(v33 + 32) & 2) != 0 || (v34 = *(_QWORD *)(v33 + 40)) == 0 || !*(_QWORD *)(v34 + 16) )
          {
            IoAddTriageDumpDataBlock(v32, (PVOID)*(unsigned __int16 *)(v32 + 2));
            v35 = *(_QWORD *)(v32 + 8);
            if ( v35 )
            {
              IoAddTriageDumpDataBlock(v35, (PVOID)(unsigned int)*(__int16 *)(v35 + 2));
              v36 = (_WORD *)(*(_QWORD *)(v32 + 8) + 56LL);
              if ( *v36 )
              {
                IoAddTriageDumpDataBlock((ULONG)v36, (PVOID)2);
                IoAddTriageDumpDataBlock(
                  *(_QWORD *)(*(_QWORD *)(v32 + 8) + 64LL),
                  (PVOID)*(unsigned __int16 *)(*(_QWORD *)(v32 + 8) + 56LL));
              }
            }
            v37 = *(_QWORD *)(*(_QWORD *)(v32 + 312) + 40LL);
            if ( v37 )
            {
              v38 = (unsigned __int16 *)(v37 + 40);
              IoAddTriageDumpDataBlock(v37, (PVOID)0x388);
              if ( *v38 )
              {
                IoAddTriageDumpDataBlock((ULONG)v38, (PVOID)2);
                IoAddTriageDumpDataBlock(*((_QWORD *)v38 + 1), (PVOID)*v38);
              }
              v39 = (_WORD *)(*(_QWORD *)(*(_QWORD *)(v32 + 312) + 40LL) + 56LL);
              if ( *v39 )
              {
                IoAddTriageDumpDataBlock((ULONG)v39, (PVOID)2);
                IoAddTriageDumpDataBlock(
                  *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v32 + 312) + 40LL) + 64LL),
                  (PVOID)*(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(v32 + 312) + 40LL) + 56LL));
              }
              v40 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v32 + 312) + 40LL) + 16LL);
              if ( v40 )
              {
                if ( *(_WORD *)(v40 + 56) )
                {
                  IoAddTriageDumpDataBlock(v40 + 56, (PVOID)2);
                  v41 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v32 + 312) + 40LL) + 16LL);
                  IoAddTriageDumpDataBlock(*(_QWORD *)(v41 + 64), (PVOID)*(unsigned __int16 *)(v41 + 56));
                }
              }
            }
            KeBugCheckEx(0xCAu, 0xBuLL, v32, 1uLL, 0LL);
          }
          v22 = PnpProcessRelation(v34, a2, 0, a4, v10);
          ObfDereferenceObject((PVOID)v32);
          v16 = (unsigned int *)P[0];
          if ( v22 < 0 )
            goto LABEL_30;
          v10 = (ULONG_PTR)BugCheckParameter3;
        }
        ExFreePoolWithTag(v16, 0);
      }
    }
  }
  result = PnpProcessDependencyRelations(a1);
  if ( (int)result >= 0 )
  {
    LODWORD(BugCheckParameter4) = 0;
    return (unsigned int)BugCheckParameter4;
  }
  return result;
}
