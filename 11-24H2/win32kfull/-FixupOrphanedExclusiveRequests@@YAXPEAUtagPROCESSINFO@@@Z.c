/*
 * XREFs of ?FixupOrphanedExclusiveRequests@@YAXPEAUtagPROCESSINFO@@@Z @ 0x140130530
 * Callers:
 *     _RegisterRawInputDevices @ 0x14012FA44 (_RegisterRawInputDevices.c)
 * Callees:
 *     ?IsLegacyDevice@@YAHGG@Z @ 0x140130DFC (-IsLegacyDevice@@YAHGG@Z.c)
 */

void __fastcall FixupOrphanedExclusiveRequests(struct tagPROCESSINFO *a1)
{
  __int64 v1; // rbx
  __int64 v2; // r10
  __int64 i; // r9
  __int64 *v4; // r9
  __int16 v5; // r11
  __int64 *j; // rax

  v1 = *((_QWORD *)a1 + 104);
  v2 = v1 + 48;
  for ( i = *(_QWORD *)(v1 + 48); i != v2; i = *v4 )
  {
    if ( !(unsigned int)IsLegacyDevice(*(_WORD *)(i + 16), *(_WORD *)(i + 18)) )
    {
      for ( j = *(__int64 **)(v1 + 32); j != (__int64 *)(v1 + 32); j = (__int64 *)*j )
      {
        if ( *((_WORD *)j + 8) == v5 )
          goto LABEL_10;
      }
      j = 0LL;
LABEL_10:
      if ( j )
      {
        if ( __CFSHR__(*((_DWORD *)v4 + 5), 4) )
        {
          --*(_DWORD *)(v4[3] + 40);
          *((_DWORD *)v4 + 5) &= ~8u;
        }
      }
      else if ( !__CFSHR__(*((_DWORD *)v4 + 5), 4) )
      {
        ++*(_DWORD *)(v4[3] + 40);
        *((_DWORD *)v4 + 5) |= 8u;
      }
    }
  }
}
