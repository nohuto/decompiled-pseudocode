/*
 * XREFs of RtlpHpSegMgrReserve @ 0x18009C2B0
 * Callers:
 *     RtlpHpSegMgrAllocate @ 0x18009C1EC (RtlpHpSegMgrAllocate.c)
 * Callees:
 *     RtlpHpSegMgrVaCtxAlloc @ 0x18009C428 (RtlpHpSegMgrVaCtxAlloc.c)
 *     RtlpHpHeapValidateProtection @ 0x18009C520 (RtlpHpHeapValidateProtection.c)
 *     RtlpHpAllocVA @ 0x18009CD20 (RtlpHpAllocVA.c)
 *     RtlpHpVaMgrCtxFree @ 0x18009D290 (RtlpHpVaMgrCtxFree.c)
 *     RtlpHpSegMgrVaCtxInitialize @ 0x18009D62C (RtlpHpSegMgrVaCtxInitialize.c)
 *     RtlpHpTlLogVAChange @ 0x18009D720 (RtlpHpTlLogVAChange.c)
 */

__int64 __fastcall RtlpHpSegMgrReserve(__int64 a1, unsigned int a2, _QWORD *a3, unsigned int *a4, _DWORD *a5)
{
  unsigned int v6; // ebx
  __int64 v9; // rcx
  __int64 v10; // r9
  __int64 v11; // r8
  bool v12; // cf
  ULONG v13; // eax
  int v14; // eax
  unsigned __int64 v15; // rcx
  unsigned int v16; // edi
  _DWORD *v17; // rax
  __int64 v18; // rax
  int v20[2]; // [rsp+30h] [rbp-20h] BYREF
  ULONG_PTR RegionSize[2]; // [rsp+40h] [rbp-10h] BYREF
  unsigned __int64 v22; // [rsp+70h] [rbp+20h] BYREF

  v6 = -*(_DWORD *)a1;
  v22 = v6;
  *(_QWORD *)v20 = RtlpHpSegMgrVaCtxAlloc(a1, v6, a2);
  if ( *(_QWORD *)v20 )
    goto LABEL_6;
  if ( (*(_BYTE *)(a1 + 13) & 7) != 0 && v6 < 0x200000 )
    v22 = 0x200000LL;
  v9 = *(_QWORD *)(a1 + 56);
  v10 = *(_QWORD *)(v9 + 8);
  v11 = (unsigned __int8)BYTE1(*(_QWORD *)v9);
  v12 = (*(_DWORD *)(v9 + 20) & 0x40000000) != 0;
  *(_OWORD *)RegionSize = *(_OWORD *)(a1 + 40);
  v13 = RtlpHpHeapValidateProtection(v9, v12 ? 64 : 4, v11, v10);
  v14 = RtlpHpAllocVA((int)v20, (int)&v22, v22, 0x2000, v13, (ULONG_PTR)RegionSize);
  v15 = v22;
  v16 = v14;
  if ( v14 < 0 )
  {
    v18 = *(_QWORD *)v20;
    goto LABEL_8;
  }
  if ( v6 < v22 )
  {
    RtlpHpSegMgrVaCtxInitialize(v22, *(_QWORD *)v20, v6, (unsigned int)v22);
LABEL_6:
    v15 = v22;
  }
  v17 = a5;
  *a4 = v6;
  *v17 = v15;
  *a3 = *(_QWORD *)v20;
  v18 = 0LL;
  v16 = 0;
LABEL_8:
  if ( v18 )
  {
    *(_QWORD *)v20 = (v18 + 0xFFFFF) & 0xFFFFFFFFFFF00000uLL;
    v22 = v18 + v15 - *(_QWORD *)v20;
    if ( v22 )
    {
      RtlpHpVaMgrCtxFree(&unk_1801CD968, v20, &v22);
      if ( (RtlpHpHeapFeatures & 8) != 0 )
        RtlpHpTlLogVAChange(0x8000LL, v22, *(_QWORD *)v20, 0LL);
    }
  }
  return v16;
}
