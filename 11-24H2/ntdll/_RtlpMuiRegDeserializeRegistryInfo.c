/*
 * XREFs of _RtlpMuiRegDeserializeRegistryInfo @ 0x1800E8220
 * Callers:
 *     RtlpMuiRegCreateAndLoadRegistryInfo @ 0x180011648 (RtlpMuiRegCreateAndLoadRegistryInfo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpMuiRegDeserializeRegistryInfo(_DWORD *a1, unsigned int a2, _QWORD *a3)
{
  unsigned int v3; // r9d
  unsigned __int64 v4; // r11
  __int64 v6; // rcx
  char *v7; // rdx
  __int64 v8; // rcx
  char *v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // rdx
  __int64 v12; // rdx
  __int64 v14; // rcx
  char *v15; // rdx
  __int64 v16; // rcx
  char *v17; // rdx

  v3 = 0;
  v4 = a2;
  if ( !a3 || !a1 || a2 < 0xA8 )
    return (unsigned int)-1073741811;
  if ( *((_QWORD *)a1 + 3) )
  {
    v16 = (unsigned int)a1[6];
    if ( a2 < (unsigned __int64)(v16 + 24) )
      return (unsigned int)-1073741811;
    v17 = (char *)a1 + (unsigned int)v16;
    *((_QWORD *)a1 + 3) = v17;
    if ( (unsigned int)v4 < *(_DWORD *)v17 + (int)v16 )
      return (unsigned int)-1073741811;
    *((_QWORD *)v17 + 2) = v17 + 24;
  }
  if ( *((_QWORD *)a1 + 4) )
  {
    v14 = (unsigned int)a1[8];
    if ( v4 < v14 + 32 )
      return (unsigned int)-1073741811;
    v15 = (char *)a1 + (unsigned int)a1[8];
    *((_QWORD *)a1 + 4) = v15;
    if ( (unsigned int)v4 < *(_DWORD *)v15 + (int)v14 )
      return (unsigned int)-1073741811;
    *((_QWORD *)v15 + 2) = v15 + 32;
    *(_QWORD *)(*((_QWORD *)a1 + 4) + 24LL) = *(_QWORD *)(*((_QWORD *)a1 + 4) + 16LL)
                                            + 2LL * *(unsigned __int16 *)(*((_QWORD *)a1 + 4) + 4LL);
  }
  if ( *((_QWORD *)a1 + 5) )
  {
    v6 = (unsigned int)a1[10];
    if ( v4 < v6 + 16 )
      return (unsigned int)-1073741811;
    v7 = (char *)a1 + (unsigned int)a1[10];
    *((_QWORD *)a1 + 5) = v7;
    if ( (unsigned int)v4 < *(_DWORD *)v7 + (int)v6 )
      return (unsigned int)-1073741811;
    *((_QWORD *)v7 + 1) = v7 + 16;
  }
  if ( *((_QWORD *)a1 + 7) )
  {
    v8 = (unsigned int)a1[14];
    if ( v4 < v8 + 64 )
      return (unsigned int)-1073741811;
    v9 = (char *)a1 + (unsigned int)a1[14];
    *((_QWORD *)a1 + 7) = v9;
    if ( (unsigned int)v4 < *(_DWORD *)v9 + (int)v8 )
      return (unsigned int)-1073741811;
    *((_QWORD *)v9 + 3) = v9 + 64;
    *(_QWORD *)(*((_QWORD *)a1 + 7) + 16LL) = 0LL;
  }
  if ( *((_QWORD *)a1 + 16) )
  {
    v10 = (unsigned int)a1[32];
    if ( (unsigned int)v4 < (int)v10 + a1[37] )
      return (unsigned int)-1073741811;
    *((_QWORD *)a1 + 16) = (char *)a1 + v10;
  }
  if ( *((_QWORD *)a1 + 19) )
  {
    v11 = (unsigned int)a1[38];
    if ( (unsigned int)v4 < (int)v11 + a1[40] )
      return (unsigned int)-1073741811;
    *((_QWORD *)a1 + 19) = (char *)a1 + v11;
  }
  if ( *((_QWORD *)a1 + 17) )
  {
    v12 = (unsigned int)a1[34];
    if ( (unsigned int)v4 >= (int)v12 + a1[36] )
    {
      *((_QWORD *)a1 + 17) = (char *)a1 + v12;
      goto LABEL_23;
    }
    return (unsigned int)-1073741811;
  }
LABEL_23:
  *a1 = 1024;
  *a3 = a1;
  return v3;
}
