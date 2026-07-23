/*
 * XREFs of IoGetLegacyVetoList @ 0x14099F770
 * Callers:
 *     PnpReplacePartitionUnit @ 0x14072C230 (PnpReplacePartitionUnit.c)
 *     ExpQueryLegacyDriverInformation @ 0x1407B5438 (ExpQueryLegacyDriverInformation.c)
 *     PnpProcessQueryRemoveAndEject @ 0x1409BBF7C (PnpProcessQueryRemoveAndEject.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14028AA60 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x140321360 (ExAcquireResourceSharedLite.c)
 *     IopAppendLegacyVeto @ 0x140730FF0 (IopAppendLegacyVeto.c)
 *     IopGetLegacyVetoListDrivers @ 0x14099FC84 (IopGetLegacyVetoListDrivers.c)
 *     IopGetLegacyVetoListDeviceNode @ 0x14099FF2C (IopGetLegacyVetoListDeviceNode.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IoGetLegacyVetoList(const void **a1, _DWORD *a2)
{
  bool v4; // zf
  __int64 result; // rax
  struct _KTHREAD *CurrentThread; // rax
  const void *v7[2]; // [rsp+20h] [rbp-30h] BYREF
  const void **v8; // [rsp+30h] [rbp-20h] BYREF
  int v9; // [rsp+38h] [rbp-18h]
  int v10; // [rsp+3Ch] [rbp-14h]
  _DWORD *v11; // [rsp+40h] [rbp-10h]
  unsigned int *v12; // [rsp+48h] [rbp-8h]
  unsigned int v13; // [rsp+60h] [rbp+10h] BYREF

  v10 = 0;
  HIDWORD(v7[0]) = 0;
  if ( a1 )
    *a1 = 0LL;
  v4 = PnPInitialized == 0;
  *a2 = 0;
  v13 = 0;
  if ( v4 )
    return 0LL;
  v8 = a1;
  v12 = &v13;
  v9 = 0;
  v11 = a2;
  IopGetLegacyVetoListDrivers(&v8);
  result = v13;
  if ( (v13 & 0x80000000) != 0 )
    goto LABEL_8;
  if ( !*a2 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceSharedLite(&IopDeviceTreeLock, 1u);
    IopGetLegacyVetoListDeviceNode(IopRootDeviceNode, &v8);
    ExReleaseResourceLite(&IopDeviceTreeLock);
    KeLeaveCriticalRegion();
    result = v13;
  }
  if ( (int)result < 0 )
    goto LABEL_8;
  if ( *a2 && a1 )
  {
    LODWORD(v7[0]) = 0x20000;
    v7[1] = &word_140AEDAC0;
    IopAppendLegacyVeto(&v8, v7);
    result = v13;
  }
  if ( (int)result < 0 )
  {
LABEL_8:
    if ( a1 )
    {
      if ( *a1 )
      {
        ExFreePoolWithTag((PVOID)*a1, 0);
        result = v13;
        *a1 = 0LL;
      }
    }
  }
  return result;
}
