/*
 * XREFs of KiEnumerateCallback @ 0x1404CF370
 * Callers:
 *     <none>
 * Callees:
 *     ExReferenceCallBackBlock @ 0x14022E890 (ExReferenceCallBackBlock.c)
 *     ExDereferenceCallBackBlock @ 0x14043DD80 (ExDereferenceCallBackBlock.c)
 *     KiEnumerateNmiSxCallback @ 0x1405ADD68 (KiEnumerateNmiSxCallback.c)
 */

__int64 __fastcall KiEnumerateCallback(int a1, struct _EX_RUNDOWN_REF **a2, __int64 a3, unsigned __int64 *a4)
{
  struct _EX_RUNDOWN_REF *v6; // rdx
  struct _EX_RUNDOWN_REF *v7; // rax

  if ( !a1 )
    return KiEnumerateNmiSxCallback(a2, a3, a4);
  if ( a1 == 1 )
  {
    v6 = *a2;
    if ( v6 )
    {
      ExDereferenceCallBackBlock(&KiBoundsCallback, v6);
      *a2 = 0LL;
    }
    else
    {
      v7 = ExReferenceCallBackBlock(&KiBoundsCallback, 0LL, a3, a3);
      if ( v7 )
      {
        *a2 = v7;
        *a4 = v7[1].Count;
        return 1LL;
      }
    }
  }
  return 0LL;
}
