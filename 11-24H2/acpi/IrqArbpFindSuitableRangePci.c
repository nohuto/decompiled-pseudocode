/*
 * XREFs of IrqArbpFindSuitableRangePci @ 0x1400BF404
 * Callers:
 *     IrqArbFindSuitableRange @ 0x1400BD6B0 (IrqArbFindSuitableRange.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x140017C78 (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_ @ 0x1400283FC (WPP_RECORDER_SF_.c)
 *     LinkNodeCrackPrt @ 0x14002B0F8 (LinkNodeCrackPrt.c)
 *     WPP_RECORDER_SF_DD @ 0x14004F6F8 (WPP_RECORDER_SF_DD.c)
 *     _guard_dispatch_icall @ 0x140070B90 (_guard_dispatch_icall.c)
 *     IcGetPossibleInput @ 0x140096758 (IcGetPossibleInput.c)
 *     LinkNodeGetPossibleGsiv @ 0x1400A8EAC (LinkNodeGetPossibleGsiv.c)
 *     IrqArbIrqFromGsiv @ 0x1400A9D8C (IrqArbIrqFromGsiv.c)
 *     IrqArbpAssignIrqFromLinkNode @ 0x1400A9FFC (IrqArbpAssignIrqFromLinkNode.c)
 *     IcIsInputValid @ 0x1400AADE0 (IcIsInputValid.c)
 *     IrqArbGsivFromIrq @ 0x1400B3244 (IrqArbGsivFromIrq.c)
 */

char __fastcall IrqArbpFindSuitableRangePci(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rcx
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rcx
  unsigned int v7; // eax
  unsigned __int64 v8; // r15
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // r8
  int v14; // r9d
  __int64 v15; // rdx
  __int64 v16; // rcx
  int v17; // edx
  __int64 v18; // [rsp+28h] [rbp-28h]
  __int64 v19; // [rsp+80h] [rbp+30h] BYREF
  unsigned int v20; // [rsp+88h] [rbp+38h] BYREF
  __int64 v21; // [rsp+90h] [rbp+40h] BYREF

  v19 = a1;
  v2 = a2[4];
  v20 = 0;
  v21 = 0LL;
  v4 = *(_QWORD *)(v2 + 32);
  LOBYTE(v19) = 0;
  if ( (int)LinkNodeCrackPrt(v4, &v21, &v20, 1) < 0 )
    return 0;
  if ( !v21 )
  {
    if ( (int)IcGetPossibleInput(v20, v5, &v19) >= 0 && (v19 & 0xB) != 3
      || (unsigned __int64)v20 < a2[2]
      || (unsigned __int64)v20 > a2[3]
      || !IcIsInputValid(v20) )
    {
      return 0;
    }
    v11 = a2[5];
    *a2 = v10;
    a2[1] = v10;
    *(_QWORD *)(v11 + 16) = 1LL;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_D(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        4u,
        0x14u,
        0x19u,
        (__int64)&WPP_a7cbb71da2803f118d26d72a062fa390_Traceguids,
        v10);
LABEL_21:
    v12 = a2[5];
    v13 = a2[9];
    v14 = *(_DWORD *)(v12 + 36);
    v15 = *(_QWORD *)(v12 + 40);
    v16 = a2[4];
    LODWORD(v19) = *(_BYTE *)(*(_QWORD *)(a2[7] + 40LL) + 4LL) & 1;
    if ( (int)((__int64 (__fastcall *)(_QWORD, __int64, __int64, __int64, unsigned int, _DWORD, int, int))ProcessorFindIdtEntries)(
                *(_QWORD *)(v16 + 32),
                v15,
                v13,
                1LL,
                v20,
                v19,
                v14 & 1,
                1) >= 0 )
      return 1;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v17) = 2;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        v17,
        20,
        26,
        (__int64)&WPP_a7cbb71da2803f118d26d72a062fa390_Traceguids);
    }
    return 0;
  }
  if ( (int)LinkNodeGetPossibleGsiv(v21, &v20) < 0 )
  {
    if ( (int)IrqArbpAssignIrqFromLinkNode(v6, a2, v6) < 0 )
      return 0;
    v20 = IrqArbGsivFromIrq(*(unsigned int *)a2);
    goto LABEL_21;
  }
  v7 = IrqArbIrqFromGsiv(v20);
  v8 = v7;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_D(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      0x14u,
      0x17u,
      (__int64)&WPP_a7cbb71da2803f118d26d72a062fa390_Traceguids,
      v7);
  if ( a2[2] <= v8 && a2[3] >= v8 )
  {
    *a2 = v8;
    a2[1] = v8;
    *(_QWORD *)(a2[5] + 16LL) = 1LL;
    return 1;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v18) = *(_DWORD *)a2;
    WPP_RECORDER_SF_DD(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      0x14u,
      0x18u,
      (__int64)&WPP_a7cbb71da2803f118d26d72a062fa390_Traceguids,
      v18,
      *((_DWORD *)a2 + 2));
  }
  return 0;
}
