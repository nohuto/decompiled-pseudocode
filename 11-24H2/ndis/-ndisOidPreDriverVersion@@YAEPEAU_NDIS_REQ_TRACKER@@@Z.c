/*
 * XREFs of ?ndisOidPreDriverVersion@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x14006B0C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall ndisOidPreDriverVersion(struct _NDIS_REQ_TRACKER *a1)
{
  __int64 v1; // rdx
  __int64 v2; // r8
  unsigned __int16 v3; // cx

  v1 = *(_QWORD *)a1;
  v2 = *((_QWORD *)a1 + 4);
  if ( !*(_QWORD *)a1 || (*(_DWORD *)(v2 + 4) & 0xFFFFFFFD) != 0 )
    return 0;
  *((_DWORD *)a1 + 10) = 0;
  if ( *(_DWORD *)(v2 + 48) < 2u )
  {
    *(_DWORD *)(v2 + 56) = 2;
    *((_DWORD *)a1 + 10) = -1073676268;
  }
  else
  {
    v3 = _byteswap_ushort(*(_WORD *)(*(_QWORD *)(v1 + 3760) + 24LL));
    **(_WORD **)(v2 + 40) = v3;
    **(_WORD **)(v2 + 40) = v3;
    *(_DWORD *)(v2 + 52) = 2;
  }
  return 1;
}
