/*
 * XREFs of MiMapViewOfSection @ 0x14089A1A0
 * Callers:
 *     AlpcpCreateView @ 0x14089328C (AlpcpCreateView.c)
 *     NtMapViewOfSection @ 0x140899970 (NtMapViewOfSection.c)
 *     MmMapViewOfSection @ 0x1409071A0 (MmMapViewOfSection.c)
 *     MiMapViewOfSectionExCommon @ 0x14099F100 (MiMapViewOfSectionExCommon.c)
 *     NtGetNlsSectionPtr @ 0x140A08EB0 (NtGetNlsSectionPtr.c)
 * Callees:
 *     KeStackAttachProcess @ 0x1402473F0 (KeStackAttachProcess.c)
 *     MiSectionControlArea @ 0x1402D4800 (MiSectionControlArea.c)
 *     MiMakeProtectionMask @ 0x1402EAF70 (MiMakeProtectionMask.c)
 *     KiUnstackDetachProcess @ 0x140321EC0 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     MiFinalizeLagePageImageMapping @ 0x1407ED7C4 (MiFinalizeLagePageImageMapping.c)
 *     SeSinglePrivilegeCheck @ 0x140853E90 (SeSinglePrivilegeCheck.c)
 *     MiValidateVadMetadataFlags @ 0x1408DFDD0 (MiValidateVadMetadataFlags.c)
 *     MiMapViewOfDataSection @ 0x1408E0820 (MiMapViewOfDataSection.c)
 *     MiMapViewOfImageSection @ 0x1408E3418 (MiMapViewOfImageSection.c)
 *     MiUnmapViewOfSection @ 0x1408E4E04 (MiUnmapViewOfSection.c)
 *     MiArbitraryCodeBlocked @ 0x140A13140 (MiArbitraryCodeBlocked.c)
 *     MiMapViewOfPhysicalSection @ 0x140A135A0 (MiMapViewOfPhysicalSection.c)
 */

