/*
 * XREFs of BapdpRegisterWbclData @ 0x140C40038
 * Callers:
 *     BootApplicationPersistentDataProcess @ 0x140BDE52C (BootApplicationPersistentDataProcess.c)
 * Callees:
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     BapdRegisterSiData @ 0x140B6BEA4 (BapdRegisterSiData.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 *     BapdpQueryData @ 0x140C3F83C (BapdpQueryData.c)
 */

void __fastcall BapdpRegisterWbclData(__int64 a1)
{
  int v1; // edi
  int v2; // eax
  __int64 v3; // rcx
  ULONG *Pool2; // rbx
  unsigned int v5; // [rsp+30h] [rbp-20h] BYREF
  __int64 v6; // [rsp+38h] [rbp-18h] BYREF
  int v7; // [rsp+40h] [rbp-10h]
  int v8; // [rsp+44h] [rbp-Ch]

  if ( (_DWORD)a1 )
  {
    if ( (_DWORD)a1 != 1 )
      return;
    v6 = 0x45BE0A5DB8728CAELL;
    v1 = 2;
    v7 = 24237205;
    v8 = 623825306;
  }
  else
  {
    v6 = 0x471C6272B639D9DDLL;
    v1 = 0;
    v7 = 878293681;
    v8 = 803227664;
  }
  v5 = 0;
  v2 = BapdpQueryData(a1, &v6, 0, 0LL, &v5, 0LL);
  if ( v2 == -1073741789 )
  {
    Pool2 = (ULONG *)ExAllocatePool2(0x40uLL, v5, 0x64506142uLL);
    if ( !Pool2 )
      return;
  }
  else
  {
    Pool2 = 0LL;
    if ( v2 < 0 )
      return;
  }
  if ( (int)BapdpQueryData(v3, &v6, 0, Pool2, &v5, 0LL) >= 0 )
    BapdRegisterSiData(Pool2, v5, v1);
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0);
}
