/*
 * XREFs of MiAllocateVirtualMemory @ 0x1408FE2C0
 * Callers:
 *     MmCommitDecommitSecuredMemory @ 0x1407DDDD4 (MmCommitDecommitSecuredMemory.c)
 *     MmAllocateUserStack @ 0x1408FD254 (MmAllocateUserStack.c)
 *     NtAllocateVirtualMemory @ 0x1408FD450 (NtAllocateVirtualMemory.c)
 *     MiAllocateVirtualMemoryCommon @ 0x1408FD730 (MiAllocateVirtualMemoryCommon.c)
 *     MmStoreAllocateVirtualMemory @ 0x140A54708 (MmStoreAllocateVirtualMemory.c)
 * Callees:
 *     MiVadSupportsPrivateCommit @ 0x140239D80 (MiVadSupportsPrivateCommit.c)
 *     MiAllowProtectionChange @ 0x140246230 (MiAllowProtectionChange.c)
 *     KiUnstackDetachProcess @ 0x140289470 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x140289A10 (KiStackAttachProcess.c)
 *     MiLocateLockedVadEvent @ 0x1402A57D4 (MiLocateLockedVadEvent.c)
 *     MiObtainReferencedVadEx @ 0x1402A7A60 (MiObtainReferencedVadEx.c)
 *     MiMakeProtectionMask @ 0x1402C2BF0 (MiMakeProtectionMask.c)
 *     MiUnlockAndDereferenceVad @ 0x1403205C0 (MiUnlockAndDereferenceVad.c)
 *     MiCommitExistingVad @ 0x1403840D0 (MiCommitExistingVad.c)
 *     MiCommitEnclavePages @ 0x1403FCC78 (MiCommitEnclavePages.c)
 *     MiGetVadPageSize @ 0x14042F920 (MiGetVadPageSize.c)
 *     MiGetControlAreaPartition @ 0x14043B7F0 (MiGetControlAreaPartition.c)
 *     MiGetProcessPartition @ 0x1404402D0 (MiGetProcessPartition.c)
 *     MiResetVirtualMemory @ 0x14044B240 (MiResetVirtualMemory.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     SeSinglePrivilegeCheck @ 0x140858330 (SeSinglePrivilegeCheck.c)
 *     MmProtectVirtualMemory @ 0x1408F78C8 (MmProtectVirtualMemory.c)
 *     MiCheckSecuredVad @ 0x1408F8A18 (MiCheckSecuredVad.c)
 *     MiValidateVadMetadataFlags @ 0x1408FEB50 (MiValidateVadMetadataFlags.c)
 *     MiReserveUserMemory @ 0x1409012DC (MiReserveUserMemory.c)
 *     MiCommitVadMetadataBits @ 0x140906D54 (MiCommitVadMetadataBits.c)
 *     MiCommitFileBackedSection @ 0x140939E1C (MiCommitFileBackedSection.c)
 *     MiCommitPagefileBackedSection @ 0x1409FC6A4 (MiCommitPagefileBackedSection.c)
 *     EtwTiLogAllocExecVm @ 0x140A012C4 (EtwTiLogAllocExecVm.c)
 *     PerfInfoLogVirtualAlloc @ 0x140A31480 (PerfInfoLogVirtualAlloc.c)
 *     MiLogMemResetInfo @ 0x140A66268 (MiLogMemResetInfo.c)
 */

