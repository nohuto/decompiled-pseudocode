/*
 * XREFs of KiConfigureSchedulingInformation @ 0x140B58128
 * Callers:
 *     KiInitializeDynamicProcessorDpc @ 0x140B59640 (KiInitializeDynamicProcessorDpc.c)
 *     KiConfigureAllSchedulingInformation @ 0x140C29E84 (KiConfigureAllSchedulingInformation.c)
 * Callees:
 *     KiQuerySubNodeActiveAffinity @ 0x14026FE00 (KiQuerySubNodeActiveAffinity.c)
 *     KiConfigureCpuSetSchedulingInformation @ 0x14037342C (KiConfigureCpuSetSchedulingInformation.c)
 */

__int64 __fastcall KiConfigureSchedulingInformation(__int64 a1)
{
  __int64 v1; // rcx
  __int64 v2; // r9
  unsigned int v3; // ebx
  unsigned __int8 *v4; // r10
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // r8
  unsigned int i; // edx
  __int64 v10; // r11
  __int64 v11; // rcx
  __int64 v12; // rcx
  unsigned __int64 v13; // rcx
  __int128 v15; // [rsp+20h] [rbp-18h] BYREF
  __int16 v16; // [rsp+48h] [rbp+10h] BYREF

  v1 = *(_QWORD *)(a1 + 192);
  v15 = 0LL;
  KiQuerySubNodeActiveAffinity(v1, (__int64)&v15, &v16);
  v3 = *(_DWORD *)(v2 + 35732);
  v4 = (unsigned __int8 *)(v2 + 208);
  if ( v3 )
  {
    v5 = *v4;
    v6 = v2 + 264LL * (v3 - 1);
    if ( (unsigned __int16)v5 >= *(_WORD *)(v6 + 44800) )
      v7 = 0LL;
    else
      v7 = *(_QWORD *)(v6 + 8 * v5 + 44808);
    *(_QWORD *)(v2 + 36464) = v15 & v7;
  }
  if ( !*(_QWORD *)(v2 + 36464) )
    *(_QWORD *)(v2 + 36464) = *(_QWORD *)(v2 + 200);
  LODWORD(v8) = *(unsigned __int8 *)(v2 + 209);
  for ( i = 0; i < v3; ++i )
  {
    v10 = *v4;
    v11 = v2 + 264LL * i;
    if ( (unsigned __int16)v10 >= *(_WORD *)(v11 + 44800) )
      v12 = 0LL;
    else
      v12 = *(_QWORD *)(v11 + 8 * v10 + 44808);
    v13 = v15 & v12;
    if ( (~*(_QWORD *)(v2 + 36448) & v13) != 0 )
    {
      _BitScanForward64((unsigned __int64 *)&v8, v13);
      *(_QWORD *)(v2 + 36456) = v13;
      break;
    }
  }
  *(_DWORD *)(v2 + 36436) = v8;
  return KiConfigureCpuSetSchedulingInformation(v2);
}
