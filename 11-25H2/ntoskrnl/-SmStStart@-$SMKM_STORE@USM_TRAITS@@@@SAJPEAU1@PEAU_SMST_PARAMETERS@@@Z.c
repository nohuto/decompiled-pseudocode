/*
 * XREFs of ?SmStStart@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_SMST_PARAMETERS@@@Z @ 0x140394620
 * Callers:
 *     SmProcessCreateRequest @ 0x1409C16A4 (SmProcessCreateRequest.c)
 * Callees:
 *     SmAcquireReleaseCharges @ 0x14022E380 (SmAcquireReleaseCharges.c)
 *     SmGetIdealProcessorFromNumaNode @ 0x140393E88 (SmGetIdealProcessorFromNumaNode.c)
 *     ?SmStWorkerThreadStartThread@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAXP6AX1@ZPEAPEAU_ETHREAD@@@Z @ 0x140393F74 (-SmStWorkerThreadStartThread@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAXP6AX1@ZPEAPEAU_ETHREAD@@@Z.c)
 *     SmKmStoreHelperStart @ 0x1403940BC (SmKmStoreHelperStart.c)
 *     SmKmStoreHelperInitialize @ 0x140394164 (SmKmStoreHelperInitialize.c)
 *     ?StStart@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_CREATE_PARAMS@@@Z @ 0x1403941C8 (-StStart@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_CREATE_PARAMS@@@Z.c)
 *     SmFpCleanup @ 0x140396584 (SmFpCleanup.c)
 *     SmFpPreAllocate @ 0x1404C4BB8 (SmFpPreAllocate.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     SmKmFileInfoInit @ 0x1406EFC50 (SmKmFileInfoInit.c)
 *     SmKmFileInfoDuplicate @ 0x140AAC5AC (SmKmFileInfoDuplicate.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 */

