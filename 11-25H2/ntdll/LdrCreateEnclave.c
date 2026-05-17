/*
 * XREFs of LdrCreateEnclave @ 0x180114BD0
 * Callers:
 *     <none>
 * Callees:
 *     LdrpCreateSoftwareEnclave @ 0x180114CD4 (LdrpCreateSoftwareEnclave.c)
 *     LdrpLogVsmEnclaveLdrCreateEnclaveTelemetry @ 0x180117B04 (LdrpLogVsmEnclaveLdrCreateEnclaveTelemetry.c)
 *     ZwFreeVirtualMemory @ 0x1801635E0 (ZwFreeVirtualMemory.c)
 *     ZwCreateEnclave @ 0x1801647D0 (ZwCreateEnclave.c)
 */

__int64 __fastcall LdrCreateEnclave(__int64 a1, __int64 *a2, __int64 a3, __int64 a4, __int64 a5, unsigned int a6)
{
  int SoftwareEnclave; // ebx
  __int64 v11; // [rsp+58h] [rbp-10h] BYREF

  v11 = *a2;
  SoftwareEnclave = ZwCreateEnclave(a1, &v11);
  if ( SoftwareEnclave >= 0 )
  {
    if ( a6 - 16 > 1 || (SoftwareEnclave = LdrpCreateSoftwareEnclave(v11, a4, a6), SoftwareEnclave >= 0) )
      *a2 = v11;
    else
      ZwFreeVirtualMemory(a1, &v11, 0LL, 0x8000LL);
  }
  if ( a6 == 16 )
    LdrpLogVsmEnclaveLdrCreateEnclaveTelemetry(16LL, (unsigned int)SoftwareEnclave);
  return (unsigned int)SoftwareEnclave;
}
