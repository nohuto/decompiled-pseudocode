/*
 * XREFs of wil::ResultFromException__lambda_efb835cf1617f50ad697dabca457218e___ @ 0x1802113B4
 * Callers:
 *     ShellPositionerManager::DoWorkForEachMonitor__lambda_b150c4128798bf8cae8961d745166767___ @ 0x18021106C (ShellPositionerManager--DoWorkForEachMonitor__lambda_b150c4128798bf8cae8961d745166767___.c)
 * Callees:
 *     _lambda_efb835cf1617f50ad697dabca457218e_::operator() @ 0x18021164C (_lambda_efb835cf1617f50ad697dabca457218e_--operator().c)
 */

__int64 wil::ResultFromException__lambda_efb835cf1617f50ad697dabca457218e___()
{
  wil *v0; // rcx
  __int64 result; // rax

  try
  {
    lambda_efb835cf1617f50ad697dabca457218e_::operator()();
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::ResultFromCaughtException(v0);
  }
  return result;
}
