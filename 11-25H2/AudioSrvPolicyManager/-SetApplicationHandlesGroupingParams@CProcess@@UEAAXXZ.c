/*
 * XREFs of ?SetApplicationHandlesGroupingParams@CProcess@@UEAAXXZ @ 0x180036DA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CProcess::SetApplicationHandlesGroupingParams(CProcess *this)
{
  *((_BYTE *)this + 784) = 1;
  CProcess::ResetReusedSessionGroupingParams(this);
}
