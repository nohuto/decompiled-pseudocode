/*
 * XREFs of ExpInitLicensing @ 0x1407A9718
 * Callers:
 *     sub_140649A2C @ 0x140649A2C (sub_140649A2C.c)
 *     InitBootProcessor @ 0x140BF9C88 (InitBootProcessor.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ExpInitLicensing(char *a1)
{
  __int64 *v1; // rax
  __int64 result; // rax

  v1 = (__int64 *)(a1 + 872);
  if ( a1 == (char *)&PspHostSiloGlobals )
  {
    qword_1410276C0 = 81920LL;
    qword_140FE6CB0 = (__int64)ExpHostBootLicensingData;
    *v1 = (__int64)&qword_140FE6CB0;
  }
  result = *v1;
  *(_DWORD *)(result + 47032) = -1;
  *(_DWORD *)(result + 8) = 0;
  *(_DWORD *)(result + 46988) = 0;
  *(_QWORD *)(result + 46840) = 0LL;
  *(_QWORD *)(result + 47024) = 0LL;
  return result;
}