__int64 __fastcall MiMapViewOfSection(
        __int64 a1,
        __int64 a2,
        unsigned __int64 *a3,
        unsigned __int64 a4,
        _WORD *a5,
        int a6,
        int a7)
{
  struct _KPROCESS *v7; // r11
  int v8; // r13d
  unsigned __int64 v13; // rax
  _WORD *v14; // r8
  __int64 v15; // r11
  unsigned __int64 v16; // r14
  unsigned __int64 v17; // r10
  __int64 v18; // rdi
  int v19; // r8d
  int v20; // r9d
  int v21; // ecx
  int v22; // r8d
  int v23; // ecx
  __int64 v24; // r8
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // rcx
  unsigned __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // rdx
  __int64 v30; // rcx
  unsigned __int64 v31; // rcx
  unsigned __int64 v32; // r9
  unsigned __int64 *v33; // rax
  unsigned __int64 v34; // rdx
  int v35; // ecx
  unsigned int v36; // ecx
  unsigned int ProtectionMask; // esi
  struct _KPROCESS *v38; // r11
  __int64 v39; // r8
  __int64 v40; // rcx
  int v41; // edi
  int v42; // eax
  int v43; // eax
  int v45; // eax
  int v46; // eax
  unsigned __int64 v47; // rax
  BOOLEAN v48; // al
  void *v49; // [rsp+40h] [rbp-A8h] BYREF
  PRKPROCESS PROCESS; // [rsp+48h] [rbp-A0h]
  __int64 v51; // [rsp+50h] [rbp-98h]
  unsigned __int64 v52; // [rsp+58h] [rbp-90h]
  struct _KAPC_STATE ApcState; // [rsp+60h] [rbp-88h] BYREF

  v7 = *(struct _KPROCESS **)(a2 + 88);
  memset(&ApcState, 0, sizeof(ApcState));
  v49 = 0LL;
  v8 = 0;
  PROCESS = v7;
  v52 = a4;
  v13 = MiSectionControlArea(a1);
  v16 = v13;
  v17 = 0x10000LL;
  v18 = *(_QWORD *)v13;
  v51 = *(_QWORD *)(a2 + 24);
  if ( !a7 )
  {
    if ( (unsigned int)(a6 - 1) > 1 )
      return 3221225485LL;
    if ( (*(_DWORD *)(v13 + 56) & 0x400) == 0 && *(_QWORD *)(a2 + 16) >= 0x10000uLL && (*v14 || *a5) )
      return 3221226016LL;
    if ( (*(_DWORD *)(a2 + 40) & 0x9F2BDFFF) != 0 )
      return 3221225485LL;
  }
  if ( (*(_DWORD *)(a2 + 40) & 0x40000000) != 0 && !a7 && !*(_QWORD *)(v15 + 1600) )
    return 3221225485LL;
  v19 = *(_DWORD *)(a2 + 44);
  if ( (v19 & 0xF0) != 0 || (*(_DWORD *)(a1 + 56) & 0x20) != 0 )
    *(_DWORD *)(a2 + 60) |= 8u;
  if ( (v19 & 0x40000000) != 0 )
  {
    if ( (v19 & 0xF0) == 0 || (*(_DWORD *)(a1 + 56) & 0x20) != 0 )
      return 3221225485LL;
    v19 &= ~0x40000000u;
    *(_DWORD *)(a2 + 120) |= 2u;
    *(_DWORD *)(a2 + 44) = v19;
  }
  v20 = 0x2000;
  if ( (*(_DWORD *)(a2 + 120) & 8) != 0 )
  {
    if ( (v19 & 0xF0) == 0 || (*(_DWORD *)(a1 + 56) & 0x20) != 0 )
      return 3221225485LL;
  }
  else if ( (*(_DWORD *)(a1 + 56) & 0x20) != 0 )
  {
    if ( *(_QWORD *)(a2 + 72) )
      return 3221225485LL;
    v45 = *(_DWORD *)(a2 + 40);
    if ( (v45 & 0x2000) != 0 )
      return 3221225485LL;
    if ( (v45 & 0x20000000) != 0 )
    {
      if ( *(_QWORD *)a5
        || (MiFlags & 0x20000) != 0
        || (*(_DWORD *)(v16 + 56) & 0x20000) != 0
        || (v48 = SeSinglePrivilegeCheck(SeLockMemoryPrivilege, *(_BYTE *)(a2 + 57)), v20 = 0x2000,
                                                                                      v17 = 0x10000LL,
                                                                                      !v48) )
      {
        *(_DWORD *)(a2 + 40) &= ~0x20000000u;
      }
    }
    goto LABEL_12;
  }
  v21 = MmCompatibleProtectionMask[MiMakeProtectionMask(*(_DWORD *)(a1 + 60) & 0xFFF) & 7] | 0x700;
  if ( (v21 | v22) != v21 )
    return 3221225550LL;
  v23 = *(_DWORD *)(a2 + 40);
  if ( (v23 & 0x840000) != 0 || *(_WORD *)(a2 + 58) || (*(_DWORD *)(v16 + 56) & 0x400) != 0 && (v23 & 0x20002000) != 0 )
    return 3221225485LL;
LABEL_12:
  v24 = *(_QWORD *)(a2 + 24);
  v25 = v24 + *(_QWORD *)a5;
  if ( v25 < *(_QWORD *)a5 )
    return 3221225503LL;
  v26 = *(_QWORD *)(a1 + 48);
  if ( v25 > v26 && (v20 & *(_DWORD *)(a2 + 40)) == 0 )
    return 3221225503LL;
  if ( !v24 )
    *(_QWORD *)(a2 + 24) = v26 - *(_QWORD *)a5;
  if ( (*(_DWORD *)(v16 + 56) & 0x400) != 0 )
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
    v27 = *(_QWORD *)(a2 + 16);
    if ( v27 > v17 && *(_QWORD *)(v16 + 64) )
      v27 = v17;
    v28 = *(unsigned int *)a5;
    v29 = v28 & (v27 - 1);
    if ( v29 )
    {
      if ( (*(_DWORD *)(a2 + 60) & 2) != 0 )
        return 3221226016LL;
      *(_DWORD *)a5 = v28 & -(int)v27;
      if ( (*(_DWORD *)(v16 + 56) & 0x20) == 0 )
      {
        v47 = *(_QWORD *)(a2 + 24);
        if ( v47 + v29 < v47 )
          return 3221225503LL;
        *(_QWORD *)(a2 + 24) = v47 + v29;
      }
    }
  }
  if ( *(__int64 *)(a2 + 24) <= 0 )
    return 3221225503LL;
  v30 = *(_QWORD *)(a2 + 16);
  if ( ((v30 - 1) & *a3) == 0 )
    goto LABEL_21;
  if ( (*(_DWORD *)(a2 + 60) & 2) != 0 )
    return 3221226016LL;
  *a3 &= -v30;
