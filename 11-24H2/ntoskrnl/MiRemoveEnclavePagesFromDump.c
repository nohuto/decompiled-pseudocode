/*
 * XREFs of MiRemoveEnclavePagesFromDump @ 0x140681CD4
 * Callers:
 *     MmGetDumpRange @ 0x140678D28 (MmGetDumpRange.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

_QWORD *__fastcall MiRemoveEnclavePagesFromDump(__int64 a1)
{
  _QWORD *result; // rax
  _QWORD *v3; // rbx
  _QWORD *v4; // rcx
  _QWORD *v5; // rcx

  result = (_QWORD *)qword_140E375F8;
  v3 = 0LL;
  while ( result )
  {
    v3 = result;
    result = (_QWORD *)*result;
  }
  while ( v3 )
  {
    guard_dispatch_icall_no_overrides(a1, v3[3]);
    result = (_QWORD *)v3[1];
    v4 = v3;
    if ( result )
    {
      v5 = (_QWORD *)*result;
      v3 = (_QWORD *)v3[1];
      if ( *result )
      {
        do
        {
          result = (_QWORD *)*v5;
          v3 = v5;
          v5 = result;
        }
        while ( result );
      }
    }
    else
    {
      while ( 1 )
      {
        v3 = (_QWORD *)(v3[2] & 0xFFFFFFFFFFFFFFFCuLL);
        if ( !v3 || (_QWORD *)*v3 == v4 )
          break;
        v4 = v3;
      }
    }
  }
  return result;
}
