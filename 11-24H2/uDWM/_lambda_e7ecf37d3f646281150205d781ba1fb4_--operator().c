/*
 * XREFs of _lambda_e7ecf37d3f646281150205d781ba1fb4_::operator() @ 0x1800EDB24
 * Callers:
 *     CWindowList::ForEachSoftwareCursorListener__lambda_e7ecf37d3f646281150205d781ba1fb4___ @ 0x1800845B8 (CWindowList--ForEachSoftwareCursorListener__lambda_e7ecf37d3f646281150205d781ba1fb4___.c)
 * Callees:
 *     <none>
 */

char __fastcall lambda_e7ecf37d3f646281150205d781ba1fb4_::operator()(__int64 a1, __int64 a2)
{
  __int64 v3; // r8
  __int64 v4; // rcx
  unsigned int v5; // edx
  __int64 v6; // r10

  if ( a2 != **(_QWORD **)a1 )
    return 1;
  v3 = *(_QWORD *)(a1 + 8);
  v4 = 0LL;
  v5 = *(_DWORD *)(v3 + 664);
  v6 = *(_QWORD *)(v3 + 640);
  if ( v5 )
  {
    do
    {
      if ( a2 == *(_QWORD *)(v6 + 8 * v4) )
        break;
      v4 = (unsigned int)(v4 + 1);
    }
    while ( (unsigned int)v4 < v5 );
  }
  if ( (unsigned int)v4 < v5 )
  {
    while ( (unsigned int)v4 < v5 - 1 )
    {
      *(_QWORD *)(v6 + 8 * v4) = *(_QWORD *)(v6 + 8LL * (unsigned int)(v4 + 1));
      v4 = (unsigned int)(v4 + 1);
      v5 = *(_DWORD *)(v3 + 664);
    }
    *(_DWORD *)(v3 + 664) = v5 - 1;
  }
  return 0;
}
