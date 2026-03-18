/*
 * XREFs of CmFcpManagerAllocateChangeSubscription @ 0x140AA1D68
 * Callers:
 *     CmFcManagerRegisterFeatureConfigurationChangeNotification @ 0x140AA1C4C (CmFcManagerRegisterFeatureConfigurationChangeNotification.c)
 * Callees:
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 */

char *__fastcall CmFcpManagerAllocateChangeSubscription(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int32 v5; // eax
  char *Pool2; // rdi

  if ( byte_140EF709A )
  {
    Pool2 = (char *)ExAllocatePool2(0x40uLL);
    if ( !Pool2 )
      return Pool2;
LABEL_6:
    *(_OWORD *)Pool2 = 0LL;
    *((_QWORD *)Pool2 + 11) = 0LL;
    memset_0(Pool2 + 16, 0, 0x40uLL);
    *((_QWORD *)Pool2 + 2) = 0LL;
    *((_QWORD *)Pool2 + 4) = CmpWorkItemWrapper;
    *((_QWORD *)Pool2 + 5) = Pool2 + 16;
    *((_DWORD *)Pool2 + 14) = 0;
    *((_QWORD *)Pool2 + 6) = 0LL;
    *((_QWORD *)Pool2 + 8) = CmFcpChangeSubscriptionWrapper;
    *((_DWORD *)Pool2 + 15) = 4;
    *((_QWORD *)Pool2 + 9) = a3;
    *((_QWORD *)Pool2 + 10) = a2;
    return Pool2;
  }
  v5 = _InterlockedIncrement(&dword_140EF709C);
  if ( v5 <= 3 )
  {
    Pool2 = (char *)&unk_140EF7190 + 96 * v5 - 96;
    goto LABEL_6;
  }
  return 0LL;
}