__int64 __fastcall SMKM_STORE<SM_TRAITS>::SmStStart(__int64 a1, __int64 *a2)
{
  unsigned int *v2; // r15
  unsigned int v5; // ecx
  unsigned int v6; // edx
  int v7; // eax
  char v8; // dl
  char v9; // cl
  __int64 v10; // rbx
  __int64 v11; // rax
  __int64 v12; // rax
  int v13; // edx
  int *p_IdealProcessorFromNumaNode; // rbx
  int v15; // ecx
  void *Pool2; // rax
  unsigned int v17; // eax
  unsigned int v18; // edi
  unsigned int v19; // ebx
  void *v20; // rax
  __int128 v21; // xmm0
  int v22; // eax
  int started; // eax
  int v25; // eax
  int IdealProcessorFromNumaNode; // [rsp+24h] [rbp-45h] BYREF
  __int128 v27; // [rsp+30h] [rbp-39h] BYREF
  unsigned int v28; // [rsp+40h] [rbp-29h]
  __int64 v29; // [rsp+48h] [rbp-21h]
  __int64 v30; // [rsp+50h] [rbp-19h]
  int v31; // [rsp+58h] [rbp-11h]
  __int64 v32; // [rsp+60h] [rbp-9h]
  __int64 v33; // [rsp+68h] [rbp-1h]
  int v34; // [rsp+70h] [rbp+7h]

  v2 = (unsigned int *)*a2;
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
  v7 = *((_DWORD *)a2 + 14);
  *(_DWORD *)(a1 + 7584) = v7;
  if ( !v7 )
    *(_DWORD *)(a1 + 7584) = 7;
  *(_BYTE *)(a1 + 6836) = *(_BYTE *)v2;
  v8 = *(_BYTE *)(a1 + 6837) ^ (*(_BYTE *)(a1 + 6837) ^ (4 * (*v2 >> 17))) & 4;
  *(_BYTE *)(a1 + 6837) = v8;
  v9 = v8 ^ (v8 ^ (8 * *((_BYTE *)v2 + 2))) & 8;
  *(_BYTE *)(a1 + 6837) = v9;
  *(_BYTE *)(a1 + 6837) = v9 ^ (v9 ^ (32 * (*v2 >> 18))) & 0x20;
  *(_DWORD *)(a1 + 7016) = v2[2];
  SmFpCleanup(a1 + 7456);
  v10 = *(_QWORD *)(a1 + 7576);
  memset_0((void *)(a1 + 7456), 0, 0x78uLL);
  *(_WORD *)(a1 + 7464) = 1;
  *(_BYTE *)(a1 + 7466) = 6;
  *(_DWORD *)(a1 + 7468) = 0;
  *(_QWORD *)(a1 + 7480) = a1 + 7472;
  *(_QWORD *)(a1 + 7472) = a1 + 7472;
  *(_QWORD *)(a1 + 7488) = v10;
  if ( *(_BYTE *)v2 )
  {
    SmKmFileInfoInit(a1 + 7024);
    *(_DWORD *)(a1 + 7020) = v2[3];
    v18 = v2[6];
    v25 = SmKmFileInfoDuplicate(a1 + 7024, *((_QWORD *)v2 + 6));
    goto LABEL_53;
  }
  if ( (*(_BYTE *)(a1 + 6837) & 4) == 0 )
    goto LABEL_29;
  SmKmStoreHelperInitialize(a1 + 7040, *((_BYTE *)a2 + 60));
  SmKmStoreHelperInitialize(a1 + 7184, *((_BYTE *)a2 + 60));
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
  v11 = a2[5];
  *(_BYTE *)(a1 + 6837) |= 0x80u;
  *(_QWORD *)(a1 + 7432) = v11;
  v12 = *((unsigned __int8 *)a2 + 60);
  *(_BYTE *)(a1 + 7596) = v12;
  if ( (_BYTE)v12 != 0xFF
    && _InterlockedIncrement64((volatile signed __int64 *)(**(_QWORD **)(*(_QWORD *)(a1 + 7576) + 2096LL)
                                                         + 8 * v12
                                                         + 17752)) <= 1 )
  {
    __fastfail(0xEu);
  }
  v13 = *((_DWORD *)a2 + 16);
  *(_DWORD *)(a1 + 7588) = v13;
  if ( v13 )
  {
    IdealProcessorFromNumaNode = SmGetIdealProcessorFromNumaNode(*(_QWORD *)(a1 + 7576), v13 - 1);
    p_IdealProcessorFromNumaNode = &IdealProcessorFromNumaNode;
  }
  else
  {
    p_IdealProcessorFromNumaNode = 0LL;
  }
  v15 = SmKmStoreHelperStart((PVOID *)(a1 + 7040), a2[6], (__int64)p_IdealProcessorFromNumaNode);
  if ( v15 >= 0 )
  {
    v15 = SmKmStoreHelperStart((PVOID *)(a1 + 7184), a2[6], (__int64)p_IdealProcessorFromNumaNode);
    if ( v15 >= 0 )
    {
      if ( (*(_BYTE *)(a1 + 6837) & 8) != 0 )
        *(_QWORD *)(a1 + 7160) = *(_QWORD *)(a1 + 7576) + 2856LL;
      *(_QWORD *)(a1 + 7312) = *(_QWORD *)(a1 + 7576) + 2880LL;
      Pool2 = (void *)ExAllocatePool2(0x40uLL);
      *(_QWORD *)(a1 + 7032) = Pool2;
      if ( !Pool2 )
        return (unsigned int)-1073741670;
      memset_0(Pool2, 0, 0x50uLL);
      if ( !(unsigned int)SmAcquireReleaseCharges(*(_QWORD *)(a1 + 7576), *(unsigned int *)(a1 + 7016), 1, 0LL) )
        return (unsigned int)-1073741670;
      *(_BYTE *)(a1 + 6837) |= 0x10u;
LABEL_29:
      v17 = v2[3];
      *(_DWORD *)(a1 + 7020) = v17;
      v18 = 0;
      v19 = 8 * v17;
      v20 = (void *)ExAllocatePool2(0x40uLL);
      if ( v20 )
      {
        *(_QWORD *)(a1 + 7024) = v20;
        memset_0(v20, 0, v19);
        if ( (*(_BYTE *)(a1 + 6837) & 4) != 0 )
        {
LABEL_31:
          memset_0(&v27, 0, 0x48uLL);
          v21 = *(_OWORD *)v2;
          v22 = *(_DWORD *)(a1 + 7020);
          v28 = v18;
          v27 = v21;
          HIDWORD(v27) = v22;
          v32 = a2[3];
          v34 = *((_DWORD *)a2 + 17);
          v29 = a1;
          if ( *(_BYTE *)v2 )
            v33 = *((_QWORD *)v2 + 8);
          v30 = a2[1];
          v31 = *((_DWORD *)a2 + 4);
          LODWORD(v27) = v27 & 0xFFFFF7FF | (v31 == 0 ? 0x800 : 0);
          v15 = ST_STORE<SM_TRAITS>::StStart(a1, (int *)&v27);
          if ( v15 >= 0 )
          {
            if ( (*(_BYTE *)(a1 + 6837) & 4) == 0 )
              goto LABEL_35;
            started = SMKM_STORE<SM_TRAITS>::SmStWorkerThreadStartThread(
                        a1,
                        a2[6],
                        (__int64)SMKM_STORE<SM_TRAITS>::SmStReadThread,
                        (PVOID *)(a1 + 7328));
            v15 = 0;
            if ( started < 0 )
              v15 = started;
            if ( v15 >= 0 )
            {
LABEL_35:
              v15 = SMKM_STORE<SM_TRAITS>::SmStWorkerThreadStartThread(
                      a1,
                      a2[6],
                      (__int64)SMKM_STORE<SM_TRAITS>::SmStWorkerThread,
                      (PVOID *)(a1 + 7008));
              if ( v15 >= 0 )
                return 0;
            }
          }
          return (unsigned int)v15;
        }
        v25 = SmFpPreAllocate((PEX_SPIN_LOCK)(a1 + 7456));
LABEL_53:
        v15 = v25;
        if ( v25 < 0 )
          return (unsigned int)v15;
        goto LABEL_31;
      }
      return (unsigned int)-1073741670;
    }
  }
  return (unsigned int)v15;
}
