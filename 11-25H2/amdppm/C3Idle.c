/*
 * XREFs of C3Idle @ 0x140005490
 * Callers:
 *     <none>
 * Callees:
 *     ReadGenAddr @ 0x14000297C (ReadGenAddr.c)
 *     WriteGenAddr @ 0x140003F3C (WriteGenAddr.c)
 *     IssueVerw @ 0x14000D6D0 (IssueVerw.c)
 */

void __fastcall C3Idle(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebx
  unsigned int GenAddr; // eax
  __int64 v6; // rdx
  __int64 v7; // r8
  unsigned int v8; // eax
  unsigned __int64 v9; // rdi
  __int64 v10; // rdx
  __int64 v11; // r8

  v3 = a2;
  _InterlockedExchange(&ProcBmRldSet, 1);
  GenAddr = ReadGenAddr((__int64)&dword_14001455C, a2, a3);
  WriteGenAddr((unsigned __int8 *)&dword_14001455C, GenAddr | 2LL);
  if ( qword_14001456C )
  {
    v8 = ReadGenAddr((__int64)&dword_140014568, v6, v7);
    WriteGenAddr((unsigned __int8 *)&dword_140014568, v8 | 2LL);
  }
  v9 = (unsigned int)ReadGenAddr((__int64)&dword_140014574, v6, v7);
  WriteGenAddr((unsigned __int8 *)&dword_140014574, v9 | 1);
  if ( (_WORD)v3 )
  {
    v10 = 0LL;
    __writemsr(0x48u, 0LL);
  }
  if ( HIWORD(v3) )
    IssueVerw(HIWORD(v3), v10);
  ReadGenAddr(a1, v10, v11);
  WriteGenAddr((unsigned __int8 *)&dword_140014574, v9);
  if ( (_WORD)v3 )
    __writemsr(0x48u, (unsigned __int16)v3);
  else
    _mm_lfence();
}
