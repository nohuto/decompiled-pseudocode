/*
 * XREFs of KiInitializeInterrupt @ 0x14047959C
 * Callers:
 *     KeInitializeInterruptEx @ 0x140479468 (KeInitializeInterruptEx.c)
 * Callees:
 *     <none>
 */

__int64 (__fastcall *__fastcall KiInitializeInterrupt(
        __int64 a1,
        __int64 a2))(int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, __int16)
{
  __int64 (__fastcall *result)(int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, __int16); // rax

  switch ( a2 )
  {
    case -1LL:
      result = KiInterruptDispatchNoLock;
      break;
    case -3LL:
      result = KiInterruptDispatchNoLockNoEtw;
      break;
    case -4LL:
      result = KiInterruptDispatchNoEOI;
      break;
    default:
      result = KiInterruptDispatch;
      if ( a2 == -2 )
        result = (__int64 (__fastcall *)(int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, __int16))&KiSpuriousDispatchNoEOI;
      break;
  }
  *(_QWORD *)(a1 + 80) = result;
  return result;
}
