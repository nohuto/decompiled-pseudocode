/*
 * XREFs of NvmeCommonGetStorageProtocolSpecificProperty @ 0x140128910
 * Callers:
 *     NvmeAdapterStorageQueryProperty @ 0x14019D454 (NvmeAdapterStorageQueryProperty.c)
 *     NvmeNamespaceStorageQueryPropertyIoctl @ 0x1401AF820 (NvmeNamespaceStorageQueryPropertyIoctl.c)
 * Callees:
 *     NvmeProcessQueryProtocolSpecificProperty @ 0x140088490 (NvmeProcessQueryProtocolSpecificProperty.c)
 */

__int64 __fastcall NvmeCommonGetStorageProtocolSpecificProperty(__int64 a1, _QWORD *a2, _BYTE *a3)
{
  _DWORD *v3; // r11
  unsigned int v4; // r9d
  __int64 v5; // rax
  unsigned int v8; // edx
  unsigned int v9; // ebx
  unsigned int v10; // eax
  char v11; // r8
  unsigned int v12; // esi
  _DWORD *v13; // rdx
  unsigned __int64 v14; // r10
  int v15; // eax

  v3 = (_DWORD *)a2[3];
  v4 = 0;
  v5 = a2[23];
  *a3 = 1;
  v8 = *(_DWORD *)(v5 + 16);
  v9 = *(_DWORD *)(v5 + 8);
  if ( *v3 == 49 || *v3 == 50 )
  {
    v10 = 48;
    v11 = 0;
    v12 = 48;
  }
  else
  {
    if ( (unsigned int)(*v3 - 67) > 1 )
      return (unsigned int)-1073741585;
    v10 = 80;
    v11 = 1;
    v12 = 72;
  }
  if ( v8 < v10 )
    return (unsigned int)-1073741585;
  v13 = v3 + 2;
  if ( v11 )
  {
    if ( *v13 != 1 || v3[3] != 72 )
      return (unsigned int)-1073741585;
    v13 = v3 + 4;
  }
  if ( !*v13 )
    return (unsigned int)-1073741585;
  if ( !v13[1] )
    return (unsigned int)-1073741585;
  v14 = (unsigned int)v13[4];
  if ( (_DWORD)v14 )
  {
    if ( v14 < (unsigned __int64)(v11 != 0 ? 0x18 : 0) + 40 || !v13[5] )
      return (unsigned int)-1073741585;
  }
  if ( v9 >= v12 )
  {
    v15 = v13[5];
    if ( !v15 || (int)v14 + v15 + 8 <= v9 )
      return (unsigned int)NvmeProcessQueryProtocolSpecificProperty(a1, (__int64)a2, a3);
    return (unsigned int)-1073741585;
  }
  if ( v9 < 8 )
  {
    return (unsigned int)-1073741789;
  }
  else
  {
    *v3 = v11 != 0 ? 1 : 48;
    v3[1] = v11 != 0 ? 72 : 48;
    a2[7] = 8LL;
  }
  return v4;
}
