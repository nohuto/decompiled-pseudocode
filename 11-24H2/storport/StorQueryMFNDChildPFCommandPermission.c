/*
 * XREFs of StorQueryMFNDChildPFCommandPermission @ 0x14018EE90
 * Callers:
 *     RaidAdapterStorageInternalQueryPropertyIoctl @ 0x140062DCC (RaidAdapterStorageInternalQueryPropertyIoctl.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000E820 (RaidAllocatePool.c)
 *     StorIsMFNDSupported @ 0x140055FDC (StorIsMFNDSupported.c)
 *     StorMapMFNDErrorToNtStatus @ 0x140067C1C (StorMapMFNDErrorToNtStatus.c)
 *     StorLogMFNDQueryChildPFCommandPermission @ 0x1400C5128 (StorLogMFNDQueryChildPFCommandPermission.c)
 *     memset_0 @ 0x140143A80 (memset_0.c)
 *     StorSendMFNDCommand @ 0x140190F24 (StorSendMFNDCommand.c)
 */

__int64 __fastcall StorQueryMFNDChildPFCommandPermission(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v3; // rbx
  _DWORD *v5; // rsi
  size_t v7; // r12
  __int64 v8; // rdi
  unsigned __int16 v9; // r15
  __int64 Pool; // rax
  _WORD *v11; // r14
  int v12; // ebx
  unsigned int v13; // r15d
  _QWORD *v14; // rcx
  unsigned int v15; // eax
  unsigned int v16; // r8d
  __int64 v17; // rcx
  _DWORD *v18; // rdx
  _QWORD *v19; // rcx
  __int64 v20; // rax
  _DWORD v22[15]; // [rsp+60h] [rbp-19h] BYREF
  char v23; // [rsp+9Ch] [rbp+23h]
  int v24; // [rsp+E8h] [rbp+6Fh] BYREF
  _QWORD *v25; // [rsp+F0h] [rbp+77h]
  int v26; // [rsp+F8h] [rbp+7Fh]

  v25 = a3;
  v3 = *(_QWORD *)(a2 + 184);
  v5 = *(_DWORD **)(a2 + 24);
  v7 = *(unsigned int *)(v3 + 8);
  memset_0(v22, 0, 0x40uLL);
  v8 = 0LL;
  v9 = 0;
  v26 = 0;
  *a3 = 0LL;
  if ( !StorIsMFNDSupported(a1) )
  {
    v24 = -1073741637;
    goto LABEL_27;
  }
  if ( *(_DWORD *)(*(_QWORD *)(a1 + 6160) + 36LL) != 1 )
  {
    v24 = -1073741436;
    goto LABEL_27;
  }
  if ( *(_DWORD *)(v3 + 16) < 0x18u )
  {
    v24 = -1073741585;
    goto LABEL_27;
  }
  if ( *((_WORD *)v5 + 4) == 1 && v5[3] >= 0x10u )
  {
    if ( !v5 || v7 < 8 )
    {
      v24 = -1073741820;
      goto LABEL_27;
    }
    Pool = RaidAllocatePool(64LL, 1024LL, 1179476306LL, *(_QWORD *)(a1 + 8));
    v11 = (_WORD *)Pool;
    if ( !Pool )
    {
      v24 = -1073741670;
      goto LABEL_27;
    }
    v22[10] = 256;
    v23 = 6;
    v22[0] = v22[0] & 0xFFFFFF00 | 0xD2;
    v24 = StorSendMFNDCommand(a1, Pool, 0, 1024, (__int64)v22);
    v12 = v24;
    if ( v24 >= 0 )
    {
      v13 = 16 * (unsigned __int16)*v11 + 12;
      memset_0(v5, 0, v7);
      *(_WORD *)v5 = 1;
      if ( v7 >= v13 )
      {
        LOWORD(v15) = *v11;
        v16 = 0;
        if ( *v11 )
        {
          do
          {
            v17 = 2LL * v16;
            v5[2 * v17 + 3] = 1048577;
            v18 = &v5[4 * v16];
            LOBYTE(v5[2 * v17 + 5]) = v11[2 * v16 + 2];
            if ( (*(_DWORD *)&v11[2 * v16 + 2] & 0x100) != 0 )
              v18[4] |= 1u;
            if ( (*(_DWORD *)&v11[2 * v16 + 2] & 0x200) != 0 )
              v18[4] |= 2u;
            v15 = (unsigned __int16)*v11;
            ++v16;
          }
          while ( v16 < v15 );
        }
        v19 = v25;
        v5[2] = (unsigned __int16)v15;
        v20 = 16 * (unsigned int)(unsigned __int16)*v11 + 12;
        v5[1] = v20;
        *v19 = v20;
      }
      else
      {
        v14 = v25;
        v12 = -2147483643;
        v5[1] = v13;
        v24 = -2147483643;
        *v14 = 8LL;
      }
    }
    ExFreePoolWithTag(v11, 0x464D6152u);
    v9 = v26;
  }
  else
  {
    v12 = -1073741811;
    v24 = -1073741811;
  }
  if ( v12 >= 0 )
  {
LABEL_28:
    v8 = (__int64)v5;
    goto LABEL_29;
  }
LABEL_27:
  StorMapMFNDErrorToNtStatus(v9, &v24);
  v12 = v24;
  if ( v24 >= 0 )
    goto LABEL_28;
LABEL_29:
  StorLogMFNDQueryChildPFCommandPermission(a1, v8, v9, v12);
  return (unsigned int)v12;
}
