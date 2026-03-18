/*
 * XREFs of VfTargetDriversEnableVerifier @ 0x140B8B364
 * Callers:
 *     VfSuspectApplyDifVolatileVerification @ 0x140B9A568 (VfSuspectApplyDifVolatileVerification.c)
 * Callees:
 *     VfAvlLookupTreeNode @ 0x1403F1074 (VfAvlLookupTreeNode.c)
 *     VfAvlCleanupLockContext @ 0x1403F142C (VfAvlCleanupLockContext.c)
 *     VfAvlInitializeLockContext @ 0x14049C0D8 (VfAvlInitializeLockContext.c)
 *     ViTargetDriversFreeVerifiedData @ 0x140611344 (ViTargetDriversFreeVerifiedData.c)
 *     ViTargetDriversAllocateVerifiedData @ 0x140B8B994 (ViTargetDriversAllocateVerifiedData.c)
 */

__int64 __fastcall VfTargetDriversEnableVerifier(unsigned __int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  void *VerifiedData; // rdi
  _QWORD *v5; // rax
  __int64 v6; // rdx
  __int128 v8; // [rsp+20h] [rbp-28h] BYREF
  __int64 v9; // [rsp+30h] [rbp-18h]

  v2 = 0;
  v9 = 0LL;
  v8 = 0LL;
  if ( !VfSafeMode )
  {
    if ( ViTargetInitialized )
    {
      VerifiedData = (void *)ViTargetDriversAllocateVerifiedData(a2);
      if ( VerifiedData )
      {
        VfAvlInitializeLockContext((__int64)&v8, 0);
        v5 = VfAvlLookupTreeNode(&ViTargetDriversAvl, (__int64)&v8, a1, 1LL);
        if ( v5 )
        {
          v5[8] = VerifiedData;
          v2 = 1;
          ++dword_140F045C0;
        }
        VfAvlCleanupLockContext((__int64)&v8, v6);
        if ( !v2 )
          ViTargetDriversFreeVerifiedData(VerifiedData);
      }
    }
  }
  return v2;
}
