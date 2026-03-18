/*
 * XREFs of SdbpCheckDll @ 0x140BDA7B0
 * Callers:
 *     KiSwInterruptDispatch @ 0x1405088F0 (KiSwInterruptDispatch.c)
 *     sub_14050A410 @ 0x14050A410 (sub_14050A410.c)
 *     FsRtlMdlReadCompleteDevEx @ 0x140BC1010 (FsRtlMdlReadCompleteDevEx.c)
 *     sub_140BD8DF0 @ 0x140BD8DF0 (sub_140BD8DF0.c)
 *     sub_140BE10B0 @ 0x140BE10B0 (sub_140BE10B0.c)
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
