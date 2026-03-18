/*
 * XREFs of MiAllocateVirtualMemory @ 0x1408DF540
 * Callers:
 *     MmCommitDecommitSecuredMemory @ 0x1407EDC74 (MmCommitDecommitSecuredMemory.c)
 *     MmAllocateUserStack @ 0x1408DE514 (MmAllocateUserStack.c)
 *     NtAllocateVirtualMemory @ 0x1408DE710 (NtAllocateVirtualMemory.c)
 *     MiAllocateVirtualMemoryCommon @ 0x1408DE9F0 (MiAllocateVirtualMemoryCommon.c)
 *     MmStoreAllocateVirtualMemory @ 0x140A5115C (MmStoreAllocateVirtualMemory.c)
 * Callees:
 *     MiCommitExistingVad @ 0x140213020 (MiCommitExistingVad.c)
 *     MiUnlockAndDereferenceVad @ 0x1402BAFA0 (MiUnlockAndDereferenceVad.c)
 *     MiMakeProtectionMask @ 0x1402EAF70 (MiMakeProtectionMask.c)
 *     MiVadSupportsPrivateCommit @ 0x1402FBA00 (MiVadSupportsPrivateCommit.c)
 *     MiObtainReferencedVadEx @ 0x1402FBE30 (MiObtainReferencedVadEx.c)
 *     KiStackAttachProcess @ 0x1403209E0 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x140321EC0 (KiUnstackDetachProcess.c)
 *     MiLocateLockedVadEvent @ 0x1403CDE38 (MiLocateLockedVadEvent.c)
 *     MiGetVadPageSize @ 0x1404272B0 (MiGetVadPageSize.c)
 *     MiGetControlAreaPartition @ 0x1404378D0 (MiGetControlAreaPartition.c)
 *     MiGetProcessPartition @ 0x14043E2C0 (MiGetProcessPartition.c)
 *     MiResetVirtualMemory @ 0x140441CD0 (MiResetVirtualMemory.c)
 *     MiAllowProtectionChange @ 0x140441E14 (MiAllowProtectionChange.c)
 *     MiCommitEnclavePages @ 0x140473ACC (MiCommitEnclavePages.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     SeSinglePrivilegeCheck @ 0x140853E90 (SeSinglePrivilegeCheck.c)
 *     MmProtectVirtualMemory @ 0x1408DCA30 (MmProtectVirtualMemory.c)
 *     MiCheckSecuredVad @ 0x1408DD998 (MiCheckSecuredVad.c)
 *     MiCommitFileBackedSection @ 0x1408DDC1C (MiCommitFileBackedSection.c)
 *     EtwTiLogAllocExecVm @ 0x1408DE328 (EtwTiLogAllocExecVm.c)
 *     MiValidateVadMetadataFlags @ 0x1408DFDD0 (MiValidateVadMetadataFlags.c)
 *     MiReserveUserMemory @ 0x1408DFE98 (MiReserveUserMemory.c)
 *     MiCommitPagefileBackedSection @ 0x1408F7B54 (MiCommitPagefileBackedSection.c)
 *     MiCommitVadMetadataBits @ 0x1408FA9B0 (MiCommitVadMetadataBits.c)
 *     PerfInfoLogVirtualAlloc @ 0x140A37358 (PerfInfoLogVirtualAlloc.c)
 *     MiLogMemResetInfo @ 0x140A68EA8 (MiLogMemResetInfo.c)
 */

