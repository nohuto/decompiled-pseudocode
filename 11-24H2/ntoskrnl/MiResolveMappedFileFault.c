/*
 * XREFs of MiResolveMappedFileFault @ 0x140239490
 * Callers:
 *     MiResolveProtoPteFault @ 0x140214BB0 (MiResolveProtoPteFault.c)
 *     MiIssueFlowThroughFault @ 0x14023B720 (MiIssueFlowThroughFault.c)
 * Callees:
 *     MiReturnResident @ 0x14020F6B0 (MiReturnResident.c)
 *     KeInvalidAccessAllowed @ 0x1402292D0 (KeInvalidAccessAllowed.c)
 *     MiLockProtoPoolPage @ 0x14022E920 (MiLockProtoPoolPage.c)
 *     MiSanitizePfnProtection @ 0x140238DA0 (MiSanitizePfnProtection.c)
 *     MiPickClusterForMappedFileFault @ 0x140239E84 (MiPickClusterForMappedFileFault.c)
 *     MiFinishMdlForMappedFileFault @ 0x14023A108 (MiFinishMdlForMappedFileFault.c)
 *     MiUnlockVadTree @ 0x140261370 (MiUnlockVadTree.c)
 *     MiUnlockProtoPoolPage @ 0x14028CBF0 (MiUnlockProtoPoolPage.c)
 *     MiReturnCommit @ 0x14028EF80 (MiReturnCommit.c)
 *     MiGetAvailablePagesBelowPriority @ 0x1402D15D0 (MiGetAvailablePagesBelowPriority.c)
 *     MiLockVadTree @ 0x1402DEE70 (MiLockVadTree.c)
 *     MiGetInPageSupportBlock @ 0x1402E42D0 (MiGetInPageSupportBlock.c)
 *     MiComputeFaultCluster @ 0x1402E5DF8 (MiComputeFaultCluster.c)
 *     MiBuildMdlForMappedFileFault @ 0x1402E604C (MiBuildMdlForMappedFileFault.c)
 *     MiUseSlabAllocator @ 0x1402E84B8 (MiUseSlabAllocator.c)
 *     MiGetSessionIdForVa @ 0x1402ED220 (MiGetSessionIdForVa.c)
 *     MiFreeInPageSupportBlock @ 0x1402EEC40 (MiFreeInPageSupportBlock.c)
 *     MiInitializePageColorBase @ 0x1402EF8B0 (MiInitializePageColorBase.c)
 *     MiGetSlabPage @ 0x1402F3934 (MiGetSlabPage.c)
 *     MiGetPage @ 0x1402F41B0 (MiGetPage.c)
 *     MiObtainFaultCharges @ 0x1402F6A70 (MiObtainFaultCharges.c)
 *     MiComputeFaultNode @ 0x1402FA290 (MiComputeFaultNode.c)
 *     MiLocateAddress @ 0x1402FC070 (MiLocateAddress.c)
 *     MiGetSharedProtos @ 0x1403025FC (MiGetSharedProtos.c)
 *     MiCopyDataPageToImagePage @ 0x1403142D8 (MiCopyDataPageToImagePage.c)
 *     MiSetInPagePrefetchPriority @ 0x14046AE90 (MiSetInPagePrefetchPriority.c)
 *     MiCopyFileOnlyGlobalSubsectionPage @ 0x14047FE9C (MiCopyFileOnlyGlobalSubsectionPage.c)
 *     MiReturnFaultCharges @ 0x140481AD4 (MiReturnFaultCharges.c)
 */

