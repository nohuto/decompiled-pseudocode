/*
 * XREFs of RtlpHpSegMgrReserve @ 0x14035D608
 * Callers:
 *     RtlpHpSegMgrAllocate @ 0x14035D548 (RtlpHpSegMgrAllocate.c)
 * Callees:
 *     RtlpHpSegMgrVaCtxInitialize @ 0x14035D390 (RtlpHpSegMgrVaCtxInitialize.c)
 *     RtlpHpSegMgrVaCtxAlloc @ 0x14035D7A8 (RtlpHpSegMgrVaCtxAlloc.c)
 *     RtlpHpFreeVA @ 0x14045928C (RtlpHpFreeVA.c)
 *     RtlpHpVaMgrCtxAlloc @ 0x140459658 (RtlpHpVaMgrCtxAlloc.c)
 */

__int64 __fastcall RtlpHpSegMgrReserve(__int64 a1, unsigned int a2, __int64 *a3, unsigned int *a4, _DWORD *a5)
{
  unsigned int v6; // esi
  __int64 v7; // rbx
  __int64 v10; // rdi
  __int128 v11; // xmm0
  __int64 v12; // rax
  __int64 v13; // rcx
  _DWORD *v14; // rax
  __int128 v17; // [rsp+20h] [rbp-30h] BYREF
  __int64 v18; // [rsp+30h] [rbp-20h]
  _DWORD v19[3]; // [rsp+38h] [rbp-18h] BYREF
  int v20; // [rsp+44h] [rbp-Ch]
  __int64 v21; // [rsp+48h] [rbp-8h]
  __int64 v22; // [rsp+80h] [rbp+30h]

  v6 = -*(_DWORD *)a1;
  v7 = v6;
  v22 = v6;
  v18 = RtlpHpSegMgrVaCtxAlloc(a1, v6, a2);
  v10 = v18;
  if ( !v18 )
  {
    if ( (*(_BYTE *)(a1 + 13) & 7) != 0 )
    {
      if ( v6 < 0x200000 )
        v7 = 0x200000LL;
      v22 = v7;
    }
    v11 = *(_OWORD *)(a1 + 40);
    v17 = v11;
    v20 = 0;
    if ( BYTE3(v11) )
      v19[0] = BYTE3(v11) - 1;
    else
      v19[0] = -1;
    v19[1] = BYTE1(v11);
    v19[2] = BYTE2(v11);
    if ( (v11 & 8) != 0 )
      v20 = 1;
    v21 = *((_QWORD *)&v17 + 1);
    *(_QWORD *)&v17 = v7 - ((v7 - 1) & 0xFFFFF) + 0xFFFFF;
    v12 = RtlpHpVaMgrCtxAlloc(&unk_140E68558, &v17, v7, v19);
    if ( !v12 )
      return (unsigned int)-1073741670;
    LODWORD(v7) = v17;
    v10 = v12;
    v22 = v17;
    if ( v6 < (unsigned __int64)v17 )
      RtlpHpSegMgrVaCtxInitialize(v13, v12, v6, v17);
  }
  v14 = a5;
  *a3 = v10;
  *a4 = v6;
  v18 = 0LL;
  *v14 = v7;
  return 0;
}
