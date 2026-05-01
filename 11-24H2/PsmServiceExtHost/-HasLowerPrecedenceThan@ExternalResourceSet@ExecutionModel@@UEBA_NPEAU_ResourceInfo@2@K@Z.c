/*
 * XREFs of ?HasLowerPrecedenceThan@ExternalResourceSet@ExecutionModel@@UEBA_NPEAU_ResourceInfo@2@K@Z @ 0x18008E2F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall ExecutionModel::ExternalResourceSet::HasLowerPrecedenceThan(
        ExecutionModel::ExternalResourceSet *this,
        struct ExecutionModel::_ResourceInfo *a2,
        int a3)
{
  __int64 v3; // rax
  int v4; // r10d
  __int64 v5; // r9
  bool result; // al

  v3 = *(int *)a2;
  v4 = *((_DWORD *)a2 + 4);
  v5 = 3 * v3;
  if ( v4 < *((_DWORD *)this + 6 * v3 + 22) )
    return 1;
  result = 0;
  if ( *((_DWORD *)this + 2 * v5 + 22) == v4 && ((*((_BYTE *)this + 1352) & 4) != 0 || *((_DWORD *)this + 2) != a3) )
    return 1;
  return result;
}
