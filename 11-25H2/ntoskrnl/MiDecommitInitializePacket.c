/*
 * XREFs of MiDecommitInitializePacket @ 0x14038308C
 * Callers:
 *     MiDecommitPages @ 0x140381AE0 (MiDecommitPages.c)
 *     MiDeletePagablePteRange @ 0x140383DB4 (MiDeletePagablePteRange.c)
 *     MiDeleteEmptyPageTables @ 0x1403D7BA0 (MiDeleteEmptyPageTables.c)
 *     MiStoreDiscardPoisonedPage @ 0x1406806F8 (MiStoreDiscardPoisonedPage.c)
 * Callees:
 *     MiIsStoreProcess @ 0x140239E20 (MiIsStoreProcess.c)
 *     EtwTraceKernelEvent @ 0x140254220 (EtwTraceKernelEvent.c)
 *     MiVaToFlushVm @ 0x140327844 (MiVaToFlushVm.c)
 *     MiVadPureReserve @ 0x140384DA0 (MiVadPureReserve.c)
 *     MiMakeDemandZeroPte @ 0x140385190 (MiMakeDemandZeroPte.c)
 *     MiDecommitComputeCheckPte @ 0x1404114A0 (MiDecommitComputeCheckPte.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 */

__int64 __fastcall MiDecommitInitializePacket(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        __int64 *a8,
        __int64 a9)
{
  unsigned int v11; // r10d
  __int64 v12; // rsi
  __int64 v13; // r13
  struct _LIST_ENTRY **v14; // r8
  struct _LIST_ENTRY **v15; // rax
  int v16; // edx
  __int64 v17; // rax
  __int64 DemandZeroPte; // rax
  int v19; // eax
  unsigned __int64 v20; // rax
  __int64 result; // rax
  __int64 v22; // [rsp+38h] [rbp-70h]
  _QWORD v23[3]; // [rsp+40h] [rbp-68h] BYREF
  _QWORD *v24; // [rsp+58h] [rbp-50h] BYREF
  int v25; // [rsp+60h] [rbp-48h]
  int v26; // [rsp+64h] [rbp-44h]

  v22 = a2;
  if ( a5 && (a7 & 0x20) == 0 )
  {
    MiIsStoreProcess((__int64)KeGetCurrentThread()->ApcState.Process);
    a2 = v22;
  }
  v11 = 1;
  if ( a6 )
  {
    *(_QWORD *)a1 = a6;
    if ( (*(_DWORD *)(a6 + 48) & 0x4200000) == 0x4200000 )
      *(_DWORD *)(a1 + 136) = 1;
    *(_QWORD *)(a1 + 184) = 8
                          * ((*(unsigned int *)(a6 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a6 + 33) << 32)) & 0xFFFFFFFFFLL)
                          - 0x98000000000LL;
  }
  *(_QWORD *)(a1 + 24) = a9;
  *(_QWORD *)(a1 + 48) = a4;
  v12 = a2 << 25 >> 16;
  v13 = 16LL;
  *(_QWORD *)(a1 + 80) = a2 + 8 * (a3 - 1);
  if ( a5 )
  {
    v14 = (struct _LIST_ENTRY **)(a5 + 1024);
    *(_QWORD *)(a1 + 32) = a5 + 1024;
    *(_QWORD *)(a1 + 8) = *((_QWORD *)qword_140E2FD48 + *(unsigned __int16 *)(a5 + 1198));
    if ( (a7 & 0x20) == 0 )
      *(_QWORD *)(a1 + 168) = MiMakeDemandZeroPte(16LL);
  }
  else
  {
    v15 = MiVaToFlushVm(a2 << 25 >> 16);
    *(_QWORD *)(a1 + 32) = v15;
    v14 = v15;
    v11 = 1;
    *(_QWORD *)(a1 + 8) = *((_QWORD *)qword_140E2FD48 + *((unsigned __int16 *)v15 + 87));
  }
  v16 = (_DWORD)v14[23] & 0xF;
  *(_DWORD *)(a1 + 40) = v16;
  if ( v16 != 2 )
  {
    if ( v16 == 3 )
    {
      if ( (a7 & 0x20) == 0 )
        *(_QWORD *)(a1 + 168) = MiMakeDemandZeroPte(16LL);
    }
    else if ( v16 != 4 )
    {
      goto LABEL_23;
    }
  }
  if ( (BYTE4(PerfGlobalGroupMask) & (unsigned __int8)v11) != 0 )
  {
    v23[2] = (unsigned int)a3;
    v23[1] = v12;
    if ( v16 - 3 <= v11 )
      v17 = 6LL;
    else
      v17 = 4LL;
    v26 = 0;
    v23[0] = v17;
    v25 = 24;
    v24 = v23;
    EtwTraceKernelEvent((int)&v24, v11, 0x20000001u, 633, 290462468);
  }
LABEL_23:
  *(_QWORD *)(a1 + 176) = *(_QWORD *)(a1 + 168);
  if ( a5 )
  {
    if ( a8 )
    {
      DemandZeroPte = *a8;
LABEL_26:
      *(_QWORD *)(a1 + 168) = DemandZeroPte;
      *(_QWORD *)(a1 + 176) = DemandZeroPte;
      goto LABEL_37;
    }
    if ( !a6 )
      goto LABEL_37;
    if ( (*(unsigned int *)(a6 + 52) | ((unsigned __int64)*(unsigned __int8 *)(a6 + 34) << 32)) == 0x7FFFFFFFELL )
    {
      if ( (a7 & 0x20) != 0 )
        goto LABEL_37;
      DemandZeroPte = MiMakeDemandZeroPte((*(_DWORD *)(a6 + 48) >> 7) & 0x1F);
      goto LABEL_26;
    }
    v19 = *(_DWORD *)(a6 + 48);
    if ( (v19 & 0x2000000) == 0 )
    {
      if ( (v19 & 0x200000) == 0 || (v19 & 0x4000000) != 0 || (v19 & 0x8000000) == 0 )
        *(_QWORD *)(a1 + 176) = 0LL;
      *(_QWORD *)(a1 + 184) = 0LL;
      *(_DWORD *)(a1 + 152) = MiVadPureReserve(a6);
    }
  }
LABEL_37:
  *(_DWORD *)(a1 + 204) = 3;
  *(_QWORD *)(a1 + 144) = 1LL;
  *(_QWORD *)(a1 + 192) = 1LL;
  if ( a6 )
  {
    v20 = *(unsigned int *)(a6 + 48);
    if ( (v20 & 0x200000) != 0 && (v20 & 0x800000) != 0 )
    {
      *(_QWORD *)(a1 + 144) = MiVadPageSizes[(v20 >> 19) & 3];
      if ( MiVadPageSizes[(*(_DWORD *)(a6 + 48) >> 19) & 3] != 16 )
        v13 = 1LL;
      *(_QWORD *)(a1 + 192) = v13;
      *(_DWORD *)(a1 + 204) = MiVadPageIndices[(*(_DWORD *)(a6 + 48) >> 19) & 3];
    }
  }
  *(_DWORD *)(a1 + 156) = a7;
  result = MiDecommitComputeCheckPte(a1, v22);
  *(_BYTE *)(a1 + 44) = 17;
  return result;
}
