/*
 * XREFs of SmFpPreAllocate @ 0x1404C4BB8
 * Callers:
 *     ?SmStStart@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_SMST_PARAMETERS@@@Z @ 0x140394620 (-SmStStart@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_SMST_PARAMETERS@@@Z.c)
 *     ?SmFirstTimeInit@@YAJPEAU_SM_PARTITION@@K@Z @ 0x1404AAD80 (-SmFirstTimeInit@@YAJPEAU_SM_PARTITION@@K@Z.c)
 *     ?SmStorePrepare@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@@Z @ 0x1405FE568 (-SmStorePrepare@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@@Z.c)
 * Callees:
 *     SmAcquireReleaseCharges @ 0x14022E380 (SmAcquireReleaseCharges.c)
 *     ExAcquireSpinLockExclusive @ 0x1402BEA90 (ExAcquireSpinLockExclusive.c)
 *     SmAllocEx @ 0x14039350C (SmAllocEx.c)
 *     SmFpCleanup @ 0x140396584 (SmFpCleanup.c)
 *     ExReleaseSpinLockExclusive @ 0x1403A2D40 (ExReleaseSpinLockExclusive.c)
 *     SmKmAllocateMdlForLock @ 0x1404665D8 (SmKmAllocateMdlForLock.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     MmAllocateMappingAddress @ 0x140A58930 (MmAllocateMappingAddress.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SmFpPreAllocate(PEX_SPIN_LOCK SpinLock, _DWORD *a2, unsigned int a3)
{
  __int64 v4; // rbx
  _DWORD *v6; // r12
  __int64 v7; // rbx
  unsigned int v8; // r15d
  _OWORD *v9; // rax
  __int64 v10; // r8
  __int64 v11; // r9
  _QWORD *v12; // rdi
  unsigned __int64 v13; // rax
  unsigned int v14; // ecx
  __int64 MdlForLock; // rax
  unsigned int v16; // ebx
  KIRQL v17; // al
  int v18; // edx
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int128 v21; // xmm0
  _BYTE v23[8]; // [rsp+20h] [rbp-59h] BYREF
  __int16 v24; // [rsp+28h] [rbp-51h]
  char v25; // [rsp+2Ah] [rbp-4Fh]
  int v26; // [rsp+2Ch] [rbp-4Dh]
  _QWORD v27[3]; // [rsp+30h] [rbp-49h] BYREF
  _OWORD v28[3]; // [rsp+48h] [rbp-31h]
  __int64 v29; // [rsp+80h] [rbp+7h]
  int v30; // [rsp+88h] [rbp+Fh]

  v4 = a3;
  memset_0(v23, 0, 0x78uLL);
  v26 = 0;
  v27[1] = v27;
  v6 = &a2[v4];
  v24 = 1;
  v27[0] = v27;
  v27[2] = *((_QWORD *)SpinLock + 4);
  v25 = 6;
LABEL_2:
  if ( a2 >= v6 )
  {
    v17 = ExAcquireSpinLockExclusive(SpinLock);
    v18 = v30;
    v19 = v28[1];
    *((_QWORD *)SpinLock + 12) = v29;
    v20 = v28[0];
    *((_DWORD *)SpinLock + 26) = v18;
    *(_OWORD *)(SpinLock + 10) = v20;
    v21 = v28[2];
    *(_OWORD *)(SpinLock + 14) = v19;
    *(_OWORD *)(SpinLock + 18) = v21;
    ExReleaseSpinLockExclusive(SpinLock, v17);
    return 0;
  }
  v7 = *a2 & 0xF;
  v8 = 0;
  *((_WORD *)&v29 + v7) = *a2 >> 4;
  while ( 1 )
  {
    if ( v8 >= (unsigned __int8)(*a2 >> 20) )
    {
      ++a2;
      goto LABEL_2;
    }
    v9 = (_OWORD *)SmAllocEx(16LL, 1883663731LL, -1);
    v12 = v9;
    if ( !v9 )
      break;
    *v9 = 0LL;
    v13 = (unsigned int)*a2;
    v14 = *a2 & 0xF;
    if ( v14 == 2 )
    {
      MdlForLock = SmKmAllocateMdlForLock(
                     *((_QWORD *)SpinLock + 4),
                     (unsigned __int64)(unsigned __int16)((unsigned __int64)(unsigned int)*a2 >> 4) << 12,
                     v10,
                     v11);
    }
    else
    {
      if ( v14 == 3 )
      {
        if ( !(unsigned int)SmAcquireReleaseCharges(
                              *((_QWORD *)SpinLock + 4),
                              (unsigned __int64)(unsigned __int16)(v13 >> 4) << 12,
                              1,
                              0LL) )
          break;
        MdlForLock = 8LL * (v8 + 1);
        goto LABEL_15;
      }
      if ( v14 >= 5 )
        MdlForLock = (__int64)MmAllocateMappingAddress((unsigned __int16)((unsigned int)v13 >> 4) << 12, 0x6D526D73u);
      else
        MdlForLock = SmAllocEx((unsigned __int16)(v13 >> 4), 1883663731LL, -1);
    }
    if ( !MdlForLock )
      break;
LABEL_15:
    v12[1] = MdlForLock;
    ++v8;
    *v12 = *((_QWORD *)v28 + v7);
    *((_QWORD *)v28 + v7) = v12;
  }
  v16 = -1073741670;
  SmFpCleanup((__int64)v23);
  if ( v12 )
    ExFreePoolWithTag(v12, 0);
  return v16;
}
