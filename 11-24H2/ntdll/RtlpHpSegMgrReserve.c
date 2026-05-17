/*
 * XREFs of RtlpHpSegMgrReserve @ 0x180091724
 * Callers:
 *     RtlpHpSegMgrAllocate @ 0x180091660 (RtlpHpSegMgrAllocate.c)
 * Callees:
 *     RtlpHpSegMgrVaCtxAlloc @ 0x18009189C (RtlpHpSegMgrVaCtxAlloc.c)
 *     RtlpHpHeapValidateProtection @ 0x180091990 (RtlpHpHeapValidateProtection.c)
 *     RtlpHpAllocVA @ 0x180092190 (RtlpHpAllocVA.c)
 *     RtlpHpVaMgrCtxFree @ 0x180092700 (RtlpHpVaMgrCtxFree.c)
 *     RtlpHpSegMgrVaCtxInitialize @ 0x180092A9C (RtlpHpSegMgrVaCtxInitialize.c)
 *     RtlpHpTlLogVAChange @ 0x180092B90 (RtlpHpTlLogVAChange.c)
 */

__int64 __fastcall RtlpHpSegMgrReserve(__int64 a1, unsigned int a2, _QWORD *a3, unsigned int *a4, _DWORD *a5)
{
  unsigned int v6; // ebx
  __int64 v9; // rcx
  __int64 v10; // r9
  __int64 v11; // r8
  bool v12; // cf
  int v13; // eax
  int v14; // eax
  unsigned __int64 v15; // rcx
  unsigned int v16; // edi
  _DWORD *v17; // rax
  __int64 v18; // rax
  _QWORD v20[2]; // [rsp+30h] [rbp-20h] BYREF
  __int128 v21; // [rsp+40h] [rbp-10h] BYREF
  unsigned __int64 v22; // [rsp+70h] [rbp+20h] BYREF

  v6 = -*(_DWORD *)a1;
  v22 = v6;
  v20[0] = RtlpHpSegMgrVaCtxAlloc(a1, v6, a2);
  if ( v20[0] )
    goto LABEL_6;
  if ( (*(_BYTE *)(a1 + 13) & 7) != 0 && v6 < 0x200000 )
    v22 = 0x200000LL;
  v9 = *(_QWORD *)(a1 + 56);
  v10 = *(_QWORD *)(v9 + 8);
  v11 = (unsigned __int8)BYTE1(*(_QWORD *)v9);
  v12 = (*(_DWORD *)(v9 + 20) & 0x40000000) != 0;
  v21 = *(_OWORD *)(a1 + 40);
  v13 = RtlpHpHeapValidateProtection(v9, v12 ? 64 : 4, v11, v10);
  v14 = RtlpHpAllocVA((unsigned int)v20, (unsigned int)&v22, v22, 0x2000, v13, (__int64)&v21);
  v15 = v22;
  v16 = v14;
  if ( v14 < 0 )
  {
    v18 = v20[0];
    goto LABEL_8;
  }
  if ( v6 < v22 )
  {
    RtlpHpSegMgrVaCtxInitialize(v22, v20[0], v6, (unsigned int)v22);
LABEL_6:
    v15 = v22;
  }
  v17 = a5;
  *a4 = v6;
  *v17 = v15;
  *a3 = v20[0];
  v18 = 0LL;
  v16 = 0;
LABEL_8:
  if ( v18 )
  {
    v20[0] = (v18 + 0xFFFFF) & 0xFFFFFFFFFFF00000uLL;
    v22 = v18 + v15 - v20[0];
    if ( v22 )
    {
      RtlpHpVaMgrCtxFree(&unk_1801CE978, v20, &v22);
      if ( (RtlpHpHeapFeatures & 8) != 0 )
        RtlpHpTlLogVAChange(0x8000LL, v22, v20[0], 0LL);
    }
  }
  return v16;
}
