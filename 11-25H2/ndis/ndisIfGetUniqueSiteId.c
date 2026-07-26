/*
 * XREFs of ndisIfGetUniqueSiteId @ 0x1400D48D0
 * Callers:
 *     ndisIfCreateNetworkBlock @ 0x1400D45DC (ndisIfCreateNetworkBlock.c)
 * Callees:
 *     <none>
 */

__int64 ndisIfGetUniqueSiteId()
{
  __int64 result; // rax
  unsigned int v1; // ecx
  __int64 i; // rdx
  unsigned int v3; // ecx

  if ( byte_1401275D0 )
  {
    v1 = dword_140124F30;
  }
  else
  {
    dword_140124F30 = dword_140124F30 & 0xF0000000 | (dword_140124F30 + 1) & 0xFFFFFFF;
    if ( (dword_140124F30 & 0xFFFFFFF) != 0xFFFFFFF )
      return dword_140124F30 & 0xFFFFFFF;
    byte_1401275D0 = 1;
    v1 = dword_140124F30 & 0xF0000000 | 0x7FFFFFF;
    dword_140124F30 = v1;
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
    for ( i = qword_140126B50; (__int64 *)i != &qword_140126B50; i = *(_QWORD *)i )
    {
      if ( (_DWORD)result == *(_DWORD *)(i + 88) )
        goto LABEL_7;
    }
    v3 = result & 0xFFFFFFF | v1 & 0xF0000000;
  }
  dword_140124F30 = v3;
  return result;
}
