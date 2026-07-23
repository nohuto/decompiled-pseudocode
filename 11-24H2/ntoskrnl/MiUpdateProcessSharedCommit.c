/*
 * XREFs of MiUpdateProcessSharedCommit @ 0x140975220
 * Callers:
 *     MiChargeSegmentCommit @ 0x140974EF8 (MiChargeSegmentCommit.c)
 * Callees:
 *     MiIncludeSharedCommit @ 0x1404152F0 (MiIncludeSharedCommit.c)
 */

_QWORD *__fastcall MiUpdateProcessSharedCommit(__int64 a1)
{
  _QWORD *result; // rax
  __int64 v2; // r9
  unsigned __int64 v3; // r10
  _QWORD *v4; // r8
  _QWORD *i; // rcx
  __int64 v6; // rax
  volatile signed __int64 *v7; // rax
  _QWORD *v8; // rcx
  _QWORD **v9; // rcx

  result = (_QWORD *)MiIncludeSharedCommit(a1);
  if ( (_DWORD)result )
  {
    result = *(_QWORD **)v2;
    v4 = 0LL;
    for ( i = *(_QWORD **)(*(_QWORD *)v2 + 72LL); i; i = (_QWORD *)*i )
      v4 = i;
    while ( v4 )
    {
      v6 = v4[3];
      if ( (v6 & 1) != 0 )
        v7 = (volatile signed __int64 *)((v6 & 0xFFFFFFFFFFFFFFFEuLL) + 1568);
      else
        v7 = (volatile signed __int64 *)(v6 + 1704);
      _InterlockedAdd64(v7, v3);
      result = (_QWORD *)v4[1];
      v8 = v4;
      if ( result )
      {
        v9 = (_QWORD **)*result;
        v4 = (_QWORD *)v4[1];
        if ( *result )
        {
          do
          {
            result = *v9;
            v4 = v9;
            v9 = (_QWORD **)result;
          }
          while ( result );
        }
      }
      else
      {
        while ( 1 )
        {
          v4 = (_QWORD *)(v4[2] & 0xFFFFFFFFFFFFFFFCuLL);
          if ( !v4 || (_QWORD *)*v4 == v8 )
            break;
          v8 = v4;
        }
      }
    }
  }
  return result;
}
