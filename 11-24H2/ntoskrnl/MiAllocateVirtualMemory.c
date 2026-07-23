/*
 * XREFs of MiAllocateVirtualMemory @ 0x1409160F0
 * Callers:
 *     MmCommitDecommitSecuredMemory @ 0x1407EE244 (MmCommitDecommitSecuredMemory.c)
 *     MmStoreAllocateVirtualMemory @ 0x1409145E8 (MmStoreAllocateVirtualMemory.c)
 *     MmAllocateUserStack @ 0x1409150D0 (MmAllocateUserStack.c)
 *     NtAllocateVirtualMemory @ 0x1409152C0 (NtAllocateVirtualMemory.c)
 *     MiAllocateVirtualMemoryCommon @ 0x1409155A0 (MiAllocateVirtualMemoryCommon.c)
 * Callees:
 *     MiLocateLockedVadEvent @ 0x14026757C (MiLocateLockedVadEvent.c)
 *     KiStackAttachProcess @ 0x1402C9570 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1402CAA50 (KiUnstackDetachProcess.c)
 *     MiCommitExistingVad @ 0x140306380 (MiCommitExistingVad.c)
 *     MiObtainReferencedVadEx @ 0x140344D30 (MiObtainReferencedVadEx.c)
 *     MiVadSupportsPrivateCommit @ 0x1403455B0 (MiVadSupportsPrivateCommit.c)
 *     MiMakeProtectionMask @ 0x14034C5B0 (MiMakeProtectionMask.c)
 *     MiUnlockAndDereferenceVad @ 0x1403626E0 (MiUnlockAndDereferenceVad.c)
 *     MiGetVadPageSize @ 0x14041B130 (MiGetVadPageSize.c)
 *     MiGetControlAreaPartition @ 0x14042A350 (MiGetControlAreaPartition.c)
 *     MiGetProcessPartition @ 0x1404329B0 (MiGetProcessPartition.c)
 *     MiResetVirtualMemory @ 0x1404388A4 (MiResetVirtualMemory.c)
 *     MiAllowProtectionChange @ 0x1404389E8 (MiAllowProtectionChange.c)
 *     MiCommitEnclavePages @ 0x14046D738 (MiCommitEnclavePages.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     SeSinglePrivilegeCheck @ 0x140850150 (SeSinglePrivilegeCheck.c)
 *     MmProtectVirtualMemory @ 0x1408DAC60 (MmProtectVirtualMemory.c)
 *     MiCheckSecuredVad @ 0x1408DBE18 (MiCheckSecuredVad.c)
 *     MiCommitFileBackedSection @ 0x1409147D8 (MiCommitFileBackedSection.c)
 *     EtwTiLogAllocExecVm @ 0x140914EE4 (EtwTiLogAllocExecVm.c)
 *     MiValidateVadMetadataFlags @ 0x140916980 (MiValidateVadMetadataFlags.c)
 *     MiReserveUserMemory @ 0x140916A48 (MiReserveUserMemory.c)
 *     MiCommitVadMetadataBits @ 0x14091D290 (MiCommitVadMetadataBits.c)
 *     MiCommitPagefileBackedSection @ 0x140974DD4 (MiCommitPagefileBackedSection.c)
 *     PerfInfoLogVirtualAlloc @ 0x140A2C1A8 (PerfInfoLogVirtualAlloc.c)
 *     MiLogMemResetInfo @ 0x140A62258 (MiLogMemResetInfo.c)
 */

