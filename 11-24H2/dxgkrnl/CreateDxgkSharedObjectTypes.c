/*
 * XREFs of CreateDxgkSharedObjectTypes @ 0x1401E1E84
 * Callers:
 *     ?Initialize@DXGGLOBAL@@QEAAJXZ @ 0x1401D4724 (-Initialize@DXGGLOBAL@@QEAAJXZ.c)
 * Callees:
 *     ?GenericMapping@DxgkCompositionObject@@SA?AU_GENERIC_MAPPING@@XZ @ 0x140092484 (-GenericMapping@DxgkCompositionObject@@SA-AU_GENERIC_MAPPING@@XZ.c)
 *     DxgkCreateNtObjectType @ 0x1401E2234 (DxgkCreateNtObjectType.c)
 */

__int64 CreateDxgkSharedObjectTypes()
{
  __int64 result; // rax
  struct _GENERIC_MAPPING v1; // [rsp+60h] [rbp-10h] BYREF

  result = 0LL;
  if ( g_pDxgkSharedAllocationObjectType
    || (result = DxgkCreateNtObjectType(
                   L"DxgkSharedResource",
                   0LL,
                   (__int64)DxgkSharedAllocationObDeleteProcedure,
                   0LL,
                   (__int64)&g_pDxgkSharedAllocationObjectType,
                   0),
        (int)result >= 0) )
  {
    if ( g_pDxgkSharedKeyedMutexObjectType
      || (result = DxgkCreateNtObjectType(
                     L"DxgkSharedKeyedMutexObject",
                     0LL,
                     (__int64)DxgkSharedKeyedMutexObjectObDeleteProcedure,
                     0LL,
                     (__int64)&g_pDxgkSharedKeyedMutexObjectType,
                     0),
          (int)result >= 0) )
    {
      if ( g_pDxgkSharedSyncObjectType
        || (result = DxgkCreateNtObjectType(
                       L"DxgkSharedSyncObject",
                       0LL,
                       (__int64)DxgkSharedSyncObjectObDeleteProcedure,
                       0LL,
                       (__int64)&g_pDxgkSharedSyncObjectType,
                       0),
            (int)result >= 0) )
      {
        if ( g_pDxgkSharedSwapChainObjectType
          || (result = DxgkCreateNtObjectType(
                         L"DxgkSharedSwapChainObject",
                         (__int64)SwapChainObCloseProcedure,
                         (__int64)SwapChainObDeleteProcedure,
                         0LL,
                         (__int64)&g_pDxgkSharedSwapChainObjectType,
                         0),
              (int)result >= 0) )
        {
          if ( g_pDxgkDisplayManagerObjectType
            || (result = DxgkCreateNtObjectType(
                           L"DxgkDisplayManagerObject",
                           0LL,
                           (__int64)DxgkDisplayManagerDeleteProcedure,
                           0LL,
                           (__int64)&g_pDxgkDisplayManagerObjectType,
                           0),
                (int)result >= 0) )
          {
            if ( g_pDxgkSharedProtectedSessionObjectType
              || (result = DxgkCreateNtObjectType(
                             L"DxgkSharedProtectedSessionObject",
                             0LL,
                             (__int64)DxgkSharedProtectedSessionObDeleteProcedure,
                             0LL,
                             (__int64)&g_pDxgkSharedProtectedSessionObjectType,
                             0),
                  (int)result >= 0) )
            {
              if ( g_pDxgkSharedBundleObjectType
                || (result = DxgkCreateNtObjectType(
                               L"DxgkSharedBundleObject",
                               0LL,
                               (__int64)DxgkSharedBundleObjectObDeleteProcedure,
                               0LL,
                               (__int64)&g_pDxgkSharedBundleObjectType,
                               0),
                    (int)result >= 0) )
              {
                if ( !g_pDxgkCompositionObjectType )
                {
                  DxgkCompositionObject::GenericMapping(&v1);
                  return DxgkCreateNtObjectType(
                           L"DxgkCompositionObject",
                           (__int64)DxgkCompositionObject::Close,
                           (__int64)DxgkCompositionObject::Delete,
                           (__int64)DxgkCompositionObject::OkToClose,
                           (__int64)&g_pDxgkCompositionObjectType,
                           1024);
                }
              }
            }
          }
        }
      }
    }
  }
  return result;
}
