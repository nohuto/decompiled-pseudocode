/*
 * XREFs of IrqArbGetNextAllocationRange @ 0x1400BC8E0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x140017C78 (WPP_RECORDER_SF_D.c)
 *     LinkNodeCrackPrt @ 0x14002B0F8 (LinkNodeCrackPrt.c)
 *     WPP_RECORDER_SF_ii @ 0x14004EBF0 (WPP_RECORDER_SF_ii.c)
 *     ArbGetNextAllocationRange @ 0x140096010 (ArbGetNextAllocationRange.c)
 *     IrqArbIrqFromGsiv @ 0x1400A9D8C (IrqArbIrqFromGsiv.c)
 *     IrqArbpFindIrqInAlternatives @ 0x1400AA1D0 (IrqArbpFindIrqInAlternatives.c)
 *     PcisuppIsPciDevice @ 0x1400B1EC4 (PcisuppIsPciDevice.c)
 *     IrqArbpFindBootConfig @ 0x1400BDB84 (IrqArbpFindBootConfig.c)
 */

char __fastcall IrqArbGetNextAllocationRange(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  __int64 v5; // r8
  __int64 v6; // rax
  __int16 v7; // cx
  __int64 v8; // r8
  __int64 v9; // r9
  _DWORD *v10; // rsi
  void *v11; // rdx
  __int64 v12; // rcx
  unsigned int v13; // r10d
  unsigned __int64 v14; // rcx
  _QWORD *v15; // rax
  __int64 v16; // rdi
  int BootConfig; // eax
  unsigned __int64 v18; // r8
  char result; // al
  int v20; // eax
  __int64 v21; // rcx
  unsigned int v22; // eax
  int v23; // [rsp+20h] [rbp-30h]
  __int64 v24; // [rsp+28h] [rbp-28h]
  int v25; // [rsp+40h] [rbp-10h] BYREF
  __int64 v26; // [rsp+48h] [rbp-8h] BYREF
  bool v27; // [rsp+88h] [rbp+38h] BYREF
  unsigned int v28; // [rsp+90h] [rbp+40h] BYREF
  unsigned int v29; // [rsp+98h] [rbp+48h] BYREF

  v2 = a2[4];
  v3 = (__int64)a2;
  v25 = 0;
  v26 = 0LL;
  v28 = 0;
  v5 = *(_QWORD *)(v2 + 32);
  v29 = 0;
  v27 = 0;
  if ( *(PVOID *)(v5 + 8) == AcpiDriverObject && (*(_DWORD *)(*(_QWORD *)(v5 + 64) + 8LL) & 0x2000000) != 0 )
    return ArbGetNextAllocationRange(a1, (__int64)a2);
  v6 = a2[5];
  if ( v6 )
    v7 = *(_WORD *)(*(_QWORD *)(v6 + 40) + 4LL);
  else
    v7 = *(_WORD *)(*(_QWORD *)(a2[7] + 40LL) + 4LL);
  if ( (v7 & 0x20) != 0 )
    goto LABEL_45;
  if ( (int)PcisuppIsPciDevice(v5, &v27) < 0 )
    return 0;
  if ( !v27 )
  {
LABEL_45:
    a2 = (_QWORD *)v3;
    return ArbGetNextAllocationRange(a1, (__int64)a2);
  }
  v10 = *(_DWORD **)(v3 + 72);
  if ( !*(_QWORD *)(v3 + 40) )
    *v10 = 4096;
  do
  {
    v11 = &WPP_a7cbb71da2803f118d26d72a062fa390_Traceguids;
    while ( 1 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LODWORD(v24) = *v10;
            WPP_RECORDER_SF_D(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              4u,
              0x14u,
              0xAu,
              (__int64)&WPP_a7cbb71da2803f118d26d72a062fa390_Traceguids,
              v24);
            v11 = &WPP_a7cbb71da2803f118d26d72a062fa390_Traceguids;
          }
          if ( *v10 != 4096 )
            break;
          switch ( IrqArbGlobalDistributionDisposition )
          {
            case 0:
              goto LABEL_42;
            case 1:
              *v10 = 4100;
              break;
            case 2:
              *v10 = 4098;
              break;
            default:
LABEL_42:
              *v10 = 4097;
              break;
          }
        }
        if ( *v10 == 4097 )
          break;
        v12 = (unsigned int)(*v10 - 4098);
        switch ( *v10 )
        {
          case 0x1002:
            *v10 = 4099;
            v29 = IrqArbGlobalStackingIrq;
            v16 = (unsigned int)IrqArbGlobalStackingIrq;
            v18 = (unsigned int)IrqArbGlobalStackingIrq;
            goto LABEL_28;
          case 0x1003:
            *v10 = 4100;
            BootConfig = IrqArbpFindBootConfig(a1, v3, &v29);
            v11 = &WPP_a7cbb71da2803f118d26d72a062fa390_Traceguids;
            if ( BootConfig >= 0 )
            {
              v16 = v29;
              v18 = v29;
              goto LABEL_28;
            }
            break;
          case 0x1004:
            *v10 = 4101;
            v15 = *(_QWORD **)(v3 + 56);
            *(_QWORD *)(v3 + 40) = v15;
LABEL_24:
            *(_QWORD *)(v3 + 16) = *v15;
            v16 = v15[1];
            goto LABEL_30;
          case 0x1005:
            v13 = *(_DWORD *)(v3 + 48);
            v14 = *(_QWORD *)(v3 + 40) + 64LL;
            *(_QWORD *)(v3 + 40) = v14;
            if ( v14 >= *(_QWORD *)(v3 + 56) + ((unsigned __int64)v13 << 6) )
              return 0;
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LODWORD(v24) = v13;
              WPP_RECORDER_SF_D(
                (__int64)WPP_GLOBAL_Control->DeviceExtension,
                4u,
                0x14u,
                0xBu,
                (__int64)&WPP_a7cbb71da2803f118d26d72a062fa390_Traceguids,
                v24);
            }
            v15 = *(_QWORD **)(v3 + 40);
            goto LABEL_24;
        }
      }
      *v10 = 4099;
      v20 = LinkNodeCrackPrt(*(_QWORD *)(*(_QWORD *)(v3 + 32) + 32LL), &v26, &v25, 0);
      v11 = &WPP_a7cbb71da2803f118d26d72a062fa390_Traceguids;
      if ( v20 >= 0 )
      {
        v11 = &WPP_a7cbb71da2803f118d26d72a062fa390_Traceguids;
        if ( v26 )
        {
          v21 = *(unsigned int *)(v26 + 40);
          v11 = &WPP_a7cbb71da2803f118d26d72a062fa390_Traceguids;
          if ( (_DWORD)v21 != -1 )
            break;
        }
      }
    }
    v22 = IrqArbIrqFromGsiv(v21);
    v16 = v22;
    v29 = v22;
    v18 = v22;
LABEL_28:
    ;
  }
  while ( (int)IrqArbpFindIrqInAlternatives(v12, v3, v18, &v28) < 0 );
  *(_QWORD *)(v3 + 40) = *(_QWORD *)(v3 + 56) + ((unsigned __int64)v28 << 6);
  *(_QWORD *)(v3 + 16) = v16;
LABEL_30:
  *(_QWORD *)(v3 + 24) = v16;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_ii((__int64)WPP_GLOBAL_Control->DeviceExtension, (__int64)v11, v8, v9, v23);
  result = 1;
  ++IrqArbPciAlternativeRotation;
  return result;
}
