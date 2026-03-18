/*
 * XREFs of GetNameSpaceObject @ 0x140009900
 * Callers:
 *     IndexField @ 0x140035220 (IndexField.c)
 *     BankField @ 0x140035420 (BankField.c)
 *     Scope @ 0x14004F670 (Scope.c)
 *     CreateNativeNameSpaceObject @ 0x140052F04 (CreateNativeNameSpaceObject.c)
 *     Simulator_CallbackWorker @ 0x14006AF10 (Simulator_CallbackWorker.c)
 *     Simulator_NotifyNode @ 0x14006B334 (Simulator_NotifyNode.c)
 *     Simulator_RemoveNode @ 0x14006B51C (Simulator_RemoveNode.c)
 *     AMLIApplyNamespaceOverride @ 0x14006C4CC (AMLIApplyNamespaceOverride.c)
 *     AMLIApplyNextNamespaceOverride @ 0x14006C538 (AMLIApplyNextNamespaceOverride.c)
 *     AMLIGetNamespaceOverrideObject @ 0x14006C8CC (AMLIGetNamespaceOverrideObject.c)
 *     ParseDLMObjectInternal @ 0x14006CF34 (ParseDLMObjectInternal.c)
 *     AMLICreateNativeNamespaceObject @ 0x14006D5F4 (AMLICreateNativeNamespaceObject.c)
 *     DebugExpr @ 0x14006DB94 (DebugExpr.c)
 *     DebugNotify @ 0x14006DE70 (DebugNotify.c)
 *     Alias @ 0x14006F250 (Alias.c)
 *     Load @ 0x14006F3B0 (Load.c)
 *     LoadTable @ 0x14006F600 (LoadTable.c)
 *     ProcessLoadTable @ 0x14006FA50 (ProcessLoadTable.c)
 * Callees:
 *     GetNameSpaceObjectNoLock @ 0x14000AA30 (GetNameSpaceObjectNoLock.c)
 *     __security_check_cookie @ 0x140070B10 (__security_check_cookie.c)
 *     memmove @ 0x140070C40 (memmove.c)
 */

__int64 __fastcall GetNameSpaceObject(_BYTE *Src, __int64 a2, __int64 a3, unsigned int a4)
{
  size_t v8; // rbx
  _BYTE *Pool2; // rsi
  KIRQL v10; // bl
  unsigned int NameSpaceObjectNoLock; // edi
  _BYTE P[128]; // [rsp+20h] [rbp-B8h] BYREF

  v8 = -1LL;
  do
    ++v8;
  while ( Src[v8] );
  if ( v8 + 1 >= 0x80 )
  {
    Pool2 = (_BYTE *)ExAllocatePool2(64LL, v8 + 1, 1768973121LL);
    if ( !Pool2 )
      return 3221225626LL;
  }
  else
  {
    Pool2 = P;
  }
  memmove(Pool2, Src, v8);
  Pool2[v8] = 0;
  v10 = ExAcquireSpinLockShared(&ACPINamespaceLock);
  NameSpaceObjectNoLock = GetNameSpaceObjectNoLock(Pool2, a2, a3, a4);
  ExReleaseSpinLockShared(&ACPINamespaceLock, v10);
  if ( P != Pool2 )
    ExFreePoolWithTag(Pool2, 0);
  return NameSpaceObjectNoLock;
}
