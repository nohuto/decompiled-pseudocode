/*
 * XREFs of BapdpProcessResumeInformation @ 0x140C412CC
 * Callers:
 *     BootApplicationPersistentDataProcess @ 0x140BE052C (BootApplicationPersistentDataProcess.c)
 * Callees:
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 *     BapdpQueryData @ 0x140C4198C (BapdpQueryData.c)
 *     BapdpRegisterResumeInformation @ 0x140C42040 (BapdpRegisterResumeInformation.c)
 */

void __fastcall BapdpProcessResumeInformation(__int64 a1)
{
  int v1; // eax
  __int64 v2; // rcx
  void *Pool2; // rbx
  ULONG DataSize; // [rsp+30h] [rbp-20h] BYREF
  _DWORD v5[4]; // [rsp+38h] [rbp-18h] BYREF

  DataSize = 0;
  v5[0] = 1623809380;
  v5[1] = 1116188130;
  v5[2] = 871391376;
  v5[3] = 785389825;
  v1 = BapdpQueryData(a1, v5, 0LL, 0LL, &DataSize, 0LL);
  if ( v1 == -1073741789 )
  {
    Pool2 = (void *)ExAllocatePool2(0x40uLL, DataSize, 0x64506142uLL);
    if ( !Pool2 )
      return;
  }
  else
  {
    Pool2 = 0LL;
    if ( v1 < 0 )
      return;
  }
  if ( (int)BapdpQueryData(v2, v5, 0LL, Pool2, &DataSize, 0LL) >= 0 )
    BapdpRegisterResumeInformation(Pool2, DataSize);
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0);
}
