/*
 * XREFs of NvmeAdapterSetFabricControllerKeepAliveTimeout @ 0x1400E7AC4
 * Callers:
 *     NvmeAdapterConnectFabricNvmeController @ 0x1400DFBF4 (NvmeAdapterConnectFabricNvmeController.c)
 *     NvmeAdapterReconnectFabricControllerAssociation @ 0x1400E69F4 (NvmeAdapterReconnectFabricControllerAssociation.c)
 * Callees:
 *     RaidAllocateNvmeSrb @ 0x14007AEA0 (RaidAllocateNvmeSrb.c)
 *     NvmeAdapterSetFabricControllerFeature @ 0x1400E76C8 (NvmeAdapterSetFabricControllerFeature.c)
 */

__int64 __fastcall NvmeAdapterSetFabricControllerKeepAliveTimeout(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdx
  __int64 NvmeSrb; // rax
  unsigned int v8; // ecx
  __int64 v9; // r8
  __int64 v10; // rax
  int v11; // r8d
  unsigned int v12; // eax
  __int64 v13; // [rsp+28h] [rbp-40h]
  __int64 v14; // [rsp+30h] [rbp-38h]
  __int64 v15; // [rsp+38h] [rbp-30h]
  __int64 v16; // [rsp+40h] [rbp-28h]
  __int64 v17; // [rsp+48h] [rbp-20h]
  __int64 v18; // [rsp+50h] [rbp-18h]
  int v19; // [rsp+70h] [rbp+8h] BYREF

  v4 = *(_QWORD *)(a1 + 536);
  if ( !v4 )
  {
    NvmeSrb = RaidAllocateNvmeSrb(a1, 0);
    *(_QWORD *)(a1 + 536) = NvmeSrb;
    v4 = NvmeSrb;
    if ( !NvmeSrb )
      return 3221225495LL;
  }
  if ( *(_BYTE *)(v4 + 2) == 40 && (a4 = *(unsigned int *)(v4 + 56), (_DWORD)a4) )
  {
    v8 = 0;
    while ( 1 )
    {
      v9 = *(unsigned int *)(v4 + 4LL * v8 + 120);
      if ( (unsigned int)v9 >= 0x80 && (unsigned int)v9 < *(_DWORD *)(v4 + 16) )
      {
        v10 = v4 + v9;
        if ( *(_DWORD *)(v4 + v9) == 67 )
          break;
      }
      if ( ++v8 >= (unsigned int)a4 )
        goto LABEL_11;
    }
  }
  else
  {
LABEL_11:
    v10 = 0LL;
  }
  *(_BYTE *)(v10 + 16) = 24;
  *(_BYTE *)(v10 + 80) = 1;
  *(_WORD *)(v10 + 106) = 0;
  v11 = *(unsigned __int16 *)(*(_QWORD *)(a1 + 592) + 320LL);
  v12 = v11 * ((100 * v11 + *(_DWORD *)(a1 + 1076) - 1) / (unsigned int)(100 * v11));
  *(_DWORD *)(a1 + 1076) = 100 * v12;
  return NvmeAdapterSetFabricControllerFeature(a1, 0, 15, a4, 100 * v12, v13, v14, v15, v16, v17, v18, &v19);
}
