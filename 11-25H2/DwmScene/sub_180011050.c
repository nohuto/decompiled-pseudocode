/*
 * XREFs of sub_180011050 @ 0x180011050
 * Callers:
 *     sub_180010708 @ 0x180010708 (sub_180010708.c)
 *     sub_180015AD4 @ 0x180015AD4 (sub_180015AD4.c)
 *     sub_18002324C @ 0x18002324C (sub_18002324C.c)
 *     sub_1800234A8 @ 0x1800234A8 (sub_1800234A8.c)
 *     sub_180050008 @ 0x180050008 (sub_180050008.c)
 *     sub_180068660 @ 0x180068660 (sub_180068660.c)
 *     sub_18007AA40 @ 0x18007AA40 (sub_18007AA40.c)
 *     sub_18007CCF4 @ 0x18007CCF4 (sub_18007CCF4.c)
 *     sub_18007EAD4 @ 0x18007EAD4 (sub_18007EAD4.c)
 *     sub_18007FB1C @ 0x18007FB1C (sub_18007FB1C.c)
 *     sub_1800800B0 @ 0x1800800B0 (sub_1800800B0.c)
 *     sub_180080304 @ 0x180080304 (sub_180080304.c)
 *     sub_180080470 @ 0x180080470 (sub_180080470.c)
 *     sub_1800805DC @ 0x1800805DC (sub_1800805DC.c)
 *     sub_180080748 @ 0x180080748 (sub_180080748.c)
 *     sub_1800808B4 @ 0x1800808B4 (sub_1800808B4.c)
 *     sub_180081A58 @ 0x180081A58 (sub_180081A58.c)
 *     sub_18008D1D0 @ 0x18008D1D0 (sub_18008D1D0.c)
 * Callees:
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
 */

__int64 __fastcall sub_180011050(__int64 a1, __int64 a2)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 56);
  if ( !v2 )
  {
    std::_Xbad_function_call();
    __debugbreak();
  }
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  return a2;
}
