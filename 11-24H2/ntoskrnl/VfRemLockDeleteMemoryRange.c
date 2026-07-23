/*
 * XREFs of VfRemLockDeleteMemoryRange @ 0x140BA9AFC
 * Callers:
 *     VfFreeMemoryNotification @ 0x140BA9A7C (VfFreeMemoryNotification.c)
 * Callees:
 *     VfAvlLookupTreeNode @ 0x1403E4D94 (VfAvlLookupTreeNode.c)
 *     VfAvlCleanupLockContext @ 0x1403E514C (VfAvlCleanupLockContext.c)
 *     VfPoolIsInternalFree @ 0x140487850 (VfPoolIsInternalFree.c)
 *     VfAvlInitializeLockContext @ 0x140496D08 (VfAvlInitializeLockContext.c)
 *     ViRemLockDeleteFirstTreeNode @ 0x140B94904 (ViRemLockDeleteFirstTreeNode.c)
 */

__int64 __fastcall VfRemLockDeleteMemoryRange(unsigned __int64 a1, __int64 a2)
{
  __int64 result; // rax
  PVOID v5; // rbx
  __int64 v6; // rdx
  __int128 v7; // [rsp+20h] [rbp-28h] BYREF
  __int64 v8; // [rsp+30h] [rbp-18h]

  v8 = 0LL;
  result = (unsigned int)ViRemLockInitialized;
  v7 = 0LL;
  if ( ViRemLockInitialized )
  {
    result = qword_140FFDCC8;
    if ( qword_140FFDCC8 )
    {
      result = VfPoolIsInternalFree();
      if ( !(_DWORD)result )
      {
        VfAvlInitializeLockContext((__int64)&v7, 1);
        v5 = VfAvlLookupTreeNode(&ViRemLockAvl, (__int64)&v7, a1, a2);
        result = VfAvlCleanupLockContext((__int64)&v7, v6);
        if ( v5 )
        {
          do
            result = ViRemLockDeleteFirstTreeNode();
          while ( (_DWORD)result );
        }
      }
    }
  }
  return result;
}
