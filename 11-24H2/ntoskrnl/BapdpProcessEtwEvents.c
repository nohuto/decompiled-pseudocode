/*
 * XREFs of BapdpProcessEtwEvents @ 0x140651404
 * Callers:
 *     BootApplicationPersistentDataProcess @ 0x140BE052C (BootApplicationPersistentDataProcess.c)
 * Callees:
 *     BapdWriteEtwEvents @ 0x14049F614 (BapdWriteEtwEvents.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 *     BapdpQueryData @ 0x140C4198C (BapdpQueryData.c)
 */

void __fastcall BapdpProcessEtwEvents(__int64 a1)
{
  unsigned int v1; // r14d
  void *Pool2; // rbx
  unsigned int v3; // esi
  int v4; // eax
  __int64 v5; // rcx
  unsigned int v6; // [rsp+30h] [rbp-30h] BYREF
  _DWORD v7[4]; // [rsp+38h] [rbp-28h] BYREF
  __int128 v8; // [rsp+48h] [rbp-18h] BYREF

  v7[0] = -1667627438;
  v1 = 0;
  v7[1] = 1255566311;
  Pool2 = 0LL;
  v7[2] = -363808867;
  v8 = 0LL;
  v3 = 0;
  v7[3] = -1273101358;
  while ( 1 )
  {
    v6 = 0;
    v4 = BapdpQueryData(a1, v7, v3, 0LL, &v6, 0LL);
    v5 = v4 + 0x80000000;
    if ( (v5 & 0x80000000) == 0 && v4 != -1073741789 )
      break;
    if ( v6 > v1 )
    {
      if ( Pool2 )
        ExFreePoolWithTag(Pool2, 0);
      Pool2 = (void *)ExAllocatePool2(0x40uLL, v6, 0x64506142u);
      if ( !Pool2 )
        return;
      v1 = v6;
    }
    if ( (int)BapdpQueryData(v5, v7, v3, Pool2, &v6, &v8) < 0
      || (int)BapdWriteEtwEvents((ULONGLONG)&v8, (unsigned __int64)Pool2, v6) < 0 )
    {
      break;
    }
    ++v3;
  }
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0);
}
