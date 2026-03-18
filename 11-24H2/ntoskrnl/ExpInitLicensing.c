/*
 * XREFs of ExpInitLicensing @ 0x1407B8BC8
 * Callers:
 *     sub_14065592C @ 0x14065592C (sub_14065592C.c)
 *     InitBootProcessor @ 0x140C0AC88 (InitBootProcessor.c)
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
    qword_140FE6C80 = (__int64)ExpHostBootLicensingData;
    *v1 = (__int64)&qword_140FE6C80;
  }
  result = *v1;
  *(_DWORD *)(result + 47032) = -1;
  *(_DWORD *)(result + 8) = 0;
  *(_DWORD *)(result + 46988) = 0;
  *(_QWORD *)(result + 46840) = 0LL;
  *(_QWORD *)(result + 47024) = 0LL;
  return result;
}
