/*
 * XREFs of ?HampRmContextResetExternalResourcePriority@@YAJPEAXE@Z @ 0x180084018
 * Callers:
 *     ?HampActResetExternalResourcePriority@@YAJPEAU_HAM_ACTIVITY@@E@Z @ 0x1800820F8 (-HampActResetExternalResourcePriority@@YAJPEAU_HAM_ACTIVITY@@E@Z.c)
 * Callees:
 *     ?HampSystemQueryPolicyInfo@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEBGPEAU_ResourceSetInfo@ExecutionModel@@@Z @ 0x180010968 (-HampSystemQueryPolicyInfo@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEBGPEAU_ResourceSetInfo@ExecutionMod.c)
 *     ??0_ResourceSetInfo@ExecutionModel@@QEAA@XZ @ 0x180011730 (--0_ResourceSetInfo@ExecutionModel@@QEAA@XZ.c)
 *     ?RmSrvResourceSetExternalResourcePriorities@@YAJPEAU_RM_SERVICE_GLOBALS@@_KKPEAU_ResourceInfo@ExecutionModel@@@Z @ 0x1800887AC (-RmSrvResourceSetExternalResourcePriorities@@YAJPEAU_RM_SERVICE_GLOBALS@@_KKPEAU_ResourceInfo@Ex.c)
 *     __security_check_cookie @ 0x1800A7B40 (__security_check_cookie.c)
 */

__int64 __fastcall HampRmContextResetExternalResourcePriority(_QWORD *a1, unsigned __int8 a2)
{
  __int64 v3; // rbx
  __int64 result; // rax
  unsigned int v5; // r8d
  struct _RM_SERVICE_GLOBALS *v6; // rcx
  unsigned __int64 v7; // rdx
  int v8; // eax
  __int128 v9; // [rsp+20h] [rbp-1B8h] BYREF
  __int64 v10; // [rsp+30h] [rbp-1A8h]
  _BYTE v11[152]; // [rsp+40h] [rbp-198h] BYREF
  unsigned int v12[58]; // [rsp+D8h] [rbp-100h]

  v3 = a2;
  ExecutionModel::_ResourceSetInfo::_ResourceSetInfo((ExecutionModel::_ResourceSetInfo *)v11);
  result = HampSystemQueryPolicyInfo(
             (struct _HOST_ACTIVITY_MANAGER *)((*(_QWORD *)(a1[1] + 32LL) & 0xFFFFFFFFFFFFFFFCuLL) - 440),
             (const unsigned __int16 *)(a1[1] + 252LL),
             (struct ExecutionModel::_ResourceSetInfo *)v11);
  if ( (int)result >= 0 )
  {
    v6 = (struct _RM_SERVICE_GLOBALS *)v12[v3];
    v7 = a1[2];
    v9 = 0LL;
    LODWORD(v9) = v3;
    v10 = (unsigned int)v6;
    v8 = RmSrvResourceSetExternalResourcePriorities(v6, v7, v5, (struct ExecutionModel::_ResourceInfo *)&v9);
    if ( v8 >= 0 )
      return 0LL;
    else
      return v8 | 0xC0000000;
  }
  return result;
}
