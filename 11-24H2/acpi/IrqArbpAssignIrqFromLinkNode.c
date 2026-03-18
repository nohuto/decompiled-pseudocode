/*
 * XREFs of IrqArbpAssignIrqFromLinkNode @ 0x1400A9FFC
 * Callers:
 *     IrqArbpFindSuitableRangePci @ 0x1400BF404 (IrqArbpFindSuitableRangePci.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x140017C78 (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_q @ 0x1400232C0 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_d @ 0x14003A7DC (WPP_RECORDER_SF_d.c)
 *     IcGetPossibleInput @ 0x140096758 (IcGetPossibleInput.c)
 *     LinkNodeGetPossibleResources @ 0x1400A8ED0 (LinkNodeGetPossibleResources.c)
 *     IrqArbIrqFromGsiv @ 0x1400A9D8C (IrqArbIrqFromGsiv.c)
 *     IcIsInputValid @ 0x1400AADE0 (IcIsInputValid.c)
 */

__int64 __fastcall IrqArbpAssignIrqFromLinkNode(__int64 a1, _QWORD *a2, __int64 a3)
{
  int PossibleResources; // ebx
  _DWORD *v5; // rdi
  unsigned int v6; // r14d
  unsigned int v7; // r11d
  char v8; // r15
  __int64 v9; // rdx
  __int64 v10; // rbp
  unsigned int v11; // ebx
  int v12; // eax
  unsigned __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v18; // [rsp+28h] [rbp-40h]
  PVOID P[7]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v20; // [rsp+70h] [rbp+8h] BYREF
  char v21; // [rsp+88h] [rbp+20h] BYREF

  v20 = a1;
  P[0] = 0LL;
  LOBYTE(v20) = 0;
  v21 = 0;
  PossibleResources = LinkNodeGetPossibleResources(a3, P, &v20);
  v5 = P[0];
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      0x14u,
      0x1Bu,
      (__int64)&WPP_a7cbb71da2803f118d26d72a062fa390_Traceguids,
      P[0]);
  if ( PossibleResources < 0 )
  {
LABEL_19:
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v18) = PossibleResources;
      WPP_RECORDER_SF_d(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        0x14u,
        0x1Du,
        (__int64)&WPP_a7cbb71da2803f118d26d72a062fa390_Traceguids,
        v18);
    }
  }
  else
  {
    v6 = v5[4];
    v7 = 0;
    v8 = v20;
    while ( 1 )
    {
      if ( v7 >= v6 )
      {
        PossibleResources = -1073741275;
        goto LABEL_19;
      }
      v9 = (v7 + (unsigned __int8)IrqArbPciAlternativeRotation) % v6;
      v10 = 5 * v9;
      v11 = v5[5 * (unsigned int)v9 + 7];
      if ( v11 >= 0x10 || (v12 = (unsigned __int16)PciExclusionMask, !_bittest(&v12, v11)) )
      {
        if ( (int)IcGetPossibleInput(v11, v9, &v21) < 0 || v8 == v21 )
        {
          v13 = (unsigned int)v5[v10 + 7];
          if ( v13 >= a2[2] && v13 <= a2[3] )
            break;
        }
      }
      ++v7;
    }
    if ( !(unsigned __int8)IcIsInputValid(v11) )
    {
      PossibleResources = -1073741823;
      goto LABEL_19;
    }
    v15 = (unsigned int)IrqArbIrqFromGsiv(v14);
    v16 = a2[5];
    *a2 = v15;
    a2[1] = v15;
    *(_QWORD *)(v16 + 16) = 1LL;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v18) = v5[v10 + 7];
      WPP_RECORDER_SF_D(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        4u,
        0x14u,
        0x1Cu,
        (__int64)&WPP_a7cbb71da2803f118d26d72a062fa390_Traceguids,
        v18);
    }
    PossibleResources = 0;
  }
  if ( v5 )
    ExFreePoolWithTag(v5, 0);
  return (unsigned int)PossibleResources;
}
