/*
 * XREFs of MiValidateSectionCreate @ 0x140957B50
 * Callers:
 *     MiPromoteControlAreaToStrongCode @ 0x1407F5F2C (MiPromoteControlAreaToStrongCode.c)
 *     MiMapImageForEnclaveUse @ 0x1408DB088 (MiMapImageForEnclaveUse.c)
 *     MiValidateSectionSigningPolicy @ 0x1409579F8 (MiValidateSectionSigningPolicy.c)
 * Callees:
 *     MiAllocatePool @ 0x1402ACA70 (MiAllocatePool.c)
 *     MiWalkEntireImage @ 0x1402E85C0 (MiWalkEntireImage.c)
 *     MiFlushEntireTbDueToAttributeChange @ 0x1403AE894 (MiFlushEntireTbDueToAttributeChange.c)
 *     PsSetSystemPagePriorityThread @ 0x1404529F0 (PsSetSystemPagePriorityThread.c)
 *     PsRevertToUserPagePriorityThread @ 0x140459FD8 (PsRevertToUserPagePriorityThread.c)
 *     MiWriteSegmentSignatureFlags @ 0x1404AD270 (MiWriteSegmentSignatureFlags.c)
 *     MiStrongCodeImage @ 0x1404B420C (MiStrongCodeImage.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     MiImageCantMove @ 0x1406861D4 (MiImageCantMove.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     KeZeroSinglePage @ 0x1406B3350 (KeZeroSinglePage.c)
 *     KeCopyPage @ 0x1406B3410 (KeCopyPage.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     MiMapImageInSystemSpace @ 0x1408F5378 (MiMapImageInSystemSpace.c)
 *     MiUnmapImageInSystemSpace @ 0x1408F560C (MiUnmapImageInSystemSpace.c)
 *     MiPrefetchControlArea @ 0x1409572D4 (MiPrefetchControlArea.c)
 *     MiRevertRelocations @ 0x1409586D8 (MiRevertRelocations.c)
 *     MiDereferencePerSessionProtos @ 0x140A24458 (MiDereferencePerSessionProtos.c)
 *     MiCreatePerSessionProtos @ 0x140A4FE70 (MiCreatePerSessionProtos.c)
 *     SepScheduleImageVerificationCallbacks @ 0x140A8D72C (SepScheduleImageVerificationCallbacks.c)
 *     SeReleaseImageValidationContext @ 0x140A982AC (SeReleaseImageValidationContext.c)
 *     MiCaptureSecureImageBaseAddress @ 0x140AA8678 (MiCaptureSecureImageBaseAddress.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
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
  int v9; // ebx
  struct _KTHREAD *CurrentThread; // r12
  int v11; // ecx
  int v12; // edx
  int v13; // r13d
  int v14; // esi
  unsigned __int64 v15; // r9
  __int64 v16; // r10
  signed __int64 v17; // rbx
  unsigned int v18; // r12d
  PVOID v19; // r11
  unsigned int v20; // r13d
  unsigned int v21; // r8d
  ULONG_PTR v22; // rdx
  __int64 v23; // rax
  int v24; // eax
  unsigned int v25; // esi
  unsigned __int64 v26; // rax
  void *Pool; // rax
  void *v28; // r8
  unsigned int v29; // eax
  unsigned int v30; // r13d
  int v31; // eax
  PVOID v32; // rcx
  int v33; // ecx
  unsigned __int64 v34; // rcx
  __int64 v35; // r13
  volatile signed __int64 *v36; // r8
  bool v37; // zf
  unsigned __int64 v38; // rax
  __int64 v39; // rdx
  __int64 result; // rax
  unsigned __int64 v41; // rdx
  int PerSessionProtos; // ebx
  int v43; // eax
  unsigned __int64 v44; // rcx
  unsigned int BugCheckParameter4; // [rsp+20h] [rbp-228h]
  _KPROCESS *v46; // [rsp+38h] [rbp-210h]
  __int64 v47; // [rsp+40h] [rbp-208h]
  int v48; // [rsp+48h] [rbp-200h]
  int v49; // [rsp+58h] [rbp-1F0h]
  int v50; // [rsp+60h] [rbp-1E8h]
  unsigned __int64 v51; // [rsp+78h] [rbp-1D0h]
  char v52[8]; // [rsp+90h] [rbp-1B8h] BYREF
  unsigned __int64 v53; // [rsp+98h] [rbp-1B0h] BYREF
  int v54; // [rsp+A0h] [rbp-1A8h] BYREF
  char v55[4]; // [rsp+A4h] [rbp-1A4h] BYREF
  int v56; // [rsp+A8h] [rbp-1A0h]
  int v57; // [rsp+ACh] [rbp-19Ch]
  int v58; // [rsp+B0h] [rbp-198h]
  unsigned int v59; // [rsp+B4h] [rbp-194h]
  int v60; // [rsp+B8h] [rbp-190h]
  unsigned int v61; // [rsp+BCh] [rbp-18Ch]
  unsigned int v62; // [rsp+C0h] [rbp-188h]
  int v63; // [rsp+C4h] [rbp-184h]
  unsigned int v64; // [rsp+C8h] [rbp-180h]
  int v65; // [rsp+CCh] [rbp-17Ch]
  int v66; // [rsp+D0h] [rbp-178h]
  unsigned int v67; // [rsp+D4h] [rbp-174h]
  int v68; // [rsp+D8h] [rbp-170h]
  unsigned int v69; // [rsp+DCh] [rbp-16Ch] BYREF
  unsigned int v70; // [rsp+E0h] [rbp-168h]
  unsigned int v71; // [rsp+E4h] [rbp-164h] BYREF
  struct _KTHREAD *v72; // [rsp+E8h] [rbp-160h]
  PVOID v73; // [rsp+F0h] [rbp-158h]
  PVOID P; // [rsp+F8h] [rbp-150h]
  __int64 v75; // [rsp+100h] [rbp-148h]
  PVOID v76; // [rsp+108h] [rbp-140h] BYREF
  unsigned int v77; // [rsp+110h] [rbp-138h]
  int v78; // [rsp+118h] [rbp-130h]
  int v79; // [rsp+11Ch] [rbp-12Ch]
  int v80; // [rsp+120h] [rbp-128h]
  unsigned __int64 v81; // [rsp+128h] [rbp-120h]
  ULONG_PTR BugCheckParameter2; // [rsp+130h] [rbp-118h]
  void *v83; // [rsp+138h] [rbp-110h]
  __int64 v84; // [rsp+140h] [rbp-108h]
  _KPROCESS *Process; // [rsp+148h] [rbp-100h]
  _DWORD *v86; // [rsp+150h] [rbp-F8h]
  void *v87; // [rsp+158h] [rbp-F0h]
  _KPROCESS *v88; // [rsp+160h] [rbp-E8h]
  __int64 v89; // [rsp+168h] [rbp-E0h]
  signed __int64 v90; // [rsp+170h] [rbp-D8h]
  ULONG_PTR v91; // [rsp+178h] [rbp-D0h]
  ULONG_PTR v92; // [rsp+180h] [rbp-C8h]
  __int64 v93; // [rsp+188h] [rbp-C0h]
  _BYTE *v94; // [rsp+190h] [rbp-B8h]
  volatile signed __int64 *v95; // [rsp+198h] [rbp-B0h]
  _QWORD *v96; // [rsp+1A0h] [rbp-A8h]
  volatile signed __int64 *v97; // [rsp+1A8h] [rbp-A0h]
  unsigned __int64 v98[2]; // [rsp+1B0h] [rbp-98h] BYREF
  unsigned int v99; // [rsp+1C0h] [rbp-88h]

  v84 = a4;
  v70 = a3;
  BugCheckParameter2 = a1;
  v91 = a1;
  v92 = a2;
  v77 = a3;
  v93 = a4;
  v53 = 0LL;
  v52[0] = 0;
  memset_0(v98, 0, 0x50uLL);
  v57 = 0;
  v65 = 1;
  v81 = *(_QWORD *)(a2 + 96) & 0xFFFFFFFFFFFFFFF8uLL;
  v9 = 6;
  v56 = 6;
  v54 = 0;
  v55[0] = 0;
  v71 = 0;
  v64 = 0;
  CurrentThread = 0LL;
  v72 = 0LL;
  v86 = (_DWORD *)(a2 + 56);
  if ( (*(_DWORD *)(a2 + 56) & 0x800) != 0 )
  {
    if ( (a5 & 0x40000000) != 0 )
    {
      dword_140E2D6F8 = 115;
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
  v94 = (_BYTE *)(a2 + 62);
  v12 = v11 | 0x1000000;
  if ( (*(_BYTE *)(a2 + 62) & 0xC) != 4 )
    v12 = v11;
  v68 = v12;
  v79 = v12;
  if ( (v12 & 0x40000000) != 0 && !*(_QWORD *)(a2 + 144) )
  {
    dword_140E2D6F8 = 116;
    return 3221225595LL;
  }
  if ( (v12 & 5) != 0 )
  {
    v9 = 7;
    v56 = 7;
    v54 = 2;
  }
  v13 = 0;
  v63 = 0;
  Process = KeGetCurrentThread()->ApcState.Process;
  v88 = Process;
  while ( 1 )
  {
    v60 = v9 & 1;
    v78 = v60;
    if ( (v9 & 1) != 0 )
    {
      CurrentThread = KeGetCurrentThread();
      v72 = CurrentThread;
      v25 = PsSetSystemPagePriorityThread((__int64)CurrentThread, 1);
      v64 = v25;
      if ( (*v86 & 0x8000000) != 0 )
      {
        PerSessionProtos = MiCreatePerSessionProtos(a2, 0xFFFFFFFFLL);
        if ( PerSessionProtos < 0 )
        {
          PsRevertToUserPagePriorityThread((__int64)CurrentThread, v25);
          return (unsigned int)PerSessionProtos;
        }
        v13 = 1;
        v63 = 1;
        v9 = v56;
      }
      if ( v65 )
        MiPrefetchControlArea(a2, CLFS_LSN_NULL_EXT, 0LL, 1u, 0, 0xFFFFFFFF);
    }
    v14 = MiMapImageInSystemSpace((__int64 *)a2, v9, (__int64)v98);
    if ( v14 < 0 )
    {
      if ( v13 )
        MiDereferencePerSessionProtos(a2);
      if ( v60 )
        PsRevertToUserPagePriorityThread((__int64)CurrentThread, v64);
      return (unsigned int)v14;
    }
    v15 = v98[0];
    v73 = (PVOID)v98[0];
    v16 = *(_QWORD *)a2;
    v75 = v16;
    v89 = v16;
    v95 = (volatile signed __int64 *)(v81 + 40);
    v97 = (volatile signed __int64 *)(v81 + 40);
    v17 = *(_QWORD *)(v81 + 40);
    v90 = v17;
    v53 = v17;
    if ( v17 )
    {
      if ( (v17 & 0xFFFFFFFFFFFFFFF8uLL) <= 0x7FFFFFFFFFFFFFF8LL )
      {
        v18 = 1;
        v58 = 1;
        v53 = v17 & 3;
        goto LABEL_15;
      }
      v26 = v17;
      if ( (v17 & 3) != 0 )
      {
        v26 = v17 & 0xFFFFFFFFFFFFFFFCuLL;
        v18 = ((v17 & 3) != 1) + 2;
      }
      else
      {
        v18 = 4;
      }
      v53 = v26 & 0xFFFFFFFFFFFFFFFBuLL;
    }
    else
    {
      v18 = 0;
    }
    v58 = v18;
LABEL_15:
    v19 = (PVOID)v98[0];
    P = (PVOID)v98[0];
    v20 = v99;
    v21 = v99 << 12;
    v62 = v99 << 12;
    v66 = v99 << 12;
    v22 = v99 << 12;
    v59 = v99 << 12;
    v52[0] = 1;
    v96 = (_QWORD *)(v81 + 32);
    v23 = *(_QWORD *)(v81 + 32);
    if ( v23 && *(_QWORD *)(v23 + 40) != *(_QWORD *)(v23 + 48) )
    {
      if ( v54 != 2 )
      {
        v20 = (*(_DWORD *)(*(_QWORD *)(v16 + 56) + 64LL) >> 12)
            + ((*(_DWORD *)(*(_QWORD *)(v16 + 56) + 64LL) & 0xFFF) != 0);
        v22 = v20 << 12;
        v59 = v20 << 12;
      }
      v67 = v20;
      Pool = (void *)MiAllocatePool(0x100uLL, v22, 1749642573);
      v19 = Pool;
      P = Pool;
      v87 = Pool;
      if ( Pool )
      {
        v14 = 0;
        v80 = 0;
        v28 = Pool;
        v83 = Pool;
        v29 = 0;
        while ( 1 )
        {
          v61 = v29;
          if ( v29 >= v20 )
            break;
          KeCopyPage((__int64)v28 + 4096 * v29, (__int64)v73 + 4096 * v29);
          v19 = P;
          v29 = v61 + 1;
          v28 = v83;
        }
        MiRevertRelocations(v19, a2, v20);
        v19 = P;
      }
      else
      {
        v14 = -1073741670;
      }
      LODWORD(v22) = v59;
      v21 = v62;
      v15 = (unsigned __int64)v73;
    }
    else if ( v54 == 1 )
    {
      v54 = 2;
    }
    v66 = v54;
    if ( v14 < 0 )
      goto LABEL_20;
    v76 = 0LL;
    v69 = 0;
    if ( qword_140F048A0 )
    {
      v51 = (unsigned __int64)&v76 & -(__int64)(dword_140E67AC4 != 0);
      LOBYTE(v50) = a7;
      LOBYTE(v49) = a6;
      v30 = v68;
      v48 = v68;
      v47 = v84;
      v46 = Process;
      BugCheckParameter4 = v21;
      v31 = guard_dispatch_icall_no_overrides(BugCheckParameter2, v19, (unsigned int)v22, v15);
      v14 = v31;
      v32 = v76;
      if ( v76 )
      {
        if ( v31 >= 0 && (v30 & 1) == 0 )
          goto LABEL_79;
        v43 = SepScheduleImageVerificationCallbacks(
                v76,
                v69,
                (unsigned int)v31,
                v30,
                BugCheckParameter4,
                &v54,
                v55,
                v46,
                v47,
                v48,
                &v53,
                v49,
                v50,
                v52,
                &v71,
                v51,
                &v69);
        if ( v43 < 0 )
        {
          if ( v14 >= 0 )
            v14 = v43;
          v32 = v76;
LABEL_79:
          if ( v32 )
            ExFreePoolWithTag(v32, 0x63734943u);
          goto LABEL_46;
        }
        v76 = 0LL;
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
      v57 = 1;
LABEL_50:
      if ( (*v94 & 0xC) == 4 )
        KeBugCheckEx(0x1Au, 0x5150EuLL, BugCheckParameter2, v14, 0LL);
      MiStrongCodeImage(a2, 1u);
      goto LABEL_20;
    }
    v33 = v57;
    if ( v14 == 302 )
      v33 = 1;
    v57 = v33;
    if ( v33 )
      goto LABEL_50;
LABEL_20:
    if ( P != v73 && P )
      ExFreePoolWithTag(P, 0);
    MiUnmapImageInSystemSpace(v98);
    v13 = v63;
    if ( v63 )
    {
      MiDereferencePerSessionProtos(a2);
      v13 = 0;
      v63 = 0;
    }
    v24 = v60;
    if ( v60 )
    {
      if ( (MiFlags & 0x20000) != 0 )
        MiFlushEntireTbDueToAttributeChange();
      PsRevertToUserPagePriorityThread((__int64)v72, v64);
      v24 = v60;
    }
    if ( v14 >= 0 )
      break;
    if ( v14 != -1073741789 || v66 >= v54 )
    {
      dword_140E2D6F8 = 117;
      return (unsigned int)v14;
    }
    v9 = v56;
    CurrentThread = v72;
    if ( v24 )
    {
      v65 = 1;
    }
    else
    {
      v9 = v56 | 1;
      v56 |= 1u;
      if ( v54 == 1 )
        v65 = 0;
    }
  }
  if ( !v14 && !v52[0] )
    return 0LL;
  if ( v18 <= 1 )
  {
    if ( (v53 & 0xFFFFFFFFFFFFFFF8uLL) > 0x7FFFFFFFFFFFFFF8LL )
    {
      if ( v18 )
        v34 = v53 & 0xFFFFFFFFFFFFFFFCuLL | 2;
      else
        v34 = v53 & 0xFFFFFFFFFFFFFFFCuLL | 1;
    }
    else
    {
      v34 = 8 * v53;
    }
    v53 = v34;
    v35 = v75;
    if ( *(char *)(*(_QWORD *)(v75 + 56) + 46LL) < 0 )
    {
      v34 |= 4uLL;
      v53 = v34;
    }
    v36 = v95;
    while ( 1 )
    {
      while ( 1 )
      {
        v38 = _InterlockedCompareExchange64(v36, v34, v17);
        v37 = v17 == v38;
        v17 = v38;
        if ( v37 )
          goto LABEL_62;
        v34 = v53;
        if ( v53 >> 3 > 0xFFFFFFFFFFFFFFFLL )
          break;
        if ( v38 >> 3 >= v53 >> 3 )
          goto LABEL_122;
      }
      if ( (v38 & 0xFFFFFFFFFFFFFFF8uLL) > 0x7FFFFFFFFFFFFFF8LL )
        break;
      v34 = v53 & 0xFFFFFFFFFFFFFFFCuLL | 2;
      v53 = v34;
    }
    v44 = v53 & 0xFFFFFFFFFFFFFFF8uLL;
    v53 &= 0xFFFFFFFFFFFFFFF8uLL;
    if ( qword_140F04960 )
    {
      v14 = guard_dispatch_icall_no_overrides(
              v38 & 0xFFFFFFFFFFFFFFF8uLL,
              v44,
              v38 & 0xFFFFFFFFFFFFFFF8uLL,
              0x7FFFFFFFFFFFFFF8LL);
      v44 = v53;
    }
    else
    {
      v14 = 0;
    }
    SeReleaseImageValidationContext(v44);
    if ( v14 >= 0 )
    {
LABEL_122:
      v53 = v17;
LABEL_62:
      v17 = v53;
      goto LABEL_63;
    }
    dword_140E2D6F8 = 130;
    return (unsigned int)v14;
  }
  v35 = v75;
  if ( v18 <= 3 )
    v53 = v53 & 0xFFFFFFFFFFFFFFFCuLL | v17 & 3;
LABEL_63:
  if ( (v53 & 3) == 0 )
  {
LABEL_64:
    if ( v14 >= 0 )
    {
      v39 = v71;
      LOBYTE(v39) = v52[0] & 0xF | *(_BYTE *)(v35 + 15) & 0x80 | (16 * (v71 & 7));
      MiWriteSegmentSignatureFlags(v35, v39);
      if ( v57 )
        MiStrongCodeImage(a2, 2u);
    }
    return (unsigned int)v14;
  }
  if ( (MiFlags & 0x2000) != 0
    && (*(_DWORD *)(a2 + 92) & 0xC0000) != 0
    && *v96
    && (result = MiCaptureSecureImageBaseAddress(a2), (int)result < 0) )
  {
    dword_140E2D6F8 = 118;
  }
  else
  {
    result = MiWalkEntireImage(a2, 0LL, 1u, v70);
    v14 = result;
    if ( (int)result >= 0 )
    {
      v41 = v53 & 0xFFFFFFFFFFFFFFFCuLL;
      v53 &= 0xFFFFFFFFFFFFFFFCuLL;
      if ( *(char *)(*(_QWORD *)(v35 + 56) + 46LL) < 0 )
      {
        v41 |= 4uLL;
        v53 = v41;
      }
      _InterlockedCompareExchange64(v97, v41, v17);
      goto LABEL_64;
    }
    dword_140E2D6F8 = 119;
  }
  return result;
}