__int64 __fastcall MiAllocateVirtualMemory(__int64 a1, __int64 *a2, __int64 a3, __int64 a4, __int64 *a5)
{
  __int64 *v5; // r15
  __int64 v7; // r8
  unsigned int v9; // ebx
  unsigned int ProtectionMask; // r12d
  _KPROCESS *v11; // rcx
  __int64 v12; // rsi
  int v13; // edx
  int v14; // eax
  __int16 v15; // cx
  int v16; // r10d
  int v17; // eax
  unsigned __int64 v18; // r13
  unsigned __int64 v19; // rcx
  unsigned __int64 v20; // rcx
  int v21; // edx
  int v22; // ecx
  __int64 v23; // r14
  int v24; // ecx
  int v25; // edx
  unsigned int v26; // r9d
  __int64 v27; // r8
  int v29; // eax
  __int64 v30; // r8
  __int64 v31; // r8
  ULONG_PTR v32; // rcx
  unsigned int v33; // edx
  int v34; // r8d
  int v35; // eax
  unsigned int v36; // edx
  unsigned int v37; // ecx
  __int16 *v38; // rax
  int v39; // r8d
  int v40; // r9d
  __int64 ProcessPartition; // rax
  __int64 *v42; // r10
  __int64 VadPageSize; // rax
  __int64 v44; // [rsp+20h] [rbp-91h]
  int v45; // [rsp+20h] [rbp-91h]
  __int64 v46; // [rsp+28h] [rbp-89h]
  __int64 v47; // [rsp+28h] [rbp-89h]
  int v48; // [rsp+30h] [rbp-81h]
  char v49; // [rsp+38h] [rbp-79h]
  int v50; // [rsp+60h] [rbp-51h] BYREF
  __int16 v51[2]; // [rsp+64h] [rbp-4Dh] BYREF
  __int64 v52; // [rsp+68h] [rbp-49h] BYREF
  int v53; // [rsp+70h] [rbp-41h] BYREF
  __int64 v54; // [rsp+78h] [rbp-39h] BYREF
  __int64 *v55; // [rsp+80h] [rbp-31h] BYREF
  __int64 v56[2]; // [rsp+88h] [rbp-29h] BYREF
  _OWORD v57[3]; // [rsp+98h] [rbp-19h] BYREF

  v5 = a5;
  v7 = 0LL;
  v54 = a4;
  v55 = a2;
  v56[0] = (__int64)a5;
  v53 = 0;
  if ( !a3 )
    a3 = 0LL;
  v51[0] = 0;
  *a5 = 0LL;
  v52 = 0LL;
  LOBYTE(v9) = 0;
  memset(v57, 0, sizeof(v57));
  if ( (unsigned __int64)a2 >= 2 )
  {
    if ( (*(_DWORD *)(*a2 + 4) & 0x80u) != 0
      && ((*(_BYTE *)(a1 + 112) & 0x10) == 0 || (*(_DWORD *)(a1 + 40) & 0x20400000) != 0x20000000) )
    {
      v50 = -1073741811;
      goto LABEL_48;
    }
    ProcessPartition = MiGetProcessPartition(*(_QWORD *)(a1 + 88));
    if ( *v42 == ProcessPartition )
      v42 = (__int64 *)v7;
    v55 = v42;
  }
  v9 = 2;
  if ( *(_QWORD *)(a1 + 8) - *(_QWORD *)a1 + 1LL != *(_QWORD *)(a1 + 24) )
    v9 = v7;
  ProtectionMask = MiMakeProtectionMask(*(_DWORD *)(a1 + 44));
  if ( ProtectionMask == -1 )
  {
    v50 = -1073741755;
LABEL_48:
    v12 = a3;
    goto LABEL_49;
  }
  v11 = *(_KPROCESS **)(a1 + 88);
  if ( *(_KPROCESS **)(a1 + 96) != v11 )
  {
    KiStackAttachProcess(v11, 0, (__int64)v57);
    v9 |= 1u;
  }
  v50 = MiValidateVadMetadataFlags(a1);
  v12 = a3;
  if ( v50 < 0 )
    goto LABEL_49;
  if ( (*(_DWORD *)(a1 + 64) & 0x4000000) != 0 && v9 < 2 )
  {
LABEL_130:
    v50 = -1073741811;
    goto LABEL_49;
  }
  v13 = *(_DWORD *)(a1 + 40);
  if ( (v13 & 0x40000000) != 0 && !*(_QWORD *)(*(_QWORD *)(a1 + 88) + 1600LL) )
  {
    v50 = -1073741811;
    goto LABEL_49;
  }
  v14 = *(_DWORD *)(a1 + 112) & 0x1A;
  if ( v14 )
  {
    if ( (v14 & 2) != 0 )
    {
      v7 = 0xFFFFLL;
    }
    else if ( (v14 & 8) != 0 )
    {
      v7 = 0x1FFFFFLL;
    }
    else
    {
      v7 = -1LL;
      if ( (v14 & 0x10) != 0 )
        v7 = 0x3FFFFFFFLL;
    }
    if ( ((*(_QWORD *)(a1 + 8) + 1LL) & v7) != 0 || (v7 & *(_QWORD *)a1) != 0 )
      goto LABEL_130;
    if ( (v13 & 0x20400000) != 0x400000 )
      goto LABEL_14;
  }
  else if ( (v13 & 0x20400000) == 0x20000000 )
  {
LABEL_14:
    v9 |= 0x10u;
  }
  if ( v9 >= 0x10 && !SeSinglePrivilegeCheck(SeLockMemoryPrivilege, *(_BYTE *)(a1 + 57)) )
  {
    v50 = -1073741727;
    goto LABEL_49;
  }
  v15 = *(_WORD *)MiGetProcessPartition(*(_QWORD *)(a1 + 88));
  v17 = *(_DWORD *)(a1 + 40);
  v51[0] = v15;
  if ( (v17 & 0x2000) != 0 )
  {
    v50 = MiReserveUserMemory(a1, v16, ProtectionMask, (unsigned int)&v52, (__int64)v51);
    if ( v50 >= 0 )
      goto LABEL_38;
LABEL_49:
    if ( !v12 )
      goto LABEL_50;
    goto LABEL_55;
  }
  if ( (v17 & 0x40000000) != 0 )
  {
    v50 = -1073741811;
    goto LABEL_49;
  }
  if ( *(_QWORD *)(a1 + 72) )
  {
    v50 = -1073741811;
    goto LABEL_49;
  }
  v18 = *(_QWORD *)(a1 + 8);
  v19 = *(_QWORD *)a1;
  v52 = *(_QWORD *)a1;
  if ( !a3 )
    v12 = MiObtainReferencedVadEx(v19, 0LL, &v50, a4);
  if ( !v12 )
  {
    if ( v50 == -1073741664 )
      v50 = -1073741800;
    goto LABEL_50;
  }
  if ( v18 >> 12 > (*(unsigned int *)(v12 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v12 + 33) << 32)) )
  {
    v50 = -1073741800;
    goto LABEL_55;
  }
  if ( (*(_DWORD *)(v12 + 48) & 0x4200000) != 0x4200000 && *(_DWORD *)(a1 + 48) )
  {
    v50 = -1073741800;
    goto LABEL_55;
  }
  v5 = (__int64 *)v56[0];
  v20 = v52;
  *(_QWORD *)v56[0] = v52;
  v21 = *(_DWORD *)(v12 + 48);
  if ( (v21 & 0xC200000) != 0x8200000 )
  {
LABEL_26:
    if ( !(unsigned int)MiVadSupportsPrivateCommit(v12) )
    {
      if ( (*(_DWORD *)(v12 + 48) & 0xA00000) != 0xA00000 )
      {
        v50 = -1073741800;
        goto LABEL_55;
      }
      VadPageSize = MiGetVadPageSize(v12);
      if ( (((VadPageSize << 12) - 1) & (v52 | (v18 + 1))) != 0 )
      {
        v50 = -1073741811;
        goto LABEL_55;
      }
    }
    if ( (*(unsigned int *)(v12 + 52) | ((unsigned __int64)*(unsigned __int8 *)(v12 + 34) << 32)) >= 0x7FFFFFFFDLL )
    {
      v50 = -1073741800;
      MiUnlockAndDereferenceVad((PVOID)v12);
LABEL_50:
      if ( (WORD2(PerfGlobalGroupMask[0]) & 0x8000) != 0
        && (*(_DWORD *)(a1 + 40) & 0x1000000) != 0
        && v50 == -1073740748 )
      {
        MiLogMemResetInfo(v52, *(_QWORD *)(a1 + 24), 0LL);
      }
      if ( (v9 & 1) != 0 )
        KiUnstackDetachProcess((__int64)v57, 0, v7, a4);
      return (unsigned int)v50;
    }
    if ( (*(_DWORD *)(v12 + 48) & 0x70) != 0x40 )
      goto LABEL_29;
    v33 = *(_DWORD *)(a1 + 44) & 0xFFFFF9FF;
    *(_DWORD *)(a1 + 44) = v33;
    v34 = *(_DWORD *)(v12 + 48) & 0xC00;
    if ( (*(_DWORD *)(v12 + 48) & 0x380) != 0 && v34 == 3072 )
    {
      v33 |= 0x400u;
    }
    else
    {
      if ( v34 != 1024 )
        goto LABEL_76;
      v33 |= 0x200u;
    }
    *(_DWORD *)(a1 + 44) = v33;
LABEL_76:
    ProtectionMask = MiMakeProtectionMask(v33);
    if ( ProtectionMask == -1 )
      goto LABEL_77;
LABEL_29:
    v22 = *(_DWORD *)(a1 + 40);
    if ( (v22 & 0x1080000) != 0 )
    {
      v29 = MiResetVirtualMemory(*(_QWORD *)(a1 + 96), v52, v18, v12, v22, *(_BYTE *)(a1 + 57));
    }
    else
    {
      if ( (ProtectionMask & 2) != 0 )
      {
        v50 = MiAllowProtectionChange(*(_QWORD *)(a1 + 88), *(_QWORD *)(a1 + 96), v12, ProtectionMask, v52, v18);
        if ( v50 < 0 )
          goto LABEL_55;
        if ( (*(_DWORD *)(v12 + 48) & 0x100) != 0 )
        {
          v35 = *(_DWORD *)(a1 + 120);
          if ( (v35 & 2) == 0 )
          {
            v35 &= ~1u;
            *(_DWORD *)(a1 + 120) = v35;
          }
          if ( (v35 & 8) == 0 )
            *(_DWORD *)(a1 + 120) = v35 & 0xFFFFFFFB;
        }
        v23 = v54;
        if ( *(_DWORD *)(a1 + 120) )
        {
          if ( (*(_DWORD *)(v12 + 48) & 8) != 0 )
          {
            v50 = MiCheckSecuredVad(v12, v52, *(_QWORD *)(a1 + 24), ProtectionMask, *(_BYTE *)(a1 + 57), v54);
            if ( v50 < 0 )
              goto LABEL_55;
            LOBYTE(v9) = v9 | 4;
          }
          v31 = *(unsigned int *)(a1 + 120);
          v56[0] = v52;
          v56[1] = v18;
          v50 = MiCommitVadMetadataBits(v12, v56, v31);
          if ( v50 < 0 )
            goto LABEL_55;
          LOBYTE(v9) = v9 | 0x20;
        }
      }
      else
      {
        v23 = v54;
      }
      v24 = *(_DWORD *)(v12 + 48);
      v25 = *(_DWORD *)(a1 + 44);
      if ( (v24 & 0x200000) != 0 )
      {
        if ( (v25 & 0x88) == 0 )
        {
          if ( (v24 & 0x70) == 0x40 && (v25 & 0xFFFFF9F9) != 0 )
          {
            v50 = -1073741755;
            goto LABEL_55;
          }
          if ( (v24 & 8) != 0 )
          {
            if ( MiLocateLockedVadEvent(v12, 64) )
            {
              v50 = -1073741755;
              goto LABEL_55;
            }
            v50 = MiCheckSecuredVad(v32, v52, *(_QWORD *)(a1 + 24), ProtectionMask, *(_BYTE *)(a1 + 57), v23);
            if ( v50 < 0 )
              goto LABEL_55;
          }
          v26 = *(_DWORD *)(a1 + 44);
          v27 = *(_QWORD *)(a1 + 24);
          v49 = *(_BYTE *)(a1 + 56);
          v48 = *(_DWORD *)(a1 + 52);
          v47 = *(_QWORD *)(a1 + 112);
          v45 = *(_DWORD *)(a1 + 48);
          v53 = 0;
          v50 = MiCommitExistingVad(v12, v52, v27, v26, v45, v47, v48, v49, v55, &v53, v51);
          if ( v50 >= 0 )
          {
            MiUnlockAndDereferenceVad((PVOID)v12);
            if ( v53 )
            {
              v36 = *(_DWORD *)(a1 + 44);
              v55 = (__int64 *)v52;
              v37 = v36 | 0x40000000;
              v56[0] = *(_QWORD *)(a1 + 24);
              LODWORD(v54) = 0;
              if ( (v9 & 0x20) == 0 )
                v37 = v36;
              MmProtectVirtualMemory(
                *(_QWORD *)(a1 + 96),
                *(_QWORD *)(a1 + 88),
                (unsigned __int64 *)&v55,
                v56,
                v37,
                &v54);
            }
            goto LABEL_38;
          }
LABEL_55:
          MiUnlockAndDereferenceVad((PVOID)v12);
          goto LABEL_50;
        }
LABEL_77:
        v50 = -1073741755;
        goto LABEL_55;
      }
      if ( (v25 & 0x600) != 0 )
      {
        v50 = -1073741755;
        goto LABEL_55;
      }
      if ( (v24 & 8) != 0 && (v9 & 4) == 0 )
      {
        v50 = MiCheckSecuredVad(v12, v52, *(_QWORD *)(a1 + 24), ProtectionMask, *(_BYTE *)(a1 + 57), v23);
        if ( v50 < 0 )
          goto LABEL_55;
      }
      v51[0] = *(_WORD *)MiGetControlAreaPartition(**(_QWORD **)(v12 + 72));
      if ( *(_QWORD *)(v30 + 64) )
        v29 = MiCommitFileBackedSection(a1, v12, v23);
      else
        v29 = MiCommitPagefileBackedSection(a1, v12);
    }
    goto LABEL_54;
  }
  if ( (v21 & 0x70) != 0x30 )
  {
    if ( (*(_DWORD *)(a1 + 64) & 0x10000000) == 0 )
    {
      v50 = -1073741664;
      goto LABEL_55;
    }
    goto LABEL_26;
  }
  v29 = MiCommitEnclavePages(v20, v12, v20, v18, *(_DWORD *)(a1 + 40), ProtectionMask);
