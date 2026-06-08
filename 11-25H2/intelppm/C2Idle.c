/*
 * XREFs of C2Idle @ 0x140009AD0
 * Callers:
 *     <none>
 * Callees:
 *     WriteGenAddr @ 0x140001A70 (WriteGenAddr.c)
 *     ReadGenAddr @ 0x140002350 (ReadGenAddr.c)
 *     IssueVerw @ 0x14000FF60 (IssueVerw.c)
 */

unsigned __int64 __fastcall C2Idle(unsigned __int8 *a1, __int64 a2)
{
  unsigned int v2; // ebx
  int GenAddr; // eax
  int v5; // eax
  unsigned __int64 result; // rax

  v2 = a2;
  if ( _InterlockedExchange(&ProcBmRldSet, 0) == 1 )
  {
    GenAddr = ReadGenAddr((unsigned __int8 *)&dword_140019B0C);
    WriteGenAddr(&dword_140019B0C, GenAddr & 0xFFFFFFFD);
    if ( qword_140019B1C )
    {
      v5 = ReadGenAddr((unsigned __int8 *)&dword_140019B18);
      WriteGenAddr(&dword_140019B18, v5 & 0xFFFFFFFD);
    }
  }
  if ( (_WORD)v2 )
  {
    a2 = 0LL;
    __writemsr(0x48u, 0LL);
  }
  if ( HIWORD(v2) )
    IssueVerw(HIWORD(v2), a2);
  result = ReadGenAddr(a1);
  if ( (_WORD)v2 )
  {
    result = (unsigned __int16)v2;
    __writemsr(0x48u, (unsigned __int16)v2);
  }
  else
  {
    _mm_lfence();
  }
  return result;
}
