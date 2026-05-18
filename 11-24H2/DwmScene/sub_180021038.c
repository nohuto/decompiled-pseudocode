/*
 * XREFs of sub_180021038 @ 0x180021038
 * Callers:
 *     sub_180021120 @ 0x180021120 (sub_180021120.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B680 (__security_check_cookie.c)
 *     memset @ 0x18000C4E8 (memset.c)
 */

int __fastcall sub_180021038(GUID *rguid)
{
  int result; // eax
  int v3; // r8d
  unsigned int v4; // edx
  CHAR *v5; // rcx
  GUID *i; // rbx
  CHAR MultiByteStr[16]; // [rsp+40h] [rbp-98h] BYREF
  __int128 v8; // [rsp+50h] [rbp-88h]
  __int64 v9; // [rsp+60h] [rbp-78h]
  OLECHAR sz[40]; // [rsp+70h] [rbp-68h] BYREF

  memset(sz, 0, sizeof(sz));
  v9 = 0LL;
  *(_OWORD *)MultiByteStr = 0LL;
  v8 = 0LL;
  StringFromGUID2(rguid, sz, 40);
  result = WideCharToMultiByte(0, 0, sz, -1, MultiByteStr, 40, 0LL, 0LL);
  v4 = 0;
  v5 = MultiByteStr;
  for ( i = rguid + 1; *v5; ++v4 )
  {
    if ( v4 >= 0x28 )
      break;
    LOBYTE(v3) = *v5;
    result = v3 - 123;
    if ( ((*v5 - 123) & 0xFD) != 0 )
    {
      LOBYTE(i->Data1) = v3;
      i = (GUID *)((char *)i + 1);
    }
    ++v5;
  }
  LOBYTE(i->Data1) = 0;
  return result;
}
