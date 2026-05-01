/*
 * XREFs of ?CreateCommitMemoryWnfStates@ResourceManager@ExecutionModel@@SAJPEAT_RM_SID@@PEAU_WNF_STATE_NAME@@1@Z @ 0x18005DA60
 * Callers:
 *     ?AddCommitMemoryWnfStates@ResourceManager@ExecutionModel@@QEAAJKPEAT_RM_SID@@PEAT_LARGE_INTEGER@@1@Z @ 0x18005D798 (-AddCommitMemoryWnfStates@ResourceManager@ExecutionModel@@QEAAJKPEAT_RM_SID@@PEAT_LARGE_INTEGER@.c)
 * Callees:
 *     ?RmpUtilCreateWnfStateNameForApplicationClient@@YAJPEAT_RM_SID@@KPEAU_WNF_STATE_NAME@@@Z @ 0x180030804 (-RmpUtilCreateWnfStateNameForApplicationClient@@YAJPEAT_RM_SID@@KPEAU_WNF_STATE_NAME@@@Z.c)
 *     __security_check_cookie @ 0x1800A7B40 (__security_check_cookie.c)
 */

__int64 __fastcall ExecutionModel::ResourceManager::CreateCommitMemoryWnfStates(
        union _RM_SID *a1,
        struct _WNF_STATE_NAME *a2,
        struct _WNF_STATE_NAME *a3)
{
  NTSTATUS v6; // eax
  signed int v7; // eax
  __int64 v8; // rdx
  unsigned int v9; // ebx
  _WNF_STATE_NAME v11; // [rsp+20h] [rbp-20h] BYREF
  struct _WNF_STATE_NAME v12; // [rsp+28h] [rbp-18h] BYREF

  v11 = 0LL;
  v12 = 0LL;
  v6 = RmpUtilCreateWnfStateNameForApplicationClient(a1, 8LL, &v11);
  if ( v6 < 0 || (v6 = RmpUtilCreateWnfStateNameForApplicationClient(a1, 24LL, &v12), v6 < 0) )
  {
    v7 = RtlNtStatusToDosError(v6);
    v9 = v7;
    if ( v7 > 0 )
      v9 = (unsigned __int16)v7 | 0x80070000;
    if ( v11.Data[0] || v11.Data[1] )
      NtDeleteWnfStateName(&v11, v8);
    if ( v12.Data[0] || v12.Data[1] )
      NtDeleteWnfStateName(&v12, v8);
  }
  else
  {
    v9 = 0;
    *a2 = v11;
    *a3 = v12;
  }
  return v9;
}
