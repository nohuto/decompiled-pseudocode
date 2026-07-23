/*
 * XREFs of RtlIsElevatedRid @ 0x18010D230
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOLEAN __cdecl RtlIsElevatedRid(PSID_AND_ATTRIBUTES SidAttr)
{
  unsigned int v1; // edx
  _DWORD *Sid; // r8

  v1 = 0;
  if ( SidAttr )
  {
    if ( (SidAttr->Attributes & 0x30) == 0 )
    {
      Sid = SidAttr->Sid;
      if ( *((_BYTE *)SidAttr->Sid + 1) )
      {
        if ( (unsigned int)(Sid[2] - 80) > 0x1F )
        {
          while ( v1 < 0x13 )
          {
            if ( Sid[*((unsigned __int8 *)Sid + 1) + 1] == dword_180193AC0[v1] )
              return 1;
            ++v1;
          }
        }
      }
    }
  }
  return 0;
}
