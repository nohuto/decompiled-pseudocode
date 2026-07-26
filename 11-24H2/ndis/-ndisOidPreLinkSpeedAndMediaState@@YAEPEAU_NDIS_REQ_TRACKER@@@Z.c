/*
 * XREFs of ?ndisOidPreLinkSpeedAndMediaState@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x140086340
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall ndisOidPreLinkSpeedAndMediaState(struct _NDIS_REQ_TRACKER *a1)
{
  __int64 v1; // r8
  __int64 v2; // rdx
  _DWORD *v3; // rbx
  int v4; // r10d
  unsigned int v5; // r11d
  unsigned int v6; // eax
  unsigned __int8 result; // al
  unsigned __int64 v8; // rcx
  unsigned int v9; // r8d

  v1 = *((_QWORD *)a1 + 4);
  v2 = *(_QWORD *)a1;
  v3 = *(_DWORD **)(v1 + 40);
  v4 = *(_DWORD *)(v1 + 32);
  if ( !*(_QWORD *)a1 )
    return 0;
  v5 = 3 * *(_DWORD *)(v2 + 376);
  v6 = *(_DWORD *)(v1 + 12);
  if ( v6 < v5 )
  {
    *(_DWORD *)(v1 + 12) = v5;
    v6 = v5;
  }
  if ( *(_BYTE *)(v2 + 32) < 6u )
  {
    v9 = *(_DWORD *)(v2 + 376);
    if ( v9 )
      *(_WORD *)(*(_QWORD *)a1 + 1822LL) = v6 / v9;
    return 0;
  }
  if ( (*(_DWORD *)(v1 + 4) & 0xFFFFFFFD) != 0 )
  {
    *((_DWORD *)a1 + 10) = -1073741637;
    return 1;
  }
  if ( v4 == 65812 )
  {
    *((_DWORD *)a1 + 10) = 0;
    if ( *(_DWORD *)(v1 + 48) >= 4u )
    {
      *v3 = (*(_DWORD *)(v2 + 120) & 0x20000000) == 0;
    }
    else
    {
      *(_DWORD *)(v1 + 56) = 4;
      *((_DWORD *)a1 + 10) = -1073676268;
    }
    result = 1;
    *(_DWORD *)(v1 + 52) = 4;
    return result;
  }
  if ( v4 != 65799 )
    return 0;
  *((_DWORD *)a1 + 10) = 0;
  if ( *(_DWORD *)(v1 + 48) >= 4u )
  {
    if ( (*(_DWORD *)(v2 + 120) & 0x20000000) != 0 )
      v8 = *(_QWORD *)(v2 + 792);
    else
      v8 = *(_QWORD *)(v2 + 3024);
    result = 1;
    *v3 = v8 / 0x64;
    *(_DWORD *)(v1 + 52) = 4;
  }
  else
  {
    *(_DWORD *)(v1 + 56) = 4;
    *((_DWORD *)a1 + 10) = -1073676268;
    result = 1;
    *(_DWORD *)(v1 + 52) = 4;
  }
  return result;
}
