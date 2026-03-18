/*
 * XREFs of MiResolveMappedFileFault @ 0x1402276BC
 * Callers:
 *     MiResolveProtoPteFault @ 0x140240060 (MiResolveProtoPteFault.c)
 *     MiIssueFlowThroughFault @ 0x14033D9E4 (MiIssueFlowThroughFault.c)
 * Callees:
 *     MiCopyDataPageToImagePage @ 0x14020754C (MiCopyDataPageToImagePage.c)
 *     MiGetSessionIdForVa @ 0x140208E10 (MiGetSessionIdForVa.c)
 *     MiPickClusterForMappedFileFault @ 0x140229A24 (MiPickClusterForMappedFileFault.c)
 *     MiObtainFaultCharges @ 0x14022B950 (MiObtainFaultCharges.c)
 *     MiGetSlabPage @ 0x14022BC70 (MiGetSlabPage.c)
 *     MiGetPage @ 0x14022CE00 (MiGetPage.c)
 *     MiReturnResident @ 0x14022F8D0 (MiReturnResident.c)
 *     MiUnlockProtoPoolPage @ 0x1402353A0 (MiUnlockProtoPoolPage.c)
 *     MiInitializePageColorBase @ 0x14023A610 (MiInitializePageColorBase.c)
 *     MiFreeInPageSupportBlock @ 0x14023B4B0 (MiFreeInPageSupportBlock.c)
 *     MiLockProtoPoolPage @ 0x140240A70 (MiLockProtoPoolPage.c)
 *     MiUnlockVadTree @ 0x1402A8690 (MiUnlockVadTree.c)
 *     MiLockVadTree @ 0x1402B54D0 (MiLockVadTree.c)
 *     MiLocateAddress @ 0x1402B57D0 (MiLocateAddress.c)
 *     MiGetSharedProtos @ 0x140322970 (MiGetSharedProtos.c)
 *     MiReturnCommit @ 0x140329900 (MiReturnCommit.c)
 *     MiBuildMdlForMappedFileFault @ 0x140339828 (MiBuildMdlForMappedFileFault.c)
 *     MiUseSlabAllocator @ 0x14033BB18 (MiUseSlabAllocator.c)
 *     MiFinishMdlForMappedFileFault @ 0x14034EE44 (MiFinishMdlForMappedFileFault.c)
 *     MiComputeFaultCluster @ 0x14037A558 (MiComputeFaultCluster.c)
 *     MiComputeFaultNode @ 0x14037C200 (MiComputeFaultNode.c)
 *     MiSanitizePfnProtection @ 0x14037E100 (MiSanitizePfnProtection.c)
 *     MiGetInPageSupportBlock @ 0x140387260 (MiGetInPageSupportBlock.c)
 *     MiGetAvailablePagesBelowPriority @ 0x1403C2290 (MiGetAvailablePagesBelowPriority.c)
 *     KeInvalidAccessAllowed @ 0x1403E2860 (KeInvalidAccessAllowed.c)
 *     MiCopyFileOnlyGlobalSubsectionPage @ 0x14045316C (MiCopyFileOnlyGlobalSubsectionPage.c)
 *     MiSetInPagePrefetchPriority @ 0x14046C678 (MiSetInPagePrefetchPriority.c)
 *     MiReturnFaultCharges @ 0x140480970 (MiReturnFaultCharges.c)
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
  __int64 v31; // r9
  int v32; // r9d
  __int64 v33; // rbx
  unsigned int v34; // eax
  __int64 v35; // rdi
  __int64 v37; // r14
  __int64 v38; // rcx
  _QWORD *v39; // r9
  unsigned int v40; // r12d
  __int64 v41; // rax
  __int64 v42; // rdx
  __int64 v43; // r14
  int v44; // eax
  unsigned __int64 v45; // rax
  __int64 v46; // rbx
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
    goto LABEL_60;
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
          goto LABEL_60;
        }
        break;
      case 1:
        v13 = v7;
        if ( (*(_DWORD *)(v7 + 80) & 0x100) != 0 )
          goto LABEL_60;
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
    if ( qword_140E2D940 )
    {
      if ( (v9 & 0x10) != 0 )
        v16 = v9 & 0xFFFFFFFFFFFFFFEFuLL;
      else
        v16 = v9 & ~qword_140E2D940;
    }
    v65 = 0LL;
  }
  else
  {
    v45 = v9;
    if ( qword_140E2D940 )
    {
      if ( (v9 & 0x10) != 0 )
        v45 = v9 & 0xFFFFFFFFFFFFFFEFuLL;
      else
        v45 = v9 & ~qword_140E2D940;
    }
    v65 = 48 * ((v45 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
    v16 = *(_QWORD *)(v65 + 16);
    if ( qword_140E2D940 && (v16 & 0x10) == 0 )
      v16 &= ~qword_140E2D940;
    v11 = a1;
  }
  v17 = v16 >> 16;
  v18 = *(_QWORD *)v17;
  v63 = v18;
  if ( (*(_DWORD *)(v18 + 56) & 0x10) != 0 )
  {
    v4 = -1073741818;
LABEL_60:
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
  SessionIdForVa = MiGetSessionIdForVa(v58);
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
    if ( (unsigned __int8)KeInvalidAccessAllowed(v61, 0LL) )
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
    goto LABEL_60;
  }
  v20 = 0;
  v21 = 0;
  v55 = 0;
  v57 = *((_QWORD *)qword_140E2FD48 + (*(_WORD *)(v18 + 60) & 0x3FF));
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
      v43 = v60;
      if ( !v60 && v58 <= 0x7FFFFFFEFFFFLL )
      {
        MiLockVadTree(1LL);
        Address = MiLocateAddress(v58);
        LOBYTE(v51) = 17;
        v60 = Address;
        v43 = Address;
        MiUnlockVadTree(1LL, v51);
      }
      v12 = MiComputeFaultCluster(v57, v13, v43, 2LL);
    }
    else if ( (v9 & 0x400) != 0 && (*(_DWORD *)(v63 + 56) & 0x20) == 0 && (*(_DWORD *)(v66 + 184) & 0xF) == 0 )
    {
      v37 = v60;
      if ( !v60 )
      {
        MiLockVadTree(1LL);
        v41 = MiLocateAddress(v58);
        LOBYTE(v42) = 17;
        v60 = v41;
        v37 = v41;
        MiUnlockVadTree(1LL, v42);
        v12 = 0;
      }
      v38 = *(_QWORD *)(v37 + 120);
      if ( v38 >= 0
        && (*(_QWORD *)(v37 + 120) & 0xFFFuLL) >= 0x11
        && (v58 & 0xFFFFFFFFFFFFF000uLL) == ((*(_QWORD *)(v37 + 120) & 0xFFFLL)
                                           - 1
                                           + ((*(_QWORD *)(v37 + 120) >> 12) & 0x7FFFFFFFFFFFFLL)) << 12 )
      {
        v39 = a2 + 1;
        if ( (((_DWORD)a2 + 8) & 0xFFF) != 0
          && (unsigned __int64)v39 < -8LL * (*(_DWORD *)(v17 + 52) & 0x3FFFFFFF)
                                   + v64
                                   + 8 * (unsigned __int64)*(unsigned int *)(v17 + 44)
          && *v39 == v9 )
        {
          v12 = (v38 & 0xFFF) - 1;
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
  v23 = MiGetInPageSupportBlock(v8 | 4, v62);
  if ( !v23 )
  {
    LOBYTE(v22) = 17;
    MiUnlockProtoPoolPage(v73, v22);
    v23 = MiGetInPageSupportBlock(v8, v62);
    if ( !v23 )
    {
      if ( (v8 & 1) == 0 )
        goto LABEL_25;
      v54 = 16;
      v23 = MiGetInPageSupportBlock(v8 & 0xFFFFFFFE, v62);
      if ( !v23 )
        goto LABEL_119;
    }
    v73 = MiLockProtoPoolPage(a2, 0LL);
    if ( !v73 )
    {
      MiFreeInPageSupportBlock((PSLIST_ENTRY)v23);
      goto LABEL_119;
    }
LABEL_25:
    if ( v23 )
      goto LABEL_26;
LABEL_119:
    v47 = -1073741670;
    goto LABEL_100;
  }
LABEL_26:
  if ( *a2 == v9
    && ((v9 & 0x400) != 0 || (*(_BYTE *)(v65 + 34) & 0x20) != 0 && (*(_DWORD *)(*(_QWORD *)v65 + 160LL) & 0x80u) == 0) )
  {
    if ( v55 == 2 )
      goto LABEL_74;
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
      || dword_140E37058 )
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
                                                              % dword_140E2D980[(*((_QWORD *)&v70[0] + 1) >> 16) & 3LL]));
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
          if ( (unsigned int)MiCopyDataPageToImagePage(v23, (__int64 *)v17, (unsigned __int64)a2, v31, SlabPage, v73) )
          {
LABEL_48:
            *a4 = v23;
            return 3221435187LL;
          }
          goto LABEL_44;
        }
        v44 = MiCopyFileOnlyGlobalSubsectionPage(v23, v17, (_DWORD)a2, v61, SlabPage, v73, v67);
        v40 = v44;
        if ( v44 >= 0 )
          goto LABEL_48;
        if ( v44 == -1073741739 )
        {
          v40 = 0;
          goto LABEL_62;
        }
        if ( v44 != -1073740748 )
        {
          if ( v44 == -1073532109 )
          {
            v40 = -1073741802;
            *(_DWORD *)(a1 + 80) |= 8u;
          }
          goto LABEL_62;
        }
LABEL_74:
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
LABEL_61:
      v40 = -1073741801;
LABEL_62:
      LOBYTE(v22) = 17;
      MiUnlockProtoPoolPage(v73, v22);
      MiFreeInPageSupportBlock((PSLIST_ENTRY)v23);
      return v40;
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
      v46 = v33 - v34;
      MiReturnResident(v27);
      MiReturnCommit(v27, v46, 0LL);
    }
    if ( v35 )
    {
      MiFinishMdlForMappedFileFault(v23, v61, v35, v65, SessionIdForVa);
      goto LABEL_48;
    }
    goto LABEL_61;
  }
  LOBYTE(v22) = 17;
  v47 = -1073740748;
  MiUnlockProtoPoolPage(v73, v22);
  MiFreeInPageSupportBlock((PSLIST_ENTRY)v23);
LABEL_100:
  if ( v13 )
    *(_BYTE *)(v13 + 1) = (v47 == -1073741670) + 1;
  return v47;
}
