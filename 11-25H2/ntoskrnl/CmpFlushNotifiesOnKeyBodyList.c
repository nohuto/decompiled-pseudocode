/*
 * XREFs of CmpFlushNotifiesOnKeyBodyList @ 0x14086DF70
 * Callers:
 *     CmDeleteLayeredKey @ 0x14041D4E4 (CmDeleteLayeredKey.c)
 *     CmpRemoveHiveFromNamespace @ 0x140492108 (CmpRemoveHiveFromNamespace.c)
 *     CmpRefreshHive @ 0x1407BF2D8 (CmpRefreshHive.c)
 *     CmpRefreshWorkerRoutine @ 0x1407BF770 (CmpRefreshWorkerRoutine.c)
 *     CmRenameKey @ 0x1407C98A4 (CmRenameKey.c)
 *     CmpFlushNotifiesPostCallback @ 0x1407D18C0 (CmpFlushNotifiesPostCallback.c)
 *     CmpInvalidateAllHigherLayerKcbsPostCallback @ 0x1407D1950 (CmpInvalidateAllHigherLayerKcbsPostCallback.c)
 *     CmpPerformUnloadKey @ 0x140864C24 (CmpPerformUnloadKey.c)
 *     CmDeleteKey @ 0x14086D4EC (CmDeleteKey.c)
 *     CmpCompleteUnloadKey @ 0x14088523C (CmpCompleteUnloadKey.c)
 *     CmpTransMgrFreeVolatileData @ 0x140885884 (CmpTransMgrFreeVolatileData.c)
 *     CmpLightWeightCommitRecreateKeyUoW @ 0x1409D8998 (CmpLightWeightCommitRecreateKeyUoW.c)
 *     CmpLightWeightCommitDeleteKeyUoW @ 0x1409DA0D4 (CmpLightWeightCommitDeleteKeyUoW.c)
 *     CmpInvalidateSubtreeWorker @ 0x1409DAAD0 (CmpInvalidateSubtreeWorker.c)
 * Callees:
 *     CmpFlushNotify @ 0x14086E7CC (CmpFlushNotify.c)
 *     CmpKeyEnumStackFreeResumeContext @ 0x140A530B8 (CmpKeyEnumStackFreeResumeContext.c)
 */

__int64 __fastcall CmpFlushNotifiesOnKeyBodyList(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  __int64 *v4; // rdi
  __int64 *v6; // rbx
  __int16 v7; // r12
  struct _PRIVILEGE_SET *v9; // rcx
  __int64 v10; // rdi
  signed __int64 *v11; // rsi
  signed __int64 v12; // rbx
  struct _PRIVILEGE_SET *v13; // rcx
  __int64 result; // rax

  v4 = (__int64 *)(a1 + 120);
  v6 = *(__int64 **)(a1 + 120);
  v7 = a2;
  while ( v6 != v4 )
  {
    if ( *(v6 - 2) )
    {
      LOBYTE(a2) = a4;
      result = CmpFlushNotify(v6 - 4, a2, 0LL);
    }
    v9 = (struct _PRIVILEGE_SET *)_InterlockedExchange64(v6 + 7, 0LL);
    if ( v9 )
      result = CmpKeyEnumStackFreeResumeContext(v9);
    *((_WORD *)v6 + 8) |= v7;
    v6 = (__int64 *)*v6;
  }
  v10 = 0LL;
  v11 = (signed __int64 *)(a1 + 136);
  do
  {
    v12 = *v11;
    if ( (unsigned __int64)*v11 >= 3 )
    {
      result = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 8 * v10 + 136), 2LL, v12);
      if ( v12 == result )
      {
        if ( *(_QWORD *)(v12 + 16) )
        {
          LOBYTE(a2) = a4;
          CmpFlushNotify(v12, a2, 0LL);
        }
        v13 = (struct _PRIVILEGE_SET *)_InterlockedExchange64((volatile __int64 *)(v12 + 88), 0LL);
        if ( v13 )
          CmpKeyEnumStackFreeResumeContext(v13);
        *(_WORD *)(v12 + 48) |= v7;
        result = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 8 * v10 + 136), v12, 2LL);
      }
    }
    v10 = (unsigned int)(v10 + 1);
    ++v11;
  }
  while ( (unsigned int)v10 < 4 );
  return result;
}
