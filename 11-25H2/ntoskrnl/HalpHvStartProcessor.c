/*
 * XREFs of HalpHvStartProcessor @ 0x1405564FC
 * Callers:
 *     HalpInterruptStartProcessor @ 0x140B3BED0 (HalpInterruptStartProcessor.c)
 * Callees:
 *     HalpIsXboxNanovisorPresent @ 0x1405483A0 (HalpIsXboxNanovisorPresent.c)
 *     HalpHvStartVirtualProcessor @ 0x140548F78 (HalpHvStartVirtualProcessor.c)
 *     HalpHvInitSegRegister @ 0x14055642C (HalpHvInitSegRegister.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

__int64 __fastcall HalpHvStartProcessor(__int64 a1, __int64 a2, __int64 a3)
{
  int v4; // r10d
  unsigned int v5; // r11d
  __int64 v6; // r11
  __int64 v7; // r11
  __int64 v8; // r11
  __int64 v9; // r11
  __int64 v10; // r11
  __int64 v11; // r11
  unsigned __int16 v12; // dx
  __int64 v13; // r11
  __int64 v14; // r8
  __int64 v15; // r11
  unsigned int v17; // [rsp+20h] [rbp-E0h]
  _BYTE v18[16]; // [rsp+48h] [rbp-B8h] BYREF
  _BYTE v19[16]; // [rsp+58h] [rbp-A8h] BYREF
  _BYTE v20[16]; // [rsp+68h] [rbp-98h] BYREF
  _BYTE v21[16]; // [rsp+78h] [rbp-88h] BYREF
  _BYTE v22[16]; // [rsp+88h] [rbp-78h] BYREF
  _BYTE v23[16]; // [rsp+98h] [rbp-68h] BYREF
  _BYTE v24[14]; // [rsp+A8h] [rbp-58h] BYREF
  __int16 v25; // [rsp+B6h] [rbp-4Ah]
  _BYTE v26[22]; // [rsp+B8h] [rbp-48h] BYREF
  __int16 v27; // [rsp+CEh] [rbp-32h]
  __int64 v28; // [rsp+D0h] [rbp-30h]
  __int16 v29; // [rsp+DEh] [rbp-22h]
  __int64 v30; // [rsp+E0h] [rbp-20h]
  __int64 v31; // [rsp+E8h] [rbp-18h]
  __int64 v32; // [rsp+F0h] [rbp-10h]
  __int64 v33; // [rsp+F8h] [rbp-8h]
  __int64 v34; // [rsp+100h] [rbp+0h]
  __int64 v35; // [rsp+108h] [rbp+8h]

  v17 = 0;
  if ( qword_140FC07E0 )
  {
    v4 = guard_dispatch_icall_no_overrides(a1);
  }
  else if ( HalpIsXboxNanovisorPresent() )
  {
    v17 = v5;
    v4 = 0;
  }
  if ( v4 >= 0 )
  {
    memset_0(v18, 0, 0xC8uLL);
    HalpHvInitSegRegister(a3 + 224, *(_WORD *)(a3 + 440), (__int64)v18);
    HalpHvInitSegRegister(v6, *(_WORD *)(a3 + 442), (__int64)v19);
    HalpHvInitSegRegister(v7, *(_WORD *)(a3 + 444), (__int64)v20);
    HalpHvInitSegRegister(v8, *(_WORD *)(a3 + 446), (__int64)v21);
    HalpHvInitSegRegister(v9, *(_WORD *)(a3 + 448), (__int64)v22);
    HalpHvInitSegRegister(v10, *(_WORD *)(a3 + 450), (__int64)v23);
    HalpHvInitSegRegister(v11, *(_WORD *)(a3 + 256), (__int64)v24);
    v12 = *(_WORD *)(a3 + 258);
    v25 |= 2u;
    HalpHvInitSegRegister(v13, v12, (__int64)v26);
    v14 = *(_QWORD *)(a3 + 248);
    v27 = *(_WORD *)(a3 + 246);
    v30 = *(_QWORD *)(v15 + 8);
    v29 = *(_WORD *)(v15 + 6);
    v32 = *(_QWORD *)(a3 + 144);
    v33 = *(_QWORD *)(a3 + 160);
    v34 = *(_QWORD *)(a3 + 168);
    v31 = *(_QWORD *)(a3 + 136);
    v35 = *(_QWORD *)(a3 + 128);
    v28 = v14;
    return (unsigned int)HalpHvStartVirtualProcessor(v17);
  }
  return (unsigned int)v4;
}
