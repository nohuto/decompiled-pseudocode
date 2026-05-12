/*
 * XREFs of NvmeNamespaceComputeBlockInfo @ 0x1400FCDF8
 * Callers:
 *     NvmeControllerIdentifyChangedNamespaces @ 0x1400BEE0C (NvmeControllerIdentifyChangedNamespaces.c)
 *     NvmeNamespaceIdentify @ 0x1400BF954 (NvmeNamespaceIdentify.c)
 *     NvmeControllerCreateNvmeNamespace @ 0x1400FAA24 (NvmeControllerCreateNvmeNamespace.c)
 * Callees:
 *     NvmeControllerGetMaxTransferSize @ 0x1400EEC00 (NvmeControllerGetMaxTransferSize.c)
 */

__int64 __fastcall NvmeNamespaceComputeBlockInfo(__int64 a1)
{
  __int64 v1; // rsi
  unsigned int v3; // edi
  unsigned int MaxTransferSize; // eax
  __int64 *v5; // r9
  unsigned int v6; // r11d
  char v7; // cl
  unsigned int v8; // r10d
  bool v9; // zf
  unsigned int v10; // eax
  unsigned int v11; // ecx
  unsigned int v12; // r8d
  int v13; // eax
  int v14; // eax
  int v15; // ecx
  __int64 v16; // rcx
  unsigned int v17; // r8d
  unsigned int v18; // ecx
  int v19; // ecx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 16);
  v3 = -1;
  MaxTransferSize = NvmeControllerGetMaxTransferSize(v1);
  v5 = *(__int64 **)(a1 + 176);
  v6 = MaxTransferSize;
  v7 = *((_BYTE *)v5 + 4 * (*((_BYTE *)v5 + 26) & 0xF) + 130);
  v8 = 1 << v7;
  v9 = FeatureFixTRIMAddSCSIPassthrough == 0;
  *(_DWORD *)(a1 + 64) = 1 << v7;
  if ( !v9 )
    *(_BYTE *)(a1 + 61) = v7;
  if ( *(_WORD *)(a1 + 62)
    && *(_DWORD *)(((unsigned __int64)*(unsigned __int16 *)(a1 + 62) << 7) + *(_QWORD *)(v1 + 624) - 116) )
  {
    v3 = *(_DWORD *)(((unsigned __int64)*(unsigned __int16 *)(a1 + 62) << 7) + *(_QWORD *)(v1 + 624) - 116);
  }
  if ( (v5[3] & 0x10) != 0 )
  {
    v10 = v8 * (*((unsigned __int16 *)v5 + 36) + 1);
    v11 = v8 * (*((unsigned __int16 *)v5 + 32) + 1);
    v12 = v8 * (*((unsigned __int16 *)v5 + 33) + 1);
    if ( v10 <= v6 )
    {
      if ( v3 >= v10 )
        v3 = v8 * (*((unsigned __int16 *)v5 + 36) + 1);
      if ( v3 - 0x8000 <= 0xFFFF7FFE && v11 <= v6 && !(v11 % v12) )
      {
        *(_DWORD *)(a1 + 72) = v3;
        *(_DWORD *)(a1 + 76) = v11;
        *(_DWORD *)(a1 + 80) = v12;
        *(_DWORD *)(a1 + 84) = *((unsigned __int16 *)v5 + 34) + 1;
        v13 = *((unsigned __int16 *)v5 + 35) + 1;
        *(_DWORD *)(a1 + 68) = v11;
        *(_DWORD *)(a1 + 88) = v13;
      }
    }
  }
  else if ( v3 - 0x8000 <= 0xFFFF7FFE )
  {
    *(_DWORD *)(a1 + 72) = v3;
  }
  *(_DWORD *)(a1 + 428) = 0;
  v14 = 0;
  *(_BYTE *)(a1 + 427) = 0;
  v15 = *((unsigned __int16 *)v5 + 23);
  if ( (_WORD)v15 )
  {
    v14 = v8 * v15;
    *(_DWORD *)(a1 + 428) = v8 * v15;
  }
  v16 = *(_QWORD *)(v1 + 1048);
  v17 = v14;
  if ( v16 )
  {
    v18 = *(_DWORD *)(v16 + 20);
    if ( v18 )
    {
      if ( !(v18 % v8) )
      {
        *(_DWORD *)(a1 + 428) = v18;
        v17 = v18;
      }
    }
  }
  if ( v17 <= v6 )
  {
    if ( v17 )
    {
      _BitScanForward((unsigned int *)&v19, v17);
      if ( v17 >> v19 == 1 )
        *(_BYTE *)(a1 + 427) = v19;
    }
  }
  else
  {
    *(_DWORD *)(a1 + 428) = 0;
  }
  if ( !*(_DWORD *)(a1 + 68) )
    *(_DWORD *)(a1 + 68) = 4096;
  result = *v5;
  *(_QWORD *)(a1 + 432) = *v5;
  return result;
}