LABEL_21:
  v31 = *(_QWORD *)(a2 + 24);
  *(_QWORD *)(a2 + 32) = v31;
  v32 = v31;
  if ( (v31 & 0xFFF) != 0 )
  {
    v32 = v31 + 4096 - (unsigned int)(v31 & 0xFFF);
    if ( v32 >= v31 )
    {
      *(_QWORD *)(a2 + 24) = v32;
      goto LABEL_22;
    }
    return 3221225503LL;
  }
LABEL_22:
  v33 = a3;
  v34 = *(_QWORD *)(a2 + 8);
  if ( (*(_DWORD *)(a2 + 60) & 1) == 0 )
    v33 = (unsigned __int64 *)a2;
  if ( *v33 > v34 )
    return 3221225485LL;
  if ( v34 - *v33 + 1 < v32 )
    return (unsigned int)((*(_DWORD *)(a2 + 60) & 1) != 0) - 1073741801;
  if ( a4 > v31 && (*(_DWORD *)(a2 + 40) & 0x2000) == 0 )
    return 3221225485LL;
  if ( v31 > *(_QWORD *)(a1 + 48) && (*(_DWORD *)(a2 + 40) & 0x2000) == 0 )
    return 3221225503LL;
  v35 = *(_DWORD *)(a2 + 40);
  if ( (v35 & 0x2000) != 0 && (*(_DWORD *)(a1 + 60) & 0x44) == 0 )
    return 3221225550LL;
  if ( (v35 & 0x800000) != 0 && ((*(_DWORD *)(a1 + 56) & 0x20) == 0 || (v35 & 0x20000000) != 0)
    || (*(_DWORD *)(a2 + 64) & 0x4000000) != 0
    && ((*(_DWORD *)(v16 + 56) & 0x420) != 0
     || (v35 & 0xFFFFDFFF) != 0
     || (*(_DWORD *)(a2 + 60) & 1) == 0
     || *a3 != (*a3 & 0xFFFFFFFFFFFFF000uLL)
     || !v51) )
  {
    return 3221225485LL;
  }
  v36 = *(_DWORD *)(a2 + 44);
  if ( (*(_WORD *)(v18 + 12) & 0x2000) != 0 )
  {
    v36 = v36 & 0xFFFFF9FF | 0x200;
    *(_DWORD *)(a2 + 44) = v36;
  }
  if ( _bittest16((const signed __int16 *)(v18 + 12), 0xCu) )
  {
    v36 = v36 & 0xFFFFF9FF | 0x400;
    *(_DWORD *)(a2 + 44) = v36;
  }
  ProtectionMask = MiMakeProtectionMask(v36);
  if ( ProtectionMask == -1 )
    return 3221225541LL;
  v39 = *(_QWORD *)(a2 + 96);
  if ( (*(_DWORD *)(v39 + 1872) & 0x100) != 0
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
  if ( (struct _KPROCESS *)v39 != v38 )
  {
    KeStackAttachProcess(v38, &ApcState);
    v8 = 1;
  }
  v41 = MiValidateVadMetadataFlags(a2);
  if ( v41 < 0 )
    goto LABEL_44;
  v42 = *(_DWORD *)(v16 + 56);
  if ( (v42 & 0x400) != 0 )
  {
    v43 = MiMapViewOfPhysicalSection(v40, a3, a5, ProtectionMask);
  }
  else
  {
    if ( (v42 & 0x20) != 0 )
    {
      while ( 1 )
      {
        v49 = (void *)*a3;
        v41 = MiMapViewOfImageSection(v16, a2, (unsigned int)&v49, (_DWORD)a5, a1, a6, ProtectionMask, 0);
        v46 = *(_DWORD *)(a2 + 40);
        if ( (v46 & 0x20000000) == 0 )
          break;
        *(_DWORD *)(a2 + 40) = v46 & 0xDFFFFFFF;
        if ( v41 >= 0 )
        {
          if ( v41 != 1073741838
            && (int)MiFinalizeLagePageImageMapping(v16, a2, v49, (int)a5, a1, a6, ProtectionMask) >= 0 )
          {
            v41 = 1073741827;
            goto LABEL_73;
          }
          MiUnmapViewOfSection(PROCESS);
        }
      }
      if ( v41 < 0 )
        goto LABEL_44;
LABEL_73:
      *a3 = (unsigned __int64)v49;
      goto LABEL_44;
    }
    v43 = MiMapViewOfDataSection(v16, a2, (_DWORD)a3, (_DWORD)a5, a1, a6, ProtectionMask, v52);
  }
  v41 = v43;
LABEL_44:
  if ( v8 )
    KiUnstackDetachProcess((__int64)&ApcState, 0);
  return (unsigned int)v41;
}
