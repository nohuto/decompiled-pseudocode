/*
 * XREFs of StorQueryMFNDOperationInfo @ 0x140190B74
 * Callers:
 *     RaidAdapterStorageInternalQueryPropertyIoctl @ 0x140062DCC (RaidAdapterStorageInternalQueryPropertyIoctl.c)
 * Callees:
 *     StorIsMFNDSupported @ 0x140055FDC (StorIsMFNDSupported.c)
 *     StorMapMFNDErrorToNtStatus @ 0x140067C1C (StorMapMFNDErrorToNtStatus.c)
 *     StorLogMFNDQueryOperationInfo @ 0x1400C5DAC (StorLogMFNDQueryOperationInfo.c)
 *     memset_0 @ 0x140143A80 (memset_0.c)
 *     StorSendMFNDCommand @ 0x140190F24 (StorSendMFNDCommand.c)
 */

__int64 __fastcall StorQueryMFNDOperationInfo(__int64 a1, __int64 a2, _QWORD *a3)
{
  _DWORD *v4; // r15
  size_t v6; // r12
  int v7; // edi
  int v8; // ecx
  int v9; // r9d
  int v10; // r14d
  int v11; // ebx
  unsigned int v12; // edi
  char v13; // al
  int v14; // eax
  __int64 v15; // rcx
  __int64 v16; // rax
  _DWORD v18[10]; // [rsp+60h] [rbp-19h] BYREF
  unsigned int v19; // [rsp+88h] [rbp+Fh]
  int v20; // [rsp+E8h] [rbp+6Fh] BYREF
  int v21; // [rsp+F0h] [rbp+77h]
  unsigned int v22; // [rsp+F8h] [rbp+7Fh]

  v4 = *(_DWORD **)(a2 + 24);
  v6 = *(unsigned int *)(*(_QWORD *)(a2 + 184) + 8LL);
  memset_0(v18, 0, 0x40uLL);
  v22 = 0;
  LOBYTE(v7) = 0;
  v21 = 0;
  *a3 = 0LL;
  LOBYTE(v10) = -1;
  if ( StorIsMFNDSupported(a1) )
  {
    if ( v4 && v6 >= 0x10 )
    {
      v18[0] = 10;
      v19 = v19 & 0xFFFFFF00 | 0xD1;
      v20 = StorSendMFNDCommand(v8, 0, 0, v9, (__int64)v18);
      v11 = v20;
      if ( v20 >= 0 )
      {
        memset_0(v4, 0, v6);
        v12 = v22;
        v13 = v22;
        *(_WORD *)v4 = 1;
        v14 = v13 & 1;
        v7 = (v12 >> 1) & 1;
        v4[1] = 16;
        v4[2] = v14;
        v15 = *(_QWORD *)(a1 + 6160);
        if ( v14 != *(_DWORD *)(v15 + 36) )
          *(_DWORD *)(v15 + 36) = v14;
        v16 = *(_QWORD *)(a1 + 6160);
        if ( v7 != *(_DWORD *)(v16 + 32) )
          *(_DWORD *)(v16 + 32) = v7;
        *a3 = 16LL;
      }
      LOWORD(v9) = v21;
    }
    else
    {
      v11 = -1073741789;
      v20 = -1073741789;
    }
    if ( v11 >= 0 )
      goto LABEL_16;
  }
  else
  {
    v20 = -1073741637;
  }
  StorMapMFNDErrorToNtStatus(v9, &v20);
  v11 = v20;
  if ( v20 >= 0 )
  {
LABEL_16:
    v10 = v4[2];
    goto LABEL_17;
  }
  LOBYTE(v7) = -1;
LABEL_17:
  StorLogMFNDQueryOperationInfo(a1, v10, v7, v9, v11);
  return (unsigned int)v11;
}
