/*
 * XREFs of CmpFlushNotifiesOnKeyBodyList @ 0x140869324
 * Callers:
 *     CmDeleteLayeredKey @ 0x14041AAA8 (CmDeleteLayeredKey.c)
 *     CmpRemoveHiveFromNamespace @ 0x140491454 (CmpRemoveHiveFromNamespace.c)
 *     CmpRefreshHive @ 0x1407CEAF0 (CmpRefreshHive.c)
 *     CmpRefreshWorkerRoutine @ 0x1407CEF80 (CmpRefreshWorkerRoutine.c)
 *     CmRenameKey @ 0x1407D9068 (CmRenameKey.c)
 *     CmpFlushNotifiesPostCallback @ 0x1407E11A0 (CmpFlushNotifiesPostCallback.c)
 *     CmpInvalidateAllHigherLayerKcbsPostCallback @ 0x1407E1230 (CmpInvalidateAllHigherLayerKcbsPostCallback.c)
 *     CmDeleteKey @ 0x140869BFC (CmDeleteKey.c)
 *     CmpTransMgrFreeVolatileData @ 0x14087B284 (CmpTransMgrFreeVolatileData.c)
 *     CmpInvalidateSubtreeWorker @ 0x14097B270 (CmpInvalidateSubtreeWorker.c)
 *     CmpPerformUnloadKey @ 0x14097B52C (CmpPerformUnloadKey.c)
 *     CmpCompleteUnloadKey @ 0x14097CB58 (CmpCompleteUnloadKey.c)
 *     CmpLightWeightCommitRecreateKeyUoW @ 0x140A1EBB8 (CmpLightWeightCommitRecreateKeyUoW.c)
 *     CmpLightWeightCommitDeleteKeyUoW @ 0x140A1F204 (CmpLightWeightCommitDeleteKeyUoW.c)
 * Callees:
 *     CmpFlushNotify @ 0x14086869C (CmpFlushNotify.c)
 *     CmpKeyEnumStackFreeResumeContext @ 0x140A568A8 (CmpKeyEnumStackFreeResumeContext.c)
 */

void __fastcall CmpFlushNotifiesOnKeyBodyList(__int64 a1, __int16 a2, __int64 a3, char a4)
{
  __int64 *v4; // rdi
  __int64 *i; // rbx
  struct _PRIVILEGE_SET *v9; // rcx
  __int64 v10; // rdi
  __int64 *v11; // rsi
  __int64 v12; // rbx
  struct _PRIVILEGE_SET *v13; // rcx

  v4 = (__int64 *)(a1 + 120);
  for ( i = *(__int64 **)(a1 + 120); i != v4; i = (__int64 *)*i )
  {
    if ( *(i - 2) )
      CmpFlushNotify((__int64)(i - 4), a4, 0LL);
    v9 = (struct _PRIVILEGE_SET *)_InterlockedExchange64(i + 7, 0LL);
    if ( v9 )
      CmpKeyEnumStackFreeResumeContext(v9);
    *((_WORD *)i + 8) |= a2;
  }
  v10 = 0LL;
  v11 = (__int64 *)(a1 + 136);
  do
  {
    v12 = *v11;
    if ( (unsigned __int64)*v11 >= 3
      && v12 == _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 8 * v10 + 136), 2LL, v12) )
    {
      if ( *(_QWORD *)(v12 + 16) )
        CmpFlushNotify(v12, a4, 0LL);
      v13 = (struct _PRIVILEGE_SET *)_InterlockedExchange64((volatile __int64 *)(v12 + 88), 0LL);
      if ( v13 )
        CmpKeyEnumStackFreeResumeContext(v13);
      *(_WORD *)(v12 + 48) |= a2;
      _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 8 * v10 + 136), v12, 2LL);
    }
    v10 = (unsigned int)(v10 + 1);
    ++v11;
  }
  while ( (unsigned int)v10 < 4 );
}
