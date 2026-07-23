/*
 * XREFs of MiResolveMappedFileFault @ 0x140214824
 * Callers:
 *     MiResolveProtoPteFault @ 0x140334760 (MiResolveProtoPteFault.c)
 *     MiIssueFlowThroughFault @ 0x140426F68 (MiIssueFlowThroughFault.c)
 * Callees:
 *     MiSanitizePfnProtection @ 0x140212F30 (MiSanitizePfnProtection.c)
 *     MiPickClusterForMappedFileFault @ 0x140215358 (MiPickClusterForMappedFileFault.c)
 *     MiGetSlabPage @ 0x14021CE24 (MiGetSlabPage.c)
 *     MiLockVadTree @ 0x140240750 (MiLockVadTree.c)
 *     MiUnlockVadTree @ 0x140291980 (MiUnlockVadTree.c)
 *     MiUnlockProtoPoolPage @ 0x14029C7F0 (MiUnlockProtoPoolPage.c)
 *     MiReturnCommit @ 0x14029EB80 (MiReturnCommit.c)
 *     MiGetAvailablePagesBelowPriority @ 0x1402F51E0 (MiGetAvailablePagesBelowPriority.c)
 *     KeInvalidAccessAllowed @ 0x1402FC4D0 (KeInvalidAccessAllowed.c)
 *     MiLockProtoPoolPage @ 0x140302230 (MiLockProtoPoolPage.c)
 *     MiGetSharedProtos @ 0x14030CC0C (MiGetSharedProtos.c)
 *     MiReturnResident @ 0x140338A10 (MiReturnResident.c)
 *     MiGetPage @ 0x14033BF40 (MiGetPage.c)
 *     MiObtainFaultCharges @ 0x14033EB80 (MiObtainFaultCharges.c)
 *     MiComputeFaultCluster @ 0x140341F24 (MiComputeFaultCluster.c)
 *     MiInitializePageColorBase @ 0x140342940 (MiInitializePageColorBase.c)
 *     MiComputeFaultNode @ 0x140343670 (MiComputeFaultNode.c)
 *     MiLocateAddress @ 0x140344F70 (MiLocateAddress.c)
 *     MiBuildMdlForMappedFileFault @ 0x140347688 (MiBuildMdlForMappedFileFault.c)
 *     MiUseSlabAllocator @ 0x140349AF8 (MiUseSlabAllocator.c)
 *     MiGetSessionIdForVa @ 0x14034E860 (MiGetSessionIdForVa.c)
 *     MiGetInPageSupportBlock @ 0x1403DC710 (MiGetInPageSupportBlock.c)
 *     MiCopyDataPageToImagePage @ 0x1403F1624 (MiCopyDataPageToImagePage.c)
 *     MiFinishMdlForMappedFileFault @ 0x1403F1ED8 (MiFinishMdlForMappedFileFault.c)
 *     MiFreeInPageSupportBlock @ 0x140427430 (MiFreeInPageSupportBlock.c)
 *     MiSetInPagePrefetchPriority @ 0x14046390C (MiSetInPagePrefetchPriority.c)
 *     MiCopyFileOnlyGlobalSubsectionPage @ 0x14047AADC (MiCopyFileOnlyGlobalSubsectionPage.c)
 *     MiReturnFaultCharges @ 0x14047CD94 (MiReturnFaultCharges.c)
 */

