/*
 * XREFs of MiRemoveConductorListZeroThread @ 0x1408000A0
 * Callers:
 *     MiDeleteThreadContext @ 0x140690714 (MiDeleteThreadContext.c)
 * Callees:
 *     memmove @ 0x1406C0B40 (memmove.c)
 */

unsigned __int64 __fastcall MiRemoveConductorListZeroThread(__int64 a1, __int64 a2)
{
  unsigned __int64 result; // rax
  _QWORD *v4; // rdi
  size_t v5; // rbx

  result = *(unsigned int *)(a1 + 60);
  v4 = (_QWORD *)(*(_QWORD *)(a1 + 72) + 24LL);
  while ( (_DWORD)result )
  {
    if ( *v4 == a2 )
    {
      if ( (_DWORD)result != 1 )
      {
        v5 = 8LL * (unsigned int)(result - 1);
        result = (unsigned __int64)memmove(v4, v4 + 1, v5);
        v4 = (_QWORD *)((char *)v4 + v5);
      }
      *v4 = 0LL;
      break;
    }
    ++v4;
    result = (unsigned int)(result - 1);
  }
  --*(_DWORD *)(a1 + 60);
  return result;
}
