/*
 * XREFs of HalpHvStartProcessor @ 0x14055673C
 * Callers:
 *     HalpInterruptStartProcessor @ 0x140B4DF10 (HalpInterruptStartProcessor.c)
 * Callees:
 *     HalpIsXboxNanovisorPresent @ 0x140548550 (HalpIsXboxNanovisorPresent.c)
 *     HalpHvStartVirtualProcessor @ 0x140549128 (HalpHvStartVirtualProcessor.c)
 *     HalpHvInitSegRegister @ 0x14055666C (HalpHvInitSegRegister.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall HalpHvStartProcessor(__int64 a1, __int64 a2, __int64 a3)
{
  int v4; // r10d
  unsigned int v5; // r11d
  unsigned __int16 v6; // dx
  __int64 v7; // r11
  __int64 v8; // r11
  __int64 v9; // r11
  __int64 v10; // r11
  __int64 v11; // r11
  __int64 v12; // r11
  unsigned __int16 v13; // dx
  __int64 v14; // r11
  __int64 v15; // r8
  __int64 v16; // r11
  unsigned int v18[4]; // [rsp+20h] [rbp-E0h] BYREF
  _QWORD v19[3]; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE v20[16]; // [rsp+48h] [rbp-B8h] BYREF
  _BYTE v21[16]; // [rsp+58h] [rbp-A8h] BYREF
  _BYTE v22[16]; // [rsp+68h] [rbp-98h] BYREF
  _BYTE v23[16]; // [rsp+78h] [rbp-88h] BYREF
  _BYTE v24[16]; // [rsp+88h] [rbp-78h] BYREF
  _BYTE v25[16]; // [rsp+98h] [rbp-68h] BYREF
  _BYTE v26[14]; // [rsp+A8h] [rbp-58h] BYREF
  __int16 v27; // [rsp+B6h] [rbp-4Ah]
  _BYTE v28[22]; // [rsp+B8h] [rbp-48h] BYREF
  __int16 v29; // [rsp+CEh] [rbp-32h]
  __int64 v30; // [rsp+D0h] [rbp-30h]
  __int16 v31; // [rsp+DEh] [rbp-22h]
  __int64 v32; // [rsp+E0h] [rbp-20h]
  __int64 v33; // [rsp+E8h] [rbp-18h]
  __int64 v34; // [rsp+F0h] [rbp-10h]
  __int64 v35; // [rsp+F8h] [rbp-8h]
  __int64 v36; // [rsp+100h] [rbp+0h]
  __int64 v37; // [rsp+108h] [rbp+8h]

  v18[0] = 0;
  if ( qword_140FC11E0 )
  {
    v4 = guard_dispatch_icall_no_overrides(a1, v18);
  }
  else if ( HalpIsXboxNanovisorPresent() )
  {
    v18[0] = v5;
    v4 = 0;
  }
  if ( v4 >= 0 )
  {
    memset_0(v20, 0, 0xC8uLL);
    v6 = *(_WORD *)(a3 + 440);
    v19[0] = HalpLMStubForVM;
    v19[1] = *(_QWORD *)(a3 + 120);
    v19[2] = 2LL;
    HalpHvInitSegRegister(a3 + 224, v6, (__int64)v20);
    HalpHvInitSegRegister(v7, *(_WORD *)(a3 + 442), (__int64)v21);
    HalpHvInitSegRegister(v8, *(_WORD *)(a3 + 444), (__int64)v22);
    HalpHvInitSegRegister(v9, *(_WORD *)(a3 + 446), (__int64)v23);
    HalpHvInitSegRegister(v10, *(_WORD *)(a3 + 448), (__int64)v24);
    HalpHvInitSegRegister(v11, *(_WORD *)(a3 + 450), (__int64)v25);
    HalpHvInitSegRegister(v12, *(_WORD *)(a3 + 256), (__int64)v26);
    v13 = *(_WORD *)(a3 + 258);
    v27 |= 2u;
    HalpHvInitSegRegister(v14, v13, (__int64)v28);
    v15 = *(_QWORD *)(a3 + 248);
    v29 = *(_WORD *)(a3 + 246);
    v32 = *(_QWORD *)(v16 + 8);
    v31 = *(_WORD *)(v16 + 6);
    v34 = *(_QWORD *)(a3 + 144);
    v35 = *(_QWORD *)(a3 + 160);
    v36 = *(_QWORD *)(a3 + 168);
    v33 = *(_QWORD *)(a3 + 136);
    v37 = *(_QWORD *)(a3 + 128);
    v30 = v15;
    return (unsigned int)HalpHvStartVirtualProcessor(v18[0], (__int64)v19);
  }
  return (unsigned int)v4;
}
