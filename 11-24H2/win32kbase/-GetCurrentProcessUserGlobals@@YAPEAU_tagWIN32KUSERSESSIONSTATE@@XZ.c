/*
 * XREFs of ?GetCurrentProcessUserGlobals@@YAPEAU_tagWIN32KUSERSESSIONSTATE@@XZ @ 0x14006A99C
 * Callers:
 *     ?GetKind@LastWokenThread@@YA?AW4LastWokenThreadKind@@XZ @ 0x14006A860 (-GetKind@LastWokenThread@@YA-AW4LastWokenThreadKind@@XZ.c)
 *     ?OnDaemonTimer@LastWokenThread@@YAXXZ @ 0x14006A8E0 (-OnDaemonTimer@LastWokenThread@@YAXXZ.c)
 *     ?Clear@LastWokenThread@@YAXXZ @ 0x14006ADA0 (-Clear@LastWokenThread@@YAXXZ.c)
 * Callees:
 *     <none>
 */

struct _tagWIN32KUSERSESSIONSTATE *__fastcall GetCurrentProcessUserGlobals(__int64 a1)
{
  return *(struct _tagWIN32KUSERSESSIONSTATE **)(PsGetCurrentProcessWin32Process(a1) + 1216);
}
