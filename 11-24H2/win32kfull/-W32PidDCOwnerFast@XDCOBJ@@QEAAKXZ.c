/*
 * XREFs of ?W32PidDCOwnerFast@XDCOBJ@@QEAAKXZ @ 0x140330A10
 * Callers:
 *     NtGdiRestoreDC @ 0x14018D820 (NtGdiRestoreDC.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall XDCOBJ::W32PidDCOwnerFast(XDCOBJ *this)
{
  return *(_DWORD *)(HmgPentryFromPobjFast(*((_QWORD *)this + 2), *(_QWORD *)this) + 8) & 0xFFFFFFFE;
}
