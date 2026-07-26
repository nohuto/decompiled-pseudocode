/*
 * XREFs of ?ndisOidPreMacOptions@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1400725D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall ndisOidPreMacOptions(struct _NDIS_REQ_TRACKER *a1)
{
  __int64 v1; // rax
  __int64 v2; // r8
  __int64 v3; // r9
  unsigned __int8 result; // al

  v1 = *((_QWORD *)a1 + 2);
  v2 = *((_QWORD *)a1 + 4);
  if ( v1 )
  {
    v3 = *(_QWORD *)(v1 + 32);
  }
  else
  {
    v3 = 0LL;
    if ( *(_QWORD *)a1 )
      v3 = *(_QWORD *)a1;
  }
  if ( (*(_DWORD *)(v2 + 4) & 0xFFFFFFFD) != 0 )
    return 0;
  *((_DWORD *)a1 + 10) = 0;
  if ( *(_DWORD *)(v2 + 48) >= 4u )
  {
    **(_DWORD **)(v2 + 40) = *(_DWORD *)(v3 + 3044);
    result = 1;
    *(_DWORD *)(v2 + 52) = 4;
    *((_DWORD *)a1 + 10) = 0;
  }
  else
  {
    *(_DWORD *)(v2 + 56) = 4;
    result = 1;
    *((_DWORD *)a1 + 10) = -1073676268;
  }
  return result;
}
