/*
 * XREFs of VfTargetReplaceIoCallbacks @ 0x140611250
 * Callers:
 *     VfSuspectApplyDifVolatileVerification @ 0x140B9A568 (VfSuspectApplyDifVolatileVerification.c)
 * Callees:
 *     VfAvlLookupTreeNode @ 0x1403F1074 (VfAvlLookupTreeNode.c)
 *     VfAvlCleanupLockContext @ 0x1403F142C (VfAvlCleanupLockContext.c)
 *     VfAvlInitializeLockContext @ 0x14049C0D8 (VfAvlInitializeLockContext.c)
 *     VfDifCaptureIoCallbacks @ 0x14049E358 (VfDifCaptureIoCallbacks.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
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
            Pool2 = ExAllocatePool2(0x40uLL);
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
