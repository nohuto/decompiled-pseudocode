/*
 * XREFs of ?ndisReadParameter@@YAJPEA_WKPEAXK11@Z @ 0x140098280
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1400E7200 (memmove.c)
 */

__int64 __fastcall ndisReadParameter(wchar_t *a1, int a2, void *a3, unsigned int a4, _DWORD *a5, _QWORD *a6)
{
  size_t v6; // rbx
  void *Pool2; // rax

  v6 = a4;
  Pool2 = (void *)ExAllocatePool2(64LL, a4 + 4LL, 1685210190LL);
  *a6 = Pool2;
  if ( !Pool2 )
    return 3221225626LL;
  memmove(Pool2, a3, v6);
  if ( a5 )
  {
    *a5 = a2;
    a5[1] = v6;
  }
  return 0LL;
}
