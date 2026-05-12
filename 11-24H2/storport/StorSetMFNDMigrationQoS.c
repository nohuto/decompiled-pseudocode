/*
 * XREFs of StorSetMFNDMigrationQoS @ 0x140192354
 * Callers:
 *     RaidAdapterStorageInternalSetPropertyIoctl @ 0x140063594 (RaidAdapterStorageInternalSetPropertyIoctl.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000E820 (RaidAllocatePool.c)
 *     StorIsMFNDSupported @ 0x140055FDC (StorIsMFNDSupported.c)
 *     StorMapMFNDErrorToNtStatus @ 0x140067C1C (StorMapMFNDErrorToNtStatus.c)
 *     StorLogMFNDSetMigrationQoS @ 0x1400C6D80 (StorLogMFNDSetMigrationQoS.c)
 *     StorMFNDAttemptSwitchToAdminPrivilege @ 0x1400C7110 (StorMFNDAttemptSwitchToAdminPrivilege.c)
 *     StorMFNDAttemptSwitchToUserPrivilege @ 0x1400C71BC (StorMFNDAttemptSwitchToUserPrivilege.c)
 *     memset_0 @ 0x140143A80 (memset_0.c)
 *     StorSendMFNDCommand @ 0x140190F24 (StorSendMFNDCommand.c)
 */

