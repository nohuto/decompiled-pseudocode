/*
 * XREFs of MiMapViewOfSection @ 0x1408FC9F0
 * Callers:
 *     AlpcpCreateView @ 0x1408B3D94 (AlpcpCreateView.c)
 *     NtGetNlsSectionPtr @ 0x1408FB050 (NtGetNlsSectionPtr.c)
 *     MiMapViewOfSectionExCommon @ 0x1408FBCB8 (MiMapViewOfSectionExCommon.c)
 *     MmMapViewOfSection @ 0x1408FBFC0 (MmMapViewOfSection.c)
 *     NtMapViewOfSection @ 0x1408FC1C0 (NtMapViewOfSection.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140289470 (KiUnstackDetachProcess.c)
 *     MiMakeProtectionMask @ 0x1402C2BF0 (MiMakeProtectionMask.c)
 *     KeStackAttachProcess @ 0x140348CD0 (KeStackAttachProcess.c)
 *     MiSectionControlArea @ 0x1403B4FE0 (MiSectionControlArea.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     MiFinalizeLagePageImageMapping @ 0x1407DD924 (MiFinalizeLagePageImageMapping.c)
 *     SeSinglePrivilegeCheck @ 0x140858330 (SeSinglePrivilegeCheck.c)
 *     MiUnmapViewOfSection @ 0x1408B4494 (MiUnmapViewOfSection.c)
 *     MiMapViewOfPhysicalSection @ 0x1408B6998 (MiMapViewOfPhysicalSection.c)
 *     MiValidateVadMetadataFlags @ 0x1408FEB50 (MiValidateVadMetadataFlags.c)
 *     MiMapViewOfDataSection @ 0x1408FEC20 (MiMapViewOfDataSection.c)
 *     MiArbitraryCodeBlocked @ 0x140902858 (MiArbitraryCodeBlocked.c)
 *     MiMapViewOfImageSection @ 0x1409028FC (MiMapViewOfImageSection.c)
 */

