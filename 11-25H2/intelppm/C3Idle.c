/*
 * XREFs of C3Idle @ 0x140009BA0
 * Callers:
 *     <none>
 * Callees:
 *     WriteGenAddr @ 0x140001A70 (WriteGenAddr.c)
 *     ReadGenAddr @ 0x140002350 (ReadGenAddr.c)
 *     IssueVerw @ 0x14000FF60 (IssueVerw.c)
 */

void __fastcall C3Idle(unsigned __int8 *a1, unsigned int a2)
{
  unsigned int GenAddr; // eax
  unsigned int v5; // eax
  __int64 v6; // rdi
  __int64 v7; // rdx

  _InterlockedExchange(&ProcBmRldSet, 1);
  GenAddr = ReadGenAddr((unsigned __int8 *)&dword_140019B0C);
  WriteGenAddr(&dword_140019B0C, GenAddr | 2LL);
  if ( qword_140019B1C )
  {
    v5 = ReadGenAddr((unsigned __int8 *)&dword_140019B18);
    WriteGenAddr(&dword_140019B18, v5 | 2LL);
  }
  v6 = (unsigned int)ReadGenAddr((unsigned __int8 *)&dword_140019B24);
  WriteGenAddr(&dword_140019B24, v6 | 1);
  if ( (_WORD)a2 )
  {
    v7 = 0LL;
    __writemsr(0x48u, 0LL);
  }
  if ( HIWORD(a2) )
    IssueVerw(HIWORD(a2), v7);
  ReadGenAddr(a1);
  WriteGenAddr(&dword_140019B24, v6);
  if ( (_WORD)a2 )
    __writemsr(0x48u, (unsigned __int16)a2);
  else
    _mm_lfence();
}
