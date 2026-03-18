/*
 * XREFs of RIMObjectManagerCallout @ 0x140116F54
 * Callers:
 *     W32CalloutDispatchWorker @ 0x1400DAD6C (W32CalloutDispatchWorker.c)
 * Callees:
 *     RawInputManagerObjectClose @ 0x1401E34EC (RawInputManagerObjectClose.c)
 *     RawInputManagerObjectDelete @ 0x1401E35C8 (RawInputManagerObjectDelete.c)
 *     RawInputManagerObjectOkToClose @ 0x1401E3998 (RawInputManagerObjectOkToClose.c)
 *     RawInputManagerObjectOpen @ 0x1401E39D0 (RawInputManagerObjectOpen.c)
 */

__int64 __fastcall RIMObjectManagerCallout(int a1, __int64 a2)
{
  int v2; // ecx
  int v4; // ecx
  int v5; // ecx

  v2 = a1 - 27;
  if ( !v2 )
    return RawInputManagerObjectOpen(a2);
  v4 = v2 - 1;
  if ( !v4 )
    return RawInputManagerObjectOkToClose(a2);
  v5 = v4 - 1;
  if ( !v5 )
    return RawInputManagerObjectClose(a2);
  if ( v5 == 1 )
    return RawInputManagerObjectDelete(a2);
  return 3221225485LL;
}