__int64 __fastcall MiResolveMappedFileFault(__int64 a1, unsigned __int64 *a2, __int64 a3, __int64 *a4)
{
  unsigned int v4; // esi
  __int64 v7; // rdx
  unsigned int v8; // r12d
  unsigned __int64 v9; // rbx
  __int64 v10; // r11
  __int64 v11; // rdi
  __int64 v12; // r9
  __int64 v13; // r13
  bool v14; // zf
  __int64 v15; // r8
  __int64 v16; // r15
  __int64 v17; // r15
  __int64 v18; // r10
  int v19; // eax
  unsigned int v20; // edi
  int v21; // r14d
  __int64 v22; // rdx
  __int64 v23; // r14
  int v24; // ecx
  __int64 v25; // rdi
  __int64 v26; // r9
  __int64 v27; // r12
  unsigned __int32 v28; // eax
  unsigned int v29; // edi
  __int64 v30; // r9
  __int64 SlabPage; // rax
  int v32; // r9d
  int v33; // r9d
  __int64 v34; // rbx
  unsigned int v35; // eax
  __int64 v36; // rdi
  __int64 v38; // r14
  __int64 v39; // rax
  __int64 v40; // rdx
  __int64 v41; // rcx
  _QWORD *v42; // r9
  unsigned int v43; // r12d
  __int64 v44; // rbx
  __int64 v45; // r14
  int v46; // eax
  unsigned __int64 v47; // rax
  unsigned int v48; // edi
  __int64 v49; // r8
  __int64 SharedProtos; // rax
  __int64 Address; // rax
  __int64 v52; // rdx
  __int64 v53; // rax
  int v54; // [rsp+58h] [rbp-79h]
  int v55; // [rsp+5Ch] [rbp-75h]
  int v56; // [rsp+60h] [rbp-71h]
  unsigned int SessionIdForVa; // [rsp+64h] [rbp-6Dh]
  __int64 v58; // [rsp+68h] [rbp-69h]
  unsigned __int64 v59; // [rsp+70h] [rbp-61h]
  unsigned int v60; // [rsp+78h] [rbp-59h] BYREF
  __int64 v61; // [rsp+80h] [rbp-51h] BYREF
  __int64 v62; // [rsp+88h] [rbp-49h]
  __int64 v63; // [rsp+90h] [rbp-41h]
  __int64 v64; // [rsp+98h] [rbp-39h]
  __int64 v65; // [rsp+A0h] [rbp-31h]
  __int64 v66; // [rsp+A8h] [rbp-29h]
  __int64 v67; // [rsp+B0h] [rbp-21h]
  __int64 v68; // [rsp+B8h] [rbp-19h]
  __int64 v69; // [rsp+C0h] [rbp-11h] BYREF
  __int64 v70; // [rsp+C8h] [rbp-9h] BYREF
  _OWORD v71[5]; // [rsp+D0h] [rbp-1h] BYREF
  __int64 v74; // [rsp+148h] [rbp+77h]

  v74 = a3;
  v4 = 0;
  v59 = *(_QWORD *)a1;
  v7 = *(_QWORD *)(a1 + 16);
  v67 = *(_QWORD *)(a1 + 56);
  v8 = 2;
  v9 = *a2;
  v10 = a3;
  v11 = a1;
  v70 = 0LL;
  v12 = 0LL;
  v69 = 0LL;
  v13 = 0LL;
  v14 = ((__int64)KeGetCurrentThread()[1].Queue & 4) == 0;
  v71[0] = 0LL;
  v60 = 0;
  v62 = v7;
  *a4 = 0LL;
  v63 = 0LL;
  if ( !v14 )
  {
    v4 = -1073741663;
    goto LABEL_62;
  }
  v15 = v7 & 1;
  v55 = 256;
  v7 &= ~1uLL;
  if ( v15 )
  {
    switch ( *(_BYTE *)v7 )
    {
      case 5:
        if ( (*(_DWORD *)(v7 + 56) & 4) != 0 )
        {
          v4 = -1073741801;
          goto LABEL_62;
        }
        break;
      case 1:
        v13 = v7;
        if ( (*(_DWORD *)(v7 + 80) & 0x100) != 0 )
          goto LABEL_62;
        v8 = 0;
        v63 = *(_QWORD *)(v7 + 112);
        break;
      case 2:
        v13 = v7;
        break;
    }
  }
  if ( (v9 & 0x400) != 0 )
  {
    v16 = v9;
    if ( qword_140E2DCC0 )
    {
      if ( (v9 & 0x10) != 0 )
        v16 = v9 & 0xFFFFFFFFFFFFFFEFuLL;
      else
        v16 = v9 & ~qword_140E2DCC0;
    }
    v66 = 0LL;
  }
  else
  {
    v47 = v9;
    if ( qword_140E2DCC0 )
    {
      if ( (v9 & 0x10) != 0 )
        v47 = v9 & 0xFFFFFFFFFFFFFFEFuLL;
      else
        v47 = v9 & ~qword_140E2DCC0;
    }
    v66 = 48 * ((v47 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
    v16 = *(_QWORD *)(v66 + 16);
    if ( qword_140E2DCC0 && (v16 & 0x10) == 0 )
      v16 &= ~qword_140E2DCC0;
    v11 = a1;
  }
  v17 = v16 >> 16;
  v18 = *(_QWORD *)v17;
  v64 = v18;
  if ( (*(_DWORD *)(v18 + 56) & 0x10) != 0 )
  {
    v4 = -1073741818;
LABEL_62:
    LOBYTE(v7) = 17;
    MiUnlockProtoPoolPage(v10, v7);
    return v4;
  }
  SessionIdForVa = -1;
  v65 = *(_QWORD *)(v17 + 8);
  v19 = *(_DWORD *)(v17 + 32);
  v68 = 0LL;
  if ( (v19 & 0x20000) == 0 || (*(_DWORD *)(v18 + 56) & 0x8000000) == 0 )
  {
    v7 = 0LL;
    goto LABEL_11;
  }
  SessionIdForVa = MiGetSessionIdForVa(v59, v7, v15, 0LL);
  if ( v59 >= 0xFFFF800000000000uLL )
  {
    if ( v49 )
    {
      if ( *(_BYTE *)v7 != 1 && *(_BYTE *)v7 != 3 && *(_BYTE *)(v62 & 0xFFFFFFFFFFFFFFFEuLL) != 6 )
        goto LABEL_110;
LABEL_122:
      v53 = *(_QWORD *)(v11 + 16);
      if ( (v53 & 1) == 0 || *(_BYTE *)(v53 & 0xFFFFFFFFFFFFFFFEuLL) != 6 )
        goto LABEL_124;
      goto LABEL_110;
    }
    if ( (unsigned __int8)KeInvalidAccessAllowed(v62, 0LL) )
    {
      v10 = v74;
      goto LABEL_122;
    }
  }
LABEL_110:
  SharedProtos = MiGetSharedProtos(v64, SessionIdForVa, v17);
  v12 = 0LL;
  v7 = SharedProtos;
  v18 = v64;
  v10 = v74;
  v68 = SharedProtos;
  v65 = *(_QWORD *)(SharedProtos + 72);
LABEL_11:
  if ( (unsigned __int64)a2 >= v65
                             - 8LL * (*(_DWORD *)(v17 + 52) & 0x3FFFFFFF)
                             + 8 * (unsigned __int64)*(unsigned int *)(v17 + 44) )
  {
LABEL_124:
    v4 = -1073741819;
    goto LABEL_62;
  }
  v20 = 0;
  v21 = 0;
  v56 = 0;
  v58 = *((_QWORD *)qword_140E300C8 + (*(_WORD *)(v18 + 60) & 0x3FF));
  if ( (*(_BYTE *)(v18 + 62) & 0xC) == 4 )
  {
    v8 = 0;
    v21 = 2 - (v7 != 0);
    v56 = v21;
    v12 = v7 == 0;
  }
  if ( v21 != 2 )
  {
    v61 = 0LL;
    v20 = MiComputeFaultNode(a1, v18, &v61, v12);
    LODWORD(v12) = 0;
    if ( v21 == 1 )
    {
      v55 = 1;
      goto LABEL_22;
    }
    if ( v13 )
    {
      v45 = v61;
      if ( !v61 && v59 <= 0x7FFFFFFEFFFFLL )
      {
        MiLockVadTree(1LL);
        Address = MiLocateAddress(v59);
        LOBYTE(v52) = 17;
        v61 = Address;
        v45 = Address;
        MiUnlockVadTree(1LL, v52);
      }
      LODWORD(v12) = MiComputeFaultCluster(v58, v13, v45, 2LL);
    }
    else if ( (v9 & 0x400) != 0 && (*(_DWORD *)(v64 + 56) & 0x20) == 0 && (*(_DWORD *)(v67 + 184) & 0xF) == 0 )
    {
      v38 = v61;
      if ( !v61 )
      {
        MiLockVadTree(1LL);
        v39 = MiLocateAddress(v59);
        LOBYTE(v40) = 17;
        v61 = v39;
        v38 = v39;
        MiUnlockVadTree(1LL, v40);
        LODWORD(v12) = 0;
      }
      v41 = *(_QWORD *)(v38 + 120);
      if ( v41 >= 0
        && (*(_QWORD *)(v38 + 120) & 0xFFFuLL) >= 0x11
        && (v59 & 0xFFFFFFFFFFFFF000uLL) == ((*(_QWORD *)(v38 + 120) & 0xFFFLL)
                                           - 1
                                           + ((*(_QWORD *)(v38 + 120) >> 12) & 0x7FFFFFFFFFFFFLL)) << 12 )
      {
        v42 = a2 + 1;
        if ( (((_DWORD)a2 + 8) & 0xFFF) != 0
          && (unsigned __int64)v42 < -8LL * (*(_DWORD *)(v17 + 52) & 0x3FFFFFFF)
                                   + v65
                                   + 8 * (unsigned __int64)*(unsigned int *)(v17 + 44)
          && *v42 == v9 )
        {
          LODWORD(v12) = (v41 & 0xFFF) - 1;
        }
        else
        {
          LODWORD(v12) = 0;
        }
      }
    }
  }
  if ( (unsigned int)v12 > 0x100 || (v55 = v12, (unsigned int)v12 > 0x10) )
    v8 |= 1u;
LABEL_22:
  v23 = MiGetInPageSupportBlock(v8 | 4, v63);
  if ( !v23 )
  {
    LOBYTE(v22) = 17;
    MiUnlockProtoPoolPage(v74, v22);
    v23 = MiGetInPageSupportBlock(v8, v63);
    if ( !v23 )
    {
      if ( (v8 & 1) == 0 )
        goto LABEL_25;
      v55 = 16;
      v23 = MiGetInPageSupportBlock(v8 & 0xFFFFFFFE, v63);
      if ( !v23 )
        goto LABEL_118;
    }
    v74 = MiLockProtoPoolPage(a2, 0LL);
    if ( !v74 )
    {
      MiFreeInPageSupportBlock((PSLIST_ENTRY)v23);
      goto LABEL_118;
    }
LABEL_25:
    if ( v23 )
      goto LABEL_26;
LABEL_118:
    v48 = -1073741670;
    goto LABEL_98;
  }
LABEL_26:
  if ( *a2 == v9
    && ((v9 & 0x400) != 0 || (*(_BYTE *)(v66 + 34) & 0x20) != 0 && (*(_DWORD *)(*(_QWORD *)v66 + 160LL) & 0x80u) == 0) )
  {
    if ( v56 == 2 )
      goto LABEL_79;
    if ( v13 && *(_BYTE *)v13 == 1 )
      MiSetInPagePrefetchPriority(v13, v23);
    v54 = MiSanitizePfnProtection(0LL, (*(_DWORD *)(v17 + 32) >> 1) & 0x1F, (v9 >> 5) & 0x1F);
    MiInitializePageColorBase(v67, (unsigned int)(v24 + 3), v20, v71);
    v25 = -1LL;
    v26 = 1LL;
    if ( v56 == 1 )
      goto LABEL_34;
    if ( (*(_BYTE *)(v64 + 62) & 0xC) != 0
      || (*(_DWORD *)(v64 + 56) & 0x40020) != 32
      || (v9 & 0x400) == 0
      || dword_140E373D8 )
    {
      v27 = v58;
      goto LABEL_44;
    }
    if ( v13 )
    {
      v27 = v58;
      if ( *(_BYTE *)v13 == 1 && !MiGetAvailablePagesBelowPriority(v58, ((*(_DWORD *)(v13 + 80) >> 3) & 7u) + 1) )
        goto LABEL_44;
    }
    else
    {
LABEL_34:
      v27 = v58;
    }
    if ( MiObtainFaultCharges(v27, v26, (unsigned int)v26) )
    {
      v28 = _InterlockedExchangeAdd(*(volatile signed __int32 **)&v71[0], 1u);
      v29 = DWORD2(v71[0]) ^ (unsigned __int8)(BYTE8(v71[0]) ^ (v28
                                                              % dword_140E2DD00[(*((_QWORD *)&v71[0] + 1) >> 16) & 3LL]));
      v30 = (DWORD2(v71[0]) >> 9) & 0x3F;
      if ( (v9 & 0x400) != 0 && (unsigned int)MiUseSlabAllocator(v27, v17, v9, v30, (__int64)&v60) && v60 <= 4 )
        SlabPage = MiGetSlabPage(v27, v60, v29, 16, 0LL, 0);
      else
        SlabPage = MiGetPage(v27, v29, 1LL, v30);
      v25 = SlabPage;
      if ( SlabPage != -1 )
      {
        v32 = v62;
        if ( v56 != 1 )
        {
          *(_QWORD *)(v23 + 224) = v59;
          if ( (unsigned int)MiCopyDataPageToImagePage(v23, v17, (_DWORD)a2, v32, SlabPage, v74) )
          {
LABEL_48:
            *a4 = v23;
            return 3221435187LL;
          }
          goto LABEL_44;
        }
        v46 = MiCopyFileOnlyGlobalSubsectionPage(v23, v17, (_DWORD)a2, v62, SlabPage, v74, v68);
        v43 = v46;
        if ( v46 >= 0 )
          goto LABEL_48;
        if ( v46 == -1073741739 )
        {
          v43 = 0;
          goto LABEL_60;
        }
        if ( v46 != -1073740748 )
        {
          if ( v46 == -1073532109 )
          {
            v43 = -1073741802;
            *(_DWORD *)(a1 + 80) |= 8u;
          }
          goto LABEL_60;
        }
LABEL_79:
        LOBYTE(v22) = 17;
        MiUnlockProtoPoolPage(v74, v22);
        *(_QWORD *)(v23 + 232) = a2;
        *(_DWORD *)(v23 + 312) = 0;
        *(_QWORD *)(v23 + 208) = v17;
        *(_DWORD *)(v23 + 184) = 0;
        *(_QWORD *)(v23 + 168) = v9;
        *(_QWORD *)(v23 + 160) = 0LL;
        *(_QWORD *)(v23 + 256) = 0LL;
        *(_DWORD *)(v23 + 192) = *(_DWORD *)(v23 + 192) & 0xFFF7FFFE | 1;
        *(_DWORD *)(v23 + 80) = 0;
        goto LABEL_48;
      }
      MiReturnFaultCharges(v27, 1LL, 1LL);
    }
    if ( v56 == 1 )
    {
LABEL_59:
      v43 = -1073741801;
LABEL_60:
      LOBYTE(v22) = 17;
      MiUnlockProtoPoolPage(v74, v22);
      MiFreeInPageSupportBlock((PSLIST_ENTRY)v23);
      return v43;
    }
LABEL_44:
    v33 = v65;
    *(_QWORD *)(v23 + 160) = v74;
    *(_QWORD *)(v23 + 232) = a2;
    *(_DWORD *)(v23 + 184) = v55;
    *(_QWORD *)(v23 + 168) = v9;
    *(_QWORD *)(v23 + 208) = v17;
    v34 = MiPickClusterForMappedFileFault(v27, v23, v13, v33, v25, (__int64)&v70, (__int64)&v69);
    v35 = MiBuildMdlForMappedFileFault(v23, v70, v69, v27, v34, v25, v54, v13, a1, (__int64)v71);
    v36 = v35;
    if ( v35 != v34 )
    {
      v44 = v34 - v35;
      MiReturnResident(v27, v44);
      MiReturnCommit(v27, v44, 0LL);
    }
    if ( v36 )
    {
      MiFinishMdlForMappedFileFault(v23, v62, v36, v66, SessionIdForVa);
      goto LABEL_48;
    }
    goto LABEL_59;
  }
  LOBYTE(v22) = 17;
  v48 = -1073740748;
  MiUnlockProtoPoolPage(v74, v22);
  MiFreeInPageSupportBlock((PSLIST_ENTRY)v23);
LABEL_98:
  if ( v13 )
    *(_BYTE *)(v13 + 1) = (v48 == -1073741670) + 1;
  return v48;
}
