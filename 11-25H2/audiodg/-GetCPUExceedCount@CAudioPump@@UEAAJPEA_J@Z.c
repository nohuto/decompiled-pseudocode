/*
 * XREFs of ?GetCPUExceedCount@CAudioPump@@UEAAJPEA_J@Z @ 0x1400668A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CAudioPump::GetCPUExceedCount(CAudioPump *this, __int64 *a2)
{
  _InterlockedExchange64(a2, *((_QWORD *)this + 48));
  return 0LL;
}