__int64 __fastcall MiMapViewOfSection(
        __int64 a1,
        __int64 a2,
        unsigned __int64 *a3,
        unsigned __int64 a4,
        unsigned __int64 *a5,
        int a6,
        int a7)
{
  unsigned __int64 v10; // rax
  __int64 v11; // r8
  unsigned __int64 v12; // r11
  unsigned __int64 v13; // r14
  __int64 v14; // rsi
  unsigned __int64 v15; // r10
  __int64 v16; // rdi
  int v17; // r8d
  int v18; // r9d
  int v19; // ecx
  int v20; // r8d
  int v21; // eax
  __int64 v22; // r8
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // rcx
  unsigned __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // rdx
  __int64 v28; // rcx
  unsigned __int64 v29; // rcx
  unsigned __int64 v30; // r9
  unsigned __int64 *v31; // rax
  unsigned __int64 v32; // rdx
  int v33; // ecx
  unsigned int v34; // ecx
  unsigned int ProtectionMask; // esi
  __int64 v36; // r8
  __int64 v37; // rcx
  int v38; // edi
  __int64 v39; // r11
  int v40; // eax
  int v41; // eax
  int v43; // eax
  int v44; // eax
  unsigned __int64 v45; // rax
  BOOLEAN v46; // al
  void *v47; // [rsp+40h] [rbp-A8h] BYREF
  int v48; // [rsp+48h] [rbp-A0h]
  unsigned __int64 v49; // [rsp+50h] [rbp-98h]
  PRKPROCESS PROCESS; // [rsp+58h] [rbp-90h]
  struct _KAPC_STATE ApcState; // [rsp+60h] [rbp-88h] BYREF

  v49 = a4;
  v47 = 0LL;
  PROCESS = *(PRKPROCESS *)(a2 + 88);
  v48 = 0;
  memset(&ApcState, 0, sizeof(ApcState));
  v10 = MiSectionControlArea(a1);
  v13 = v10;
  v14 = *(_QWORD *)(a2 + 24);
  v15 = 0x10000LL;
  v16 = *(_QWORD *)v10;
  if ( !a7 )
  {
    if ( (unsigned int)(a6 - 1) > 1 )
      return 3221225485LL;
    if ( (*(_DWORD *)(v10 + 56) & 0x400) == 0 && *(_QWORD *)(a2 + 16) >= 0x10000uLL && (*(_WORD *)a3 || *(_WORD *)a5) )
      return 3221226016LL;
    if ( (*(_DWORD *)(a2 + 40) & 0x9F2BDFFF) != 0 )
      return 3221225485LL;
  }
  if ( (*(_DWORD *)(a2 + 40) & 0x40000000) != 0 && !a7 && !*(_QWORD *)(v11 + 1600) )
    return 3221225485LL;
  v17 = *(_DWORD *)(a2 + 44);
  if ( (v17 & 0xF0) != 0 || (*(_DWORD *)(a1 + 56) & 0x20) != 0 )
    *(_DWORD *)(a2 + 60) |= 8u;
  if ( (v17 & 0x40000000) != 0 )
  {
    if ( (v17 & 0xF0) == 0 || (*(_DWORD *)(a1 + 56) & 0x20) != 0 )
      return 3221225485LL;
    v17 &= ~0x40000000u;
    *(_DWORD *)(a2 + 120) |= 2u;
    *(_DWORD *)(a2 + 44) = v17;
  }
  v18 = 0x2000;
  if ( (*(_DWORD *)(a2 + 120) & 8) != 0 )
  {
    if ( (v17 & 0xF0) == 0 || (*(_DWORD *)(a1 + 56) & 0x20) != 0 )
      return 3221225485LL;
  }
  else if ( (*(_DWORD *)(a1 + 56) & 0x20) != 0 )
  {
    if ( *(_QWORD *)(a2 + 72) )
      return 3221225485LL;
    v43 = *(_DWORD *)(a2 + 40);
    if ( (v43 & 0x2000) != 0 )
      return 3221225485LL;
    if ( (v43 & 0x20000000) != 0 )
    {
      if ( *a5
        || (MiFlags & 0x20000) != 0
        || (*(_DWORD *)(v13 + 56) & 0x20000) != 0
        || (v46 = SeSinglePrivilegeCheck(SeLockMemoryPrivilege, *(_BYTE *)(a2 + 57)),
            v12 = v49,
            v18 = 0x2000,
            v15 = 0x10000LL,
            !v46) )
      {
        *(_DWORD *)(a2 + 40) &= ~0x20000000u;
      }
    }
    goto LABEL_12;
  }
  v19 = MmCompatibleProtectionMask[MiMakeProtectionMask(*(_DWORD *)(a1 + 60) & 0xFFF) & 7] | 0x700;
  if ( (v19 | v20) != v19 )
    return 3221225550LL;
  v21 = *(_DWORD *)(a2 + 40);
  if ( (v21 & 0x840000) != 0 || *(_WORD *)(a2 + 58) || (v21 & 0x20002000) != 0 && (*(_DWORD *)(v13 + 56) & 0x400) != 0 )
    return 3221225485LL;
LABEL_12:
  v22 = *(_QWORD *)(a2 + 24);
  v23 = v22 + *a5;
  if ( v23 < *a5 )
    return 3221225503LL;
  v24 = *(_QWORD *)(a1 + 48);
  if ( v23 > v24 && (v18 & *(_DWORD *)(a2 + 40)) == 0 )
    return 3221225503LL;
  if ( !v22 )
    *(_QWORD *)(a2 + 24) = v24 - *a5;
  if ( (*(_DWORD *)(v13 + 56) & 0x400) != 0 )
  {
    if ( (*(_DWORD *)a5 & 0xFFF) != 0 )
    {
      if ( (*(_DWORD *)(a2 + 60) & 2) != 0 )
        return 3221226016LL;
      *(_DWORD *)a5 &= 0xFFFFF000;
    }
  }
  else
  {
    v25 = *(_QWORD *)(a2 + 16);
    if ( v25 > v15 && *(_QWORD *)(v13 + 64) )
      v25 = v15;
    v26 = *(unsigned int *)a5;
    v27 = v26 & (v25 - 1);
    if ( v27 )
    {
      if ( (*(_DWORD *)(a2 + 60) & 2) != 0 )
        return 3221226016LL;
      *(_DWORD *)a5 = v26 & -(int)v25;
      if ( (*(_DWORD *)(v13 + 56) & 0x20) == 0 )
      {
        v45 = *(_QWORD *)(a2 + 24);
        if ( v45 + v27 < v45 )
          return 3221225503LL;
        *(_QWORD *)(a2 + 24) = v45 + v27;
      }
    }
  }
  if ( *(__int64 *)(a2 + 24) <= 0 )
    return 3221225503LL;
  v28 = *(_QWORD *)(a2 + 16);
  if ( ((v28 - 1) & *a3) == 0 )
    goto LABEL_21;
  if ( (*(_DWORD *)(a2 + 60) & 2) != 0 )
    return 3221226016LL;
  *a3 &= -v28;
LABEL_21:
  v29 = *(_QWORD *)(a2 + 24);
  *(_QWORD *)(a2 + 32) = v29;
  v30 = v29;
  if ( (v29 & 0xFFF) != 0 )
  {
    v30 = v29 + 4096 - (unsigned int)(v29 & 0xFFF);
    if ( v30 >= v29 )
    {
      *(_QWORD *)(a2 + 24) = v30;
      goto LABEL_22;
    }
    return 3221225503LL;
  }
LABEL_22:
  v31 = a3;
  v32 = *(_QWORD *)(a2 + 8);
  if ( (*(_DWORD *)(a2 + 60) & 1) == 0 )
    v31 = (unsigned __int64 *)a2;
  if ( *v31 > v32 )
    return 3221225485LL;
  if ( v32 - *v31 + 1 < v30 )
    return (unsigned int)((*(_DWORD *)(a2 + 60) & 1) != 0) - 1073741801;
  if ( v12 > v29 && (*(_DWORD *)(a2 + 40) & 0x2000) == 0 )
    return 3221225485LL;
  if ( v29 > *(_QWORD *)(a1 + 48) && (*(_DWORD *)(a2 + 40) & 0x2000) == 0 )
    return 3221225503LL;
  v33 = *(_DWORD *)(a2 + 40);
  if ( (v33 & 0x2000) != 0 && (*(_DWORD *)(a1 + 60) & 0x44) == 0 )
    return 3221225550LL;
  if ( (v33 & 0x800000) != 0 && ((*(_DWORD *)(a1 + 56) & 0x20) == 0 || (v33 & 0x20000000) != 0)
    || (*(_DWORD *)(a2 + 64) & 0x4000000) != 0
    && ((*(_DWORD *)(v13 + 56) & 0x420) != 0
     || (v33 & 0xFFFFDFFF) != 0
     || (*(_DWORD *)(a2 + 60) & 1) == 0
     || *a3 != (*a3 & 0xFFFFFFFFFFFFF000uLL)
     || !v14) )
  {
    return 3221225485LL;
  }
  v34 = *(_DWORD *)(a2 + 44);
  if ( (*(_WORD *)(v16 + 12) & 0x2000) != 0 )
  {
    v34 = v34 & 0xFFFFF9FF | 0x200;
    *(_DWORD *)(a2 + 44) = v34;
  }
  if ( _bittest16((const signed __int16 *)(v16 + 12), 0xCu) )
  {
    v34 = v34 & 0xFFFFF9FF | 0x400;
    *(_DWORD *)(a2 + 44) = v34;
  }
  ProtectionMask = MiMakeProtectionMask(v34);
  if ( ProtectionMask == -1 )
    return 3221225541LL;
  v36 = *(_QWORD *)(a2 + 96);
  if ( (*(_DWORD *)(v36 + 1872) & 0x100) != 0
    && (*(_DWORD *)(&KeGetCurrentThread()[1].SwapListEntry + 1) & 0x40000) == 0 )
  {
    if ( (*(_DWORD *)(a1 + 56) & 0x20) != 0 )
    {
      *(_DWORD *)(a2 + 40) &= ~0x20000000u;
    }
    else if ( (*(_DWORD *)(a2 + 64) & 0x20000000) == 0 && (ProtectionMask & 2) != 0 )
    {
      return MiArbitraryCodeBlocked(*(_QWORD *)(a2 + 96));
    }
  }
  if ( (PRKPROCESS)v36 != PROCESS )
  {
    KeStackAttachProcess(PROCESS, &ApcState);
    v48 = 1;
  }
  v38 = MiValidateVadMetadataFlags(a2);
  if ( v38 < 0 )
    goto LABEL_44;
  v40 = *(_DWORD *)(v13 + 56);
  if ( (v40 & 0x400) != 0 )
  {
    v41 = MiMapViewOfPhysicalSection(v37, a3, a5, ProtectionMask);
  }
  else
  {
    if ( (v40 & 0x20) != 0 )
    {
      while ( 1 )
      {
        v47 = (void *)*a3;
        v38 = MiMapViewOfImageSection(v13, a2, (unsigned int)&v47, (_DWORD)a5, a1, a6, ProtectionMask, 0);
        v44 = *(_DWORD *)(a2 + 40);
        if ( (v44 & 0x20000000) == 0 )
          break;
        *(_DWORD *)(a2 + 40) = v44 & 0xDFFFFFFF;
        if ( v38 >= 0 )
        {
          if ( v38 != 1073741838
            && (int)MiFinalizeLagePageImageMapping(v13, a2, v47, (int)a5, a1, a6, ProtectionMask) >= 0 )
          {
            v38 = 1073741827;
            goto LABEL_71;
          }
          MiUnmapViewOfSection(PROCESS, (unsigned __int64)v47, 0, 0);
        }
      }
      if ( v38 < 0 )
        goto LABEL_44;
LABEL_71:
      *a3 = (unsigned __int64)v47;
      goto LABEL_44;
    }
    v41 = MiMapViewOfDataSection(v13, a2, (_DWORD)a3, (_DWORD)a5, a1, a6, ProtectionMask, v39);
  }
  v38 = v41;
LABEL_44:
  if ( v48 )
    KiUnstackDetachProcess((__int64)&ApcState, 0LL);
  return (unsigned int)v38;
}
