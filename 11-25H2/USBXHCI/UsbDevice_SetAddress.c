/*
 * XREFs of UsbDevice_SetAddress @ 0x14000EAF0
 * Callers:
 *     UsbDevice_EnableCompletion @ 0x140030C60 (UsbDevice_EnableCompletion.c)
 *     UsbDevice_UcxEvtAddress @ 0x140031660 (UsbDevice_UcxEvtAddress.c)
 * Callees:
 *     Command_SendCommand @ 0x140008550 (Command_SendCommand.c)
 *     WPP_RECORDER_SF_dD @ 0x14000D338 (WPP_RECORDER_SF_dD.c)
 *     WPP_RECORDER_SF_dqq @ 0x14000F084 (WPP_RECORDER_SF_dqq.c)
 *     TR_GetDequeuePointer @ 0x140010580 (TR_GetDequeuePointer.c)
 *     _guard_dispatch_icall @ 0x1400596E0 (_guard_dispatch_icall.c)
 *     memset @ 0x140059AC0 (memset.c)
 */

__int64 __fastcall UsbDevice_SetAddress(__int64 a1, unsigned __int8 a2)
{
  __int64 v2; // rax
  char v3; // r8
  __int64 v5; // r12
  unsigned int v6; // ebx
  __int64 v7; // rax
  unsigned int v8; // r9d
  __int64 v9; // r13
  __int64 *v10; // rcx
  __int64 v11; // rcx
  void *v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rsi
  int v15; // r8d
  int v16; // r12d
  int v17; // eax
  __int64 v18; // r14
  unsigned int v19; // eax
  int v20; // ecx
  int v21; // r8d
  __int64 DequeuePointer; // rax
  __int64 v23; // rdx
  int v24; // ecx
  __int64 v25; // r8
  unsigned int v26; // eax
  __int64 v27; // rcx
  char v28; // dl
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rcx
  int v32; // eax
  unsigned int v34; // ecx
  __int64 v35; // rdx
  __int64 v36; // rax
  char v37; // cl
  __int64 v38; // r8
  __int64 v39; // rcx
  char v40; // al
  int v41; // ecx
  __int64 v42; // rcx
  int v43; // ecx
  unsigned int *v44; // rdx
  __int64 v45; // r9
  unsigned int v46; // eax
  unsigned int v47; // eax
  __int64 v48; // rax
  __int64 v49; // rax
  __int64 v50; // [rsp+90h] [rbp+8h]
  __int64 v52; // [rsp+A0h] [rbp+18h]

  v2 = *(_QWORD *)(a1 + 8);
  v3 = *(_BYTE *)(a1 + 657);
  v5 = *(_QWORD *)(v2 + 88);
  v52 = *(_QWORD *)(v2 + 144);
  v6 = 0;
  v7 = *(_QWORD *)((v3 != 0 ? 648LL : 640LL) + a1);
  if ( v7 )
    v8 = *(_DWORD *)(v7 + 44);
  else
    v8 = 0;
  v9 = a1 + 640;
  v50 = a1 + 648;
  v10 = (__int64 *)(a1 + 648);
  if ( !v3 )
    v10 = (__int64 *)(a1 + 640);
  v11 = *v10;
  if ( v11 )
    v12 = *(void **)(v11 + 16);
  else
    v12 = 0LL;
  memset(v12, 0, v8);
  v13 = a1 + 640;
  if ( *(_BYTE *)(a1 + 657) )
    v13 = a1 + 648;
  if ( *(_QWORD *)v13 )
    v14 = *(_QWORD *)(*(_QWORD *)v13 + 16LL);
  else
    v14 = 0LL;
  v15 = 0;
  v16 = *(_DWORD *)(v5 + 104) & 4;
  v17 = *(_DWORD *)(v14 + 4) | 3;
  *(_DWORD *)(v14 + 4) = v17;
  v18 = v16 != 0 ? 0x20 : 0;
  *(_DWORD *)(a1 + 152) = v17;
  v19 = *(_DWORD *)(a1 + 36);
  if ( v19 > 1 )
  {
    v43 = 0;
    v44 = (unsigned int *)(a1 + 48);
    v45 = v19 - 1;
    do
    {
      v46 = *v44++;
      if ( v46 > 0xF )
        v46 = 15;
      v47 = v46 << v43;
      v43 += 4;
      v15 |= v47;
      --v45;
    }
    while ( v45 );
  }
  v20 = *(_DWORD *)(v18 + v14 + 32) ^ (v15 ^ *(_DWORD *)(v18 + v14 + 32)) & 0xFFFFF;
  *(_DWORD *)(v18 + v14 + 32) = v20;
  v21 = *(_DWORD *)(a1 + 20);
  if ( v21 )
  {
    switch ( v21 )
    {
      case 1:
        v34 = v20 & 0xFF0FFFFF | 0x100000;
        break;
      case 2:
        v34 = v20 & 0xFF0FFFFF | 0x300000;
        break;
      case 3:
        v34 = v20 & 0xFF0FFFFF | 0x400000;
        break;
      default:
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_dD(
            *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
            2u,
            0xCu,
            0x14u,
            (__int64)&WPP_222713be4b65397e827dad6cd239c0b0_Traceguids,
            *(unsigned __int8 *)(a1 + 135),
            *(_DWORD *)(a1 + 20));
        return (unsigned int)-1073741811;
    }
  }
  else
  {
    v34 = v20 & 0xFF0FFFFF | 0x200000;
  }
  *(_DWORD *)(v18 + v14 + 32) = v34 & 0x7FFFFFF | 0x8000000;
  *(_BYTE *)(v18 + v14 + 38) = *(_BYTE *)(a1 + 44);
  v35 = *(_QWORD *)(a1 + 24);
  if ( v35 )
  {
    v48 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01033 + 1616))(
            WdfDriverGlobals,
            v35,
            off_14006B128);
    if ( *(_DWORD *)(v48 + 144) > 1u )
      *(_DWORD *)(v18 + v14 + 32) |= 0x2000000u;
    *(_BYTE *)(v18 + v14 + 40) = *(_BYTE *)(v48 + 135);
    if ( !*(_BYTE *)(a1 + 136) && *(int *)(a1 + 20) < 2 && *(_DWORD *)(v48 + 144) )
      *(_BYTE *)(a1 + 137) = 1;
  }
  v36 = *(unsigned int *)(a1 + 40);
  if ( (_DWORD)v36 )
    v37 = *(_BYTE *)(a1 + 4 * v36 + 44);
  else
    v37 = 0;
  *(_BYTE *)(v18 + v14 + 41) = v37;
  v38 = v16 != 0 ? 0x40 : 0;
  *(_DWORD *)(v38 + v14 + 68) ^= ((unsigned __int8)*(_DWORD *)(v38 + v14 + 68) ^ (unsigned __int8)(8
                                                                                                 * *(_DWORD *)(*(_QWORD *)(a1 + 176) + 120LL))) & 0x38;
  *(_WORD *)(v38 + v14 + 70) = *(_WORD *)(*(_QWORD *)(a1 + 176) + 100LL) & 0x7FF;
  v39 = *(_QWORD *)(a1 + 176);
  v40 = *(_BYTE *)(v39 + 99) & 3;
  if ( v40 == 1 )
  {
    v41 = 0;
  }
  else if ( (*(_QWORD *)(*(_QWORD *)v39 + 736LL) & 0x10000000000000LL) == 0
         || v40 != 3
         || *(char *)(v39 + 98) >= 0
         || (v49 = *(_QWORD *)(v39 + 16), *(_WORD *)(v49 + 124) != 1529)
         || *(_WORD *)(v49 + 126) != 4353
         || (v41 = 0, *(_DWORD *)(v49 + 36) <= 1u) )
  {
    v41 = 6;
  }
  *(_DWORD *)(v38 + v14 + 68) = v41 | *(_DWORD *)(v38 + v14 + 68) & 0xFFFFFFF9;
  *(_DWORD *)(*(_QWORD *)(a1 + 176) + 152LL) = *(unsigned __int16 *)(v38 + v14 + 70);
  v42 = *(_QWORD *)(a1 + 176);
  if ( *(_BYTE *)(v42 + 37) )
    DequeuePointer = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v42 + 136) + 32LL) + 24LL);
  else
    DequeuePointer = TR_GetDequeuePointer(*(_QWORD *)(v42 + 88));
  *(_QWORD *)((v16 != 0 ? 0x40 : 0) + v14 + 72) = DequeuePointer;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    if ( *(_BYTE *)(a1 + 657) )
      v9 = v50;
    if ( *(_QWORD *)v9 )
      v23 = *(_QWORD *)(*(_QWORD *)v9 + 16LL);
    else
      LODWORD(v23) = 0;
    WPP_RECORDER_SF_dqq(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL), v23, v38, 21);
  }
  memset((void *)(a1 + 456), 0, 0x60uLL);
  v24 = *(_DWORD *)(a1 + 492);
  *(_QWORD *)(a1 + 496) = UsbDevice_SetAddressCompletion;
  v25 = a1 + 640;
  *(_QWORD *)(a1 + 504) = a1;
  v26 = (v24 & 0xFFFF03FF | 0x2C00) ^ ((v24 & 0x3FF | 0x2C00) ^ (unsigned __int16)(a2 << 9)) & 0x200;
  v27 = a1 + 648;
  *(_DWORD *)(a1 + 492) = v26;
  *(_BYTE *)(a1 + 495) = *(_BYTE *)(a1 + 135);
  v28 = *(_BYTE *)(a1 + 657);
  if ( !v28 )
    v27 = a1 + 640;
  if ( *(_QWORD *)v27 )
    v29 = *(_QWORD *)(*(_QWORD *)v27 + 24LL);
  else
    v29 = 0LL;
  *(_QWORD *)(a1 + 480) = v29;
  if ( v28 )
    v25 = a1 + 648;
  if ( *(_QWORD *)v25 )
    v30 = *(_QWORD *)(*(_QWORD *)v25 + 16LL);
  else
    v30 = 0LL;
  *(_QWORD *)(a1 + 528) = v30;
  v31 = a1 + 648;
  if ( !v28 )
    v31 = a1 + 640;
  if ( *(_QWORD *)v31 )
    v32 = *(_DWORD *)(*(_QWORD *)v31 + 44LL);
  else
    v32 = 0;
  *(_DWORD *)(a1 + 536) = v32;
  *(_DWORD *)(a1 + 540) = 1;
  *(_QWORD *)(a1 + 544) = a1;
  Command_SendCommand(v52, a1 + 456);
  return v6;
}
