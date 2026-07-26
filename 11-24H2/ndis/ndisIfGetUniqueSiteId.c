/*
 * XREFs of ndisIfGetUniqueSiteId @ 0x1400CD290
 * Callers:
 *     ndisIfCreateNetworkBlock @ 0x1400CCF9C (ndisIfCreateNetworkBlock.c)
 * Callees:
 *     <none>
 */

__int64 ndisIfGetUniqueSiteId()
{
  __int64 result; // rax
  unsigned int v1; // ecx
  __int64 i; // rdx
  unsigned int v3; // ecx

  if ( byte_14011D520 )
  {
    v1 = dword_14011AF30;
  }
  else
  {
    dword_14011AF30 = dword_14011AF30 & 0xF0000000 | (dword_14011AF30 + 1) & 0xFFFFFFF;
    if ( (dword_14011AF30 & 0xFFFFFFF) != 0xFFFFFFF )
      return dword_14011AF30 & 0xFFFFFFF;
    byte_14011D520 = 1;
    v1 = dword_14011AF30 & 0xF0000000 | 0x7FFFFFF;
    dword_14011AF30 = v1;
  }
  LODWORD(result) = v1 & 0xFFFFFFF;
LABEL_7:
  result = (unsigned int)(result + 1);
  if ( (_DWORD)result == 0xFFFFFFF )
  {
    result = 0xFFFFFFFLL;
    v3 = v1 & 0xF0000000 | 0xFFFFFFE;
  }
  else
  {
    for ( i = qword_14011CAB0; (__int64 *)i != &qword_14011CAB0; i = *(_QWORD *)i )
    {
      if ( (_DWORD)result == *(_DWORD *)(i + 88) )
        goto LABEL_7;
    }
    v3 = result & 0xFFFFFFF | v1 & 0xF0000000;
  }
  dword_14011AF30 = v3;
  return result;
}
