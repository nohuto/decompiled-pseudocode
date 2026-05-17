/*
 * XREFs of LdrpPrepareImportAddressTableForSnap @ 0x180022070
 * Callers:
 *     LdrpMapAndSnapDependency @ 0x18004B770 (LdrpMapAndSnapDependency.c)
 *     AVrfpSnapDllImports @ 0x1800ED2D4 (AVrfpSnapDllImports.c)
 *     AvrfMiniLoadDll @ 0x18010B9A4 (AvrfMiniLoadDll.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x180014D30 (RtlImageNtHeaderEx.c)
 *     RtlImageDirectoryEntryToData @ 0x180022220 (RtlImageDirectoryEntryToData.c)
 *     LdrImageDirectoryEntryToLoadConfig @ 0x180022E20 (LdrImageDirectoryEntryToLoadConfig.c)
 *     ZwProtectVirtualMemory @ 0x180163C20 (ZwProtectVirtualMemory.c)
 */

__int64 __fastcall LdrpPrepareImportAddressTableForSnap(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  __int64 v3; // r9
  unsigned int v4; // ebp
  __int64 v6; // rcx
  __int64 v7; // rax
  bool v8; // zf
  __int64 Config; // rax
  __int64 v10; // rcx
  _QWORD *v11; // rax
  _QWORD *v12; // rcx
  __int64 result; // rax
  _QWORD *v14; // rax
  unsigned __int64 v15; // rdx
  unsigned int v16; // edx
  unsigned int *v17; // r8
  unsigned int v18; // r9d
  __int64 v19; // rax
  __int64 v20; // [rsp+50h] [rbp+8h] BYREF
  _QWORD *v21; // [rsp+58h] [rbp+10h] BYREF
  __int64 v22; // [rsp+60h] [rbp+18h] BYREF

  v2 = *(_QWORD *)(a1 + 56);
  v3 = a1 + 120;
  v4 = 0;
  v21 = 0LL;
  LOBYTE(a2) = 1;
  v22 = 0LL;
  v6 = *(_QWORD *)(v2 + 48);
  v20 = 0LL;
  v7 = RtlImageDirectoryEntryToData(v6, a2, 12LL, v3);
  v8 = (*(_DWORD *)(a1 + 32) & 0x800000) == 0;
  *(_QWORD *)(a1 + 112) = v7;
  if ( !v8 )
    return 0LL;
  RtlImageNtHeaderEx(3, *(_QWORD *)(v2 + 48), 0LL, &v20);
  Config = LdrImageDirectoryEntryToLoadConfig(*(_QWORD *)(v2 + 48));
  if ( !Config || *(_DWORD *)Config < 0x94u )
    goto LABEL_8;
  v10 = v20;
  if ( (*(_WORD *)(v20 + 94) & 0x4000) != 0 && (*(_DWORD *)(Config + 144) & 0x100) != 0 )
  {
    v11 = *(_QWORD **)(Config + 112);
    *(_QWORD *)(a1 + 160) = v11;
    if ( v11 )
    {
      *(_QWORD *)(a1 + 152) = *v11;
LABEL_8:
      v10 = v20;
    }
  }
  if ( !*(_QWORD *)(a1 + 112) )
  {
    v16 = *(_DWORD *)(v10 + 144);
    v17 = (unsigned int *)(v10 + *(unsigned __int16 *)(v10 + 20) + 24LL);
    if ( v16 )
    {
      while ( v4 < *(unsigned __int16 *)(v10 + 6) )
      {
        v18 = v17[3];
        if ( v16 >= v18 && v16 < v18 + v17[4] )
        {
          *(_QWORD *)(a1 + 112) = *(_QWORD *)(v2 + 48) + v18;
          v19 = v17[2];
          *(_QWORD *)(a1 + 120) = v19;
          if ( !v19 )
            *(_QWORD *)(a1 + 120) = v17[4];
          break;
        }
        ++v4;
        v17 += 10;
      }
    }
  }
  v12 = *(_QWORD **)(a1 + 112);
  if ( v12 && *(_QWORD *)(a1 + 120) )
  {
    v22 = *(_QWORD *)(a1 + 120);
    v21 = v12;
    result = ZwProtectVirtualMemory(-1LL, &v21, &v22, 4LL);
    if ( (int)result < 0 )
      return result;
    v14 = v21;
    v15 = (unsigned __int64)v21 + v22;
    do
    {
      *v14 = *v14;
      v14 += 512;
    }
    while ( (unsigned __int64)v14 < v15 );
  }
  return 0LL;
}
