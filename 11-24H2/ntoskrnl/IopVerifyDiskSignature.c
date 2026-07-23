/*
 * XREFs of IopVerifyDiskSignature @ 0x1407115DC
 * Callers:
 *     IopCreateArcName @ 0x140A6FCE0 (IopCreateArcName.c)
 *     IopGetBootDiskInformation @ 0x140C1F8BC (IopGetBootDiskInformation.c)
 * Callees:
 *     <none>
 */

char __fastcall IopVerifyDiskSignature(__int64 a1, __int64 a2, _DWORD *a3)
{
  int v4; // eax
  __int64 v5; // rdx

  if ( *(_BYTE *)(a2 + 36) )
  {
    if ( *(_DWORD *)a1 )
    {
      if ( *(_DWORD *)a1 == 1 && *(_BYTE *)(a2 + 38) )
      {
        v5 = *(_QWORD *)(a2 + 40) - *(_QWORD *)(a1 + 8);
        if ( !v5 )
          v5 = *(_QWORD *)(a2 + 48) - *(_QWORD *)(a1 + 16);
        if ( !v5 )
        {
          if ( a3 )
            *a3 = 0;
          return 1;
        }
      }
    }
    else
    {
      v4 = *(_DWORD *)(a1 + 8);
      if ( *(_DWORD *)(a2 + 16) == v4 )
      {
        if ( a3 )
          *a3 = v4;
        return 1;
      }
    }
  }
  return 0;
}
