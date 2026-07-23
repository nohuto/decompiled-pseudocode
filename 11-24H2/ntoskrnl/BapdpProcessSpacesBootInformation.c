/*
 * XREFs of BapdpProcessSpacesBootInformation @ 0x140651540
 * Callers:
 *     BootApplicationPersistentDataProcess @ 0x140BE052C (BootApplicationPersistentDataProcess.c)
 * Callees:
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 *     BapdpQueryData @ 0x140C4198C (BapdpQueryData.c)
 */

void __fastcall BapdpProcessSpacesBootInformation(__int64 a1)
{
  __int64 Pool2; // rax
  __int64 v2; // rcx
  _QWORD *v3; // rbx
  unsigned int v4; // [rsp+30h] [rbp-20h] BYREF
  _DWORD v5[4]; // [rsp+38h] [rbp-18h] BYREF

  v4 = 0;
  v5[0] = -408036172;
  v5[1] = 1161419828;
  v5[2] = -1108642150;
  v5[3] = 2121252359;
  if ( (unsigned int)BapdpQueryData(a1, v5, 0LL, 0LL, &v4, 0LL) == -1073741789 )
  {
    Pool2 = ExAllocatePool2(0x100uLL, v4 + 8LL, 0x64506142u);
    v3 = (_QWORD *)Pool2;
    if ( Pool2 )
    {
      if ( (int)BapdpQueryData(v2, v5, 0LL, Pool2 + 8, &v4, 0LL) < 0 )
      {
        ExFreePoolWithTag(v3, 0);
      }
      else
      {
        *v3 = v4;
        ExpSpacesBootInformation = (__int64)v3;
      }
    }
  }
}
