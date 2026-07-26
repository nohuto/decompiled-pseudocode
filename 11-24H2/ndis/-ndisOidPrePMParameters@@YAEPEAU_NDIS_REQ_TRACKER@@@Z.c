/*
 * XREFs of ?ndisOidPrePMParameters@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x140005AC0
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisPreQueryPMParameters@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x140004D00 (-ndisPreQueryPMParameters@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisPreSetPMParameters@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x140005B60 (-ndisPreSetPMParameters@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 */

unsigned __int8 __fastcall ndisOidPrePMParameters(struct _NDIS_REQ_TRACKER *a1)
{
  __int64 v1; // rdx
  __int64 v2; // r8
  __int64 v3; // rdx
  int v4; // eax
  unsigned __int8 result; // al
  __int64 v6; // r9
  __int64 v7; // rax

  v1 = *((_QWORD *)a1 + 3);
  v2 = *((_QWORD *)a1 + 4);
  if ( (!v1
     || (v6 = *(_QWORD *)(v1 + 24), *(_BYTE *)(v6 + 56) > 6u)
     || *(_BYTE *)(v6 + 56) == 6 && *(_BYTE *)(v6 + 57) >= 0x14u)
    && ((v3 = *((_QWORD *)a1 + 1)) == 0
     || (*(_DWORD *)(v2 + 88) & 0x4000) != 0
     || (v7 = *(_QWORD *)(v3 + 16), *(_BYTE *)(v7 + 100) > 6u)
     || *(_BYTE *)(v7 + 100) == 6 && *(_BYTE *)(v7 + 101) >= 0x14u) )
  {
    v4 = *(_DWORD *)(v2 + 4);
    if ( (v4 & 0xFFFFFFFD) != 0 )
    {
      if ( v4 == 1 )
      {
        return ndisPreSetPMParameters(a1);
      }
      else
      {
        result = 1;
        *((_DWORD *)a1 + 10) = -1073676267;
      }
    }
    else
    {
      return ndisPreQueryPMParameters(a1);
    }
  }
  else
  {
    *((_DWORD *)a1 + 10) = -1073741637;
    return 1;
  }
  return result;
}
