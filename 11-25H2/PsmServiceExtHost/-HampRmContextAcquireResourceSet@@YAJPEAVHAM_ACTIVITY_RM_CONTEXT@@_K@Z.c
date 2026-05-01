/*
 * XREFs of ?HampRmContextAcquireResourceSet@@YAJPEAVHAM_ACTIVITY_RM_CONTEXT@@_K@Z @ 0x18005A290
 * Callers:
 *     ?HampActStartAsync@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_START_TYPE@@PEAW4_HAM_ACTIVITY_START_DENY_REASON@@PEA_K@Z @ 0x18001A7A8 (-HampActStartAsync@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_START_TYPE@@PEAW4_HAM_ACTIVITY_START_D.c)
 * Callees:
 *     ??0_ResourceSetInfo@ExecutionModel@@QEAA@XZ @ 0x1800117B0 (--0_ResourceSetInfo@ExecutionModel@@QEAA@XZ.c)
 *     ?HamObjectIdGenerate@@YA_KW4_HAM_OBJECT_TYPE@@@Z @ 0x18001E740 (-HamObjectIdGenerate@@YA_KW4_HAM_OBJECT_TYPE@@@Z.c)
 *     ?RmpActivityPropertiesToResourceSetInfo@ExecutionModel@@YAXPEAU_HAM_ACTIVITY_PROPERTIES@@PEAU_ResourceSetInfo@1@@Z @ 0x18005A370 (-RmpActivityPropertiesToResourceSetInfo@ExecutionModel@@YAXPEAU_HAM_ACTIVITY_PROPERTIES@@PEAU_Re.c)
 *     ?RmSrvAcquireResourceSet@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_ResourceSetInfo@ExecutionModel@@PEAUIResourceSetCallback@3@PEAU_RM_ACTIVITY_HOST@@_K@Z @ 0x18005A594 (-RmSrvAcquireResourceSet@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_ResourceSetInfo@ExecutionModel@@PEAUI.c)
 *     __security_check_cookie @ 0x1800A7850 (__security_check_cookie.c)
 */

__int64 __fastcall HampRmContextAcquireResourceSet(struct HAM_ACTIVITY_RM_CONTEXT *a1, __int64 a2)
{
  __int64 v4; // rdi
  struct ExecutionModel::_ResourceSetInfo *v5; // r8
  unsigned __int64 v6; // rax
  struct _RM_SERVICE_GLOBALS *v7; // rcx
  int v8; // eax
  __int64 result; // rax
  _BYTE v10[104]; // [rsp+30h] [rbp-198h] BYREF
  int v11; // [rsp+98h] [rbp-130h]
  __int64 v12; // [rsp+A0h] [rbp-128h]
  int v13; // [rsp+1A4h] [rbp-24h]

  ExecutionModel::_ResourceSetInfo::_ResourceSetInfo((ExecutionModel::_ResourceSetInfo *)v10);
  v4 = *((_QWORD *)a1 + 1);
  ExecutionModel::RmpActivityPropertiesToResourceSetInfo(
    (ExecutionModel *)(v4 + 112),
    (struct _HAM_ACTIVITY_PROPERTIES *)v10,
    v5);
  v13 &= ~0x40000u;
  v11 = 1;
  v12 = a2;
  v6 = HamObjectIdGenerate(1);
  v7 = RmSvcGlobals;
  *((_QWORD *)a1 + 2) = v6;
  v8 = RmSrvAcquireResourceSet(
         v7,
         (struct ExecutionModel::_ResourceSetInfo *)v10,
         a1,
         (struct _RM_ACTIVITY_HOST *)((*(_QWORD *)(v4 + 80) - 64LL) & -(__int64)(*(_QWORD *)(v4 + 80) != 0LL)),
         v6);
  if ( v8 >= 0 )
    return 0LL;
  result = v8 | 0xC0000000;
  *((_QWORD *)a1 + 2) = -1LL;
  return result;
}
