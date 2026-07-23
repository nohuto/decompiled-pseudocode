/*
 * XREFs of ViThunkGetWdmThunk @ 0x140B998B4
 * Callers:
 *     ViThunkFindAllThunkedImports @ 0x140B99688 (ViThunkFindAllThunkedImports.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ViThunkGetWdmThunk(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  int v3; // ecx
  __int64 v4; // rcx

  result = 0LL;
  if ( a1 )
  {
    while ( *(_QWORD *)a2 )
    {
      if ( a1 == *(_QWORD *)(a2 + 16) )
      {
        v3 = *(_DWORD *)(a2 + 32);
        if ( (v3 & 1) != 0 )
        {
          if ( (v3 & 4) != 0 )
          {
            return *(_QWORD *)(a2 + 8);
          }
          else
          {
            v4 = *(_QWORD *)(a2 + 40);
            if ( *(_QWORD *)v4 )
              return *(_QWORD *)v4;
          }
        }
        return result;
      }
      a2 += 56LL;
    }
  }
  return result;
}
