/*
 * XREFs of StorSetMFNDOperationInfo @ 0x14019289C
 * Callers:
 *     RaidAdapterStorageInternalSetPropertyIoctl @ 0x140063594 (RaidAdapterStorageInternalSetPropertyIoctl.c)
 * Callees:
 *     StorIsMFNDSupported @ 0x140055FDC (StorIsMFNDSupported.c)
 *     StorMapMFNDErrorToNtStatus @ 0x140067C1C (StorMapMFNDErrorToNtStatus.c)
 *     StorLogMFNDSetOperationInfo @ 0x1400C6F68 (StorLogMFNDSetOperationInfo.c)
 *     StorMFNDAttemptSwitchToAdminPrivilege @ 0x1400C7110 (StorMFNDAttemptSwitchToAdminPrivilege.c)
 *     StorMFNDAttemptSwitchToUserPrivilege @ 0x1400C71BC (StorMFNDAttemptSwitchToUserPrivilege.c)
 *     memset_0 @ 0x140143A80 (memset_0.c)
 *     StorSendMFNDCommand @ 0x140190F24 (StorSendMFNDCommand.c)
 */

__int64 __fastcall StorSetMFNDOperationInfo(__int64 a1, __int64 a2, _QWORD *a3)
{
  int v3; // edi
  __int64 v7; // rsi
  char v8; // r12
  __int64 v9; // rcx
  int v10; // ecx
  char v11; // al
  unsigned int v12; // ebx
  char v13; // al
  char v14; // r9
  char v15; // r8
  __int64 v17; // [rsp+28h] [rbp-41h]
  _OWORD v18[2]; // [rsp+60h] [rbp-9h] BYREF
  unsigned int v19; // [rsp+88h] [rbp+1Fh]
  unsigned int v20; // [rsp+8Ch] [rbp+23h]
  int v21; // [rsp+D8h] [rbp+6Fh] BYREF
  int v22; // [rsp+E0h] [rbp+77h] BYREF

  LOBYTE(v3) = 0;
  v7 = 0LL;
  v8 = 0;
  memset_0(v18, 0, 0x40uLL);
  v22 = 0;
  *a3 = 0LL;
  if ( !StorIsMFNDSupported(a1) )
  {
    v21 = -1073741637;
    goto LABEL_17;
  }
  if ( *(_DWORD *)(*(_QWORD *)(a2 + 184) + 16LL) < 0x1Cu )
  {
    v21 = -1073741585;
    goto LABEL_17;
  }
  v7 = *(_QWORD *)(a2 + 24) + 8LL;
  if ( *(_WORD *)v7 != 1
    || *(_DWORD *)(*(_QWORD *)(a2 + 24) + 12LL) < 0x14u
    || *(_BYTE *)(*(_QWORD *)(a2 + 24) + 25LL)
    || *(_BYTE *)(*(_QWORD *)(a2 + 24) + 24LL) && !*(_DWORD *)(*(_QWORD *)(a2 + 24) + 20LL) )
  {
    v21 = -1073741811;
    goto LABEL_17;
  }
  v8 = 1;
  v21 = StorMFNDAttemptSwitchToAdminPrivilege(v9);
  if ( v21 < 0 )
    goto LABEL_17;
  v10 = *(_BYTE *)(v7 + 16) & 1;
  LODWORD(v18[0]) = v18[0] & 0xFFFFFF00 | 9;
  v19 = v19 & 0xFFFFFF00 | 0xD1;
  v11 = *(_BYTE *)(v7 + 12);
  v20 = v20 & 0xFFFFFFE0 | *(_BYTE *)(v7 + 17) & 0xF | (16 * v10);
  BYTE1(v20) = v11;
  v21 = StorSendMFNDCommand(a1, 0LL, 0LL, 0, v18, v17, 0, 1, 0, 0LL, &v22);
  v12 = v21;
  if ( v21 < 0 )
  {
LABEL_17:
    StorMapMFNDErrorToNtStatus(v22, &v21);
    v12 = v21;
    if ( !v8 )
      goto LABEL_19;
    goto LABEL_18;
  }
  if ( !*(_BYTE *)(v7 + 17) )
    *(_DWORD *)(*(_QWORD *)(a1 + 6160) + 36LL) = *(_BYTE *)(v7 + 16) != 0;
  v13 = *(_BYTE *)(a1 + 111);
  if ( (v13 & 2) == 0 )
    *(_BYTE *)(a1 + 111) = v13 | 2;
LABEL_18:
  StorMFNDAttemptSwitchToUserPrivilege(a1);
LABEL_19:
  if ( v7 )
  {
    v14 = *(_BYTE *)(v7 + 17);
    v15 = *(_BYTE *)(v7 + 16);
    v3 = *(_DWORD *)(v7 + 12);
  }
  else
  {
    v14 = 0;
    v15 = 0;
  }
  StorLogMFNDSetOperationInfo(a1, v3, v15, v14, v22, v12);
  return v12;
}
