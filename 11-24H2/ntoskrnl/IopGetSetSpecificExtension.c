/*
 * XREFs of IopGetSetSpecificExtension @ 0x140426ED0
 * Callers:
 *     IopAdjustFileObjectKeepAliveCount @ 0x140426C38 (IopAdjustFileObjectKeepAliveCount.c)
 *     IopGetSetStreamIdentifier @ 0x140426DCC (IopGetSetStreamIdentifier.c)
 *     IopCheckInitiatorHint @ 0x1404503E8 (IopCheckInitiatorHint.c)
 *     IoCopyDeviceObjectHint @ 0x140713D10 (IoCopyDeviceObjectHint.c)
 *     IopRetrieveTransactionParameters @ 0x140899830 (IopRetrieveTransactionParameters.c)
 *     IopAllocRealFileObject @ 0x14089A9B0 (IopAllocRealFileObject.c)
 *     IopParseDevice @ 0x14089F880 (IopParseDevice.c)
 *     IoCreateStreamFileObjectEx2 @ 0x1409A4390 (IoCreateStreamFileObjectEx2.c)
 *     IopRetrieveTransactionParametersFromOpenPacket @ 0x140A13E40 (IopRetrieveTransactionParametersFromOpenPacket.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IopGetSetSpecificExtension(__int64 a1, int a2, __int64 a3, char a4, _QWORD *a5, __int64 **a6)
{
  __int64 *v6; // rbx
  char *v7; // r10
  __int64 v9; // rbp
  __int64 v11; // r14
  char *v12; // rax
  int v14; // r14d
  __int64 *Pool2; // rax

  v6 = *(__int64 **)(a1 + 208);
  v7 = 0LL;
  v9 = a2;
  if ( !a4 )
  {
    if ( !v6 )
      goto LABEL_9;
    goto LABEL_4;
  }
  if ( v6 )
  {
    if ( v6 != qword_140014770 )
      goto LABEL_4;
    return (unsigned int)-1073741670;
  }
  v14 = 0;
  Pool2 = (__int64 *)ExAllocatePool2(0x40uLL);
  v6 = Pool2;
  if ( !Pool2 )
    v14 = -1073741670;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 208), (signed __int64)Pool2, 0LL) )
  {
    if ( Pool2 && Pool2 != qword_140014770 )
      ExFreePoolWithTag(Pool2, 0);
    v6 = *(__int64 **)(a1 + 208);
  }
  if ( v14 < 0 )
    return (unsigned int)v14;
LABEL_4:
  v11 = v9;
  v7 = (char *)v6[v9 + 1];
  if ( !v7 && a4 )
  {
    v12 = (char *)ExAllocatePool2(0x40uLL);
    v7 = v12;
    if ( !v12 )
      return 3221225626LL;
    if ( (unsigned int)v9 > 9 || _InterlockedCompareExchange64(&v6[v11 + 1], (signed __int64)v12, 0LL) )
    {
      ExFreePoolWithTag(v12, 0);
      v7 = *(char **)(a1 + 208);
      if ( v7 )
        v7 = *(char **)&v7[v11 * 8 + 8];
    }
  }
LABEL_9:
  if ( a5 )
    *a5 = v7;
  if ( a6 )
    *a6 = v6;
  return 0LL;
}
