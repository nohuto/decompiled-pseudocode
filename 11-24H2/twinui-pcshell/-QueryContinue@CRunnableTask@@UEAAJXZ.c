/*
 * XREFs of ?QueryContinue@CRunnableTask@@UEAAJXZ @ 0x180601C90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CRunnableTask::QueryContinue(CRunnableTask *this)
{
  int v1; // edx

  v1 = 0;
  if ( *((_DWORD *)this + 12) )
  {
    v1 = -2147467259;
    if ( *((_DWORD *)this + 7) == 2 )
      v1 = -2147483638;
  }
  return v1 != 0;
}
