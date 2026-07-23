/*
 * XREFs of SeRegisterElamCertResources @ 0x14078E1F8
 * Callers:
 *     ExpQueryElamCertInfo @ 0x1407B5054 (ExpQueryElamCertInfo.c)
 *     PipInitializeEarlyLaunchDrivers @ 0x140C65844 (PipInitializeEarlyLaunchDrivers.c)
 * Callees:
 *     LdrResSearchResource @ 0x1408E01B0 (LdrResSearchResource.c)
 *     SepParseElamCertResources @ 0x140A90DEC (SepParseElamCertResources.c)
 */

__int64 __fastcall SeRegisterElamCertResources(int a1, __int64 a2, char a3)
{
  __int64 result; // rax
  _QWORD v4[5]; // [rsp+40h] [rbp-28h] BYREF
  __int64 v5; // [rsp+78h] [rbp+10h] BYREF
  __int64 v6; // [rsp+88h] [rbp+20h] BYREF

  v5 = 0LL;
  v6 = 0LL;
  v4[2] = 0LL;
  v4[0] = L"MSELAMCERTINFOID";
  v4[1] = L"MICROSOFTELAMCERTIFICATEINFO";
  result = LdrResSearchResource(a1, (unsigned int)v4, 3, a3 != 0 ? 4624 : 4112, (__int64)&v5, (__int64)&v6, 0LL, 0LL);
  if ( (int)result >= 0 )
    return SepParseElamCertResources(v5, v6);
  return result;
}
