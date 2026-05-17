/*
 * XREFs of LdrpChangeMrdataProtection @ 0x180020B20
 * Callers:
 *     LdrProtectMrdata @ 0x180020A50 (LdrProtectMrdata.c)
 * Callees:
 *     LdrpLocateMrdata @ 0x180020B90 (LdrpLocateMrdata.c)
 *     ZwProtectVirtualMemory @ 0x180163C20 (ZwProtectVirtualMemory.c)
 */

__int64 __fastcall LdrpChangeMrdataProtection(unsigned int a1)
{
  __int64 result; // rax
  __int64 v3; // [rsp+48h] [rbp+10h] BYREF
  __int64 v4; // [rsp+50h] [rbp+18h] BYREF

  if ( !LdrpMrdataBase )
    LdrpLocateMrdata();
  v4 = LdrpMrdataBase;
  v3 = LdrpMrdataSize;
  result = ZwProtectVirtualMemory(-1LL, &v4, &v3, a1);
  if ( (int)result < 0 )
    __fastfail(5u);
  return result;
}
