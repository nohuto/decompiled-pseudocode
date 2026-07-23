/*
 * XREFs of PopBatteryRemove @ 0x140759700
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x1402AE8FC (PopReleaseRwLock.c)
 *     KeWaitForSingleObject @ 0x14031DE40 (KeWaitForSingleObject.c)
 *     IoCancelIrp @ 0x140408D50 (IoCancelIrp.c)
 *     PopAcquireRwLockExclusive @ 0x14041C564 (PopAcquireRwLockExclusive.c)
 *     PopBatteryQueueWork @ 0x14049F07C (PopBatteryQueueWork.c)
 *     PopChangeCapability @ 0x140A61C60 (PopChangeCapability.c)
 *     PopAcquirePolicyLock @ 0x140B69DF0 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140B69E40 (PopReleasePolicyLock.c)
 */

__int64 __fastcall PopBatteryRemove(__int64 a1)
{
  __int64 *v2; // rbx
  __int64 v3; // rcx
  __int64 **v4; // rax
  __int64 result; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // [rsp+20h] [rbp-18h]

  IoCancelIrp(*(PIRP *)(a1 + 56));
  KeWaitForSingleObject((PVOID)(a1 + 80), Executive, 0, 0, 0LL);
  PopAcquireRwLockExclusive((unsigned __int64 *)&PopCB);
  v2 = (__int64 *)(a1 + 64);
  v3 = *v2;
  if ( *v2 )
  {
    if ( *(__int64 **)(v3 + 8) != v2 || (v4 = (__int64 **)v2[1], *v4 != v2) )
      __fastfail(3u);
    *v4 = (__int64 *)v3;
    *(_QWORD *)(v3 + 8) = v4;
    *v2 = 0LL;
    --dword_140F0BC94;
    ++dword_140F0BD0C;
    byte_140F0BC98 = 1;
    PopBatteryQueueWork(3u);
  }
  PopBatteryQueueWork(8u);
  result = PopReleaseRwLock((signed __int64 *)&PopCB);
  if ( !--dword_140F0BC90 )
  {
    PopAcquirePolicyLock(v7, v6);
    PopChangeCapability(&byte_140F0B67E, 0LL);
    return PopReleasePolicyLock(v9, v8, v10, v11, v12);
  }
  return result;
}
