/*
 * XREFs of StorSetMFNDOperationPrivilege @ 0x1400C7364
 * Callers:
 *     StorMFNDAttemptSwitchToAdminPrivilege @ 0x1400C7110 (StorMFNDAttemptSwitchToAdminPrivilege.c)
 *     StorMFNDAttemptSwitchToUserPrivilege @ 0x1400C71BC (StorMFNDAttemptSwitchToUserPrivilege.c)
 * Callees:
 *     StorLogMFNDSetOperationInfo @ 0x1400C6F68 (StorLogMFNDSetOperationInfo.c)
 *     memset_0 @ 0x140143A80 (memset_0.c)
 *     StorSendMFNDCommand @ 0x140190F24 (StorSendMFNDCommand.c)
 */

__int64 __fastcall StorSetMFNDOperationPrivilege(__int64 a1, char a2)
{
  int v5; // esi
  __int64 v6; // rcx
  _DWORD v7[10]; // [rsp+60h] [rbp-48h] BYREF
  unsigned int v8; // [rsp+88h] [rbp-20h]
  unsigned int v9; // [rsp+8Ch] [rbp-1Ch]

  memset_0(v7, 0, 0x40uLL);
  if ( _interlockedbittestandset((volatile signed __int32 *)(*(_QWORD *)(a1 + 6160) + 8LL), 0) == 1 )
  {
    *(_DWORD *)(*(_QWORD *)(a1 + 6160) + 8LL) |= 8u;
    return 3221226614LL;
  }
  else
  {
    v7[0] = 9;
    v8 = v8 & 0xFFFFFF00 | 0xD1;
    v9 = v9 & 0xFFFFFFE1 | (16 * (a2 & 1)) | 1;
    BYTE1(v9) = 0;
    v5 = StorSendMFNDCommand(a1, 0, 0, 0, (__int64)v7);
    if ( v5 < 0 )
    {
      StorLogMFNDSetOperationInfo(a1, 0, a2, 1, 0, v5);
    }
    else
    {
      v6 = *(_QWORD *)(a1 + 6160);
      if ( a2 )
      {
        if ( *(_DWORD *)(v6 + 32) != 1 )
          *(_DWORD *)(v6 + 32) = 1;
      }
      else if ( *(_DWORD *)(v6 + 32) )
      {
        *(_DWORD *)(v6 + 32) = 0;
      }
    }
    *(_DWORD *)(*(_QWORD *)(a1 + 6160) + 8LL) &= ~1u;
    return (unsigned int)v5;
  }
}
