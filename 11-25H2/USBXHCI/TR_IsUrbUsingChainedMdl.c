/*
 * XREFs of TR_IsUrbUsingChainedMdl @ 0x140022FE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall TR_IsUrbUsingChainedMdl(__int64 a1)
{
  _QWORD *v1; // rax

  if ( *(_WORD *)(a1 + 2) != 56 )
  {
    switch ( *(_WORD *)(a1 + 2) )
    {
      case '9':
      case ':':
        return 0;
      default:
        break;
    }
  }
  v1 = *(_QWORD **)(a1 + 48);
  return v1 && *v1 != 0LL;
}
