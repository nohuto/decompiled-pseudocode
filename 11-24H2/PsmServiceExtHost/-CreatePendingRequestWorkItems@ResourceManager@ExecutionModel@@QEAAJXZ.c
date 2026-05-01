/*
 * XREFs of ?CreatePendingRequestWorkItems@ResourceManager@ExecutionModel@@QEAAJXZ @ 0x18008687C
 * Callers:
 *     ?CreateResourceManager@ExecutionModel@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAVModernResourceEnforcer@@PEAPEAVResourceManager@1@@Z @ 0x180086958 (-CreateResourceManager@ExecutionModel@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAVModernResourceEnforcer@@P.c)
 * Callees:
 *     <none>
 */

int __fastcall ExecutionModel::ResourceManager::CreatePendingRequestWorkItems(ExecutionModel::ResourceManager *this)
{
  _QWORD *v1; // rdi
  int v3; // eax
  __int64 v4; // r8
  _QWORD v6[4]; // [rsp+20h] [rbp-50h] BYREF
  __int128 v7; // [rsp+40h] [rbp-30h]
  __int64 v8; // [rsp+50h] [rbp-20h]
  int v9; // [rsp+58h] [rbp-18h]
  int v10; // [rsp+5Ch] [rbp-14h]
  __int64 v11; // [rsp+60h] [rbp-10h]

  v6[0] = 3LL;
  v1 = (_QWORD *)((char *)this + 136);
  v11 = 72LL;
  v6[1] = 0LL;
  v8 = 0LL;
  v7 = 0LL;
  v9 = 0;
  v10 = 1;
  v3 = TpAllocCleanupGroup((char *)this + 136);
  if ( v3 >= 0 )
  {
    v4 = *((_QWORD *)this + 4);
    v6[2] = *v1;
    v6[3] = 0LL;
    v3 = TpAllocWork(
           (char *)this + 144,
           ExecutionModel::ResourceManager::CheckPendingRequestsThreadpoolCallback,
           v4,
           v6);
    if ( v3 >= 0 )
    {
      v3 = TpAllocWork(
             (char *)this + 152,
             ExecutionModel::ResourceManager::CheckPendingRequestsThreadpoolCallback,
             *((_QWORD *)this + 3),
             v6);
      if ( v3 >= 0 )
        v3 = 0;
    }
  }
  return v3 | 0x10000000;
}
