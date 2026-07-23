/*
 * XREFs of FsepInitializeOverridesViewForGovernedFeatures @ 0x140829238
 * Callers:
 *     FseInitializeGovernedFeaturesEffectiveStates @ 0x14082918C (FseInitializeGovernedFeaturesEffectiveStates.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FsepInitializeOverridesViewForGovernedFeatures(unsigned int *a1, unsigned int *a2, __int64 a3)
{
  unsigned int v3; // r10d
  char *v4; // rdi
  unsigned int v7; // r9d
  unsigned int v8; // eax
  int v9; // ecx
  int v10; // ecx
  int v11; // ecx
  unsigned int v12; // edx
  int v13; // eax
  int v14; // ecx
  int v15; // eax
  __int64 result; // rax

  v3 = 0;
  v4 = (char *)a1 + *((_QWORD *)a1 + 1);
  v7 = 0;
  if ( *a2 )
  {
    while ( 1 )
    {
      if ( v7 >= (unsigned __int16)*a1 )
        goto LABEL_12;
      v8 = a2[4 * v3 + 1];
      if ( v8 > *(_DWORD *)&v4[16 * v7] )
        break;
      if ( v8 >= *(_DWORD *)&v4[16 * v7] )
      {
        v9 = *(_DWORD *)(a3 + 4LL * v7) | 1;
        *(_DWORD *)(a3 + 4LL * v7) = v9;
        v10 = ((unsigned __int8)v9 ^ (unsigned __int8)(2 * a2[4 * v3 + 2])) & 0x1E ^ v9;
        *(_DWORD *)(a3 + 4LL * v7) = v10;
        v11 = ((unsigned __int8)v10 ^ (unsigned __int8)(2 * a2[4 * v3 + 2])) & 0x60 ^ v10;
        *(_DWORD *)(a3 + 4LL * v7) = v11;
        *(_DWORD *)(a3 + 4LL * v7) = v11 ^ ((unsigned __int8)v11 ^ (unsigned __int8)(2 * a2[4 * v3 + 2])) & 0x80;
        v12 = a2[4 * v3 + 2];
        v13 = *(_DWORD *)&v4[16 * v7 + 12] | 1;
        v14 = v13 ^ ((unsigned __int8)v13 ^ (unsigned __int8)(8 * v12)) & 0x78;
        v15 = v14 ^ ((unsigned __int8)v14 ^ (unsigned __int8)(v12 >> 3)) & 6;
        *(_DWORD *)&v4[16 * v7 + 12] = v15 ^ (v15 ^ (v7 << 7)) & 0x7FFF80 ^ (v15 ^ (v15 ^ (v7 << 7)) & 0x7FFF80 ^ (v12 << 17)) & 0x800000;
        ++v3;
        goto LABEL_8;
      }
      ++v3;
LABEL_9:
      if ( v3 >= *a2 )
        goto LABEL_12;
    }
    *(_DWORD *)(a3 + 4LL * v7) &= 0xFFFFFF81;
    *(_DWORD *)&v4[16 * v7 + 12] = *(_DWORD *)&v4[16 * v7 + 12] & 0xFF000000 | 0x7FFF80;
LABEL_8:
    ++v7;
    goto LABEL_9;
  }
LABEL_12:
  while ( 1 )
  {
    result = *a1;
    if ( v7 >= (unsigned __int16)result )
      break;
    *(_DWORD *)(a3 + 4LL * v7) &= 0xFFFFFF81;
    *(_DWORD *)&v4[16 * v7 + 12] = *(_DWORD *)&v4[16 * v7 + 12] & 0xFF000000 | 0x7FFF80;
    ++v7;
  }
  return result;
}
