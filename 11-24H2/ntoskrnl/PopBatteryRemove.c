/*
 * XREFs of PopBatteryRemove @ 0x14075B010
 * Callers:
 *     <none>
 * Callees:
 *     KeWaitForSingleObject @ 0x14033E960 (KeWaitForSingleObject.c)
 *     PopReleaseRwLock @ 0x1403B5EC8 (PopReleaseRwLock.c)
 *     IoCancelIrp @ 0x140418FA0 (IoCancelIrp.c)
 *     PopAcquireRwLockExclusive @ 0x1404283D4 (PopAcquireRwLockExclusive.c)
 *     PopBatteryQueueWork @ 0x1404A42EC (PopBatteryQueueWork.c)
 *     PopChangeCapability @ 0x140A688B0 (PopChangeCapability.c)
 *     PopAcquirePolicyLock @ 0x140B67CB0 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140B67D00 (PopReleasePolicyLock.c)
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
    --dword_140F0AE54;
    ++dword_140F0AECC;
    byte_140F0AE58 = 1;
    PopBatteryQueueWork(3u);
  }
  PopBatteryQueueWork(8u);
  result = PopReleaseRwLock((signed __int64 *)&PopCB);
  if ( !--dword_140F0AE50 )
  {
    PopAcquirePolicyLock(v7, v6);
    PopChangeCapability(&byte_140F0BB5E, 0LL);
    return PopReleasePolicyLock(v9, v8, v10, v11, v12);
  }
  return result;
}