__int64 __fastcall StorSetMFNDMigrationQoS(__int64 *a1, __int64 a2, _QWORD *a3)
{
  __int64 v6; // rsi
  _DWORD *v7; // r14
  unsigned __int16 v8; // r15
  __int64 v9; // rcx
  __int64 v10; // rax
  _DWORD *Pool; // rax
  _DWORD *v12; // rdx
  unsigned int v13; // edx
  _DWORD *v14; // rcx
  unsigned int v15; // ebx
  unsigned int v16; // r15d
  unsigned int v17; // eax
  unsigned int v18; // r12d
  unsigned int v19; // r8d
  unsigned int v20; // r13d
  unsigned int v21; // ecx
  int v22; // ebx
  unsigned int v23; // r15d
  unsigned int v24; // r12d
  unsigned int v25; // r13d
  unsigned int *v26; // r8
  __int64 v27; // r10
  _DWORD *v28; // rbx
  __int64 v29; // r11
  __int64 v30; // r9
  __int64 v31; // rdx
  __int64 v32; // r13
  _BYTE *v33; // rax
  unsigned int v34; // ebx
  __int64 v36; // [rsp+28h] [rbp-51h]
  _OWORD v37[2]; // [rsp+60h] [rbp-19h] BYREF
  unsigned int v38; // [rsp+88h] [rbp+Fh]
  char v39; // [rsp+E8h] [rbp+6Fh]
  __int64 v40; // [rsp+F0h] [rbp+77h] BYREF
  int v41; // [rsp+F8h] [rbp+7Fh] BYREF

  v39 = 0;
  v6 = 0LL;
  v7 = 0LL;
  memset_0(v37, 0, 0x40uLL);
  v41 = 0;
  v8 = 0;
  *a3 = 0LL;
  if ( !StorIsMFNDSupported((__int64)a1) )
  {
    LODWORD(v40) = -1073741637;
LABEL_61:
    StorMapMFNDErrorToNtStatus(v8, &v40);
    v34 = v40;
    goto LABEL_62;
  }
  v9 = a1[770];
  if ( *(_DWORD *)(v9 + 36) != 1 )
  {
    LODWORD(v40) = -1073741436;
    goto LABEL_61;
  }
  if ( *(_DWORD *)(*(_QWORD *)(a2 + 184) + 16LL) < 0x28u )
  {
    LODWORD(v40) = -1073741585;
    goto LABEL_61;
  }
  v6 = *(_QWORD *)(a2 + 24) + 8LL;
  if ( *(_WORD *)v6 != 1
    || *(_DWORD *)(*(_QWORD *)(a2 + 24) + 12LL) < 0x20u
    || (unsigned int)(*(_DWORD *)(*(_QWORD *)(a2 + 24) + 16LL) - 1) > 2
    || !*(_DWORD *)(*(_QWORD *)(a2 + 24) + 20LL)
    && !*(_DWORD *)(*(_QWORD *)(a2 + 24) + 24LL)
    && !*(_DWORD *)(*(_QWORD *)(a2 + 24) + 28LL)
    && !*(_DWORD *)(*(_QWORD *)(a2 + 24) + 32LL) )
  {
    LODWORD(v40) = -1073741811;
    goto LABEL_61;
  }
  if ( _InterlockedIncrement((volatile signed __int32 *)(v9 + 104)) > 1 )
    KeWaitForSingleObject((PVOID)(a1[770] + 80), Executive, 0, 0, 0LL);
  v10 = a1[770];
  if ( !*(_QWORD *)(v10 + 112) )
  {
    *(_QWORD *)(a1[770] + 112) = RaidAllocatePool(64LL, 28LL, 1179476306LL, a1[1]);
    v10 = a1[770];
    if ( !*(_QWORD *)(v10 + 112) )
      goto LABEL_18;
  }
  if ( (*(_BYTE *)(*(_QWORD *)(v10 + 112) + 20LL) & 1) == 0 )
  {
    Pool = (_DWORD *)RaidAllocatePool(64LL, 64LL, 1179476306LL, a1[1]);
    v7 = Pool;
    if ( !Pool )
      goto LABEL_18;
    LODWORD(v37[0]) = v37[0] & 0xFFFFFF00 | 0xA;
    v38 = v38 & 0xFFFFFF00 | 0xD3;
    LODWORD(v40) = StorSendMFNDCommand((__int64)a1, Pool, 0LL, 0x40u, v37, v36, 1u, 0, 0, 0LL, &v41);
    if ( (int)v40 < 0 )
      goto LABEL_54;
    v12 = *(_DWORD **)(a1[770] + 112);
    if ( *(_BYTE *)v7 )
    {
      if ( *(_BYTE *)v7 == 1 )
      {
        *v12 = 2;
      }
      else if ( *(_BYTE *)v7 == 2 )
      {
        *v12 = 3;
      }
      else
      {
        *v12 = 4;
      }
    }
    else
    {
      *v12 = 1;
    }
    *(_DWORD *)(*(_QWORD *)(a1[770] + 112) + 4LL) = v7[3];
    *(_DWORD *)(*(_QWORD *)(a1[770] + 112) + 8LL) = v7[4];
    *(_DWORD *)(*(_QWORD *)(a1[770] + 112) + 12LL) = v7[7];
    *(_DWORD *)(*(_QWORD *)(a1[770] + 112) + 16LL) = v7[8];
    *(_BYTE *)(*(_QWORD *)(a1[770] + 112) + 20LL) |= 1u;
    ExFreePoolWithTag(v7, 0x464D6152u);
    v7 = 0LL;
  }
  if ( (*(_BYTE *)(v6 + 2) & 1) != 0 )
  {
    v13 = *(_DWORD *)(v6 + 12);
    v14 = *(_DWORD **)(a1[770] + 112);
    v15 = v14[1];
    if ( v15 < v13
      || (v16 = v14[2], v17 = *(_DWORD *)(v6 + 16), v16 < v17)
      || (v18 = v14[3], v19 = *(_DWORD *)(v6 + 20), v18 < v19)
      || (v20 = v14[4], v21 = *(_DWORD *)(v6 + 24), v20 < v21) )
    {
      LODWORD(v40) = -1073741584;
      goto LABEL_54;
    }
    v22 = v15 - v13;
    v23 = v16 - v17;
    v24 = v18 - v19;
    v25 = v20 - v21;
  }
  else
  {
    v26 = (unsigned int *)a1[769];
    if ( v26
      && *(unsigned int *)(v6 + 12) + (unsigned __int64)*(unsigned int *)(*(_QWORD *)(a1[770] + 112) + 4LL) > v26[9]
      || (v27 = *(unsigned int *)(v6 + 16),
          v28 = *(_DWORD **)(a1[770] + 112),
          v29 = (unsigned int)v28[2],
          v29 + v27 > (unsigned __int64)v26[11])
      || (v30 = (unsigned int)v28[3], v31 = *(unsigned int *)(v6 + 20), v30 + v31 > (unsigned __int64)v26[13])
      || (v32 = *(unsigned int *)(v6 + 24), v40 = (unsigned int)v28[4], v40 + v32 > (unsigned __int64)v26[15]) )
    {
      LODWORD(v40) = -1073741583;
      goto LABEL_54;
    }
    v23 = v27 + v29;
    v22 = *(_DWORD *)(v6 + 12) + v28[1];
    v24 = v31 + v30;
    v25 = v40 + v32;
  }
  v39 = 1;
  LODWORD(v40) = StorMFNDAttemptSwitchToAdminPrivilege((__int64)a1);
  if ( (int)v40 < 0 )
    goto LABEL_54;
  v33 = (_BYTE *)RaidAllocatePool(64LL, 64LL, 1179476306LL, a1[1]);
  v7 = v33;
  if ( !v33 )
  {
LABEL_18:
    LODWORD(v40) = -1073741670;
    goto LABEL_54;
  }
  switch ( *(_DWORD *)(v6 + 8) )
  {
    case 1:
      *v33 = 0;
      break;
    case 2:
      *v33 = 1;
      break;
    case 3:
      *v33 = 2;
      break;
  }
  *((_DWORD *)v33 + 3) = v22;
  *((_DWORD *)v33 + 4) = v23;
  *((_DWORD *)v33 + 7) = v24;
  *((_DWORD *)v33 + 8) = v25;
  LODWORD(v37[0]) = v37[0] & 0xFFFFFF00 | 9;
  v38 = v38 & 0xFFFFFF00 | 0xD3;
  LODWORD(v40) = StorSendMFNDCommand((__int64)a1, v33, 0LL, 0x40u, v37, v36, 2u, 0, 0, 0LL, &v41);
  if ( (int)v40 >= 0 )
  {
    **(_DWORD **)(a1[770] + 112) = *(_DWORD *)(v6 + 8);
    *(_DWORD *)(*(_QWORD *)(a1[770] + 112) + 4LL) = v22;
    *(_DWORD *)(*(_QWORD *)(a1[770] + 112) + 8LL) = v23;
    *(_DWORD *)(*(_QWORD *)(a1[770] + 112) + 12LL) = v24;
    *(_DWORD *)(*(_QWORD *)(a1[770] + 112) + 16LL) = v25;
  }
LABEL_54:
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(a1[770] + 104), 0xFFFFFFFF) != 1 )
    KeSetEvent((PRKEVENT)(a1[770] + 80), 0, 0);
  if ( v7 )
    ExFreePoolWithTag(v7, 0x464D6152u);
  v34 = v40;
  v8 = v41;
  if ( (int)v40 < 0 )
    goto LABEL_61;
LABEL_62:
  if ( v39 )
    StorMFNDAttemptSwitchToUserPrivilege((__int64)a1);
  StorLogMFNDSetMigrationQoS((__int64)a1, v6, v8, v34);
  return v34;
}
