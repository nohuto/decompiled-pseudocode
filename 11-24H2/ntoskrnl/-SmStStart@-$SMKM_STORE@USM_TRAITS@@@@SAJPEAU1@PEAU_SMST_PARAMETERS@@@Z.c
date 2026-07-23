/*
 * XREFs of ?SmStStart@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_SMST_PARAMETERS@@@Z @ 0x140376D70
 * Callers:
 *     SmProcessCreateRequest @ 0x140A38664 (SmProcessCreateRequest.c)
 * Callees:
 *     SmAcquireReleaseCharges @ 0x14033A050 (SmAcquireReleaseCharges.c)
 *     SmGetIdealProcessorFromNumaNode @ 0x140376530 (SmGetIdealProcessorFromNumaNode.c)
 *     ?SmStWorkerThreadStartThread@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAXP6AX1@ZPEAPEAU_ETHREAD@@@Z @ 0x1403766A4 (-SmStWorkerThreadStartThread@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAXP6AX1@ZPEAPEAU_ETHREAD@@@Z.c)
 *     ?StStart@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_CREATE_PARAMS@@@Z @ 0x1403767E4 (-StStart@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_CREATE_PARAMS@@@Z.c)
 *     SmKmStoreHelperStart @ 0x140376CC8 (SmKmStoreHelperStart.c)
 *     SmKmStoreHelperInitialize @ 0x1403772FC (SmKmStoreHelperInitialize.c)
 *     SmFpCleanup @ 0x1403780A4 (SmFpCleanup.c)
 *     SmFpPreAllocate @ 0x1404BE790 (SmFpPreAllocate.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     SmKmFileInfoInit @ 0x1406F9700 (SmKmFileInfoInit.c)
 *     SmKmFileInfoDuplicate @ 0x140AAC78C (SmKmFileInfoDuplicate.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

__int64 __fastcall SMKM_STORE<SM_TRAITS>::SmStStart(__int64 a1, unsigned int **a2)
{
  unsigned int *v2; // r15
  unsigned int v5; // ecx
  unsigned int v6; // edx
  int v7; // ecx
  int v9; // eax
  char v10; // dl
  char v11; // cl
  __int64 v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // rdx
  unsigned int *v15; // rax
  __int64 v16; // rax
  int v17; // edx
  int *p_IdealProcessorFromNumaNode; // rbx
  void *Pool2; // rax
  unsigned int v20; // eax
  unsigned int v21; // edi
  ULONG_PTR v22; // rbx
  void *v23; // rax
  __int128 v24; // xmm0
  int v25; // eax
  int started; // eax
  int v27; // eax
  int IdealProcessorFromNumaNode; // [rsp+24h] [rbp-45h] BYREF
  __int128 v29; // [rsp+30h] [rbp-39h] BYREF
  unsigned int v30; // [rsp+40h] [rbp-29h]
  __int64 v31; // [rsp+48h] [rbp-21h]
  unsigned int *v32; // [rsp+50h] [rbp-19h]
  int v33; // [rsp+58h] [rbp-11h]
  unsigned int *v34; // [rsp+60h] [rbp-9h]
  __int64 v35; // [rsp+68h] [rbp-1h]
  int v36; // [rsp+70h] [rbp+7h]

  v2 = *a2;
  IdealProcessorFromNumaNode = 0;
  v5 = *v2;
  if ( (unsigned __int8)*v2 >= 2u )
    return (unsigned int)-1073741811;
  if ( v2[5] )
    return (unsigned int)-1073741811;
  if ( v2[3] - 1 > 0x3FFFF )
    return (unsigned int)-1073741811;
  v6 = v2[2];
  if ( !v6 || ((v6 - 1) & v6) != 0 )
    return (unsigned int)-1073741811;
  if ( (unsigned __int8)*v2 == 1 && (v5 & 0x100) != 0 )
    return (unsigned int)-1073741637;
  if ( (v5 & 0x20000) == 0 && (v5 & 0x50000) != 0
    || (v5 & 0x50000) == 0x50000
    || (v5 & 0xA0000) == 0x80000
    || (v5 & 0x100000) != 0 && (_BYTE)v5 != 0
    || (v5 & 0x200000) != 0 && (_BYTE)v5 != 0
    || (v5 & 0x300000) == 0x100000
    || (v5 & 0xA00000) == 0x800000
    || (v5 & 0x420000) == 0x400000 )
  {
    return (unsigned int)-1073741811;
  }
  *(_QWORD *)(a1 + 7576) = a2[4];
  v9 = *((_DWORD *)a2 + 14);
  *(_DWORD *)(a1 + 7584) = v9;
  if ( !v9 )
    *(_DWORD *)(a1 + 7584) = 7;
  *(_BYTE *)(a1 + 6836) = *(_BYTE *)v2;
  v10 = *(_BYTE *)(a1 + 6837) ^ (*(_BYTE *)(a1 + 6837) ^ (4 * (*v2 >> 17))) & 4;
  *(_BYTE *)(a1 + 6837) = v10;
  v11 = v10 ^ (v10 ^ (8 * *((_BYTE *)v2 + 2))) & 8;
  *(_BYTE *)(a1 + 6837) = v11;
  *(_BYTE *)(a1 + 6837) = v11 ^ (v11 ^ (32 * (*v2 >> 18))) & 0x20;
  *(_DWORD *)(a1 + 7016) = v2[2];
  SmFpCleanup(a1 + 7456);
  v12 = *(_QWORD *)(a1 + 7576);
  memset_0((void *)(a1 + 7456), 0, 0x78uLL);
  *(_WORD *)(a1 + 7464) = 1;
  *(_BYTE *)(a1 + 7466) = 6;
  *(_DWORD *)(a1 + 7468) = 0;
  *(_QWORD *)(a1 + 7480) = a1 + 7472;
  *(_QWORD *)(a1 + 7472) = a1 + 7472;
  *(_QWORD *)(a1 + 7488) = v12;
  if ( *(_BYTE *)v2 )
  {
    SmKmFileInfoInit(a1 + 7024);
    *(_DWORD *)(a1 + 7020) = v2[3];
    v21 = v2[6];
    v27 = SmKmFileInfoDuplicate(a1 + 7024, *((_QWORD *)v2 + 6));
    goto LABEL_53;
  }
  if ( (*(_BYTE *)(a1 + 6837) & 4) == 0 )
    goto LABEL_31;
  LOBYTE(v13) = *((_BYTE *)a2 + 60);
  SmKmStoreHelperInitialize(a1 + 7040, v13);
  LOBYTE(v14) = *((_BYTE *)a2 + 60);
  SmKmStoreHelperInitialize(a1 + 7184, v14);
  memset_0((void *)(a1 + 7328), 0, 0x58uLL);
  *(_WORD *)(a1 + 7336) = 0;
  *(_BYTE *)(a1 + 7338) = 6;
  *(_DWORD *)(a1 + 7340) = 0;
  *(_QWORD *)(a1 + 7352) = a1 + 7344;
  *(_QWORD *)(a1 + 7344) = a1 + 7344;
  *(_WORD *)(a1 + 7360) = 0;
  *(_BYTE *)(a1 + 7362) = 6;
  *(_DWORD *)(a1 + 7364) = 0;
  *(_QWORD *)(a1 + 7376) = a1 + 7368;
  *(_QWORD *)(a1 + 7368) = a1 + 7368;
  *(_QWORD *)(a1 + 7392) = a1 + 7384;
  *(_QWORD *)(a1 + 7384) = 0LL;
  *(_QWORD *)(a1 + 7400) = 0LL;
  v15 = a2[5];
  *(_BYTE *)(a1 + 6837) |= 0x80u;
  *(_QWORD *)(a1 + 7432) = v15;
  v16 = *((unsigned __int8 *)a2 + 60);
  *(_BYTE *)(a1 + 7596) = v16;
  if ( (_BYTE)v16 != 0xFF
    && _InterlockedIncrement64((volatile signed __int64 *)(**(_QWORD **)(*(_QWORD *)(a1 + 7576) + 2096LL)
                                                         + 8 * v16
                                                         + 17752)) <= 1 )
  {
    __fastfail(0xEu);
  }
  v17 = *((_DWORD *)a2 + 16);
  *(_DWORD *)(a1 + 7588) = v17;
  if ( v17 )
  {
    IdealProcessorFromNumaNode = SmGetIdealProcessorFromNumaNode(*(_QWORD *)(a1 + 7576), (unsigned int)(v17 - 1));
    p_IdealProcessorFromNumaNode = &IdealProcessorFromNumaNode;
  }
  else
  {
    p_IdealProcessorFromNumaNode = 0LL;
  }
  v7 = SmKmStoreHelperStart((PVOID *)(a1 + 7040), (__int64)a2[6], (__int64)p_IdealProcessorFromNumaNode);
  if ( v7 >= 0 )
  {
    v7 = SmKmStoreHelperStart((PVOID *)(a1 + 7184), (__int64)a2[6], (__int64)p_IdealProcessorFromNumaNode);
    if ( v7 >= 0 )
    {
      if ( (*(_BYTE *)(a1 + 6837) & 8) != 0 )
        *(_QWORD *)(a1 + 7160) = *(_QWORD *)(a1 + 7576) + 2856LL;
      *(_QWORD *)(a1 + 7312) = *(_QWORD *)(a1 + 7576) + 2880LL;
      Pool2 = (void *)ExAllocatePool2(0x40uLL, 0x50uLL, 0x6C526D73u);
      *(_QWORD *)(a1 + 7032) = Pool2;
      if ( !Pool2 )
        return (unsigned int)-1073741670;
      memset_0(Pool2, 0, 0x50uLL);
      if ( !(unsigned int)SmAcquireReleaseCharges(*(_QWORD *)(a1 + 7576), *(unsigned int *)(a1 + 7016), 1, 0LL) )
        return (unsigned int)-1073741670;
      *(_BYTE *)(a1 + 6837) |= 0x10u;
LABEL_31:
      v20 = v2[3];
      *(_DWORD *)(a1 + 7020) = v20;
      v21 = 0;
      v22 = 8 * v20;
      v23 = (void *)ExAllocatePool2(0x40uLL, v22, 0x67526D73u);
      if ( v23 )
      {
        *(_QWORD *)(a1 + 7024) = v23;
        memset_0(v23, 0, (unsigned int)v22);
        if ( (*(_BYTE *)(a1 + 6837) & 4) != 0 )
        {
LABEL_33:
          memset_0(&v29, 0, 0x48uLL);
          v24 = *(_OWORD *)v2;
          v25 = *(_DWORD *)(a1 + 7020);
          v30 = v21;
          v29 = v24;
          HIDWORD(v29) = v25;
          v34 = a2[3];
          v36 = *((_DWORD *)a2 + 17);
          v31 = a1;
          if ( *(_BYTE *)v2 )
            v35 = *((_QWORD *)v2 + 8);
          v32 = a2[1];
          v33 = *((_DWORD *)a2 + 4);
          LODWORD(v29) = v29 & 0xFFFFF7FF | (v33 == 0 ? 0x800 : 0);
          v7 = ST_STORE<SM_TRAITS>::StStart(a1, (int *)&v29);
          if ( v7 >= 0 )
          {
            if ( (*(_BYTE *)(a1 + 6837) & 4) == 0 )
              goto LABEL_37;
            started = SMKM_STORE<SM_TRAITS>::SmStWorkerThreadStartThread(
                        a1,
                        (__int64)a2[6],
                        (__int64)SMKM_STORE<SM_TRAITS>::SmStReadThread,
                        (PVOID *)(a1 + 7328));
            v7 = 0;
            if ( started < 0 )
              v7 = started;
            if ( v7 >= 0 )
            {
LABEL_37:
              v7 = SMKM_STORE<SM_TRAITS>::SmStWorkerThreadStartThread(
                     a1,
                     (__int64)a2[6],
                     (__int64)SMKM_STORE<SM_TRAITS>::SmStWorkerThread,
                     (PVOID *)(a1 + 7008));
              if ( v7 >= 0 )
                return 0;
            }
          }
          return (unsigned int)v7;
        }
        v27 = SmFpPreAllocate((PEX_SPIN_LOCK)(a1 + 7456));
LABEL_53:
        v7 = v27;
        if ( v27 < 0 )
          return (unsigned int)v7;
        goto LABEL_33;
      }
      return (unsigned int)-1073741670;
    }
  }
  return (unsigned int)v7;
}
