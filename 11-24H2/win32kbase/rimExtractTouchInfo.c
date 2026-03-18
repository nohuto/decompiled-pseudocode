/*
 * XREFs of rimExtractTouchInfo @ 0x1401814CC
 * Callers:
 *     rimExtractPointerDeviceUsages @ 0x1400AE898 (rimExtractPointerDeviceUsages.c)
 * Callees:
 *     rimExtractData @ 0x1400CF834 (rimExtractData.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall rimExtractTouchInfo(__int64 a1, int a2, _DWORD *a3)
{
  int v4; // ecx
  bool v7; // zf
  _DWORD *v8; // rdi
  __int64 result; // rax
  int v10; // [rsp+70h] [rbp+18h] BYREF
  int v11; // [rsp+78h] [rbp+20h] BYREF

  v4 = *(_DWORD *)(a1 + 24);
  v11 = 0;
  v10 = 0;
  if ( (unsigned int)(v4 - 1) > 3 && v4 != 7 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3089LL);
  a3[6] = rimExtractData(a1, 13, 72, 1, &v11);
  a3[7] = rimExtractData(a1, 13, 73, 1, &v10);
  if ( v11 == v10 && v10 == 1 )
    a3[41] |= 1u;
  a3[5] = 1;
  if ( (*(_DWORD *)(a1 + 368) & 0x4000) != 0 )
  {
    v8 = a3 + 41;
    a3[51] = rimExtractData(a1, 13, 48, 4, a3 + 41);
  }
  else
  {
    v7 = a2 == 0;
    v8 = a3 + 41;
    if ( !v7 )
    {
      *v8 |= 4u;
      a3[51] = 512;
    }
  }
  result = rimExtractData(a1, 13, 63, 2, v8);
  a3[50] = result;
  return result;
}
