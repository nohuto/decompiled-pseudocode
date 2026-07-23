/*
 * XREFs of PspCopyNodeRelativeMaskToAffinityEx @ 0x140C36DF4
 * Callers:
 *     PsInitializeBootCpuPartitions @ 0x140C369DC (PsInitializeBootCpuPartitions.c)
 * Callees:
 *     KeAddProcessorAffinityEx @ 0x140287740 (KeAddProcessorAffinityEx.c)
 *     KeQueryNodeActiveAffinityEx @ 0x140330080 (KeQueryNodeActiveAffinityEx.c)
 *     KeIsEmptyAffinityEx @ 0x140371960 (KeIsEmptyAffinityEx.c)
 *     KeEnumerateNextProcessor @ 0x140405740 (KeEnumerateNextProcessor.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall PspCopyNodeRelativeMaskToAffinityEx(unsigned __int16 a1, __int64 a2, unsigned __int16 *a3)
{
  size_t v6; // r8
  __int64 result; // rax
  unsigned int v8; // [rsp+20h] [rbp-E0h] BYREF
  unsigned __int16 *v9[2]; // [rsp+28h] [rbp-D8h] BYREF
  __int16 v10; // [rsp+38h] [rbp-C8h]
  int v11; // [rsp+3Ah] [rbp-C6h]
  __int16 v12; // [rsp+3Eh] [rbp-C2h]
  __int64 v13; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v14[33]; // [rsp+48h] [rbp-B8h] BYREF

  v11 = 0;
  v12 = 0;
  memset_0(v14, 0, 0x100uLL);
  v6 = 8LL * *a3;
  v8 = 0;
  memset_0(a3 + 4, 0, v6);
  v13 = 2097153LL;
  *a3 = 1;
  memset_0(v14, 0, 0x100uLL);
  KeQueryNodeActiveAffinityEx(a1, (unsigned __int16 *)&v13, 0LL);
  result = KeIsEmptyAffinityEx((unsigned __int16 *)&v13);
  if ( !(_DWORD)result )
  {
    v9[1] = (unsigned __int16 *)v14[0];
    v9[0] = (unsigned __int16 *)&v13;
    v10 = 0;
    while ( 1 )
    {
      result = KeEnumerateNextProcessor(&v8, v9);
      if ( (_DWORD)result )
        break;
      if ( ((*(char *)(((unsigned __int64)*(unsigned int *)(KiProcessorBlock[v8] + 47400) >> 3) + *(_QWORD *)(a2 + 8)) >> (*(_DWORD *)(KiProcessorBlock[v8] + 47400) & 7)) & 1) != 0 )
        KeAddProcessorAffinityEx(a3, v8);
    }
  }
  return result;
}
