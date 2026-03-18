/*
 * XREFs of _anonymous_namespace_::GetTemporaryConfigWithMask @ 0x1801D9404
 * Callers:
 *     ?SupportsInteractionType@CInteractionProcessor@@QEBAHW4InputType@@I_N@Z @ 0x180092D20 (-SupportsInteractionType@CInteractionProcessor@@QEBAHW4InputType@@I_N@Z.c)
 *     ?SupportsInteractionType@CInteraction@@UEBAHW4InputType@@I_N@Z @ 0x1801CE580 (-SupportsInteractionType@CInteraction@@UEBAHW4InputType@@I_N@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall anonymous_namespace_::GetTemporaryConfigWithMask(__int64 a1, _DWORD *a2, _DWORD *a3)
{
  _DWORD *v3; // rcx
  __int64 v4; // r9
  __int64 result; // rax

  *a2 = 0;
  v3 = (_DWORD *)(a1 + 8);
  *a3 = 0;
  v4 = 3LL;
  do
  {
    if ( *((_BYTE *)v3 - 8) )
    {
      *a2 |= *v3 & *(v3 - 1);
      result = (unsigned int)*v3;
      *a3 |= result;
    }
    v3 += 3;
    --v4;
  }
  while ( v4 );
  return result;
}
