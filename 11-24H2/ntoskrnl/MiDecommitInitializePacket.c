/*
 * XREFs of MiDecommitInitializePacket @ 0x1402995B0
 * Callers:
 *     MiDeletePagablePteRange @ 0x1402663A4 (MiDeletePagablePteRange.c)
 *     MiDecommitPages @ 0x140297F00 (MiDecommitPages.c)
 *     MiDeleteEmptyPageTables @ 0x1403C7ED4 (MiDeleteEmptyPageTables.c)
 *     MiStoreDiscardPoisonedPage @ 0x14068D0B8 (MiStoreDiscardPoisonedPage.c)
 * Callees:
 *     MiVadPureReserve @ 0x140210510 (MiVadPureReserve.c)
 *     EtwTraceKernelEvent @ 0x140285790 (EtwTraceKernelEvent.c)
 *     MiVaToFlushVm @ 0x1402FC5EC (MiVaToFlushVm.c)
 *     MiMakeDemandZeroPte @ 0x140392C40 (MiMakeDemandZeroPte.c)
 *     MiDecommitComputeCheckPte @ 0x140406A40 (MiDecommitComputeCheckPte.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
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
  unsigned int v9; // r10d
  __int64 v11; // rbx
  __int64 v12; // r14
  __int64 v13; // r12
  __int64 v14; // r8
  __int64 v15; // rax
  __int64 v16; // rax
  int v17; // ecx
  __int64 v18; // r8
  int v19; // ecx
  __int64 v20; // rax
  unsigned __int64 v21; // rax
  __int64 v22; // rax
  __int64 result; // rax
  __int64 v24; // rax
  __int64 DemandZeroPte; // rax
  int v26; // eax
  _QWORD v28[3]; // [rsp+40h] [rbp-68h] BYREF
  _QWORD v29[2]; // [rsp+58h] [rbp-50h] BYREF

  v9 = a3;
  v29[0] = a3;
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
  v11 = 512LL;
  v12 = a2 << 25 >> 16;
  *(_QWORD *)(a1 + 80) = a2 + 8 * (a3 - 1);
  v13 = 528LL;
  if ( a5 )
  {
    v14 = a5 + 1024;
    *(_QWORD *)(a1 + 32) = a5 + 1024;
    *(_QWORD *)(a1 + 8) = *((_QWORD *)qword_140E300C8 + *(unsigned __int16 *)(a5 + 1198));
    if ( (a7 & 0x20) == 0 )
    {
      v15 = 512LL;
      if ( qword_140E2DCC0 )
      {
        v15 = 528LL;
        if ( (qword_140E2DCC0 & 0x200) == 0 )
          v15 = qword_140E2DCC0 | 0x200;
      }
      *(_QWORD *)(a1 + 168) = v15;
    }
  }
  else
  {
    v16 = MiVaToFlushVm(a2 << 25 >> 16);
    v9 = v29[0];
    v14 = v16;
    *(_QWORD *)(a1 + 32) = v16;
    *(_QWORD *)(a1 + 8) = *((_QWORD *)qword_140E300C8 + *(unsigned __int16 *)(v16 + 174));
  }
  v17 = *(_DWORD *)(v14 + 184);
  v18 = 0LL;
  v19 = v17 & 0xF;
  *(_DWORD *)(a1 + 40) = v19;
  if ( v19 != 2 )
  {
    if ( v19 == 3 )
    {
      if ( (a7 & 0x20) == 0 )
      {
        if ( qword_140E2DCC0 )
        {
          if ( (qword_140E2DCC0 & 0x200) == 0 )
            v13 = qword_140E2DCC0 | 0x200;
          v11 = v13;
        }
        *(_QWORD *)(a1 + 168) = v11;
      }
    }
    else if ( v19 != 4 )
    {
      goto LABEL_15;
    }
  }
  if ( (BYTE4(PerfGlobalGroupMask) & 1) != 0 )
  {
    v28[2] = v9;
    v28[1] = v12;
    if ( (unsigned int)(v19 - 3) <= 1 )
      v24 = 6LL;
    else
      v24 = 4LL;
    v28[0] = v24;
    v29[1] = 24LL;
    v29[0] = v28;
    EtwTraceKernelEvent((int)v29, 1, 0x20000001u, 633, 290462468);
    v18 = 0LL;
  }
LABEL_15:
  *(_QWORD *)(a1 + 176) = *(_QWORD *)(a1 + 168);
  if ( !a5 )
    goto LABEL_18;
  if ( a8 )
  {
    v20 = *a8;
    *(_QWORD *)(a1 + 168) = *a8;
    *(_QWORD *)(a1 + 176) = v20;
    goto LABEL_18;
  }
  if ( !a6 )
    goto LABEL_18;
  if ( (*(unsigned int *)(a6 + 52) | ((unsigned __int64)*(unsigned __int8 *)(a6 + 34) << 32)) != 0x7FFFFFFFELL )
  {
    v26 = *(_DWORD *)(a6 + 48);
    if ( (v26 & 0x2000000) == 0 )
    {
      if ( (v26 & 0x200000) == 0 || (v26 & 0x4000000) != 0 || (v26 & 0x8000000) == 0 )
        *(_QWORD *)(a1 + 176) = 0LL;
      *(_QWORD *)(a1 + 184) = 0LL;
      *(_DWORD *)(a1 + 152) = MiVadPureReserve(a6);
      goto LABEL_40;
    }
LABEL_18:
    *(_QWORD *)(a1 + 144) = 1LL;
    *(_QWORD *)(a1 + 192) = 1LL;
    *(_DWORD *)(a1 + 204) = 3;
    if ( !a6 )
      goto LABEL_24;
    goto LABEL_19;
  }
  if ( (a7 & 0x20) == 0 )
  {
    DemandZeroPte = MiMakeDemandZeroPte((*(_DWORD *)(a6 + 48) >> 7) & 0x1F, 0x7FFFFFFFELL, 0LL, a4);
    *(_QWORD *)(a1 + 168) = DemandZeroPte;
    *(_QWORD *)(a1 + 176) = DemandZeroPte;
  }
LABEL_40:
  *(_QWORD *)(a1 + 144) = 1LL;
  *(_QWORD *)(a1 + 192) = 1LL;
  *(_DWORD *)(a1 + 204) = 3;
LABEL_19:
  v21 = *(unsigned int *)(a6 + 48);
  if ( (v21 & 0x200000) != 0 && (v21 & 0x800000) != 0 )
  {
    *(_QWORD *)(a1 + 144) = MiVadPageSizes[(v21 >> 19) & 3];
    v22 = 16LL;
    if ( MiVadPageSizes[(*(_DWORD *)(a6 + 48) >> 19) & 3] != 16 )
      v22 = 1LL;
    *(_QWORD *)(a1 + 192) = v22;
    *(_DWORD *)(a1 + 204) = MiVadPageIndices[(*(_DWORD *)(a6 + 48) >> 19) & 3];
  }
LABEL_24:
  *(_DWORD *)(a1 + 156) = a7;
  result = MiDecommitComputeCheckPte(a1, a2, v18);
  *(_BYTE *)(a1 + 44) = 17;
  return result;
}
