/*
 * XREFs of ?ndisOidPrePhysicalMedium@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x14005CC50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall ndisOidPrePhysicalMedium(struct _NDIS_REQ_TRACKER *a1)
{
  __int64 v1; // rax
  __int64 v3; // rcx
  int v4; // r9d
  __int64 v5; // r8
  int v6; // edx

  v1 = *((_QWORD *)a1 + 4);
  v3 = *((_QWORD *)a1 + 2);
  v4 = *(_DWORD *)(v1 + 32);
  if ( v3 )
  {
    v5 = *(_QWORD *)(v3 + 32);
  }
  else
  {
    v5 = 0LL;
    if ( *(_QWORD *)a1 )
      v5 = *(_QWORD *)a1;
  }
  if ( (*(_DWORD *)(v1 + 4) & 0xFFFFFFFD) != 0 )
  {
    *((_DWORD *)a1 + 10) = -1073741637;
    return 1;
  }
  else
  {
    *((_DWORD *)a1 + 10) = 0;
    if ( *(_DWORD *)(v1 + 48) < 4u )
    {
      *(_DWORD *)(v1 + 56) = 4;
      *((_DWORD *)a1 + 10) = -1073676268;
    }
    else
    {
      v6 = *(_DWORD *)(v5 + 1832);
      if ( v4 == 66050 && v6 == 14 )
        v6 = 0;
      **(_DWORD **)(v1 + 40) = v6;
      *(_DWORD *)(v1 + 52) = 4;
    }
    return 1;
  }
}
