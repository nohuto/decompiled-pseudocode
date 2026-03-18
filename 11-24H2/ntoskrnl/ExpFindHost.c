/*
 * XREFs of ExpFindHost @ 0x1407C0A18
 * Callers:
 *     ExRegisterExtension @ 0x1407C0470 (ExRegisterExtension.c)
 *     ExRegisterHost @ 0x1407C071C (ExRegisterHost.c)
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