__int64 __fastcall MiAllocateVirtualMemory(__int64 a1, unsigned __int64 a2, _QWORD *a3, __int64 a4, __int64 *a5)
{
  __int64 *v5; // r15
  __int64 v6; // r14
  unsigned int v8; // ebx
  unsigned int ProtectionMask; // r12d
  _KPROCESS *v10; // rcx
  __int64 v11; // rsi
  int v12; // edx
  int v13; // eax
  __int16 v14; // cx
  int v15; // r10d
  int v16; // eax
  unsigned __int64 v17; // r13
  unsigned __int64 v18; // rcx
  unsigned __int64 v19; // rcx
  int v20; // edx
  int v21; // ecx
  __int64 v22; // r14
  int v23; // ecx
  int v24; // edx
  unsigned int v25; // r9d
  __int64 v26; // r8
  int v28; // eax
  __int64 v29; // r8
  __int64 v30; // r8
  ULONG_PTR v31; // rcx
  unsigned int v32; // edx
  int v33; // r8d
  int v34; // eax
  unsigned int v35; // r9d
  unsigned int v36; // edx
  unsigned int v37; // ecx
  __int16 *v38; // rax
  int v39; // r8d
  int v40; // r9d
  __int64 v41; // r8
  __int64 ProcessPartition; // rax
  _QWORD *v43; // r10
  __int64 VadPageSize; // rax
  int v45; // [rsp+20h] [rbp-91h]
  __int64 v46; // [rsp+28h] [rbp-89h]
  int v47; // [rsp+30h] [rbp-81h]
  char v48; // [rsp+38h] [rbp-79h]
  int v49; // [rsp+60h] [rbp-51h] BYREF
  __int16 v50[2]; // [rsp+64h] [rbp-4Dh] BYREF
  __int64 v51; // [rsp+68h] [rbp-49h] BYREF
  int v52; // [rsp+70h] [rbp-41h] BYREF
  __int64 v53; // [rsp+78h] [rbp-39h] BYREF
  __int64 v54; // [rsp+80h] [rbp-31h] BYREF
  __int64 v55[2]; // [rsp+88h] [rbp-29h] BYREF
  _OWORD v56[3]; // [rsp+98h] [rbp-19h] BYREF

  v5 = a5;
  v6 = (__int64)a3;
  LODWORD(a3) = 0;
  v53 = a4;
  v54 = a2;
  v55[0] = (__int64)a5;
  v52 = 0;
  if ( !v6 )
    v6 = 0LL;
  v50[0] = 0;
  *a5 = 0LL;
  v51 = 0LL;
  LOBYTE(v8) = 0;
  memset(v56, 0, sizeof(v56));
  if ( a2 >= 2 )
  {
    if ( (*(_DWORD *)(*(_QWORD *)a2 + 4LL) & 0x80u) != 0
      && ((*(_BYTE *)(a1 + 112) & 0x10) == 0 || (*(_DWORD *)(a1 + 40) & 0x20400000) != 0x20000000) )
    {
      v49 = -1073741811;
      goto LABEL_48;
    }
    ProcessPartition = MiGetProcessPartition(*(_QWORD *)(a1 + 88));
    if ( *v43 == ProcessPartition )
      v43 = a3;
    v54 = (__int64)v43;
  }
  v8 = 2;
  if ( *(_QWORD *)(a1 + 8) - *(_QWORD *)a1 + 1LL != *(_QWORD *)(a1 + 24) )
    v8 = (unsigned int)a3;
  ProtectionMask = MiMakeProtectionMask(*(_DWORD *)(a1 + 44));
  if ( ProtectionMask == -1 )
  {
    v49 = -1073741755;
LABEL_48:
    v11 = v6;
    goto LABEL_49;
  }
  v10 = *(_KPROCESS **)(a1 + 88);
  if ( *(_KPROCESS **)(a1 + 96) != v10 )
  {
    KiStackAttachProcess(v10, 0, (__int64)v56);
    v8 |= 1u;
  }
  v49 = MiValidateVadMetadataFlags(a1);
  v11 = v6;
  if ( v49 < 0 )
    goto LABEL_49;
  if ( (*(_DWORD *)(a1 + 64) & 0x4000000) != 0 && (v8 & 2) == 0 )
    goto LABEL_92;
  v12 = *(_DWORD *)(a1 + 40);
  if ( (v12 & 0x40000000) != 0 && !*(_QWORD *)(*(_QWORD *)(a1 + 88) + 1600LL) )
  {
    v49 = -1073741811;
    goto LABEL_49;
  }
  v13 = *(_DWORD *)(a1 + 112) & 0x1A;
  if ( v13 )
  {
    if ( (v13 & 2) != 0 )
    {
      v41 = 0xFFFFLL;
    }
    else if ( (v13 & 8) != 0 )
    {
      v41 = 0x1FFFFFLL;
    }
    else
    {
      v41 = -1LL;
      if ( (v13 & 0x10) != 0 )
        v41 = 0x3FFFFFFFLL;
    }
    if ( ((*(_QWORD *)(a1 + 8) + 1LL) & v41) == 0 && (v41 & *(_QWORD *)a1) == 0 )
    {
      if ( (v12 & 0x20400000) == 0x400000 )
        goto LABEL_15;
      goto LABEL_14;
    }
LABEL_92:
    v49 = -1073741811;
    goto LABEL_49;
  }
  if ( (v12 & 0x20400000) == 0x20000000 )
LABEL_14:
    v8 |= 0x10u;
LABEL_15:
  if ( v8 >= 0x10 && !SeSinglePrivilegeCheck(SeLockMemoryPrivilege, *(_BYTE *)(a1 + 57)) )
  {
    v49 = -1073741727;
    goto LABEL_49;
  }
  v14 = *(_WORD *)MiGetProcessPartition(*(_QWORD *)(a1 + 88));
  v16 = *(_DWORD *)(a1 + 40);
  v50[0] = v14;
  if ( (v16 & 0x2000) != 0 )
  {
    v49 = MiReserveUserMemory(a1, v15, ProtectionMask, (unsigned int)&v51, (__int64)v50);
    if ( v49 >= 0 )
      goto LABEL_38;
LABEL_49:
    if ( !v11 )
      goto LABEL_50;
    goto LABEL_54;
  }
  if ( (v16 & 0x40000000) != 0 )
  {
    v49 = -1073741811;
    goto LABEL_49;
  }
  if ( *(_QWORD *)(a1 + 72) )
  {
    v49 = -1073741811;
    goto LABEL_49;
  }
  v17 = *(_QWORD *)(a1 + 8);
  v18 = *(_QWORD *)a1;
  v51 = *(_QWORD *)a1;
  if ( !v6 )
    v11 = MiObtainReferencedVadEx(v18, 0, &v49);
  if ( !v11 )
  {
    if ( v49 == -1073741664 )
      v49 = -1073741800;
    goto LABEL_50;
  }
  if ( v17 >> 12 > (*(unsigned int *)(v11 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v11 + 33) << 32)) )
  {
    v49 = -1073741800;
    goto LABEL_54;
  }
  if ( (*(_DWORD *)(v11 + 48) & 0x4200000) != 0x4200000 && *(_DWORD *)(a1 + 48) )
  {
    v49 = -1073741800;
    goto LABEL_54;
  }
  v5 = (__int64 *)v55[0];
  v19 = v51;
  *(_QWORD *)v55[0] = v51;
  v20 = *(_DWORD *)(v11 + 48);
  if ( (v20 & 0xC200000) != 0x8200000 )
  {
LABEL_26:
    if ( !(unsigned int)MiVadSupportsPrivateCommit(v11) )
    {
      if ( (*(_DWORD *)(v11 + 48) & 0xA00000) != 0xA00000 )
      {
        v49 = -1073741800;
        goto LABEL_54;
      }
      VadPageSize = MiGetVadPageSize(v11);
      if ( (((VadPageSize << 12) - 1) & (v51 | (v17 + 1))) != 0 )
      {
        v49 = -1073741811;
        goto LABEL_54;
      }
    }
    if ( (*(unsigned int *)(v11 + 52) | ((unsigned __int64)*(unsigned __int8 *)(v11 + 34) << 32)) >= 0x7FFFFFFFDLL )
    {
      v49 = -1073741800;
      goto LABEL_54;
    }
    if ( (*(_DWORD *)(v11 + 48) & 0x70) != 0x40 )
      goto LABEL_29;
    v32 = *(_DWORD *)(a1 + 44) & 0xFFFFF9FF;
    *(_DWORD *)(a1 + 44) = v32;
    v33 = *(_DWORD *)(v11 + 48) & 0xC00;
    if ( (*(_DWORD *)(v11 + 48) & 0x380) != 0 && v33 == 3072 )
    {
      v32 |= 0x400u;
    }
    else
    {
      if ( v33 != 1024 )
        goto LABEL_74;
      v32 |= 0x200u;
    }
    *(_DWORD *)(a1 + 44) = v32;
LABEL_74:
    ProtectionMask = MiMakeProtectionMask(v32);
    if ( ProtectionMask == -1 )
      goto LABEL_75;
LABEL_29:
    v21 = *(_DWORD *)(a1 + 40);
    if ( (v21 & 0x1080000) != 0 )
    {
      v28 = MiResetVirtualMemory(*(_QWORD *)(a1 + 96), v51, v17, v11, v21, *(_BYTE *)(a1 + 57));
    }
    else
    {
      if ( (ProtectionMask & 2) != 0 )
      {
        v49 = MiAllowProtectionChange(*(_QWORD *)(a1 + 88), *(_QWORD *)(a1 + 96), v11, ProtectionMask, v51, v17);
        if ( v49 < 0 )
          goto LABEL_54;
        if ( (*(_DWORD *)(v11 + 48) & 0x100) != 0 )
        {
          v34 = *(_DWORD *)(a1 + 120);
          if ( (v34 & 2) == 0 )
          {
            v34 &= ~1u;
            *(_DWORD *)(a1 + 120) = v34;
          }
          if ( (v34 & 8) == 0 )
            *(_DWORD *)(a1 + 120) = v34 & 0xFFFFFFFB;
        }
        v22 = v53;
        if ( *(_DWORD *)(a1 + 120) )
        {
          if ( (*(_DWORD *)(v11 + 48) & 8) != 0 )
          {
            v49 = MiCheckSecuredVad(v11, v51, *(_QWORD *)(a1 + 24), ProtectionMask, *(_BYTE *)(a1 + 57), v53);
            if ( v49 < 0 )
              goto LABEL_54;
            LOBYTE(v8) = v8 | 4;
          }
          v30 = *(unsigned int *)(a1 + 120);
          v55[0] = v51;
          v55[1] = v17;
          v49 = MiCommitVadMetadataBits(v11, v55, v30);
          if ( v49 < 0 )
            goto LABEL_54;
          LOBYTE(v8) = v8 | 0x20;
        }
      }
      else
      {
        v22 = v53;
      }
      v23 = *(_DWORD *)(v11 + 48);
      v24 = *(_DWORD *)(a1 + 44);
      if ( (v23 & 0x200000) != 0 )
      {
        if ( (v24 & 0x88) == 0 )
        {
          if ( (v23 & 0x70) == 0x40 && (v24 & 0xFFFFF9F9) != 0 )
          {
            v49 = -1073741755;
            goto LABEL_54;
          }
          if ( (v23 & 8) != 0 )
          {
            if ( MiLocateLockedVadEvent(v11, 64) )
            {
              v49 = -1073741755;
              goto LABEL_54;
            }
            v49 = MiCheckSecuredVad(v31, v51, *(_QWORD *)(a1 + 24), ProtectionMask, *(_BYTE *)(a1 + 57), v22);
            if ( v49 < 0 )
              goto LABEL_54;
          }
          v25 = *(_DWORD *)(a1 + 44);
          v26 = *(_QWORD *)(a1 + 24);
          v48 = *(_BYTE *)(a1 + 56);
          v47 = *(_DWORD *)(a1 + 52);
          v46 = *(_QWORD *)(a1 + 112);
          v45 = *(_DWORD *)(a1 + 48);
          v52 = 0;
          v49 = MiCommitExistingVad(v11, v51, v26, v25, v45, v46, v47, v48, v54, &v52, v50);
          if ( v49 >= 0 )
          {
            MiUnlockAndDereferenceVad((char *)v11);
            if ( v52 )
            {
              v36 = *(_DWORD *)(a1 + 44);
              v54 = v51;
              v37 = v36 | 0x40000000;
              v55[0] = *(_QWORD *)(a1 + 24);
              LODWORD(v53) = 0;
              if ( (v8 & 0x20) == 0 )
                v37 = v36;
              MmProtectVirtualMemory(
                *(_QWORD *)(a1 + 96),
                *(_QWORD *)(a1 + 88),
                (unsigned __int64 *)&v54,
                v55,
                v37,
                &v53);
            }
            goto LABEL_38;
          }
LABEL_54:
          MiUnlockAndDereferenceVad((char *)v11);
LABEL_50:
          if ( (WORD2(PerfGlobalGroupMask[0]) & 0x8000) != 0
            && (*(_DWORD *)(a1 + 40) & 0x1000000) != 0
            && v49 == -1073740748 )
          {
            MiLogMemResetInfo(v51, *(_QWORD *)(a1 + 24), 0LL);
          }
          if ( (v8 & 1) != 0 )
            KiUnstackDetachProcess((__int64)v56, 0LL);
          return (unsigned int)v49;
        }
LABEL_75:
        v49 = -1073741755;
        goto LABEL_54;
      }
      if ( (v24 & 0x600) != 0 )
      {
        v49 = -1073741755;
        goto LABEL_54;
      }
      if ( (v23 & 8) != 0 && (v8 & 4) == 0 )
      {
        v49 = MiCheckSecuredVad(v11, v51, *(_QWORD *)(a1 + 24), ProtectionMask, *(_BYTE *)(a1 + 57), v22);
        if ( v49 < 0 )
          goto LABEL_54;
      }
      v50[0] = *(_WORD *)MiGetControlAreaPartition(**(_QWORD **)(v11 + 72));
      if ( *(_QWORD *)(v29 + 64) )
        v28 = MiCommitFileBackedSection(a1, v11, v22);
      else
        v28 = MiCommitPagefileBackedSection(a1, v11);
    }
    goto LABEL_56;
  }
  if ( (v20 & 0x70) != 0x30 )
  {
    if ( (*(_DWORD *)(a1 + 64) & 0x10000000) == 0 )
    {
      v49 = -1073741664;
      goto LABEL_54;
    }
    goto LABEL_26;
  }
  v28 = MiCommitEnclavePages(v19, v11, v19, v17, *(_DWORD *)(a1 + 40), ProtectionMask);
