/*
 * XREFs of ?RmpPolicyComputeDesiredState@@YA?AT_RM_OPTIMIZATION_STATE@@PEAU_RM_ACTIVITY_HOST@@@Z @ 0x180024218
 * Callers:
 *     ?RmHamHostStateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180025420 (-RmHamHostStateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 *     ?RmpActivityHostCheckQueueWork@@YAKPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180060D98 (-RmpActivityHostCheckQueueWork@@YAKPEAU_RM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     ?RmpPolicyGetDesiredEmptyOptimizationsForHost@@YA?AT_RM_OPTIMIZATION_STATE@@PEAU_RM_POLICY@@PEAU_RM_ACTIVITY_HOST@@@Z @ 0x18001F090 (-RmpPolicyGetDesiredEmptyOptimizationsForHost@@YA-AT_RM_OPTIMIZATION_STATE@@PEAU_RM_POLICY@@PEAU.c)
 *     ?HampHostComputeDesiredHamState@@YA?AT_RM_OPTIMIZATION_STATE@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180023F60 (-HampHostComputeDesiredHamState@@YA-AT_RM_OPTIMIZATION_STATE@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 */

__int64 __fastcall RmpPolicyComputeDesiredState(__int64 a1)
{
  unsigned int v2; // ebx
  int v3; // eax
  __int64 v5; // r14
  int v6; // edi
  int v7; // esi
  int v8; // ecx
  int DesiredEmptyOptimizationsForHost; // eax
  unsigned __int8 v10; // r10
  int v11; // r10d
  int v12; // edx
  int v13; // ecx
  int v14; // r9d
  int v15; // r8d
  int v16; // eax
  int v17; // ecx

  v2 = HampHostComputeDesiredHamState(a1 + 64);
  if ( *(_QWORD *)(a1 + 664) )
  {
    v3 = *(_DWORD *)(a1 + 624);
    if ( v3 != 8 )
    {
      if ( v3 == 4 )
      {
        if ( (*(_BYTE *)(a1 + 1264) & 1) != 0 )
          v2 |= 0x40u;
      }
      else if ( v3 != 2 )
      {
        return v2;
      }
    }
    if ( (v2 & 8) != 0 )
    {
      v5 = *(_QWORD *)(a1 + 48);
      v6 = 0;
      v7 = *(_DWORD *)(a1 + 1268);
      v8 = *(_DWORD *)(a1 + 1456);
      if ( (v7 & 0x10) == 0 && (v8 & 0x200) == 0 )
      {
        v6 = 2 * (*(_DWORD *)(v5 + 504) & 1);
        if ( (v8 & 0x100) == 0 )
          v6 |= 2 * (*(_DWORD *)(v5 + 504) & 2);
      }
      DesiredEmptyOptimizationsForHost = RmpPolicyGetDesiredEmptyOptimizationsForHost(v5 + 400, a1);
      v10 = 0;
      v2 |= v6 | v7 & 0x27 | DesiredEmptyOptimizationsForHost;
      if ( (*(_BYTE *)(a1 + 1184) & 8) == 0 )
        v10 = (unsigned __int16)~*(_WORD *)(a1 + 1456) >> 9;
      v11 = (unsigned __int8)~(*(_DWORD *)(a1 + 1264) >> 1) & v10 & 1;
      if ( v11 )
      {
        v12 = *(_DWORD *)(a1 + 1268);
        v13 = 0;
        v14 = *(_DWORD *)(a1 + 1456);
        if ( (v12 & 0x10) == 0 && (v14 & 0x200) == 0 )
        {
          v15 = 2 * (*(_DWORD *)(v5 + 504) & 1);
          if ( (v14 & 0x100) == 0 )
            v15 |= 2 * (*(_DWORD *)(v5 + 504) & 2);
          if ( (*(_DWORD *)(v5 + 504) & 4) != 0 )
            v13 = v15;
          else
            v13 = v15 | 0x22;
        }
        v16 = v13 | *(_DWORD *)(a1 + 1268) & 0x27;
        v17 = 0;
        if ( (v16 & v12) == v16 )
          v17 = v11;
        if ( v17 )
          v2 ^= ((unsigned __int8)v2 ^ (unsigned __int8)(8 * *(_DWORD *)(v5 + 508))) & 0x10;
      }
    }
  }
  return v2;
}
