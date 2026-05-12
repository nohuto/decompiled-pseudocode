/*
 * XREFs of StorSetMFNDChildPFCommandPermission @ 0x1401914C8
 * Callers:
 *     RaidAdapterStorageInternalSetPropertyIoctl @ 0x140063594 (RaidAdapterStorageInternalSetPropertyIoctl.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000E820 (RaidAllocatePool.c)
 *     StorIsMFNDSupported @ 0x140055FDC (StorIsMFNDSupported.c)
 *     StorMapMFNDErrorToNtStatus @ 0x140067C1C (StorMapMFNDErrorToNtStatus.c)
 *     StorLogMFNDSetChildPFCommandPermission @ 0x1400C6454 (StorLogMFNDSetChildPFCommandPermission.c)
 *     StorMFNDAttemptSwitchToAdminPrivilege @ 0x1400C7110 (StorMFNDAttemptSwitchToAdminPrivilege.c)
 *     StorMFNDAttemptSwitchToUserPrivilege @ 0x1400C71BC (StorMFNDAttemptSwitchToUserPrivilege.c)
 *     memset_0 @ 0x140143A80 (memset_0.c)
 *     StorSendMFNDCommand @ 0x140190F24 (StorSendMFNDCommand.c)
 */

__int64 __fastcall StorSetMFNDChildPFCommandPermission(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v6; // rdi
  char v7; // r12
  unsigned __int16 v8; // si
  __int64 v9; // rcx
  ULONG v10; // ebx
  _BYTE *Pool; // r15
  __int64 v12; // rdx
  int v13; // ebx
  __int64 v15; // [rsp+28h] [rbp-41h]
  _OWORD v16[2]; // [rsp+60h] [rbp-9h] BYREF
  ULONG v17; // [rsp+88h] [rbp+1Fh]
  char v18; // [rsp+9Ch] [rbp+33h]
  int v19; // [rsp+D8h] [rbp+6Fh] BYREF
  int v20; // [rsp+E0h] [rbp+77h] BYREF

  v6 = 0LL;
  v7 = 0;
  memset_0(v16, 0, 0x40uLL);
  v8 = 0;
  *a3 = 0LL;
  v20 = 0;
  if ( StorIsMFNDSupported(a1) )
  {
    if ( *(_DWORD *)(*(_QWORD *)(a1 + 6160) + 36LL) == 1 )
    {
      if ( *(_DWORD *)(*(_QWORD *)(a2 + 184) + 16LL) >= 0x28u )
      {
        v6 = *(_QWORD *)(a2 + 24) + 8LL;
        if ( *(_WORD *)v6 == 1
          && *(_DWORD *)(*(_QWORD *)(a2 + 24) + 12LL) >= 0x20u
          && (unsigned int)(*(_DWORD *)(*(_QWORD *)(a2 + 24) + 20LL) - 1) <= 0xFE )
        {
          v7 = 1;
          v19 = StorMFNDAttemptSwitchToAdminPrivilege(v9);
          if ( v19 >= 0 )
          {
            v10 = 4 * *(_DWORD *)(v6 + 12) + 4;
            Pool = (_BYTE *)RaidAllocatePool(64LL, v10, 1179476306LL, *(_QWORD *)(a1 + 8));
            if ( Pool )
            {
              v12 = 0LL;
              for ( *Pool = *(_BYTE *)(v6 + 12); (unsigned int)v12 < *(_DWORD *)(v6 + 12); v12 = (unsigned int)(v12 + 1) )
              {
                Pool[4 * v12 + 4] = *(_BYTE *)(v6 + 16LL * (unsigned int)v12 + 28);
                if ( (*(_DWORD *)(v6 + 16LL * (unsigned int)v12 + 24) & 1) != 0 )
                  *(_DWORD *)&Pool[4 * v12 + 4] |= 0x100u;
              }
              v18 = 7;
              LODWORD(v16[0]) = v16[0] & 0xFFFFFF00 | 0xD1;
              v17 = v10 >> 2;
              v19 = StorSendMFNDCommand(a1, Pool, 0LL, v10, v16, v15, 2u, 0, 0, 0LL, &v20);
              v13 = v19;
              ExFreePoolWithTag(Pool, 0x464D6152u);
              v8 = v20;
              if ( v13 >= 0 )
                goto LABEL_21;
            }
            else
            {
              v19 = -1073741670;
            }
          }
        }
        else
        {
          v19 = -1073741811;
        }
      }
      else
      {
        v19 = -1073741585;
      }
    }
    else
    {
      v19 = -1073741436;
    }
  }
  else
  {
    v19 = -1073741637;
  }
  StorMapMFNDErrorToNtStatus(v8, &v19);
  v13 = v19;
  if ( v7 )
LABEL_21:
    StorMFNDAttemptSwitchToUserPrivilege(a1);
  StorLogMFNDSetChildPFCommandPermission(a1, v6, v8, v13);
  return (unsigned int)v13;
}
