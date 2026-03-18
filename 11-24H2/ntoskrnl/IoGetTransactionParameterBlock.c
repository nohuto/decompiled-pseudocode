/*
 * XREFs of IoGetTransactionParameterBlock @ 0x14040E0D0
 * Callers:
 *     IopTrackLink @ 0x140A2C8D4 (IopTrackLink.c)
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
