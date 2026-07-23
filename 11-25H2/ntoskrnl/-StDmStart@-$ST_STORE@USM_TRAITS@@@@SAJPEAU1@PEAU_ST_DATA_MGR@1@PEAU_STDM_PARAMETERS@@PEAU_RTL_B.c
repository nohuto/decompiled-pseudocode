/*
 * XREFs of ?StDmStart@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_DATA_MGR@1@PEAU_STDM_PARAMETERS@@PEAU_RTL_BITMAP@@PEAKK@Z @ 0x1403939EC
 * Callers:
 *     ?StStart@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_CREATE_PARAMS@@@Z @ 0x1403941C8 (-StStart@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_CREATE_PARAMS@@@Z.c)
 * Callees:
 *     RtlSetAllBits @ 0x1403397C0 (RtlSetAllBits.c)
 *     SmQuerySystemInformation @ 0x140393568 (SmQuerySystemInformation.c)
 *     ?NpStart@NP_CONTEXT@@SAJPEAU1@PEAU_NP_PARAMETERS@1@@Z @ 0x140393D00 (-NpStart@NP_CONTEXT@@SAJPEAU1@PEAU_NP_PARAMETERS@1@@Z.c)
 *     SmHpChunkHeapCleanup @ 0x140396AB8 (SmHpChunkHeapCleanup.c)
 *     SmHpChunkHeapInitialize @ 0x140460984 (SmHpChunkHeapInitialize.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StDmStart(__int64 a1, __int64 a2, int *a3, __int64 a4, int a5, int a6)
{
  int v7; // eax
  __int64 v10; // xmm1_8
  __int64 v11; // rax
  bool v12; // zf
  __int64 v13; // rcx
  __int64 Pool2; // rdx
  _RTL_BITMAP *v15; // rcx
  __int64 v16; // rdx
  __int64 result; // rax
  __int64 v18; // rdx
  __int64 v19; // rsi
  int v20; // eax
  _DWORD v21[2]; // [rsp+20h] [rbp-49h] BYREF
  int v22; // [rsp+28h] [rbp-41h] BYREF
  int v23; // [rsp+2Ch] [rbp-3Dh]
  __int64 (__fastcall *v24)(); // [rsp+30h] [rbp-39h]
  __int64 (__fastcall *v25)(); // [rsp+38h] [rbp-31h]
  __int64 (__fastcall *v26)(); // [rsp+40h] [rbp-29h]
  __int64 (__fastcall *v27)(); // [rsp+48h] [rbp-21h]
  _OWORD v28[3]; // [rsp+50h] [rbp-19h] BYREF
  __int64 v29; // [rsp+80h] [rbp+17h]

  v29 = 0LL;
  v7 = *a3;
  memset(v28, 0, sizeof(v28));
  *(_OWORD *)(a2 + 776) = *(_OWORD *)a1;
  *(_OWORD *)(a2 + 792) = *(_OWORD *)(a1 + 16);
  *(_OWORD *)(a2 + 808) = *(_OWORD *)(a1 + 32);
  v10 = *(_QWORD *)(a1 + 48);
  *(_DWORD *)(a2 + 832) = v7;
  v11 = a1 + 6528;
  *(_QWORD *)(a2 + 824) = v10;
  v12 = (*(_DWORD *)(a2 + 776) & 0x20000) == 0;
  v13 = *(_QWORD *)(a1 + 4816);
  *(_QWORD *)(a2 + 2304) = v11;
  *(_QWORD *)(a2 + 896) = v13;
  *(_QWORD *)(a2 + 1384) = *(_QWORD *)(a1 + 4752);
  *(_QWORD *)(a2 + 1400) = a1 + 4864;
  *(_QWORD *)(a2 + 2168) = *(_QWORD *)(a1 + 5008);
  *(_QWORD *)(a2 + 2296) = a1 + 6536;
  *(_DWORD *)(a2 + 1376) = *(_DWORD *)(a1 + 4832);
  *(_QWORD *)(a2 + 1336) = a2 + 24;
  *(_QWORD *)(a2 + 1344) = a2 + 88;
  *(_QWORD *)(a2 + 928) = v13;
  if ( v12 )
  {
    v15 = (_RTL_BITMAP *)(a2 + 840);
  }
  else
  {
    Pool2 = ExAllocatePool2(0x40uLL);
    if ( !Pool2 )
      return 3221225626LL;
    v15 = (_RTL_BITMAP *)(a2 + 840);
    *(_DWORD *)(a2 + 840) = *(_DWORD *)(a1 + 12);
    *(_QWORD *)(a2 + 848) = Pool2;
  }
  if ( (*(_DWORD *)(a2 + 776) & 0x20000) != 0 )
    RtlSetAllBits(v15);
  v16 = ExAllocatePool2(0x40uLL);
  if ( !v16 )
    return 3221225626LL;
  *(_DWORD *)(a2 + 1456) = *(_DWORD *)(a1 + 12);
  *(_QWORD *)(a2 + 1464) = v16;
  RtlSetAllBits((PRTL_BITMAP)(a2 + 1456));
  LODWORD(v19) = 16;
  *(_QWORD *)(a2 + 1416) = *(_QWORD *)(a1 + 56);
  *(_QWORD *)(a2 + 1424) = *(_QWORD *)(a1 + 64);
  *(_QWORD *)(a2 + 1432) = *(_QWORD *)(a1 + 72);
  *(_DWORD *)(a2 + 856) = a6;
  if ( *(_DWORD *)(*(_QWORD *)(a2 + 1400) + 24LL) )
  {
    v21[0] = 16;
    v21[1] = 4;
    SmHpChunkHeapCleanup(a2 + 192);
    SmHpChunkHeapInitialize(a2 + 192, v21);
  }
  v20 = *a3;
  v23 = 0;
  if ( (v20 & 8) != 0 )
  {
    result = SmQuerySystemInformation(*(_QWORD *)(a2 + 800) | 1LL, v18, v28);
    if ( (int)result < 0 )
      return result;
    if ( *(_QWORD *)&v28[0] >> 21 >= 0x10uLL )
    {
      v19 = *(_QWORD *)&v28[0] >> 21;
      if ( *(_QWORD *)&v28[0] >> 21 > 0xFFFFFFFFuLL )
        LODWORD(v19) = -1;
    }
    v22 = v19;
    v23 = 4;
  }
  else
  {
    v22 = -1;
  }
  v24 = ST_STORE<SM_TRAITS>::StNpEnumBTreeNodes;
  v25 = ST_STORE<SM_TRAITS>::StNpLeafPageOut;
  v26 = ST_STORE<SM_TRAITS>::StNpLeafPageIn;
  v27 = ST_STORE<SM_TRAITS>::StNpLeafDelete;
  result = NP_CONTEXT::NpStart((struct NP_CONTEXT *)(a2 + 1760), (struct NP_CONTEXT::_NP_PARAMETERS *)&v22);
  if ( (int)result >= 0 )
  {
    result = NP_CONTEXT::NpStart((struct NP_CONTEXT *)(a2 + 1896), (struct NP_CONTEXT::_NP_PARAMETERS *)&v22);
    if ( (int)result >= 0 )
    {
      result = NP_CONTEXT::NpStart((struct NP_CONTEXT *)(a2 + 2032), (struct NP_CONTEXT::_NP_PARAMETERS *)&v22);
      if ( (int)result >= 0 )
        return 0LL;
    }
  }
  return result;
}
