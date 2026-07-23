/*
 * XREFs of EtwpInitializeProcessorTrace @ 0x1407B208C
 * Callers:
 *     EtwpInitialize @ 0x140C3F24C (EtwpInitialize.c)
 * Callees:
 *     ExRegisterHost @ 0x1407C0B6C (ExRegisterHost.c)
 */

__int64 __fastcall EtwpInitializeProcessorTrace(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  int v3; // [rsp+20h] [rbp-40h] BYREF
  __int64 (__fastcall **v4)(); // [rsp+28h] [rbp-38h]
  _QWORD v5[6]; // [rsp+30h] [rbp-30h] BYREF

  v5[0] = 65547LL;
  v4 = &off_140009540;
  v5[2] = 512LL;
  v5[1] = &v3;
  v3 = 1;
  v5[3] = 0LL;
  v5[4] = 0LL;
  result = ExRegisterHost(&EtwpHwTraceExtensionHost, a2, v5);
  if ( (int)result < 0 )
    EtwpHwTraceExtensionHost = 0LL;
  return result;
}
