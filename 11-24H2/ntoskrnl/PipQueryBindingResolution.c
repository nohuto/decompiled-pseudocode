/*
 * XREFs of PipQueryBindingResolution @ 0x140A67300
 * Callers:
 *     IoResolveDependency @ 0x1404B4110 (IoResolveDependency.c)
 *     IoDuplicateDependency @ 0x14071BC90 (IoDuplicateDependency.c)
 *     PipSetDependency @ 0x14071C634 (PipSetDependency.c)
 * Callees:
 *     RtlEqualUnicodeString @ 0x140929190 (RtlEqualUnicodeString.c)
 */

__int64 *__fastcall PipQueryBindingResolution(__int64 a1)
{
  __int64 *v1; // rbx
  __int64 *v4; // rsi
  __int64 *v5; // rbp
  const UNICODE_STRING *v6; // r14
  const UNICODE_STRING *v7; // rcx
  __int64 v8; // rax

  v1 = 0LL;
  if ( *(_DWORD *)a1 )
  {
    if ( *(_DWORD *)a1 == 1 )
    {
      v4 = (__int64 *)PiDependencyNodeListHead;
      do
      {
        if ( v4 == &PiDependencyNodeListHead )
          break;
        v5 = v4;
        v4 = (__int64 *)*v4;
        v6 = (const UNICODE_STRING *)v5[7];
        while ( v6 != (const UNICODE_STRING *)(v5 + 7) )
        {
          v7 = v6;
          v6 = *(const UNICODE_STRING **)&v6->Length;
          if ( RtlEqualUnicodeString(v7 + 1, *(PCUNICODE_STRING *)(a1 + 8), 1u) )
          {
            v1 = v5;
            break;
          }
        }
      }
      while ( !v1 );
    }
  }
  else
  {
    v8 = *(_QWORD *)(a1 + 8);
    if ( v8 )
      return *(__int64 **)(*(_QWORD *)(v8 + 312) + 80LL);
  }
  return v1;
}