LABEL_56:
  v49 = v28;
  if ( v28 < 0 )
    goto LABEL_54;
  MiUnlockAndDereferenceVad((char *)v11);
LABEL_38:
  if ( (WORD2(PerfGlobalGroupMask[0]) & 0x8000) != 0 )
  {
    v35 = *(_DWORD *)(a1 + 40);
    if ( (v35 & 0x3000) != 0 )
    {
      v38 = (__int16 *)MiGetProcessPartition(*(_QWORD *)(a1 + 88));
      if ( (*(_BYTE *)(a1 + 64) & 1) != 0 )
        v40 = 0x2000;
      PerfInfoLogVirtualAlloc(v51, *(_QWORD *)(a1 + 24), v39, v40, *v38, v50[0]);
    }
    else if ( (v35 & 0x1080000) != 0 )
    {
      MiLogMemResetInfo(v51, *(_QWORD *)(a1 + 24), v35);
    }
  }
  if ( (v8 & 1) != 0 )
    KiUnstackDetachProcess((__int64)v56, 0LL);
  if ( (ProtectionMask & 2) != 0 )
    EtwTiLogAllocExecVm(
      *(_QWORD *)(a1 + 88),
      *(unsigned __int8 *)(a1 + 57),
      v51,
      *(_QWORD *)(a1 + 32),
      *(_DWORD *)(a1 + 40),
      *(_DWORD *)(a1 + 44));
  *v5 = v51;
  return (unsigned int)v49;
}
