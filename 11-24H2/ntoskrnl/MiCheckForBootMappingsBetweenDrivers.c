/*
 * XREFs of MiCheckForBootMappingsBetweenDrivers @ 0x140C52850
 * Callers:
 *     MiInitializeDriverPtes @ 0x140C52C28 (MiInitializeDriverPtes.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiCheckForBootMappingsBetweenDrivers(__int64 a1)
{
  unsigned int v1; // edx
  unsigned int v3; // esi
  unsigned int v4; // r8d
  int v5; // r11d
  unsigned int v6; // r9d
  __int64 v7; // rdi
  unsigned int v8; // ebx
  __int64 result; // rax
  unsigned int v10; // r8d
  __int64 *v11; // r8
  unsigned int v12; // r8d
  unsigned int v13; // ebp
  unsigned int v14; // esi
  unsigned int v15; // edx
  int v16; // ebx
  unsigned int v17; // r11d
  __int64 v18; // r14
  unsigned int v19; // edi
  _QWORD *v20; // rdx
  __int64 i; // r9
  unsigned __int64 v22; // rax
  unsigned int v23; // edx
  unsigned int v24; // r9d
  __int64 *v25; // r8
  unsigned int j; // ecx

  v1 = 0;
  while ( 2 )
  {
    v3 = *(_DWORD *)(a1 + 16);
    v4 = v3 - 1;
    v5 = (*(_DWORD *)(a1 + 24) & 4) != 0LL ? 0x20 : 0;
    v6 = v1 < v3 ? v1 : 0;
    v7 = *(_QWORD *)(a1 + 24) - ((*(_QWORD *)(a1 + 24) & 4LL) != 0 ? 4 : 0);
    while ( 1 )
    {
      v8 = v5 + v4;
      result = v4 - v6 + 1;
      if ( v4 - v6 == -1 )
        goto LABEL_4;
      v11 = (__int64 *)(v7 + 8 * ((unsigned __int64)(v5 + v6) >> 6));
      for ( result = *v11 | ((1LL << ((v5 + v6) & 0x3F)) - 1); result == -1; result = *v11 )
      {
        if ( (unsigned __int64)++v11 > v7 + 8 * ((unsigned __int64)v8 >> 6) )
          goto LABEL_4;
      }
      _BitScanForward64((unsigned __int64 *)&result, ~result);
      v10 = result + ((unsigned int)(((__int64)v11 - v7) >> 3) << 6);
      if ( v10 > v8 )
      {
LABEL_4:
        v10 = -1;
        goto LABEL_11;
      }
      if ( v10 != -1 )
        break;
LABEL_11:
      if ( !v6 )
        goto LABEL_16;
      v12 = v1 + 1;
      if ( v1 + 1 > v3 )
        v12 = *(_DWORD *)(a1 + 16);
      v4 = v12 - 1;
      v6 = 0;
    }
    v10 -= v5;
LABEL_16:
    if ( v10 < v1 || v10 == -1 )
      return result;
    v13 = *(_DWORD *)(a1 + 16);
    v14 = v10 + 1;
    v15 = v13 - 1;
    v16 = (*(_DWORD *)(a1 + 24) & 4) != 0LL ? 0x20 : 0;
    v17 = v14 < v13 ? v14 : 0;
    v18 = *(_QWORD *)(a1 + 24) - ((*(_QWORD *)(a1 + 24) & 4LL) != 0 ? 4 : 0);
    while ( 2 )
    {
      v19 = v16 + v15;
      if ( v15 - v17 == -1 )
        goto LABEL_20;
      v20 = (_QWORD *)(v18 + 8 * ((unsigned __int64)(v17 + v16) >> 6));
      for ( i = ~*v20 | ((1LL << ((v17 + v16) & 0x3F)) - 1); i == -1; i = ~*v20 )
      {
        if ( (unsigned __int64)++v20 > v18 + 8 * ((unsigned __int64)v19 >> 6) )
          goto LABEL_20;
      }
      _BitScanForward64(&v22, ~i);
      v1 = v22 + ((unsigned int)(((__int64)v20 - v18) >> 3) << 6);
      if ( v1 > v19 )
      {
LABEL_20:
        v1 = -1;
LABEL_27:
        if ( !v17 )
          goto LABEL_32;
        v23 = v10 + 2;
        if ( v10 + 2 > v13 )
          v23 = *(_DWORD *)(a1 + 16);
        v15 = v23 - 1;
        v17 = 0;
        continue;
      }
      break;
    }
    if ( v1 == -1 )
      goto LABEL_27;
    v1 -= v16;
LABEL_32:
    if ( v1 < v14 || v1 == -1 )
      v1 = *(_DWORD *)(a1 + 16);
    result = *(_QWORD *)(a1 + 8);
    v24 = v1 - v10;
    v25 = (__int64 *)(result + 128LL * v10);
LABEL_36:
    if ( !v24 )
    {
      if ( v1 >= *(_DWORD *)(a1 + 16) )
        return result;
      continue;
    }
    break;
  }
  for ( j = 0; ; ++j )
  {
    if ( j >= 0x10 )
    {
      v25 = (__int64 *)((unsigned __int64)(v25 + 15) & 0xFFFFFFFFFFFFFF80uLL);
      --v24;
      goto LABEL_36;
    }
    result = *v25;
    if ( *v25 )
      break;
    ++v25;
  }
  *(_DWORD *)(a1 + 36) |= 2u;
  return result;
}
