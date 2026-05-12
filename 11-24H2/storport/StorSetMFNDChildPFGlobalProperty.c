/*
 * XREFs of StorSetMFNDChildPFGlobalProperty @ 0x1401916CC
 * Callers:
 *     RaidAdapterStorageInternalSetPropertyIoctl @ 0x140063594 (RaidAdapterStorageInternalSetPropertyIoctl.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000E820 (RaidAllocatePool.c)
 *     StorIsMFNDSupported @ 0x140055FDC (StorIsMFNDSupported.c)
 *     StorMapMFNDErrorToNtStatus @ 0x140067C1C (StorMapMFNDErrorToNtStatus.c)
 *     StorLogMFNDSetChildPFProperty @ 0x1400C6628 (StorLogMFNDSetChildPFProperty.c)
 *     StorMFNDAttemptSwitchToAdminPrivilege @ 0x1400C7110 (StorMFNDAttemptSwitchToAdminPrivilege.c)
 *     StorMFNDAttemptSwitchToUserPrivilege @ 0x1400C71BC (StorMFNDAttemptSwitchToUserPrivilege.c)
 *     memset_0 @ 0x140143A80 (memset_0.c)
 *     StorSendMFNDCommand @ 0x140190F24 (StorSendMFNDCommand.c)
 */

__int64 __fastcall StorSetMFNDChildPFGlobalProperty(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v6; // rdi
  char v7; // r15
  unsigned __int16 v8; // si
  __int64 v9; // rcx
  _BYTE *Pool; // r12
  __int16 v11; // ax
  int v12; // ebx
  __int64 v14; // [rsp+28h] [rbp-51h]
  _OWORD v15[2]; // [rsp+60h] [rbp-19h] BYREF
  unsigned int v16; // [rsp+88h] [rbp+Fh]
  int v17; // [rsp+8Ch] [rbp+13h]
  int v18; // [rsp+E8h] [rbp+6Fh] BYREF
  int v19; // [rsp+F0h] [rbp+77h] BYREF

  v6 = 0LL;
  v7 = 0;
  memset_0(v15, 0, 0x40uLL);
  v8 = 0;
  *a3 = 0LL;
  v19 = 0;
  if ( StorIsMFNDSupported(a1) )
  {
    if ( *(_DWORD *)(*(_QWORD *)(a2 + 184) + 16LL) >= 0x28u )
    {
      v6 = *(_QWORD *)(a2 + 24) + 8LL;
      if ( *(_WORD *)v6 == 1
        && *(_DWORD *)(*(_QWORD *)(a2 + 24) + 12LL) >= 0x20u
        && *(_WORD *)(*(_QWORD *)(a2 + 24) + 24LL) == 1
        && *(_WORD *)(*(_QWORD *)(a2 + 24) + 26LL) >= 0x10u
        && (*(_BYTE *)(*(_QWORD *)(a2 + 24) + 28LL) & 1) != 0 )
      {
        v7 = 1;
        v18 = StorMFNDAttemptSwitchToAdminPrivilege(v9);
        if ( v18 >= 0 )
        {
          Pool = (_BYTE *)RaidAllocatePool(64LL, 512LL, 1179476306LL, *(_QWORD *)(a1 + 8));
          if ( Pool )
          {
            v11 = *(_WORD *)(v6 + 22);
            v17 |= 1u;
            *(_WORD *)Pool = v11;
            Pool[2] = *(_BYTE *)(v6 + 24);
            Pool[3] = *(_BYTE *)(v6 + 25);
            Pool[4] = *(_BYTE *)(v6 + 26);
            Pool[5] = *(_BYTE *)(v6 + 27);
            LODWORD(v15[0]) = v15[0] & 0xFFFFFF00 | 9;
            v16 = v16 & 0xFFFFFF00 | 0xD2;
            v18 = StorSendMFNDCommand(a1, Pool, 0LL, 0x200u, v15, v14, 2u, 0, 0, 0LL, &v19);
            v12 = v18;
            ExFreePoolWithTag(Pool, 0x464D6152u);
            v8 = v19;
            if ( v12 >= 0 )
              goto LABEL_17;
          }
          else
          {
            v18 = -1073741670;
          }
        }
      }
      else
      {
        v18 = -1073741811;
      }
    }
    else
    {
      v18 = -1073741585;
    }
  }
  else
  {
    v18 = -1073741637;
  }
  StorMapMFNDErrorToNtStatus(v8, &v18);
  v12 = v18;
  if ( v7 )
LABEL_17:
    StorMFNDAttemptSwitchToUserPrivilege(a1);
  StorLogMFNDSetChildPFProperty(a1, v6, v8, v12);
  return (unsigned int)v12;
}
