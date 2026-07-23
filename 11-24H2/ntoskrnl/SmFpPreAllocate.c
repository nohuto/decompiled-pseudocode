/*
 * XREFs of SmFpPreAllocate @ 0x1404BE790
 * Callers:
 *     ?SmStStart@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_SMST_PARAMETERS@@@Z @ 0x140376D70 (-SmStStart@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_SMST_PARAMETERS@@@Z.c)
 *     ?SmFirstTimeInit@@YAJPEAU_SM_PARTITION@@K@Z @ 0x1404A30D0 (-SmFirstTimeInit@@YAJPEAU_SM_PARTITION@@K@Z.c)
 *     ?SmStorePrepare@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@@Z @ 0x140609018 (-SmStorePrepare@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@@Z.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14029EF70 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusive @ 0x1402E6E40 (ExReleaseSpinLockExclusive.c)
 *     SmKmAllocateMdlForLock @ 0x1402E98DC (SmKmAllocateMdlForLock.c)
 *     SmAllocEx @ 0x1402F5228 (SmAllocEx.c)
 *     SmAcquireReleaseCharges @ 0x14033A050 (SmAcquireReleaseCharges.c)
 *     SmFpCleanup @ 0x1403780A4 (SmFpCleanup.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     MmAllocateMappingAddress @ 0x140A531D0 (MmAllocateMappingAddress.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SmFpPreAllocate(PEX_SPIN_LOCK SpinLock, _DWORD *a2, unsigned int a3)
{
  __int64 v4; // rbx
  _DWORD *v6; // r12
  __int64 v7; // rbx
  unsigned int v8; // r15d
  _OWORD *v9; // rax
  _QWORD *v10; // rdi
  unsigned __int64 v11; // rax
  unsigned int v12; // ecx
  __int64 MdlForLock; // rax
  unsigned int v14; // ebx
  KIRQL v15; // al
  int v16; // edx
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int128 v19; // xmm0
  _BYTE v21[8]; // [rsp+20h] [rbp-59h] BYREF
  __int16 v22; // [rsp+28h] [rbp-51h]
  char v23; // [rsp+2Ah] [rbp-4Fh]
  int v24; // [rsp+2Ch] [rbp-4Dh]
  _QWORD v25[3]; // [rsp+30h] [rbp-49h] BYREF
  _OWORD v26[3]; // [rsp+48h] [rbp-31h]
  __int64 v27; // [rsp+80h] [rbp+7h]
  int v28; // [rsp+88h] [rbp+Fh]

  v4 = a3;
  memset_0(v21, 0, 0x78uLL);
  v24 = 0;
  v25[1] = v25;
  v6 = &a2[v4];
  v22 = 1;
  v25[0] = v25;
  v25[2] = *((_QWORD *)SpinLock + 4);
  v23 = 6;
LABEL_2:
  if ( a2 >= v6 )
  {
    v15 = ExAcquireSpinLockExclusive(SpinLock);
    v16 = v28;
    v17 = v26[1];
    *((_QWORD *)SpinLock + 12) = v27;
    v18 = v26[0];
    *((_DWORD *)SpinLock + 26) = v16;
    *(_OWORD *)(SpinLock + 10) = v18;
    v19 = v26[2];
    *(_OWORD *)(SpinLock + 14) = v17;
    *(_OWORD *)(SpinLock + 18) = v19;
    ExReleaseSpinLockExclusive(SpinLock, v15);
    return 0;
  }
  v7 = *a2 & 0xF;
  v8 = 0;
  *((_WORD *)&v27 + v7) = *a2 >> 4;
  while ( 1 )
  {
    if ( v8 >= (unsigned __int8)(*a2 >> 20) )
    {
      ++a2;
      goto LABEL_2;
    }
    v9 = (_OWORD *)SmAllocEx(0x10uLL, 0x70466D73u, -1);
    v10 = v9;
    if ( !v9 )
      break;
    *v9 = 0LL;
    v11 = (unsigned int)*a2;
    v12 = *a2 & 0xF;
    if ( v12 == 2 )
    {
      MdlForLock = SmKmAllocateMdlForLock(
                     *((_QWORD *)SpinLock + 4),
                     (unsigned __int64)(unsigned __int16)((unsigned __int64)(unsigned int)*a2 >> 4) << 12);
    }
    else
    {
      if ( v12 == 3 )
      {
        if ( !(unsigned int)SmAcquireReleaseCharges(
                              *((_QWORD *)SpinLock + 4),
                              (unsigned __int64)(unsigned __int16)(v11 >> 4) << 12,
                              1,
                              0LL) )
          break;
        MdlForLock = 8LL * (v8 + 1);
        goto LABEL_15;
      }
      if ( v12 >= 5 )
        MdlForLock = (__int64)MmAllocateMappingAddress((unsigned __int16)((unsigned int)v11 >> 4) << 12, 0x6D526D73u);
      else
        MdlForLock = SmAllocEx((unsigned __int16)(v11 >> 4), 0x70466D73u, -1);
    }
    if ( !MdlForLock )
      break;
LABEL_15:
    v10[1] = MdlForLock;
    ++v8;
    *v10 = *((_QWORD *)v26 + v7);
    *((_QWORD *)v26 + v7) = v10;
  }
  v14 = -1073741670;
  SmFpCleanup((__int64)v21);
  if ( v10 )
    ExFreePoolWithTag(v10, 0);
  return v14;
}
