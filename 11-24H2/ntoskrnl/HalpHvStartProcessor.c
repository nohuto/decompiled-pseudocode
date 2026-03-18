/*
 * XREFs of HalpHvStartProcessor @ 0x140558DFC
 * Callers:
 *     HalpInterruptStartProcessor @ 0x140B4BED0 (HalpInterruptStartProcessor.c)
 * Callees:
 *     HalpIsXboxNanovisorPresent @ 0x14054AC90 (HalpIsXboxNanovisorPresent.c)
 *     HalpHvStartVirtualProcessor @ 0x14054B868 (HalpHvStartVirtualProcessor.c)
 *     HalpHvInitSegRegister @ 0x140558D2C (HalpHvInitSegRegister.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

__int64 __fastcall HalpHvStartProcessor(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v5; // r10d
  unsigned int v6; // r11d
  unsigned __int16 v7; // dx
  __int64 v8; // r11
  __int64 v9; // r11
  __int64 v10; // r11
  __int64 v11; // r11
  __int64 v12; // r11
  __int64 v13; // r11
  unsigned __int16 v14; // dx
  __int64 v15; // r11
  __int64 v16; // r8
  __int64 v17; // r11
  __int64 v18; // r9
  unsigned int v20[4]; // [rsp+20h] [rbp-E0h] BYREF
  _QWORD v21[3]; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE v22[16]; // [rsp+48h] [rbp-B8h] BYREF
  _BYTE v23[16]; // [rsp+58h] [rbp-A8h] BYREF
  _BYTE v24[16]; // [rsp+68h] [rbp-98h] BYREF
  _BYTE v25[16]; // [rsp+78h] [rbp-88h] BYREF
  _BYTE v26[16]; // [rsp+88h] [rbp-78h] BYREF
  _BYTE v27[16]; // [rsp+98h] [rbp-68h] BYREF
  _BYTE v28[14]; // [rsp+A8h] [rbp-58h] BYREF
  __int16 v29; // [rsp+B6h] [rbp-4Ah]
  _BYTE v30[22]; // [rsp+B8h] [rbp-48h] BYREF
  __int16 v31; // [rsp+CEh] [rbp-32h]
  __int64 v32; // [rsp+D0h] [rbp-30h]
  __int16 v33; // [rsp+DEh] [rbp-22h]
  __int64 v34; // [rsp+E0h] [rbp-20h]
  __int64 v35; // [rsp+E8h] [rbp-18h]
  __int64 v36; // [rsp+F0h] [rbp-10h]
  __int64 v37; // [rsp+F8h] [rbp-8h]
  __int64 v38; // [rsp+100h] [rbp+0h]
  __int64 v39; // [rsp+108h] [rbp+8h]

  v20[0] = 0;
  if ( qword_140FC0F80 )
  {
    v5 = guard_dispatch_icall_no_overrides(a1, v20, a3, a4);
  }
  else if ( HalpIsXboxNanovisorPresent() )
  {
    v20[0] = v6;
    v5 = 0;
  }
  if ( v5 >= 0 )
  {
    memset_0(v22, 0, 0xC8uLL);
    v7 = *(_WORD *)(a3 + 440);
    v21[0] = HalpLMStubForVM;
    v21[1] = *(_QWORD *)(a3 + 120);
    v21[2] = 2LL;
    HalpHvInitSegRegister(a3 + 224, v7, (__int64)v22);
    HalpHvInitSegRegister(v8, *(_WORD *)(a3 + 442), (__int64)v23);
    HalpHvInitSegRegister(v9, *(_WORD *)(a3 + 444), (__int64)v24);
    HalpHvInitSegRegister(v10, *(_WORD *)(a3 + 446), (__int64)v25);
    HalpHvInitSegRegister(v11, *(_WORD *)(a3 + 448), (__int64)v26);
    HalpHvInitSegRegister(v12, *(_WORD *)(a3 + 450), (__int64)v27);
    HalpHvInitSegRegister(v13, *(_WORD *)(a3 + 256), (__int64)v28);
    v14 = *(_WORD *)(a3 + 258);
    v29 |= 2u;
    HalpHvInitSegRegister(v15, v14, (__int64)v30);
    v16 = *(_QWORD *)(a3 + 248);
    v31 = *(_WORD *)(a3 + 246);
    v34 = *(_QWORD *)(v17 + 8);
    v33 = *(_WORD *)(v17 + 6);
    v36 = *(_QWORD *)(a3 + 144);
    v37 = *(_QWORD *)(a3 + 160);
    v38 = *(_QWORD *)(a3 + 168);
    v35 = *(_QWORD *)(a3 + 136);
    v39 = *(_QWORD *)(a3 + 128);
    v32 = v16;
    return (unsigned int)HalpHvStartVirtualProcessor(v20[0], (__int64)v21, v16, v18);
  }
  return (unsigned int)v5;
}
