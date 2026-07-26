/*
 * XREFs of ?ndisOidPreLinkSpeedAndMediaState@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x14006D770
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall ndisOidPreLinkSpeedAndMediaState(struct _NDIS_REQ_TRACKER *a1)
{
  __int64 v1; // r9
  char v2; // r8
  __int64 v3; // rdx
  _DWORD *v4; // r11
  int v5; // r10d
  unsigned int v6; // ebx
  unsigned int v7; // eax
  unsigned __int8 result; // al
  unsigned __int64 v9; // rcx
  unsigned int v10; // r9d

  v1 = *((_QWORD *)a1 + 4);
  v2 = 0;
  v3 = *(_QWORD *)a1;
  v4 = *(_DWORD **)(v1 + 40);
  v5 = *(_DWORD *)(v1 + 32);
  if ( !*(_QWORD *)a1 )
    return v2;
  v6 = *(_DWORD *)(v1 + 12);
  v7 = 3 * *(_DWORD *)(v3 + 376);
  if ( v6 < v7 )
  {
    *(_DWORD *)(v1 + 12) = v7;
    v6 = v7;
  }
  if ( *(_BYTE *)(v3 + 32) < 6u )
  {
    v10 = *(_DWORD *)(v3 + 376);
    if ( v10 )
      *(_WORD *)(*(_QWORD *)a1 + 1822LL) = v6 / v10;
    return v2;
  }
  if ( (*(_DWORD *)(v1 + 4) & 0xFFFFFFFD) != 0 )
  {
    *((_DWORD *)a1 + 10) = -1073741637;
    return 1;
  }
  if ( v5 == 65812 )
  {
    *((_DWORD *)a1 + 10) = 0;
    if ( *(_DWORD *)(v1 + 48) < 4u )
    {
      *(_DWORD *)(v1 + 56) = 4;
      *((_DWORD *)a1 + 10) = -1073676268;
    }
    else
    {
      *v4 = (*(_DWORD *)(v3 + 120) & 0x20000000) == 0;
    }
    *(_DWORD *)(v1 + 52) = 4;
    return 1;
  }
  if ( v5 != 65799 )
    return v2;
  *((_DWORD *)a1 + 10) = 0;
  if ( *(_DWORD *)(v1 + 48) < 4u )
  {
    *(_DWORD *)(v1 + 56) = 4;
    *((_DWORD *)a1 + 10) = -1073676268;
  }
  else
  {
    if ( (*(_DWORD *)(v3 + 120) & 0x20000000) != 0 )
      v9 = *(_QWORD *)(v3 + 792);
    else
      v9 = *(_QWORD *)(v3 + 3024);
    *v4 = v9 / 0x64;
  }
  result = 1;
  *(_DWORD *)(v1 + 52) = 4;
  return result;
}
