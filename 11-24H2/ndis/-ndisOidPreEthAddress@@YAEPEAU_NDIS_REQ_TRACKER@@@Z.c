/*
 * XREFs of ?ndisOidPreEthAddress@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1400575C0
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1400E7200 (memmove.c)
 */

unsigned __int8 __fastcall ndisOidPreEthAddress(struct _NDIS_REQ_TRACKER *a1)
{
  __int64 v1; // rbx
  __int64 v2; // rdx
  void *v3; // r9
  _WORD *v4; // rax
  unsigned __int16 v5; // dx
  const void *v6; // r10
  int v7; // edi

  v1 = *((_QWORD *)a1 + 4);
  v2 = *(_QWORD *)a1;
  if ( (*(_DWORD *)(v1 + 4) & 0xFFFFFFFD) != 0 )
  {
    *((_DWORD *)a1 + 10) = -1073741637;
    return 1;
  }
  else if ( v2 )
  {
    v3 = *(void **)(v1 + 40);
    v4 = *(_WORD **)(v2 + 4040);
    if ( *(_DWORD *)(v1 + 32) == 16843009 )
    {
      v5 = v4[579];
      v6 = v4 + 580;
    }
    else
    {
      v5 = v4[562];
      v6 = v4 + 563;
    }
    v7 = v5;
    *((_DWORD *)a1 + 10) = 0;
    if ( *(_DWORD *)(v1 + 48) < (unsigned int)v5 )
    {
      *((_DWORD *)a1 + 10) = -1073676268;
      *(_DWORD *)(v1 + 56) = v5;
    }
    else
    {
      memmove(v3, v6, v5);
      *(_DWORD *)(v1 + 52) = v7;
    }
    return 1;
  }
  else
  {
    return 0;
  }
}