__int64 __fastcall MiResolveMappedFileFault(__int64 a1, unsigned __int64 *a2, __int64 a3, __int64 *a4)
{
  unsigned int v4; // esi
  __int64 v7; // rdx
  unsigned int v8; // r12d
  unsigned __int64 v9; // rbx
  __int64 v10; // r11
  __int64 v11; // rdi
  unsigned int v12; // r9d
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
  __int64 SlabPage; // rax
  int v31; // r9d
  int v32; // r9d
  __int64 v33; // rbx
  unsigned int v34; // eax
  __int64 v35; // rdi
  __int64 v37; // r14
  __int64 v38; // rax
  __int64 v39; // rdx
  __int64 v40; // rcx
  _QWORD *v41; // r9
  unsigned int v42; // r12d
  unsigned __int64 v43; // rbx
  __int64 v44; // r14
  int v45; // eax
  unsigned __int64 v46; // rax
  unsigned int v47; // edi
  __int64 v48; // r8
  __int64 SharedProtos; // rax
  __int64 Address; // rax
  __int64 v51; // rdx
  __int64 v52; // rax
  int v53; // [rsp+58h] [rbp-79h]
  int v54; // [rsp+5Ch] [rbp-75h]
  int v55; // [rsp+60h] [rbp-71h]
  unsigned int SessionIdForVa; // [rsp+64h] [rbp-6Dh]
  __int64 v57; // [rsp+68h] [rbp-69h]
  unsigned __int64 v58; // [rsp+70h] [rbp-61h]
  unsigned int v59; // [rsp+78h] [rbp-59h] BYREF
  __int64 v60; // [rsp+80h] [rbp-51h] BYREF
  __int64 v61; // [rsp+88h] [rbp-49h]
  __int64 v62; // [rsp+90h] [rbp-41h]
  __int64 v63; // [rsp+98h] [rbp-39h]
  __int64 v64; // [rsp+A0h] [rbp-31h]
  __int64 v65; // [rsp+A8h] [rbp-29h]
  __int64 v66; // [rsp+B0h] [rbp-21h]
  __int64 v67; // [rsp+B8h] [rbp-19h]
  __int64 v68; // [rsp+C0h] [rbp-11h] BYREF
  __int64 v69; // [rsp+C8h] [rbp-9h] BYREF
  _OWORD v70[5]; // [rsp+D0h] [rbp-1h] BYREF
  __int64 v73; // [rsp+148h] [rbp+77h]

  v73 = a3;
  v4 = 0;
  v58 = *(_QWORD *)a1;
  v7 = *(_QWORD *)(a1 + 16);
  v66 = *(_QWORD *)(a1 + 56);
  v8 = 2;
  v9 = *a2;
  v10 = a3;
  v11 = a1;
  v69 = 0LL;
  v12 = 0;
  v68 = 0LL;
  v13 = 0LL;
  v14 = ((__int64)KeGetCurrentThread()[1].Queue & 4) == 0;
  v70[0] = 0LL;
  v59 = 0;
  v61 = v7;
  *a4 = 0LL;
  v62 = 0LL;
  if ( !v14 )
  {
    v4 = -1073741663;
    goto LABEL_62;
  }
  v15 = v7 & 1;
  v54 = 256;
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
        v62 = *(_QWORD *)(v7 + 112);
        break;
      case 2:
        v13 = v7;
        break;
    }
  }
  if ( (v9 & 0x400) != 0 )
  {
    v16 = v9;
    if ( qword_140E2DB80 )
    {
      if ( (v9 & 0x10) != 0 )
        v16 = v9 & 0xFFFFFFFFFFFFFFEFuLL;
      else
        v16 = v9 & ~qword_140E2DB80;
    }
    v65 = 0LL;
  }
  else
  {
    v46 = v9;
    if ( qword_140E2DB80 )
    {
      if ( (v9 & 0x10) != 0 )
        v46 = v9 & 0xFFFFFFFFFFFFFFEFuLL;
      else
        v46 = v9 & ~qword_140E2DB80;
    }
    v65 = 48 * ((v46 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
    v16 = *(_QWORD *)(v65 + 16);
    if ( qword_140E2DB80 && (v16 & 0x10) == 0 )
      v16 &= ~qword_140E2DB80;
    v11 = a1;
  }
  v17 = v16 >> 16;
  v18 = *(_QWORD *)v17;
  v63 = v18;
  if ( (*(_DWORD *)(v18 + 56) & 0x10) != 0 )
  {
    v4 = -1073741818;
LABEL_62:
    LOBYTE(v7) = 17;
    MiUnlockProtoPoolPage(v10, v7);
    return v4;
  }
  SessionIdForVa = -1;
  v64 = *(_QWORD *)(v17 + 8);
  v19 = *(_DWORD *)(v17 + 32);
  v67 = 0LL;
  if ( (v19 & 0x20000) == 0 || (*(_DWORD *)(v18 + 56) & 0x8000000) == 0 )
  {
    v7 = 0LL;
    goto LABEL_11;
  }
  SessionIdForVa = MiGetSessionIdForVa(v58, v7, v15, 0LL);
  if ( v58 >= 0xFFFF800000000000uLL )
  {
    if ( v48 )
    {
      if ( *(_BYTE *)v7 != 1 && *(_BYTE *)v7 != 3 && *(_BYTE *)(v61 & 0xFFFFFFFFFFFFFFFEuLL) != 6 )
        goto LABEL_110;
LABEL_122:
      v52 = *(_QWORD *)(v11 + 16);
      if ( (v52 & 1) == 0 || *(_BYTE *)(v52 & 0xFFFFFFFFFFFFFFFEuLL) != 6 )
        goto LABEL_124;
      goto LABEL_110;
    }
    if ( KeInvalidAccessAllowed(v61, 0) )
    {
      v10 = v73;
      goto LABEL_122;
    }
  }
LABEL_110:
  SharedProtos = MiGetSharedProtos(v63, SessionIdForVa, v17);
  v12 = 0;
  v7 = SharedProtos;
  v18 = v63;
  v10 = v73;
  v67 = SharedProtos;
  v64 = *(_QWORD *)(SharedProtos + 72);
LABEL_11:
  if ( (unsigned __int64)a2 >= v64
                             - 8LL * (*(_DWORD *)(v17 + 52) & 0x3FFFFFFF)
                             + 8 * (unsigned __int64)*(unsigned int *)(v17 + 44) )
  {
LABEL_124:
    v4 = -1073741819;
    goto LABEL_62;
  }
  v20 = 0;
  v21 = 0;
  v55 = 0;
  v57 = *((_QWORD *)qword_140E2FF88 + (*(_WORD *)(v18 + 60) & 0x3FF));
  if ( (*(_BYTE *)(v18 + 62) & 0xC) == 4 )
  {
    v8 = 0;
    v21 = 2 - (v7 != 0);
    v55 = v21;
    v12 = v7 == 0;
  }
  if ( v21 != 2 )
  {
    v60 = 0LL;
    v20 = MiComputeFaultNode(a1, v18, &v60);
    v12 = 0;
    if ( v21 == 1 )
    {
      v54 = 1;
      goto LABEL_22;
    }
    if ( v13 )
    {
      v44 = v60;
      if ( !v60 && v58 <= 0x7FFFFFFEFFFFLL )
      {
        MiLockVadTree(1LL);
        Address = MiLocateAddress(v58);
        LOBYTE(v51) = 17;
        v60 = Address;
        v44 = Address;
        MiUnlockVadTree(1LL, v51);
      }
      v12 = MiComputeFaultCluster(v57, v13, v44, 2LL);
    }
    else if ( (v9 & 0x400) != 0 && (*(_DWORD *)(v63 + 56) & 0x20) == 0 && (*(_DWORD *)(v66 + 184) & 0xF) == 0 )
    {
      v37 = v60;
      if ( !v60 )
      {
        MiLockVadTree(1LL);
        v38 = MiLocateAddress(v58);
        LOBYTE(v39) = 17;
        v60 = v38;
        v37 = v38;
        MiUnlockVadTree(1LL, v39);
        v12 = 0;
      }
      v40 = *(_QWORD *)(v37 + 120);
      if ( v40 >= 0
        && (*(_QWORD *)(v37 + 120) & 0xFFFuLL) >= 0x11
        && (v58 & 0xFFFFFFFFFFFFF000uLL) == ((*(_QWORD *)(v37 + 120) & 0xFFFLL)
                                           - 1
                                           + ((*(_QWORD *)(v37 + 120) >> 12) & 0x7FFFFFFFFFFFFLL)) << 12 )
      {
        v41 = a2 + 1;
        if ( (((_DWORD)a2 + 8) & 0xFFF) != 0
          && (unsigned __int64)v41 < -8LL * (*(_DWORD *)(v17 + 52) & 0x3FFFFFFF)
                                   + v64
                                   + 8 * (unsigned __int64)*(unsigned int *)(v17 + 44)
          && *v41 == v9 )
        {
          v12 = (v40 & 0xFFF) - 1;
        }
        else
        {
          v12 = 0;
        }
      }
    }
  }
  if ( v12 > 0x100 || (v54 = v12, v12 > 0x10) )
    v8 |= 1u;
LABEL_22:
  v23 = MiGetInPageSupportBlock(v8 | 4);
  if ( !v23 )
  {
    LOBYTE(v22) = 17;
    MiUnlockProtoPoolPage(v73, v22);
    v23 = MiGetInPageSupportBlock(v8);
    if ( !v23 )
    {
      if ( (v8 & 1) == 0 )
        goto LABEL_25;
      v54 = 16;
      v23 = MiGetInPageSupportBlock(v8 & 0xFFFFFFFE);
      if ( !v23 )
        goto LABEL_118;
    }
    v73 = MiLockProtoPoolPage((unsigned __int64)a2, 0LL);
    if ( !v73 )
    {
      MiFreeInPageSupportBlock((PSLIST_ENTRY)v23);
      goto LABEL_118;
    }
LABEL_25:
    if ( v23 )
      goto LABEL_26;
LABEL_118:
    v47 = -1073741670;
    goto LABEL_98;
  }
LABEL_26:
  if ( *a2 == v9
    && ((v9 & 0x400) != 0 || (*(_BYTE *)(v65 + 34) & 0x20) != 0 && (*(_DWORD *)(*(_QWORD *)v65 + 160LL) & 0x80u) == 0) )
  {
    if ( v55 == 2 )
      goto LABEL_79;
    if ( v13 && *(_BYTE *)v13 == 1 )
      MiSetInPagePrefetchPriority(v13, v23);
    v53 = MiSanitizePfnProtection(0LL, (*(_DWORD *)(v17 + 32) >> 1) & 0x1F, (v9 >> 5) & 0x1F);
    MiInitializePageColorBase(v66, (unsigned int)(v24 + 3), v20, v70);
    v25 = -1LL;
    v26 = 1LL;
    if ( v55 == 1 )
      goto LABEL_34;
    if ( (*(_BYTE *)(v63 + 62) & 0xC) != 0
      || (*(_DWORD *)(v63 + 56) & 0x40020) != 32
      || (v9 & 0x400) == 0
      || dword_140E37298 )
    {
      v27 = v57;
      goto LABEL_44;
    }
    if ( v13 )
    {
      v27 = v57;
      if ( *(_BYTE *)v13 == 1 && !MiGetAvailablePagesBelowPriority(v57, ((*(_DWORD *)(v13 + 80) >> 3) & 7u) + 1) )
        goto LABEL_44;
    }
    else
    {
LABEL_34:
      v27 = v57;
    }
    if ( MiObtainFaultCharges(v27, v26, (unsigned int)v26) )
    {
      v28 = _InterlockedExchangeAdd(*(volatile signed __int32 **)&v70[0], 1u);
      v29 = DWORD2(v70[0]) ^ (unsigned __int8)(BYTE8(v70[0]) ^ (v28
                                                              % dword_140E2DBC0[(*((_QWORD *)&v70[0] + 1) >> 16) & 3LL]));
      if ( (v9 & 0x400) != 0
        && (unsigned int)MiUseSlabAllocator(v27, v17, v9, (DWORD2(v70[0]) >> 9) & 0x3F, (__int64)&v59)
        && v59 <= 4 )
      {
        SlabPage = MiGetSlabPage(v27, v59, v29, 16, 0LL, 0);
      }
      else
      {
        SlabPage = MiGetPage(v27, v29, 1LL);
      }
      v25 = SlabPage;
      if ( SlabPage != -1 )
      {
        v31 = v61;
        if ( v55 != 1 )
        {
          *(_QWORD *)(v23 + 224) = v58;
          if ( (unsigned int)MiCopyDataPageToImagePage(v23, v17, (_DWORD)a2, v31, SlabPage, v73) )
          {
LABEL_48:
            *a4 = v23;
            return 3221435187LL;
          }
          goto LABEL_44;
        }
        v45 = MiCopyFileOnlyGlobalSubsectionPage(v23, v17, (_DWORD)a2, v61, SlabPage, v73, v67);
        v42 = v45;
        if ( v45 >= 0 )
          goto LABEL_48;
        if ( v45 == -1073741739 )
        {
          v42 = 0;
          goto LABEL_60;
        }
        if ( v45 != -1073740748 )
        {
          if ( v45 == -1073532109 )
          {
            v42 = -1073741802;
            *(_DWORD *)(a1 + 80) |= 8u;
          }
          goto LABEL_60;
        }
LABEL_79:
        LOBYTE(v22) = 17;
        MiUnlockProtoPoolPage(v73, v22);
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
    if ( v55 == 1 )
    {
LABEL_59:
      v42 = -1073741801;
LABEL_60:
      LOBYTE(v22) = 17;
      MiUnlockProtoPoolPage(v73, v22);
      MiFreeInPageSupportBlock((PSLIST_ENTRY)v23);
      return v42;
    }
LABEL_44:
    v32 = v64;
    *(_QWORD *)(v23 + 160) = v73;
    *(_QWORD *)(v23 + 232) = a2;
    *(_DWORD *)(v23 + 184) = v54;
    *(_QWORD *)(v23 + 168) = v9;
    *(_QWORD *)(v23 + 208) = v17;
    v33 = MiPickClusterForMappedFileFault(v27, v23, v13, v32, v25, (__int64)&v69, (__int64)&v68);
    v34 = MiBuildMdlForMappedFileFault(v23, v69, v68, v27, v33, v25, v53, v13, a1, (__int64)v70);
    v35 = v34;
    if ( v34 != v33 )
    {
      v43 = v33 - v34;
      MiReturnResident(v27, v43);
      MiReturnCommit(v27, v43, 0LL);
    }
    if ( v35 )
    {
      MiFinishMdlForMappedFileFault(v23, v61, v35, v65, SessionIdForVa);
      goto LABEL_48;
    }
    goto LABEL_59;
  }
  LOBYTE(v22) = 17;
  v47 = -1073740748;
  MiUnlockProtoPoolPage(v73, v22);
  MiFreeInPageSupportBlock((PSLIST_ENTRY)v23);
LABEL_98:
  if ( v13 )
    *(_BYTE *)(v13 + 1) = (v47 == -1073741670) + 1;
  return v47;
}
