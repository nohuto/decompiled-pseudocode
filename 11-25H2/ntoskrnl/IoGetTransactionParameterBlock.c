/*
 * XREFs of IoGetTransactionParameterBlock @ 0x14040A9A0
 * Callers:
 *     IopTrackLink @ 0x140A23294 (IopTrackLink.c)
 * Callees:
 *     <none>
 */

PTXN_PARAMETER_BLOCK __stdcall IoGetTransactionParameterBlock(PFILE_OBJECT FileObject)
{
  PTXN_PARAMETER_BLOCK result; // rax

  result = (PTXN_PARAMETER_BLOCK)FileObject->FileObjectExtension;
  if ( result )
    return (PTXN_PARAMETER_BLOCK)result->TransactionObject;
  return result;
}
