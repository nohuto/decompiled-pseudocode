/*
 * XREFs of ExpFindHost @ 0x1407C0E68
 * Callers:
 *     ExRegisterExtension @ 0x1407C08C0 (ExRegisterExtension.c)
 *     ExRegisterHost @ 0x1407C0B6C (ExRegisterHost.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ExpFindHost(__int16 a1)
{
  __int64 result; // rax

  for ( result = ExpHostList; ; result = *(_QWORD *)result )
  {
    if ( (__int64 *)result == &ExpHostList )
      return 0LL;
    if ( *(_WORD *)(result + 16) == a1 )
      break;
  }
  if ( _InterlockedIncrement64((volatile signed __int64 *)(result + 24)) <= 1 )
    __fastfail(0xEu);
  return result;
}
