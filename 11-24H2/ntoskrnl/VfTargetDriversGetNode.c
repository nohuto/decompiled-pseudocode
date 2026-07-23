/*
 * XREFs of VfTargetDriversGetNode @ 0x1403E3D54
 * Callers:
 *     VfDifCaptureIoCallbacks @ 0x140499158 (VfDifCaptureIoCallbacks.c)
 *     VfDifCaptureDriverEntry @ 0x1404991B8 (VfDifCaptureDriverEntry.c)
 *     DifRegisterClassDriverPlugin @ 0x14060E2B0 (DifRegisterClassDriverPlugin.c)
 *     VfUtilGetDriverBaseAddress @ 0x140B85270 (VfUtilGetDriverBaseAddress.c)
 *     VfUtilGetDriverImageSize @ 0x140B852C0 (VfUtilGetDriverImageSize.c)
 *     VfThunkApplyThunksCurrentSession @ 0x140B991AC (VfThunkApplyThunksCurrentSession.c)
 *     ViThunkApplyWdmThunksCurrentSession @ 0x140B99424 (ViThunkApplyWdmThunksCurrentSession.c)
 *     VfTargetDriversGetVerifierData @ 0x140BA9E7C (VfTargetDriversGetVerifierData.c)
 * Callees:
 *     VfAvlLookupTreeNode @ 0x1403E4D94 (VfAvlLookupTreeNode.c)
 *     VfAvlCleanupLockContext @ 0x1403E514C (VfAvlCleanupLockContext.c)
 */

__int64 __fastcall VfTargetDriversGetNode(__int64 a1)
{
  __int64 v1; // rbx
  __int128 v3; // [rsp+20h] [rbp-28h] BYREF
  __int64 v4; // [rsp+30h] [rbp-18h]

  v1 = 0LL;
  if ( !VfSafeMode && ViTargetInitialized )
  {
    v4 = 0LL;
    v3 = 0LL;
    v1 = ((__int64 (__fastcall *)(void *, __int128 *, __int64, __int64))VfAvlLookupTreeNode)(
           &ViTargetDriversAvl,
           &v3,
           a1,
           1LL);
    VfAvlCleanupLockContext(&v3);
  }
  return v1;
}
