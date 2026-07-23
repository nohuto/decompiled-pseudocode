/*
 * XREFs of SeFastTraverseCheck @ 0x1403E9BE8
 * Callers:
 *     ObpCheckTraverseAccess @ 0x14086C170 (ObpCheckTraverseAccess.c)
 *     IopParseDevice @ 0x1408A7F20 (IopParseDevice.c)
 * Callees:
 *     RtlEqualSid @ 0x1403EB6C0 (RtlEqualSid.c)
 */

char __fastcall SeFastTraverseCheck(__int64 a1, __int64 a2, int a3)
{
  __int16 v4; // ax
  __int64 v5; // rax
  __int64 v6; // rbx
  unsigned int v7; // esi
  unsigned int v8; // edi
  __int64 v9; // rbx

  if ( !a1 )
    return 0;
  v4 = *(_WORD *)(a1 + 2);
  if ( (v4 & 4) != 0 )
  {
    if ( v4 >= 0 )
    {
      v6 = *(_QWORD *)(a1 + 32);
    }
    else
    {
      v5 = *(unsigned int *)(a1 + 16);
      if ( !(_DWORD)v5 )
        return 1;
      v6 = a1 + v5;
    }
    if ( v6 )
    {
      v7 = *(unsigned __int16 *)(v6 + 4);
      if ( *(_WORD *)(v6 + 4) && (*(_DWORD *)(a2 + 12) & 0x810) == 0 )
      {
        v8 = 0;
        v9 = v6 + 8;
        while ( v8 < v7 )
        {
          if ( (*(_BYTE *)(v9 + 1) & 8) == 0 )
          {
            if ( *(_BYTE *)v9 )
            {
              if ( *(_BYTE *)v9 == 1 && (a3 & *(_DWORD *)(v9 + 4)) != 0 )
                return 0;
            }
            else if ( (a3 & *(_DWORD *)(v9 + 4)) != 0 && RtlEqualSid(SeWorldSid, (PSID)(v9 + 8)) )
            {
              return 1;
            }
          }
          ++v8;
          v9 += *(unsigned __int16 *)(v9 + 2);
        }
      }
      return 0;
    }
  }
  return 1;
}
