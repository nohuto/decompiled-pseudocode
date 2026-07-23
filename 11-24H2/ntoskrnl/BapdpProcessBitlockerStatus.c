/*
 * XREFs of BapdpProcessBitlockerStatus @ 0x140C40E08
 * Callers:
 *     BootApplicationPersistentDataProcess @ 0x140BE052C (BootApplicationPersistentDataProcess.c)
 * Callees:
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 *     BapdpQueryData @ 0x140C4198C (BapdpQueryData.c)
 *     BapdpRegisterBitlockerStatus @ 0x140C41B74 (BapdpRegisterBitlockerStatus.c)
 */

void __fastcall BapdpProcessBitlockerStatus(__int64 a1)
{
  int v1; // eax
  __int64 v2; // rcx
  void *Pool2; // rbx
  unsigned int v4; // [rsp+30h] [rbp-20h] BYREF
  _DWORD v5[4]; // [rsp+38h] [rbp-18h] BYREF

  v4 = 0;
  v5[0] = -1116405225;
  v5[1] = 1086728798;
  v5[2] = 1008263083;
  v5[3] = 722433735;
  v1 = BapdpQueryData(a1, v5, 0LL, 0LL, &v4, 0LL);
  if ( v1 == -1073741789 )
  {
    Pool2 = (void *)ExAllocatePool2(0x40uLL, v4, 0x64506142uLL);
    if ( !Pool2 )
      return;
  }
  else
  {
    Pool2 = 0LL;
    if ( v1 < 0 )
      return;
  }
  if ( (int)BapdpQueryData(v2, v5, 0LL, Pool2, &v4, 0LL) >= 0 )
    BapdpRegisterBitlockerStatus(Pool2);
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0);
}
