/*
 * XREFs of MiUseProtectedSlabAllocatorForDriverPage @ 0x140429E0C
 * Callers:
 *     MiMakeDriverPagesPrivate @ 0x140429928 (MiMakeDriverPagesPrivate.c)
 *     MiAllocateDriverPage @ 0x140A62088 (MiAllocateDriverPage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiUseProtectedSlabAllocatorForDriverPage(__int64 a1, char a2, _DWORD *a3)
{
  unsigned __int64 v3; // rax

  if ( (MiFlags & 0x8000) != 0 && (*(_DWORD *)(a1 + 4) & 8) != 0 && (a2 & 2) != 0 )
  {
    if ( (a2 & 2) != 0 )
    {
      LODWORD(v3) = 0;
    }
    else if ( (a2 & 1) != 0 )
    {
      v3 = ((unsigned __int64)MiFlags >> 15) & 1;
    }
    else
    {
      LODWORD(v3) = 2;
    }
    *a3 = v3;
    return 1LL;
  }
  else
  {
    *a3 = 9;
    return 0LL;
  }
}