__int64 __fastcall MiAllocateVirtualMemory(__int64 a1, _WORD **a2, _WORD **a3, __int64 a4, __int64 *a5)
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
  unsigned int v35; // edx
  unsigned int v36; // ecx
  unsigned int v37; // r9d
  __int16 *v38; // rax
  int v39; // r8d
  int v40; // r9d
  __int64 ProcessPartition; // rax
  _WORD **v42; // r10
  __int64 v43; // r8
  __int64 VadPageSize; // rax
  __int64 v45; // [rsp+20h] [rbp-91h]
  int v46; // [rsp+20h] [rbp-91h]
  __int64 v47; // [rsp+28h] [rbp-89h]
  __int64 v48; // [rsp+28h] [rbp-89h]
  int v49; // [rsp+30h] [rbp-81h]
  char v50; // [rsp+38h] [rbp-79h]
  int v51; // [rsp+60h] [rbp-51h] BYREF
  __int16 v52[2]; // [rsp+64h] [rbp-4Dh] BYREF
  __int64 v53; // [rsp+68h] [rbp-49h] BYREF
  int v54; // [rsp+70h] [rbp-41h] BYREF
  __int64 v55; // [rsp+78h] [rbp-39h] BYREF
  _WORD **v56; // [rsp+80h] [rbp-31h] BYREF
  __int64 v57[2]; // [rsp+88h] [rbp-29h] BYREF
  _OWORD v58[3]; // [rsp+98h] [rbp-19h] BYREF

  v5 = a5;
  v6 = (__int64)a3;
  LODWORD(a3) = 0;
  v55 = a4;
  v56 = a2;
  v57[0] = (__int64)a5;
  v54 = 0;
  if ( !v6 )
    v6 = 0LL;
  v52[0] = 0;
  *a5 = 0LL;
  v53 = 0LL;
  LOBYTE(v8) = 0;
  memset(v58, 0, sizeof(v58));
  if ( (unsigned __int64)a2 >= 2 )
  {
    if ( (*((_DWORD *)*a2 + 1) & 0x80u) != 0
      && ((*(_BYTE *)(a1 + 112) & 0x10) == 0 || (*(_DWORD *)(a1 + 40) & 0x20400000) != 0x20000000) )
    {
      v51 = -1073741811;
      goto LABEL_48;
    }
    ProcessPartition = MiGetProcessPartition(*(_QWORD *)(a1 + 88));
    if ( *v42 == (_WORD *)ProcessPartition )
      v42 = a3;
    v56 = v42;
  }
  v8 = 2;
  if ( *(_QWORD *)(a1 + 8) - *(_QWORD *)a1 + 1LL != *(_QWORD *)(a1 + 24) )
    v8 = (unsigned int)a3;
  ProtectionMask = MiMakeProtectionMask(*(_DWORD *)(a1 + 44));
  if ( ProtectionMask == -1 )
  {
    v51 = -1073741755;
LABEL_48:
    v11 = v6;
    goto LABEL_49;
  }
  v10 = *(_KPROCESS **)(a1 + 88);
  if ( *(_KPROCESS **)(a1 + 96) != v10 )
  {
    KiStackAttachProcess(v10, 0, (__int64)v58);
    v8 |= 1u;
  }
  v51 = MiValidateVadMetadataFlags(a1);
  v11 = v6;
  if ( v51 < 0 )
    goto LABEL_49;
  if ( (*(_DWORD *)(a1 + 64) & 0x4000000) != 0 && v8 < 2 )
  {
LABEL_130:
    v51 = -1073741811;
    goto LABEL_49;
  }
  v12 = *(_DWORD *)(a1 + 40);
  if ( (v12 & 0x40000000) != 0 && !*(_QWORD *)(*(_QWORD *)(a1 + 88) + 1600LL) )
  {
    v51 = -1073741811;
    goto LABEL_49;
  }
  v13 = *(_DWORD *)(a1 + 112) & 0x1A;
  if ( v13 )
  {
    if ( (v13 & 2) != 0 )
    {
      v43 = 0xFFFFLL;
    }
    else if ( (v13 & 8) != 0 )
    {
      v43 = 0x1FFFFFLL;
    }
    else
    {
      v43 = -1LL;
      if ( (v13 & 0x10) != 0 )
        v43 = 0x3FFFFFFFLL;
    }
    if ( ((*(_QWORD *)(a1 + 8) + 1LL) & v43) != 0 || (v43 & *(_QWORD *)a1) != 0 )
      goto LABEL_130;
    if ( (v12 & 0x20400000) != 0x400000 )
      goto LABEL_14;
  }
  else if ( (v12 & 0x20400000) == 0x20000000 )
  {
LABEL_14:
    v8 |= 0x10u;
  }
  if ( v8 >= 0x10 && !SeSinglePrivilegeCheck(SeLockMemoryPrivilege, *(_BYTE *)(a1 + 57)) )
  {
    v51 = -1073741727;
    goto LABEL_49;
  }
  v14 = *(_WORD *)MiGetProcessPartition(*(_QWORD *)(a1 + 88));
  v16 = *(_DWORD *)(a1 + 40);
  v52[0] = v14;
  if ( (v16 & 0x2000) != 0 )
  {
    v51 = MiReserveUserMemory(a1, v15, ProtectionMask, (unsigned int)&v53, (__int64)v52);
    if ( v51 >= 0 )
      goto LABEL_38;
LABEL_49:
    if ( !v11 )
      goto LABEL_50;
    goto LABEL_55;
  }
  if ( (v16 & 0x40000000) != 0 )
  {
    v51 = -1073741811;
    goto LABEL_49;
  }
  if ( *(_QWORD *)(a1 + 72) )
  {
    v51 = -1073741811;
    goto LABEL_49;
  }
  v17 = *(_QWORD *)(a1 + 8);
  v18 = *(_QWORD *)a1;
  v53 = *(_QWORD *)a1;
  if ( !v6 )
    v11 = MiObtainReferencedVadEx(v18, 0LL, &v51);
  if ( !v11 )
  {
    if ( v51 == -1073741664 )
      v51 = -1073741800;
    goto LABEL_50;
  }
  if ( v17 >> 12 > (*(unsigned int *)(v11 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v11 + 33) << 32)) )
  {
    v51 = -1073741800;
    goto LABEL_55;
  }
  if ( (*(_DWORD *)(v11 + 48) & 0x4200000) != 0x4200000 && *(_DWORD *)(a1 + 48) )
  {
    v51 = -1073741800;
    goto LABEL_55;
  }
  v5 = (__int64 *)v57[0];
  v19 = v53;
  *(_QWORD *)v57[0] = v53;
  v20 = *(_DWORD *)(v11 + 48);
  if ( (v20 & 0xC200000) != 0x8200000 )
  {
LABEL_26:
    if ( !(unsigned int)MiVadSupportsPrivateCommit(v11) )
    {
      if ( (*(_DWORD *)(v11 + 48) & 0xA00000) != 0xA00000 )
      {
        v51 = -1073741800;
        goto LABEL_55;
      }
      VadPageSize = MiGetVadPageSize(v11);
      if ( (((VadPageSize << 12) - 1) & (v53 | (v17 + 1))) != 0 )
      {
        v51 = -1073741811;
        goto LABEL_55;
      }
    }
    if ( (*(unsigned int *)(v11 + 52) | ((unsigned __int64)*(unsigned __int8 *)(v11 + 34) << 32)) >= 0x7FFFFFFFDLL )
    {
      v51 = -1073741800;
      MiUnlockAndDereferenceVad((PVOID)v11);
LABEL_50:
      if ( (WORD2(PerfGlobalGroupMask) & 0x8000) != 0 && (*(_DWORD *)(a1 + 40) & 0x1000000) != 0 && v51 == -1073740748 )
        MiLogMemResetInfo(v53, *(_QWORD *)(a1 + 24), 0LL);
      if ( (v8 & 1) != 0 )
        KiUnstackDetachProcess((__int64)v58, 0);
      return (unsigned int)v51;
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
        goto LABEL_76;
      v32 |= 0x200u;
    }
    *(_DWORD *)(a1 + 44) = v32;
LABEL_76:
    ProtectionMask = MiMakeProtectionMask(v32);
    if ( ProtectionMask == -1 )
      goto LABEL_77;
LABEL_29:
    v21 = *(_DWORD *)(a1 + 40);
    if ( (v21 & 0x1080000) != 0 )
    {
      v28 = MiResetVirtualMemory(*(_QWORD *)(a1 + 96), v53, v17, v11, v21, *(_BYTE *)(a1 + 57));
    }
    else
    {
      if ( (ProtectionMask & 2) != 0 )
      {
        v51 = MiAllowProtectionChange(*(_QWORD *)(a1 + 88), *(_QWORD *)(a1 + 96), v11, ProtectionMask, v53, v17);
        if ( v51 < 0 )
          goto LABEL_55;
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
        v22 = v55;
        if ( *(_DWORD *)(a1 + 120) )
        {
          if ( (*(_DWORD *)(v11 + 48) & 8) != 0 )
          {
            v51 = MiCheckSecuredVad(v11, v53, *(_QWORD *)(a1 + 24), ProtectionMask, *(_BYTE *)(a1 + 57), v55);
            if ( v51 < 0 )
              goto LABEL_55;
            LOBYTE(v8) = v8 | 4;
          }
          v30 = *(unsigned int *)(a1 + 120);
          v57[0] = v53;
          v57[1] = v17;
          v51 = MiCommitVadMetadataBits(v11, v57, v30);
          if ( v51 < 0 )
            goto LABEL_55;
          LOBYTE(v8) = v8 | 0x20;
        }
      }
      else
      {
        v22 = v55;
      }
      v23 = *(_DWORD *)(v11 + 48);
      v24 = *(_DWORD *)(a1 + 44);
      if ( (v23 & 0x200000) != 0 )
      {
        if ( (v24 & 0x88) == 0 )
        {
          if ( (v23 & 0x70) == 0x40 && (v24 & 0xFFFFF9F9) != 0 )
          {
            v51 = -1073741755;
            goto LABEL_55;
          }
          if ( (v23 & 8) != 0 )
          {
            if ( MiLocateLockedVadEvent(v11, 64) )
            {
              v51 = -1073741755;
              goto LABEL_55;
            }
            v51 = MiCheckSecuredVad(v31, v53, *(_QWORD *)(a1 + 24), ProtectionMask, *(_BYTE *)(a1 + 57), v22);
            if ( v51 < 0 )
              goto LABEL_55;
          }
          v25 = *(_DWORD *)(a1 + 44);
          v26 = *(_QWORD *)(a1 + 24);
          v50 = *(_BYTE *)(a1 + 56);
          v49 = *(_DWORD *)(a1 + 52);
          v48 = *(_QWORD *)(a1 + 112);
          v46 = *(_DWORD *)(a1 + 48);
          v54 = 0;
          v51 = MiCommitExistingVad(v11, v53, v26, v25, v46, v48, v49, v50, v56, &v54, v52);
          if ( v51 >= 0 )
          {
            MiUnlockAndDereferenceVad((PVOID)v11);
            if ( v54 )
            {
              v35 = *(_DWORD *)(a1 + 44);
              v56 = (_WORD **)v53;
              v36 = v35 | 0x40000000;
              v57[0] = *(_QWORD *)(a1 + 24);
              LODWORD(v55) = 0;
              if ( (v8 & 0x20) == 0 )
                v36 = v35;
              MmProtectVirtualMemory(
                *(_QWORD *)(a1 + 96),
                *(_QWORD *)(a1 + 88),
                (unsigned __int64 *)&v56,
                v57,
                v36,
                &v55);
            }
            goto LABEL_38;
          }
LABEL_55:
          MiUnlockAndDereferenceVad((PVOID)v11);
          goto LABEL_50;
        }
LABEL_77:
        v51 = -1073741755;
        goto LABEL_55;
      }
      if ( (v24 & 0x600) != 0 )
      {
        v51 = -1073741755;
        goto LABEL_55;
      }
      if ( (v23 & 8) != 0 && (v8 & 4) == 0 )
      {
        v51 = MiCheckSecuredVad(v11, v53, *(_QWORD *)(a1 + 24), ProtectionMask, *(_BYTE *)(a1 + 57), v22);
        if ( v51 < 0 )
          goto LABEL_55;
      }
      v52[0] = *(_WORD *)MiGetControlAreaPartition(**(_QWORD **)(v11 + 72));
      if ( *(_QWORD *)(v29 + 64) )
        v28 = MiCommitFileBackedSection(a1, v11, v22);
      else
        v28 = MiCommitPagefileBackedSection(a1, v11);
    }
    goto LABEL_54;
  }
  if ( (v20 & 0x70) != 0x30 )
  {
    if ( (*(_DWORD *)(a1 + 64) & 0x10000000) == 0 )
    {
      v51 = -1073741664;
      goto LABEL_55;
    }
    goto LABEL_26;
  }
  v28 = MiCommitEnclavePages(v19, v11, v19, v17, *(_DWORD *)(a1 + 40), ProtectionMask);
