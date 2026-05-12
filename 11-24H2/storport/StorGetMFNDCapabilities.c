/*
 * XREFs of StorGetMFNDCapabilities @ 0x14018E4C4
 * Callers:
 *     RaidAdapterStartMiniport @ 0x1400430C0 (RaidAdapterStartMiniport.c)
 *     StorQueryMFNDCapability @ 0x14018EC48 (StorQueryMFNDCapability.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000E820 (RaidAllocatePool.c)
 *     StorMapMFNDErrorToNtStatus @ 0x140067C1C (StorMapMFNDErrorToNtStatus.c)
 *     memset_0 @ 0x140143A80 (memset_0.c)
 *     StorSendMFNDCommand @ 0x140190F24 (StorSendMFNDCommand.c)
 */

__int64 __fastcall StorGetMFNDCapabilities(__int64 a1, _QWORD *a2, _DWORD *a3)
{
  __int64 result; // rax
  __int64 v7; // rax
  void *Pool; // rbx
  _DWORD v9[15]; // [rsp+60h] [rbp+7h] BYREF
  __int16 v10; // [rsp+9Ch] [rbp+43h]
  unsigned int v11; // [rsp+D8h] [rbp+7Fh] BYREF

  memset_0(v9, 0, 0x40uLL);
  if ( !a2 )
    return 3221225485LL;
  v7 = *(_QWORD *)(a1 + 608);
  *a2 = 0LL;
  if ( *(int *)(v7 + 184) >= 0 || (*(_DWORD *)(v7 + 188) & 2) == 0 )
    return 3221225659LL;
  Pool = (void *)RaidAllocatePool(64LL, 128LL, 1179476306LL, *(_QWORD *)(a1 + 8));
  if ( !Pool )
    return 3221225626LL;
  v9[0] = 210;
  v9[10] = 32;
  v10 = 1;
  result = StorSendMFNDCommand(a1, (_DWORD)Pool, 0, 128, (__int64)v9);
  v11 = result;
  if ( (int)result < 0 )
  {
    StorMapMFNDErrorToNtStatus(0, &v11);
    ExFreePoolWithTag(Pool, 0x464D6152u);
    result = v11;
  }
  else
  {
    *a2 = Pool;
  }
  if ( a3 )
    *a3 = 0;
  return result;
}
