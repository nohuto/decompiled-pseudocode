/*
 * XREFs of PopInitializeWin32kActivator @ 0x140C2E3A4
 * Callers:
 *     PoInitSystem @ 0x140C61990 (PoInitSystem.c)
 * Callees:
 *     PopInitializeWorkItem @ 0x1407493D8 (PopInitializeWorkItem.c)
 *     Pdcv2ActivationClientRegister @ 0x14078D95C (Pdcv2ActivationClientRegister.c)
 */

__int64 PopInitializeWin32kActivator()
{
  __int64 v0; // r8
  __int64 result; // rax
  __int128 v2; // [rsp+20h] [rbp-28h] BYREF
  __int64 v3; // [rsp+30h] [rbp-18h]

  qword_140F0DAA8 = 0LL;
  PopWin32kPowerRequestStatus = 0LL;
  PopInitializeWorkItem((__int64)&unk_140F0DC58, (__int64)PopWin32kActivatorWorker, 0LL);
  DWORD1(v2) &= v0;
  v3 &= v0;
  *((_QWORD *)&v2 + 1) = PopWin32kActivatorCallback;
  LODWORD(v2) = 1;
  result = Pdcv2ActivationClientRegister(123LL, &v2, &qword_140F0DAB0);
  if ( (int)result < 0 )
    *(_QWORD *)&qword_140F0DAB0 = 0LL;
  return result;
}
