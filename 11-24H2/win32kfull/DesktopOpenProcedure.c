/*
 * XREFs of DesktopOpenProcedure @ 0x14023C180
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DesktopOpenProcedure(__int64 a1)
{
  _DWORD *v1; // rdi
  int v3; // eax

  v1 = *(_DWORD **)(a1 + 32);
  v3 = v1[12];
  if ( (v3 & 8) == 0
    && (*(_DWORD *)(a1 + 44) == 1 || (v3 & 0x10) != 0)
    && (!*(_WORD *)(a1 + 40)
     || (unsigned __int8)PsIsSystemProcess(*(_QWORD *)(a1 + 24))
     || (unsigned int)PsGetProcessSessionIdEx(*(_QWORD *)(a1 + 24)) == *v1) )
  {
    return 0LL;
  }
  else
  {
    return 3221225506LL;
  }
}
