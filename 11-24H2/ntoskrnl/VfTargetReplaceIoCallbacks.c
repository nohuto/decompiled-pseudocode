/*
 * XREFs of VfTargetReplaceIoCallbacks @ 0x14060F810
 * Callers:
 *     VfSuspectApplyDifVolatileVerification @ 0x140B9C568 (VfSuspectApplyDifVolatileVerification.c)
 * Callees:
 *     VfAvlLookupTreeNode @ 0x1403E4D94 (VfAvlLookupTreeNode.c)
 *     VfAvlCleanupLockContext @ 0x1403E514C (VfAvlCleanupLockContext.c)
 *     VfAvlInitializeLockContext @ 0x140496D08 (VfAvlInitializeLockContext.c)
 *     VfDifCaptureIoCallbacks @ 0x140499158 (VfDifCaptureIoCallbacks.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall VfTargetReplaceIoCallbacks(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  unsigned __int64 v3; // r8
  __int64 v4; // r9
  _QWORD *v5; // rax
  _QWORD *v6; // rbp
  __int64 v7; // rsi
  __int64 v8; // rdi
  __int64 Pool2; // rax
  __int128 v11; // [rsp+20h] [rbp-28h] BYREF
  __int64 v12; // [rsp+30h] [rbp-18h]

  v11 = 0LL;
  v12 = 0LL;
  v2 = 0;
  if ( ViTargetInitialized )
  {
    VfAvlInitializeLockContext((__int64)&v11, 1);
    v5 = VfAvlLookupTreeNode(&ViTargetDriversAvl, (__int64)&v11, v3, v4);
    v6 = v5;
    if ( v5 )
    {
      v7 = v5[5];
      if ( v7 )
      {
        v8 = *(_QWORD *)(v7 + 48);
        if ( v8 )
        {
          if ( !*(_QWORD *)(v8 + 64) )
          {
            Pool2 = ExAllocatePool2(0x40uLL, 0x100uLL, 0x62436656u);
            *(_QWORD *)(v8 + 64) = Pool2;
            if ( !Pool2 )
            {
              v2 = -1073741801;
              goto LABEL_12;
            }
            v6[6] = Pool2;
          }
          if ( !VfDifCaptureIoCallbacks(v7) )
          {
            ExFreePoolWithTag(*(PVOID *)(v8 + 64), 0);
            *(_QWORD *)(v8 + 64) = 0LL;
            v6[6] = 0LL;
            v2 = -1073738634;
          }
        }
      }
    }
    else
    {
      v2 = -1073741632;
    }
  }
LABEL_12:
  VfAvlCleanupLockContext((__int64)&v11, a2);
  return v2;
}
