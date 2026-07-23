/*
 * XREFs of WheaAddErrorSourceDeviceDriver @ 0x1407C7280
 * Callers:
 *     WheaAddErrorSourceDeviceDriverV1 @ 0x14065A630 (WheaAddErrorSourceDeviceDriverV1.c)
 * Callees:
 *     WheapDeviceDriverGetPacketLength @ 0x14065ADE4 (WheapDeviceDriverGetPacketLength.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     WheaAddErrorSource @ 0x1407C6DE0 (WheaAddErrorSource.c)
 *     WheaConfigureErrorSource @ 0x140B63CB0 (WheaConfigureErrorSource.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall WheaAddErrorSourceDeviceDriver(__int64 a1, __int64 a2, unsigned int a3)
{
  void *Pool2; // rsi
  __int64 v4; // r14
  void *v5; // rdi
  int v8; // r15d
  int v9; // r12d
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  int PacketLength; // eax
  int v14; // r15d
  __int64 v15; // rax
  int v16; // ebx
  _DWORD v18[11]; // [rsp+28h] [rbp-E0h] BYREF
  __int128 v19; // [rsp+54h] [rbp-B4h]
  int v20; // [rsp+64h] [rbp-A4h]
  int v21; // [rsp+68h] [rbp-A0h]
  int v22; // [rsp+6Ch] [rbp-9Ch]
  void *v23; // [rsp+70h] [rbp-98h]
  __int64 v24; // [rsp+78h] [rbp-90h]
  __int64 v25; // [rsp+80h] [rbp-88h]
  __int64 (__fastcall *v26)(__int64, unsigned int *); // [rsp+88h] [rbp-80h]
  __int128 v27; // [rsp+90h] [rbp-78h]
  __int128 v28; // [rsp+A0h] [rbp-68h]
  int v29; // [rsp+B0h] [rbp-58h]
  int v30; // [rsp+B4h] [rbp-54h]
  __int64 v31; // [rsp+B8h] [rbp-50h]

  Pool2 = 0LL;
  v4 = a3;
  v5 = 0LL;
  if ( !*(_QWORD *)(a2 + 28) || !*(_QWORD *)(a2 + 36) )
    return 3221225485LL;
  if ( *(_DWORD *)a2 == 2 )
  {
    v8 = *(_DWORD *)(a2 + 48) + 2;
    v9 = *(_DWORD *)(a2 + 44) * v8;
    if ( !byte_140EEF388 )
      WheaConfigureErrorSource(16LL, &WheaDeviceDriverDefaultSourceConfig);
    memset_0(v18, 0, 0x3CCuLL);
    v10 = *(_OWORD *)(a2 + 52);
    LOWORD(v20) = *(_WORD *)(a2 + 20);
    v11 = *(_OWORD *)(a2 + 68);
    v24 = *(_QWORD *)(a2 + 28);
    v25 = *(_QWORD *)(a2 + 36);
    v18[7] = 0;
    v18[9] = 0;
    v23 = 0LL;
    v31 = 0LL;
    v27 = v10;
    v26 = WheapCorrectErrorSourceDeviceDriver;
    v12 = *(_OWORD *)(a2 + 4);
    v18[0] = 972;
    v18[1] = 11;
    v18[2] = 16;
    v18[3] = 1;
    v18[5] = v4;
    v18[6] = v8;
    v18[4] = v9;
    v28 = v11;
    v19 = v12;
    PacketLength = WheapDeviceDriverGetPacketLength(v9, v8);
    v14 = PacketLength;
    if ( (_DWORD)v4 )
    {
      Pool2 = (void *)ExAllocatePool2(0x42uLL, (unsigned int)(v4 * PacketLength), 0x41454857u);
      v15 = ExAllocatePool2(0x42uLL, 104 * v4, 0x41454857u);
      v5 = (void *)v15;
      if ( !Pool2 || !v15 )
        return (unsigned int)-1073741670;
      v23 = Pool2;
      v31 = v15;
    }
    v29 = *(_DWORD *)(a2 + 44);
    v30 = *(_DWORD *)(a2 + 48);
    v21 = v14;
    v22 = v4;
    v16 = WheaAddErrorSource((__int64)v18, a1);
    if ( v16 < 0 )
    {
      if ( Pool2 )
        ExFreePoolWithTag(Pool2, 0x41454857u);
      if ( v5 )
        ExFreePoolWithTag(v5, 0x41454857u);
    }
    return (unsigned int)v16;
  }
  return 3221225712LL;
}
