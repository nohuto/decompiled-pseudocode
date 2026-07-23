/*
 * XREFs of MiValidateSectionCreate @ 0x14093C5D8
 * Callers:
 *     MiPromoteControlAreaToStrongCode @ 0x1407F661C (MiPromoteControlAreaToStrongCode.c)
 *     MiValidateSectionSigningPolicy @ 0x14093C388 (MiValidateSectionSigningPolicy.c)
 *     MiMapImageForEnclaveUse @ 0x140A2AB18 (MiMapImageForEnclaveUse.c)
 * Callees:
 *     MiAllocatePool @ 0x140277450 (MiAllocatePool.c)
 *     MiWalkEntireImage @ 0x140349C00 (MiWalkEntireImage.c)
 *     MiFlushEntireTbDueToAttributeChange @ 0x14039D0A4 (MiFlushEntireTbDueToAttributeChange.c)
 *     PsSetSystemPagePriorityThread @ 0x140447AA0 (PsSetSystemPagePriorityThread.c)
 *     PsRevertToUserPagePriorityThread @ 0x14044F424 (PsRevertToUserPagePriorityThread.c)
 *     MiWriteSegmentSignatureFlags @ 0x1404A7950 (MiWriteSegmentSignatureFlags.c)
 *     MiStrongCodeImage @ 0x1404AEA2C (MiStrongCodeImage.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     MiImageCantMove @ 0x140687304 (MiImageCantMove.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     KeZeroSinglePage @ 0x1406B42F0 (KeZeroSinglePage.c)
 *     KeCopyPage @ 0x1406B43B0 (KeCopyPage.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     MiPrefetchControlArea @ 0x14093AC84 (MiPrefetchControlArea.c)
 *     MiRevertRelocations @ 0x14093B628 (MiRevertRelocations.c)
 *     MiMapImageInSystemSpace @ 0x14093E220 (MiMapImageInSystemSpace.c)
 *     MiUnmapImageInSystemSpace @ 0x14093E4B4 (MiUnmapImageInSystemSpace.c)
 *     MiDereferencePerSessionProtos @ 0x140A18828 (MiDereferencePerSessionProtos.c)
 *     MiCreatePerSessionProtos @ 0x140A46C20 (MiCreatePerSessionProtos.c)
 *     SepScheduleImageVerificationCallbacks @ 0x140A89D00 (SepScheduleImageVerificationCallbacks.c)
 *     MiCaptureSecureImageBaseAddress @ 0x140A8D9F4 (MiCaptureSecureImageBaseAddress.c)
 *     SeReleaseImageValidationContext @ 0x140A94A68 (SeReleaseImageValidationContext.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiValidateSectionCreate(
        ULONG_PTR a1,
        ULONG_PTR a2,
        unsigned int a3,
        __int64 a4,
        int a5,
        char a6,
        char a7)
{
  unsigned int v9; // ebx
  struct _KTHREAD *CurrentThread; // r12
  int v11; // ecx
  int v12; // edx
  int v13; // r13d
  int v14; // esi
  __int64 v15; // r10
  signed __int64 v16; // rbx
  unsigned int v17; // r12d
  PVOID v18; // r11
  unsigned int v19; // r13d
  unsigned int v20; // r8d
  ULONG_PTR v21; // rdx
  __int64 v22; // rax
  int v23; // eax
  int v24; // esi
  unsigned __int64 v25; // rax
  void *Pool; // rax
  void *v27; // r8
  unsigned int v28; // eax
  unsigned int v29; // r13d
  int v30; // eax
  PVOID v31; // rcx
  int v32; // ecx
  unsigned __int64 v33; // rcx
  __int64 v34; // r13
  volatile signed __int64 *v35; // r8
  bool v36; // zf
  unsigned __int64 v37; // rax
  __int64 v38; // rdx
  __int64 result; // rax
  unsigned __int64 v40; // rdx
  int PerSessionProtos; // ebx
  int v42; // eax
  unsigned __int64 v43; // rcx
  unsigned int BugCheckParameter4; // [rsp+20h] [rbp-228h]
  _KPROCESS *v45; // [rsp+38h] [rbp-210h]
  __int64 v46; // [rsp+40h] [rbp-208h]
  int v47; // [rsp+48h] [rbp-200h]
  int v48; // [rsp+58h] [rbp-1F0h]
  int v49; // [rsp+60h] [rbp-1E8h]
  unsigned __int64 v50; // [rsp+78h] [rbp-1D0h]
  char v51[8]; // [rsp+90h] [rbp-1B8h] BYREF
  unsigned __int64 v52; // [rsp+98h] [rbp-1B0h] BYREF
  int v53; // [rsp+A0h] [rbp-1A8h] BYREF
  char v54[4]; // [rsp+A4h] [rbp-1A4h] BYREF
  int v55; // [rsp+A8h] [rbp-1A0h]
  int v56; // [rsp+ACh] [rbp-19Ch]
  int v57; // [rsp+B0h] [rbp-198h]
  unsigned int v58; // [rsp+B4h] [rbp-194h]
  int v59; // [rsp+B8h] [rbp-190h]
  unsigned int v60; // [rsp+BCh] [rbp-18Ch]
  unsigned int v61; // [rsp+C0h] [rbp-188h]
  int v62; // [rsp+C4h] [rbp-184h]
  int v63; // [rsp+C8h] [rbp-180h]
  int v64; // [rsp+CCh] [rbp-17Ch]
  int v65; // [rsp+D0h] [rbp-178h]
  unsigned int v66; // [rsp+D4h] [rbp-174h]
  int v67; // [rsp+D8h] [rbp-170h]
  unsigned int v68; // [rsp+DCh] [rbp-16Ch] BYREF
  unsigned int v69; // [rsp+E0h] [rbp-168h]
  unsigned int v70; // [rsp+E4h] [rbp-164h] BYREF
  struct _KTHREAD *v71; // [rsp+E8h] [rbp-160h]
  PVOID v72; // [rsp+F0h] [rbp-158h]
  PVOID P; // [rsp+F8h] [rbp-150h]
  __int64 v74; // [rsp+100h] [rbp-148h]
  PVOID v75; // [rsp+108h] [rbp-140h] BYREF
  unsigned int v76; // [rsp+110h] [rbp-138h]
  int v77; // [rsp+118h] [rbp-130h]
  int v78; // [rsp+11Ch] [rbp-12Ch]
  int v79; // [rsp+120h] [rbp-128h]
  unsigned __int64 v80; // [rsp+128h] [rbp-120h]
  ULONG_PTR BugCheckParameter2; // [rsp+130h] [rbp-118h]
  void *v82; // [rsp+138h] [rbp-110h]
  __int64 v83; // [rsp+140h] [rbp-108h]
  _KPROCESS *Process; // [rsp+148h] [rbp-100h]
  _DWORD *v85; // [rsp+150h] [rbp-F8h]
  void *v86; // [rsp+158h] [rbp-F0h]
  _KPROCESS *v87; // [rsp+160h] [rbp-E8h]
  __int64 v88; // [rsp+168h] [rbp-E0h]
  signed __int64 v89; // [rsp+170h] [rbp-D8h]
  ULONG_PTR v90; // [rsp+178h] [rbp-D0h]
  ULONG_PTR v91; // [rsp+180h] [rbp-C8h]
  __int64 v92; // [rsp+188h] [rbp-C0h]
  _BYTE *v93; // [rsp+190h] [rbp-B8h]
  volatile signed __int64 *v94; // [rsp+198h] [rbp-B0h]
  _QWORD *v95; // [rsp+1A0h] [rbp-A8h]
  volatile signed __int64 *v96; // [rsp+1A8h] [rbp-A0h]
  _QWORD v97[2]; // [rsp+1B0h] [rbp-98h] BYREF
  unsigned int v98; // [rsp+1C0h] [rbp-88h]

  v83 = a4;
  v69 = a3;
  BugCheckParameter2 = a1;
  v90 = a1;
  v91 = a2;
  v76 = a3;
  v92 = a4;
  v52 = 0LL;
  v51[0] = 0;
  memset_0(v97, 0, 0x50uLL);
  v56 = 0;
  v64 = 1;
  v80 = *(_QWORD *)(a2 + 96) & 0xFFFFFFFFFFFFFFF8uLL;
  v9 = 6;
  v55 = 6;
  v53 = 0;
  v54[0] = 0;
  v70 = 0;
  v63 = 0;
  CurrentThread = 0LL;
  v71 = 0LL;
  v85 = (_DWORD *)(a2 + 56);
  if ( (*(_DWORD *)(a2 + 56) & 0x800) != 0 )
  {
    if ( (a5 & 0x40000000) != 0 )
    {
      dword_140E2D838 = 115;
      return 3221226547LL;
    }
    v11 = a5 | 0x10000000;
  }
  else
  {
    v11 = a5;
    if ( (*(_DWORD *)(*(_QWORD *)(a1 + 8) + 52LL) & 0x10) != 0 )
      v11 = a5 | 0x40;
  }
  v93 = (_BYTE *)(a2 + 62);
  v12 = v11 | 0x1000000;
  if ( (*(_BYTE *)(a2 + 62) & 0xC) != 4 )
    v12 = v11;
  v67 = v12;
  v78 = v12;
  if ( (v12 & 0x40000000) != 0 && !*(_QWORD *)(a2 + 144) )
  {
    dword_140E2D838 = 116;
    return 3221225595LL;
  }
  if ( (v12 & 5) != 0 )
  {
    v9 = 7;
    v55 = 7;
    v53 = 2;
  }
  v13 = 0;
  v62 = 0;
  Process = KeGetCurrentThread()->ApcState.Process;
  v87 = Process;
  while ( 1 )
  {
    v59 = v9 & 1;
    v77 = v59;
    if ( (v9 & 1) != 0 )
    {
      CurrentThread = KeGetCurrentThread();
      v71 = CurrentThread;
      v24 = PsSetSystemPagePriorityThread((__int64)CurrentThread, 1);
      v63 = v24;
      if ( (*v85 & 0x8000000) != 0 )
      {
        PerSessionProtos = MiCreatePerSessionProtos(a2, 0xFFFFFFFFLL);
        if ( PerSessionProtos < 0 )
        {
          PsRevertToUserPagePriorityThread((__int64)CurrentThread, v24);
          return (unsigned int)PerSessionProtos;
        }
        v13 = 1;
        v62 = 1;
        v9 = v55;
      }
      if ( v64 )
        MiPrefetchControlArea(a2, CLFS_LSN_NULL_EXT, 0LL, 1u, 0, 0xFFFFFFFF);
    }
    v14 = MiMapImageInSystemSpace(a2, v9, v97);
    if ( v14 < 0 )
    {
      if ( v13 )
        MiDereferencePerSessionProtos(a2);
      if ( v59 )
        PsRevertToUserPagePriorityThread((__int64)CurrentThread, v63);
      return (unsigned int)v14;
    }
    v72 = (PVOID)v97[0];
    v15 = *(_QWORD *)a2;
    v74 = v15;
    v88 = v15;
    v94 = (volatile signed __int64 *)(v80 + 40);
    v96 = (volatile signed __int64 *)(v80 + 40);
    v16 = *(_QWORD *)(v80 + 40);
    v89 = v16;
    v52 = v16;
    if ( v16 )
    {
      if ( (v16 & 0xFFFFFFFFFFFFFFF8uLL) <= 0x7FFFFFFFFFFFFFF8LL )
      {
        v17 = 1;
        v57 = 1;
        v52 = v16 & 3;
        goto LABEL_15;
      }
      v25 = v16;
      if ( (v16 & 3) != 0 )
      {
        v25 = v16 & 0xFFFFFFFFFFFFFFFCuLL;
        v17 = ((v16 & 3) != 1) + 2;
      }
      else
      {
        v17 = 4;
      }
      v52 = v25 & 0xFFFFFFFFFFFFFFFBuLL;
    }
    else
    {
      v17 = 0;
    }
    v57 = v17;
LABEL_15:
    v18 = (PVOID)v97[0];
    P = (PVOID)v97[0];
    v19 = v98;
    v20 = v98 << 12;
    v61 = v98 << 12;
    v65 = v98 << 12;
    v21 = v98 << 12;
    v58 = v98 << 12;
    v51[0] = 1;
    v95 = (_QWORD *)(v80 + 32);
    v22 = *(_QWORD *)(v80 + 32);
    if ( v22 && *(_QWORD *)(v22 + 40) != *(_QWORD *)(v22 + 48) )
    {
      if ( v53 != 2 )
      {
        v19 = (*(_DWORD *)(*(_QWORD *)(v15 + 56) + 64LL) >> 12)
            + ((*(_DWORD *)(*(_QWORD *)(v15 + 56) + 64LL) & 0xFFF) != 0);
        v21 = v19 << 12;
        v58 = v19 << 12;
      }
      v66 = v19;
      Pool = (void *)MiAllocatePool(0x100uLL, v21, 1749642573);
      v18 = Pool;
      P = Pool;
      v86 = Pool;
      if ( Pool )
      {
        v14 = 0;
        v79 = 0;
        v27 = Pool;
        v82 = Pool;
        v28 = 0;
        while ( 1 )
        {
          v60 = v28;
          if ( v28 >= v19 )
            break;
          KeCopyPage((__int64)v27 + 4096 * v28, (__int64)v72 + 4096 * v28);
          v18 = P;
          v28 = v60 + 1;
          v27 = v82;
        }
        MiRevertRelocations((__int64)v18, a2, v19);
        v18 = P;
      }
      else
      {
        v14 = -1073741670;
      }
      v20 = v61;
    }
    else if ( v53 == 1 )
    {
      v53 = 2;
    }
    v65 = v53;
    if ( v14 < 0 )
      goto LABEL_20;
    v75 = 0LL;
    v68 = 0;
    if ( qword_140F04B40 )
    {
      v50 = (unsigned __int64)&v75 & -(__int64)(dword_140E67C74 != 0);
      LOBYTE(v49) = a7;
      LOBYTE(v48) = a6;
      v29 = v67;
      v47 = v67;
      v46 = v83;
      v45 = Process;
      BugCheckParameter4 = v20;
      v30 = guard_dispatch_icall_no_overrides(BugCheckParameter2, v18);
      v14 = v30;
      v31 = v75;
      if ( v75 )
      {
        if ( v30 >= 0 && (v29 & 1) == 0 )
          goto LABEL_79;
        v42 = SepScheduleImageVerificationCallbacks(
                v75,
                v68,
                (unsigned int)v30,
                v29,
                BugCheckParameter4,
                &v53,
                v54,
                v45,
                v46,
                v47,
                &v52,
                v48,
                v49,
                v51,
                &v70,
                v50,
                &v68);
        if ( v42 < 0 )
        {
          if ( v14 >= 0 )
            v14 = v42;
          v31 = v75;
LABEL_79:
          if ( v31 )
            ExFreePoolWithTag(v31, 0x63734943u);
          goto LABEL_46;
        }
        v75 = 0LL;
      }
    }
    else
    {
      v14 = -1073740760;
    }
LABEL_46:
    if ( v14 == 301 )
    {
      MiImageCantMove(a2);
      v56 = 1;
LABEL_50:
      if ( (*v93 & 0xC) == 4 )
        KeBugCheckEx(0x1Au, 0x5150EuLL, BugCheckParameter2, v14, 0LL);
      MiStrongCodeImage(a2, 1u);
      goto LABEL_20;
    }
    v32 = v56;
    if ( v14 == 302 )
      v32 = 1;
    v56 = v32;
    if ( v32 )
      goto LABEL_50;
LABEL_20:
    if ( P != v72 && P )
      ExFreePoolWithTag(P, 0);
    MiUnmapImageInSystemSpace(v97);
    v13 = v62;
    if ( v62 )
    {
      MiDereferencePerSessionProtos(a2);
      v13 = 0;
      v62 = 0;
    }
    v23 = v59;
    if ( v59 )
    {
      if ( (MiFlags & 0x20000) != 0 )
        MiFlushEntireTbDueToAttributeChange();
      PsRevertToUserPagePriorityThread((__int64)v71, v63);
      v23 = v59;
    }
    if ( v14 >= 0 )
      break;
    if ( v14 != -1073741789 || v65 >= v53 )
    {
      dword_140E2D838 = 117;
      return (unsigned int)v14;
    }
    v9 = v55;
    CurrentThread = v71;
    if ( v23 )
    {
      v64 = 1;
    }
    else
    {
      v9 = v55 | 1;
      v55 |= 1u;
      if ( v53 == 1 )
        v64 = 0;
    }
  }
  if ( !v14 && !v51[0] )
    return 0LL;
  if ( v17 <= 1 )
  {
    if ( (v52 & 0xFFFFFFFFFFFFFFF8uLL) > 0x7FFFFFFFFFFFFFF8LL )
    {
      if ( v17 )
        v33 = v52 & 0xFFFFFFFFFFFFFFFCuLL | 2;
      else
        v33 = v52 & 0xFFFFFFFFFFFFFFFCuLL | 1;
    }
    else
    {
      v33 = 8 * v52;
    }
    v52 = v33;
    v34 = v74;
    if ( *(char *)(*(_QWORD *)(v74 + 56) + 46LL) < 0 )
    {
      v33 |= 4uLL;
      v52 = v33;
    }
    v35 = v94;
    while ( 1 )
    {
      while ( 1 )
      {
        v37 = _InterlockedCompareExchange64(v35, v33, v16);
        v36 = v16 == v37;
        v16 = v37;
        if ( v36 )
          goto LABEL_62;
        v33 = v52;
        if ( v52 >> 3 > 0xFFFFFFFFFFFFFFFLL )
          break;
        if ( v37 >> 3 >= v52 >> 3 )
          goto LABEL_122;
      }
      if ( (v37 & 0xFFFFFFFFFFFFFFF8uLL) > 0x7FFFFFFFFFFFFFF8LL )
        break;
      v33 = v52 & 0xFFFFFFFFFFFFFFFCuLL | 2;
      v52 = v33;
    }
    v43 = v52 & 0xFFFFFFFFFFFFFFF8uLL;
    v52 &= 0xFFFFFFFFFFFFFFF8uLL;
    if ( qword_140F04C00 )
    {
      v14 = guard_dispatch_icall_no_overrides(v37 & 0xFFFFFFFFFFFFFFF8uLL, v43);
      v43 = v52;
    }
    else
    {
      v14 = 0;
    }
    SeReleaseImageValidationContext(v43);
    if ( v14 >= 0 )
    {
LABEL_122:
      v52 = v16;
LABEL_62:
      v16 = v52;
      goto LABEL_63;
    }
    dword_140E2D838 = 130;
    return (unsigned int)v14;
  }
  v34 = v74;
  if ( v17 <= 3 )
    v52 = v52 & 0xFFFFFFFFFFFFFFFCuLL | v16 & 3;
LABEL_63:
  if ( (v52 & 3) == 0 )
  {
LABEL_64:
    if ( v14 >= 0 )
    {
      v38 = v70;
      LOBYTE(v38) = v51[0] & 0xF | *(_BYTE *)(v34 + 15) & 0x80 | (16 * (v70 & 7));
      MiWriteSegmentSignatureFlags(v34, v38);
      if ( v56 )
        MiStrongCodeImage(a2, 2u);
    }
    return (unsigned int)v14;
  }
  if ( (MiFlags & 0x2000) != 0
    && (*(_DWORD *)(a2 + 92) & 0xC0000) != 0
    && *v95
    && (result = MiCaptureSecureImageBaseAddress(a2), (int)result < 0) )
  {
    dword_140E2D838 = 118;
  }
  else
  {
    result = MiWalkEntireImage(a2, 0LL, 1u, v69);
    v14 = result;
    if ( (int)result >= 0 )
    {
      v40 = v52 & 0xFFFFFFFFFFFFFFFCuLL;
      v52 &= 0xFFFFFFFFFFFFFFFCuLL;
      if ( *(char *)(*(_QWORD *)(v34 + 56) + 46LL) < 0 )
      {
        v40 |= 4uLL;
        v52 = v40;
      }
      _InterlockedCompareExchange64(v96, v40, v16);
      goto LABEL_64;
    }
    dword_140E2D838 = 119;
  }
  return result;
}
