/*
 * XREFs of ?RegisterCommitMemoryWnfStates@ResourceManager@ExecutionModel@@QEAAJKPEAXPEAT_LARGE_INTEGER@@1@Z @ 0x18003DE44
 * Callers:
 *     RmgrSrv_RegisterWithServer @ 0x18003DCB0 (RmgrSrv_RegisterWithServer.c)
 * Callees:
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x18001F220 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180029E90 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?AddCommitMemoryWnfStates@ResourceManager@ExecutionModel@@QEAAJKPEAT_RM_SID@@PEAT_LARGE_INTEGER@@1@Z @ 0x18005D798 (-AddCommitMemoryWnfStates@ResourceManager@ExecutionModel@@QEAAJKPEAT_RM_SID@@PEAT_LARGE_INTEGER@.c)
 *     memcpy_0 @ 0x1800A7AF2 (memcpy_0.c)
 *     memset_0 @ 0x1800A7B0A (memset_0.c)
 *     __security_check_cookie @ 0x1800A7B40 (__security_check_cookie.c)
 */

__int64 __fastcall ExecutionModel::ResourceManager::RegisterCommitMemoryWnfStates(
        ExecutionModel::ResourceManager *this,
        unsigned int a2,
        void *a3,
        union _LARGE_INTEGER *a4,
        union _LARGE_INTEGER *a5)
{
  ExecutionModel::ResourceManager *v5; // r14
  unsigned int v9; // ebx
  ULONG v11; // eax
  _BYTE v12[80]; // [rsp+30h] [rbp-88h] BYREF

  v5 = g_pResourceManager;
  memset_0(v12, 0, 0x44uLL);
  RmpAcquireGlobalLock();
  if ( a4 && a5 )
  {
    v11 = RtlLengthSid(a3);
    memcpy_0(v12, a3, v11);
    v9 = ExecutionModel::ResourceManager::AddCommitMemoryWnfStates(v5, a2, (union _RM_SID *)v12, a4, a5);
  }
  else
  {
    v9 = -2147024809;
  }
  RmpReleaseGlobalLock();
  return v9;
}
