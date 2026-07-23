/*
 * XREFs of VslInitializeSecureKernelCfg @ 0x14058A914
 * Callers:
 *     MiInitializeKernelCfg @ 0x140C5BA6C (MiInitializeKernelCfg.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x1403AADB0 (VslpEnterIumSecureMode.c)
 *     qsort @ 0x1404FC5E0 (qsort.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall VslInitializeSecureKernelCfg(__int64 a1, __int64 a2)
{
  _BYTE v5[8]; // [rsp+20h] [rbp-88h] BYREF
  __int64 v6; // [rsp+28h] [rbp-80h]
  __int64 v7; // [rsp+30h] [rbp-78h]
  _QWORD Base[11]; // [rsp+38h] [rbp-70h] BYREF

  memset_0(v5, 0, 0x68uLL);
  Base[0] = qword_140E38CF8;
  Base[1] = qword_140E38D00;
  Base[2] = qword_140E38CB8;
  Base[3] = qword_140E38CC0;
  v6 = a1;
  v7 = a2;
  qsort(Base, 2uLL, 0x10uLL, HalpChannelAscendingSort);
  return VslpEnterIumSecureMode(2u, 0xD7u, 0, (__int64)v5);
}
