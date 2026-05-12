/*
 * XREFs of StorQueryMFNDChildPFGlobalProperty @ 0x14018F10C
 * Callers:
 *     RaidAdapterStorageInternalQueryPropertyIoctl @ 0x140062DCC (RaidAdapterStorageInternalQueryPropertyIoctl.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000E820 (RaidAllocatePool.c)
 *     StorIsMFNDSupported @ 0x140055FDC (StorIsMFNDSupported.c)
 *     StorMapMFNDErrorToNtStatus @ 0x140067C1C (StorMapMFNDErrorToNtStatus.c)
 *     StorLogMFNDQueryChildPFProperty @ 0x1400C54E8 (StorLogMFNDQueryChildPFProperty.c)
 *     memset_0 @ 0x140143A80 (memset_0.c)
 *     StorSendMFNDCommand @ 0x140190F24 (StorSendMFNDCommand.c)
 */

__int64 __fastcall StorQueryMFNDChildPFGlobalProperty(__int64 a1, __int64 a2, _QWORD *a3)
{
  _DWORD *v4; // r15
  size_t v6; // r12
  __int64 v7; // rbx
  unsigned __int16 v8; // r14
  __int64 Pool; // rax
  _BYTE *v10; // rsi
  int v11; // edi
  _DWORD v13[10]; // [rsp+60h] [rbp-19h] BYREF
  unsigned int v14; // [rsp+88h] [rbp+Fh]
  int v15; // [rsp+E8h] [rbp+6Fh] BYREF
  _QWORD *v16; // [rsp+F0h] [rbp+77h]
  int v17; // [rsp+F8h] [rbp+7Fh]

  v16 = a3;
  v4 = *(_DWORD **)(a2 + 24);
  v6 = *(unsigned int *)(*(_QWORD *)(a2 + 184) + 8LL);
  memset_0(v13, 0, 0x40uLL);
  v7 = 0LL;
  v8 = 0;
  v17 = 0;
  *a3 = 0LL;
  if ( !StorIsMFNDSupported(a1) )
  {
    v15 = -1073741637;
LABEL_12:
    StorMapMFNDErrorToNtStatus(v8, &v15);
    v11 = v15;
    goto LABEL_13;
  }
  if ( !v4 || v6 < 0x10 )
  {
    v15 = -1073741789;
    goto LABEL_12;
  }
  Pool = RaidAllocatePool(64LL, 512LL, 1179476306LL, *(_QWORD *)(a1 + 8));
  v10 = (_BYTE *)Pool;
  if ( !Pool )
  {
    v15 = -1073741670;
    goto LABEL_12;
  }
  v13[0] = 10;
  v14 = v14 & 0xFFFFFF00 | 0xD2;
  v15 = StorSendMFNDCommand(a1, Pool, 0, 512, (__int64)v13);
  v11 = v15;
  if ( v15 >= 0 )
  {
    memset_0(v4, 0, v6);
    *v4 = 1048577;
    *((_WORD *)v4 + 2) = 1;
    *((_WORD *)v4 + 3) = *(_WORD *)v10;
    *((_BYTE *)v4 + 8) = v10[2];
    *((_BYTE *)v4 + 9) = v10[3];
    *((_BYTE *)v4 + 10) = v10[4];
    *((_BYTE *)v4 + 11) = v10[5];
    *v16 = 16LL;
  }
  ExFreePoolWithTag(v10, 0x464D6152u);
  v8 = v17;
  if ( v11 < 0 )
    goto LABEL_12;
LABEL_13:
  if ( v11 >= 0 )
    v7 = (__int64)v4;
  StorLogMFNDQueryChildPFProperty(a1, v7, v8, v11);
  return (unsigned int)v11;
}
