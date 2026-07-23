/*
 * XREFs of ObpIsObjectPoolTagTraced @ 0x1407434B0
 * Callers:
 *     ObpRegisterObject @ 0x140AB162C (ObpRegisterObject.c)
 * Callees:
 *     <none>
 */

char __fastcall ObpIsObjectPoolTagTraced(__int64 a1)
{
  unsigned int v1; // edx

  v1 = 0;
  if ( a1 )
  {
    if ( (ObpTraceFlags & 0x10) == 0 )
      return 1;
    while ( v1 < 0x10 )
    {
      if ( *(_DWORD *)(ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(a1 + 24) ^ (unsigned __int64)BYTE1(a1)]
                     + 192) == *(_DWORD *)(ObpTracePoolTags + 4LL * v1) )
        return 1;
      ++v1;
    }
  }
  return 0;
}
