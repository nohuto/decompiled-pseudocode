/*
 * XREFs of sub_180011150 @ 0x180011150
 * Callers:
 *     sub_180010808 @ 0x180010808 (sub_180010808.c)
 *     sub_180015BD4 @ 0x180015BD4 (sub_180015BD4.c)
 *     sub_1800233AC @ 0x1800233AC (sub_1800233AC.c)
 *     sub_180023608 @ 0x180023608 (sub_180023608.c)
 *     sub_180050168 @ 0x180050168 (sub_180050168.c)
 *     sub_1800687C0 @ 0x1800687C0 (sub_1800687C0.c)
 *     sub_18007ABA0 @ 0x18007ABA0 (sub_18007ABA0.c)
 *     sub_18007CE54 @ 0x18007CE54 (sub_18007CE54.c)
 *     sub_18007EC34 @ 0x18007EC34 (sub_18007EC34.c)
 *     sub_18007FC7C @ 0x18007FC7C (sub_18007FC7C.c)
 *     sub_180080210 @ 0x180080210 (sub_180080210.c)
 *     sub_180080464 @ 0x180080464 (sub_180080464.c)
 *     sub_1800805D0 @ 0x1800805D0 (sub_1800805D0.c)
 *     sub_18008073C @ 0x18008073C (sub_18008073C.c)
 *     sub_1800808A8 @ 0x1800808A8 (sub_1800808A8.c)
 *     sub_180080A14 @ 0x180080A14 (sub_180080A14.c)
 *     sub_180081BB8 @ 0x180081BB8 (sub_180081BB8.c)
 *     sub_18008D330 @ 0x18008D330 (sub_18008D330.c)
 * Callees:
 *     j__guard_dispatch_icall @ 0x1800EB010 (j__guard_dispatch_icall.c)
 */

__int64 __fastcall sub_180011150(__int64 a1, __int64 a2)
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
