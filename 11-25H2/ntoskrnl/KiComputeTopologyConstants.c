/*
 * XREFs of KiComputeTopologyConstants @ 0x1405C45E8
 * Callers:
 *     KiSetFeatureBits @ 0x140B49BD0 (KiSetFeatureBits.c)
 * Callees:
 *     KiComputeTopologyConstantsAmd @ 0x1405C4698 (KiComputeTopologyConstantsAmd.c)
 *     KiComputeTopologyConstantsIntelCompatible @ 0x1405C488C (KiComputeTopologyConstantsIntelCompatible.c)
 */

char __fastcall KiComputeTopologyConstants(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int128 *a4,
        __int128 *a5,
        __int64 a6)
{
  int *v7; // r9
  int v8; // ecx
  char v9; // al
  int v10; // eax
  int v11; // eax
  __int128 v13; // [rsp+20h] [rbp-28h] BYREF
  __int128 v14; // [rsp+30h] [rbp-18h] BYREF

  v7 = (int *)a6;
  *(_OWORD *)a6 = 0LL;
  *(_QWORD *)(a6 + 16) = 0LL;
  *(_DWORD *)(a6 + 24) = 0;
  if ( (unsigned int)(a1 - 2) <= 1 )
  {
    v14 = *a5;
    KiComputeTopologyConstantsIntelCompatible(a1, a2, &v14);
  }
  else if ( (_DWORD)a1 == 1 )
  {
    v13 = *a4;
    v14 = *a5;
    KiComputeTopologyConstantsAmd(a3, &v14, &v13);
  }
  v8 = *v7;
  v9 = *v7 & 6;
  v7[1] = *v7;
  if ( v9 == 2 )
  {
    v10 = v7[3];
    v8 |= 4u;
    *v7 = v8;
    v7[4] = v10;
  }
  LOBYTE(v11) = v8 & 9;
  if ( (v8 & 9) == 1 )
  {
    v11 = v7[2];
    *v7 = v8 | 8;
    v7[5] = v11;
  }
  return v11;
}
