/*
 * XREFs of ?RmpResourceSetInfoIsValid@@YAKPEBU_ResourceSetInfo@ExecutionModel@@@Z @ 0x18005F9CC
 * Callers:
 *     ?RmSrvAcquireResourceSet@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_ResourceSetInfo@ExecutionModel@@PEAUIResourceSetCallback@3@PEAU_RM_ACTIVITY_HOST@@_K@Z @ 0x18005A514 (-RmSrvAcquireResourceSet@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_ResourceSetInfo@ExecutionModel@@PEAUI.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RmpResourceSetInfoIsValid(const struct ExecutionModel::_ResourceSetInfo *a1)
{
  unsigned __int64 v2; // r9
  unsigned __int64 v3; // rcx
  unsigned __int64 v4; // r10
  unsigned __int64 v5; // rdx
  unsigned int v6; // edx
  unsigned int i; // r9d

  if ( *((_QWORD *)a1 + 14) == -1LL )
    return 0;
  v2 = *((_QWORD *)a1 + 8);
  if ( v2 - 1 <= 0xFFE )
    return 0;
  v3 = *((_QWORD *)a1 + 7);
  if ( v3 - 1 <= 0xFFE )
    return 0;
  v4 = *((_QWORD *)a1 + 45);
  if ( v4 - 1 <= 0xFFE )
    return 0;
  v5 = *((_QWORD *)a1 + 3);
  if ( v5 - 1 <= 0xFFE || v2 < v5 || v5 < v3 )
  {
    return 0;
  }
  else
  {
    v6 = 0;
    if ( v3 >= v4 )
    {
      for ( i = 0; i < 3; ++i )
      {
        if ( *((_DWORD *)a1 + 6 * i + 20) != i )
          return v6;
      }
      if ( *((_DWORD *)a1 + 2) <= *((_DWORD *)a1 + 8)
        && (*((_BYTE *)a1 + 40) & 9) != 9
        && ((*((_BYTE *)a1 + 42) & 7u) - 2 > 2 || (*((_BYTE *)a1 + 40) & 3) != 0) )
      {
        return 1;
      }
    }
  }
  return v6;
}
