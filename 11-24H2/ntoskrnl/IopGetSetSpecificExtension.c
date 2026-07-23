/*
 * XREFs of IopGetSetSpecificExtension @ 0x14041AD50
 * Callers:
 *     IopAdjustFileObjectKeepAliveCount @ 0x14041AAB8 (IopAdjustFileObjectKeepAliveCount.c)
 *     IopGetSetStreamIdentifier @ 0x14041AC4C (IopGetSetStreamIdentifier.c)
 *     IopCheckInitiatorHint @ 0x140445658 (IopCheckInitiatorHint.c)
 *     IoCopyDeviceObjectHint @ 0x1407118A0 (IoCopyDeviceObjectHint.c)
 *     IopRetrieveTransactionParameters @ 0x1408A1ED0 (IopRetrieveTransactionParameters.c)
 *     IopAllocRealFileObject @ 0x1408A3050 (IopAllocRealFileObject.c)
 *     IopParseDevice @ 0x1408A7F20 (IopParseDevice.c)
 *     IoCreateStreamFileObjectEx2 @ 0x1408AD120 (IoCreateStreamFileObjectEx2.c)
 *     IopRetrieveTransactionParametersFromOpenPacket @ 0x140A0C5A0 (IopRetrieveTransactionParametersFromOpenPacket.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IopGetSetSpecificExtension(__int64 a1, int a2, unsigned int a3, char a4, _QWORD *a5, __int64 **a6)
{
  __int64 *v6; // rbx
  char *v7; // r10
  ULONG_PTR v8; // r15
  __int64 v10; // rbp
  __int64 v12; // r14
  char *v13; // rax
  int v15; // r14d
  __int64 *Pool2; // rax

  v6 = *(__int64 **)(a1 + 208);
  v7 = 0LL;
  v8 = a3;
  v10 = a2;
  if ( !a4 )
  {
    if ( !v6 )
      goto LABEL_9;
    goto LABEL_4;
  }
  if ( v6 )
  {
    if ( v6 != &qword_1400145A0 )
      goto LABEL_4;
    return (unsigned int)-1073741670;
  }
  v15 = 0;
  Pool2 = (__int64 *)ExAllocatePool2(0x40uLL, 0x60uLL, 0x45466F49u);
  v6 = Pool2;
  if ( !Pool2 )
    v15 = -1073741670;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 208), (signed __int64)Pool2, 0LL) )
  {
    if ( Pool2 && Pool2 != &qword_1400145A0 )
      ExFreePoolWithTag(Pool2, 0);
    v6 = *(__int64 **)(a1 + 208);
  }
  if ( v15 < 0 )
    return (unsigned int)v15;
LABEL_4:
  v12 = v10;
  v7 = (char *)v6[v10 + 1];
  if ( !v7 && a4 )
  {
    v13 = (char *)ExAllocatePool2(0x40uLL, v8, 0x45466F49u);
    v7 = v13;
    if ( !v13 )
      return 3221225626LL;
    if ( (unsigned int)v10 > 9 || _InterlockedCompareExchange64(&v6[v12 + 1], (signed __int64)v13, 0LL) )
    {
      ExFreePoolWithTag(v13, 0);
      v7 = *(char **)(a1 + 208);
      if ( v7 )
        v7 = *(char **)&v7[v12 * 8 + 8];
    }
  }
LABEL_9:
  if ( a5 )
    *a5 = v7;
  if ( a6 )
    *a6 = v6;
  return 0LL;
}
