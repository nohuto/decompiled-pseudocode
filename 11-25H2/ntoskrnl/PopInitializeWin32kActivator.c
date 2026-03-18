/*
 * XREFs of PopInitializeWin32kActivator @ 0x140C1D2A4
 * Callers:
 *     PoInitSystem @ 0x140C50674 (PoInitSystem.c)
 * Callees:
 *     PopInitializeWorkItem @ 0x14073D3C8 (PopInitializeWorkItem.c)
 *     Pdcv2ActivationClientRegister @ 0x14077E6A8 (Pdcv2ActivationClientRegister.c)
 */

__int64 PopInitializeWin32kActivator()
{
  __int64 v0; // r8
  __int64 result; // rax
  __int128 v2; // [rsp+20h] [rbp-28h] BYREF
  __int64 v3; // [rsp+30h] [rbp-18h]

  qword_140F0D3E8 = 0LL;
  PopWin32kPowerRequestStatus[0] = 0LL;
  PopInitializeWorkItem((__int64)&unk_140F0D598, (__int64)PopWin32kActivatorWorker, 0LL);
  DWORD1(v2) &= v0;
  v3 &= v0;
  *((_QWORD *)&v2 + 1) = PopWin32kActivatorCallback;
  LODWORD(v2) = 1;
  result = Pdcv2ActivationClientRegister(123LL, &v2, &qword_140F0D3F0);
  if ( (int)result < 0 )
    *(_QWORD *)&qword_140F0D3F0 = 0LL;
  return result;
}
