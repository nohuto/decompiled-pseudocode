/*
 * XREFs of RaValidateProtocolCommandIoctl @ 0x14008A6CC
 * Callers:
 *     RaAdapterProtocolCommandIoctl @ 0x1400369D0 (RaAdapterProtocolCommandIoctl.c)
 *     RaUnitProtocolCommandIoctl @ 0x1400395D0 (RaUnitProtocolCommandIoctl.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RaValidateProtocolCommandIoctl(__int64 a1, __int64 a2)
{
  unsigned int v2; // r8d
  __int64 v3; // rbx
  __int64 v4; // r9
  int v5; // ecx
  unsigned __int64 v6; // rax
  __int64 v7; // rcx
  unsigned __int64 v8; // rax
  __int64 v9; // r10
  unsigned __int64 v10; // rcx
  __int64 v11; // r11
  unsigned __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  int v15; // r10d
  int v17; // ecx
  char v18; // al

  v2 = 0;
  v3 = *(_QWORD *)(a2 + 184);
  v4 = *(_QWORD *)(a2 + 24);
  v5 = **(_DWORD **)(a1 + 64);
  if ( v5 != 1431193940 && v5 != 1094997074 )
    return (unsigned int)-1073741811;
  v6 = *(unsigned int *)(v3 + 16);
  if ( (unsigned int)v6 < 0x54 )
  {
    if ( (unsigned int)v6 >= 0x14 )
      *(_DWORD *)(v4 + 16) = 3;
    return (unsigned int)-1073741820;
  }
  if ( *(_DWORD *)v4 != 1 || *(_DWORD *)(v4 + 4) != 84 || *(_DWORD *)(v4 + 8) != 3 || *(_DWORD *)(v4 + 24) != 64 )
  {
LABEL_36:
    *(_DWORD *)(v4 + 16) = 3;
    return (unsigned int)-1073741811;
  }
  if ( v6 >= 0x90 )
  {
    v7 = *(unsigned int *)(v4 + 28);
    if ( (_DWORD)v7 )
    {
      v8 = *(unsigned int *)(v4 + 44);
      if ( v8 < 0x90 || (v8 & 7) != 0 || *(unsigned int *)(v3 + 8) < v8 + v7 )
        goto LABEL_36;
    }
    v9 = *(unsigned int *)(v4 + 32);
    if ( (_DWORD)v9 )
    {
      v10 = *(unsigned int *)(v4 + 48);
      if ( v10 < 0x90 || (v10 & 7) != 0 || *(unsigned int *)(v3 + 16) < v10 + v9 )
        goto LABEL_36;
    }
    v11 = *(unsigned int *)(v4 + 36);
    if ( (_DWORD)v11 )
    {
      v12 = *(unsigned int *)(v4 + 52);
      if ( v12 < 0x90 || (v12 & 7) != 0 || *(unsigned int *)(v3 + 8) < v12 + v11 )
        goto LABEL_36;
    }
    if ( (_DWORD)v9 )
    {
      v13 = *(unsigned int *)(v4 + 28);
      if ( (_DWORD)v13 )
      {
        if ( *(unsigned int *)(v4 + 48) < v13 + (unsigned __int64)*(unsigned int *)(v4 + 44) )
          goto LABEL_36;
      }
    }
    if ( (_DWORD)v11 )
    {
      v14 = *(unsigned int *)(v4 + 28);
      if ( (_DWORD)v14 )
      {
        if ( *(unsigned int *)(v4 + 52) < v14 + (unsigned __int64)*(unsigned int *)(v4 + 44) )
          goto LABEL_36;
      }
      if ( (_DWORD)v9 && *(unsigned int *)(v4 + 52) < v9 + (unsigned __int64)*(unsigned int *)(v4 + 48) )
        goto LABEL_36;
    }
    if ( *(_DWORD *)(v4 + 8) != 3 )
      return v2;
    v15 = *(_DWORD *)(v4 + 56);
    if ( v15 == 1 )
    {
      if ( (unsigned __int8)*(_DWORD *)(v4 + 80) == 2
        && 4 * (*(unsigned __int16 *)(v4 + 122) | (unsigned __int64)(unsigned int)(*(_DWORD *)(v4 + 124) << 16)) + 4 > *(unsigned int *)(v4 + 36) )
      {
        goto LABEL_36;
      }
    }
    else if ( v15 != 2 )
    {
      goto LABEL_36;
    }
    if ( g_InWinPE )
      return v2;
    if ( v15 == 1 )
    {
      v17 = *(_DWORD *)(v4 + 80);
      if ( (unsigned __int8)v17 >= 0xC0u )
        return v2;
    }
    else
    {
      v17 = *(_DWORD *)(v4 + 80);
      if ( (unsigned __int8)v17 >= 0x80u )
        return v2;
    }
    if ( (unsigned __int8)v17 != 2 )
    {
      if ( (unsigned __int8)v17 == 4 )
      {
        v18 = StorageTestFlags & 1;
LABEL_50:
        if ( v18 )
          return v2;
LABEL_51:
        *(_DWORD *)(v4 + 16) = 3;
        return (unsigned int)-1056964602;
      }
      if ( (unsigned __int8)v17 != 20 )
        goto LABEL_51;
    }
    v18 = 1;
    goto LABEL_50;
  }
  *(_DWORD *)(v4 + 16) = 3;
  return (unsigned int)-1073741820;
}