LABEL_54:
  v50 = v29;
  if ( v29 < 0 )
    goto LABEL_55;
  MiUnlockAndDereferenceVad((PVOID)v12);
LABEL_38:
  if ( (WORD2(PerfGlobalGroupMask[0]) & 0x8000) != 0 )
  {
    a4 = *(unsigned int *)(a1 + 40);
    if ( (a4 & 0x3000) != 0 )
    {
      v38 = (__int16 *)MiGetProcessPartition(*(_QWORD *)(a1 + 88));
      if ( (*(_BYTE *)(a1 + 64) & 1) != 0 )
        v40 = 0x2000;
      PerfInfoLogVirtualAlloc(v52, *(_QWORD *)(a1 + 24), v39, v40, *v38, v51[0]);
    }
    else if ( (a4 & 0x1080000) != 0 )
    {
      MiLogMemResetInfo(v52, *(_QWORD *)(a1 + 24), (unsigned int)a4);
    }
  }
  if ( (v9 & 1) != 0 )
    KiUnstackDetachProcess((__int64)v57, 0, v7, a4);
  if ( (ProtectionMask & 2) != 0 )
  {
    LODWORD(v46) = *(_DWORD *)(a1 + 44);
    LODWORD(v44) = *(_DWORD *)(a1 + 40);
    EtwTiLogAllocExecVm(*(_QWORD *)(a1 + 88), *(_BYTE *)(a1 + 57), v52, *(_QWORD *)(a1 + 32), v44, v46);
  }
  *v5 = v52;
  return (unsigned int)v50;
}
