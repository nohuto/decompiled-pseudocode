/*
 * XREFs of SdbpCheckDll @ 0x140BC97B0
 * Callers:
 *     KiSwInterruptDispatch @ 0x140506170 (KiSwInterruptDispatch.c)
 *     sub_140507C90 @ 0x140507C90 (sub_140507C90.c)
 *     FsRtlMdlReadCompleteDevEx @ 0x140BB0010 (FsRtlMdlReadCompleteDevEx.c)
 *     sub_140BC7DF0 @ 0x140BC7DF0 (sub_140BC7DF0.c)
 *     sub_140BD00B0 @ 0x140BD00B0 (sub_140BD00B0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SdbpCheckDll(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 (__fastcall *a6)(__int64),
        _QWORD *a7)
{
  _UNKNOWN *retaddr; // [rsp+0h] [rbp+0h] BYREF

  do
    *a7-- = 0LL;
  while ( a7 >= &retaddr );
  return a6(a1);
}