LABEL_54:
  v51 = v28;
  if ( v28 < 0 )
    goto LABEL_55;
  MiUnlockAndDereferenceVad((PVOID)v11);
LABEL_38:
  if ( (WORD2(PerfGlobalGroupMask) & 0x8000) != 0 )
  {
    v37 = *(_DWORD *)(a1 + 40);
    if ( (v37 & 0x3000) != 0 )
    {
      v38 = (__int16 *)MiGetProcessPartition(*(_QWORD *)(a1 + 88));
      if ( (*(_BYTE *)(a1 + 64) & 1) != 0 )
        v40 = 0x2000;
      PerfInfoLogVirtualAlloc(v53, *(_QWORD *)(a1 + 24), v39, v40, *v38, v52[0]);
    }
    else if ( (v37 & 0x1080000) != 0 )
    {
      MiLogMemResetInfo(v53, *(_QWORD *)(a1 + 24), v37);
    }
  }
  if ( (v8 & 1) != 0 )
    KiUnstackDetachProcess((__int64)v58, 0);
  if ( (ProtectionMask & 2) != 0 )
  {
    LODWORD(v47) = *(_DWORD *)(a1 + 44);
    LODWORD(v45) = *(_DWORD *)(a1 + 40);
    EtwTiLogAllocExecVm(*(_QWORD *)(a1 + 88), *(_BYTE *)(a1 + 57), v53, *(_QWORD *)(a1 + 32), v45, v47);
  }
  *v5 = v53;
  return (unsigned int)v51;
}
