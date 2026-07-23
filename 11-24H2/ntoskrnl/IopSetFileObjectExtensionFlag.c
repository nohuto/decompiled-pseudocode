/*
 * XREFs of IopSetFileObjectExtensionFlag @ 0x1404278D0
 * Callers:
 *     IopCheckInitiatorHint @ 0x140445658 (IopCheckInitiatorHint.c)
 *     IopCheckHandleForRevocation @ 0x140594270 (IopCheckHandleForRevocation.c)
 *     IoRegisterContainerNotification @ 0x140712EC0 (IoRegisterContainerNotification.c)
 *     IopAllocRealFileObject @ 0x1408A3050 (IopAllocRealFileObject.c)
 *     IopParseDevice @ 0x1408A7F20 (IopParseDevice.c)
 *     IopXxxControlFile @ 0x1408BF330 (IopXxxControlFile.c)
 *     IoSetFileObjectIgnoreSharing @ 0x140A513E0 (IoSetFileObjectIgnoreSharing.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IopSetFileObjectExtensionFlag(__int64 a1, unsigned int a2)
{
  volatile signed __int32 *Pool2; // r8
  int v3; // ebx
  int v7; // ebp
  __int64 *v8; // rax

  Pool2 = *(volatile signed __int32 **)(a1 + 208);
  v3 = a2 & 4;
  if ( Pool2 )
  {
    if ( Pool2 != (volatile signed __int32 *)&qword_1400145A0 )
    {
LABEL_3:
      _InterlockedOr(Pool2, a2);
      return 0LL;
    }
    return (unsigned int)-1073741670;
  }
  else
  {
    v7 = 0;
    Pool2 = (volatile signed __int32 *)ExAllocatePool2(0x40uLL, 0x60uLL, 0x45466F49u);
    if ( !Pool2 )
    {
      v8 = &qword_1400145A0;
      v7 = -1073741670;
      if ( !v3 )
        v8 = 0LL;
      Pool2 = (volatile signed __int32 *)v8;
    }
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 208), (signed __int64)Pool2, 0LL) )
    {
      if ( Pool2 )
      {
        if ( Pool2 != (volatile signed __int32 *)&qword_1400145A0 )
          ExFreePoolWithTag((PVOID)Pool2, 0);
      }
      Pool2 = *(volatile signed __int32 **)(a1 + 208);
    }
    if ( v7 >= 0 )
      goto LABEL_3;
  }
  return (unsigned int)v7;
}
