/*
 * XREFs of ??0CNotificationResourceMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z @ 0x140073240
 * Callers:
 *     ??0CPropertyChangeResourceMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z @ 0x14007321C (--0CPropertyChangeResourceMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z.c)
 *     ??0CInteractionTrackerMarshaler@DirectComposition@@QEAA@XZ @ 0x14014849C (--0CInteractionTrackerMarshaler@DirectComposition@@QEAA@XZ.c)
 * Callees:
 *     ??0CResourceMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z @ 0x140073264 (--0CResourceMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z.c)
 */

_QWORD *__fastcall DirectComposition::CNotificationResourceMarshaler::CNotificationResourceMarshaler(
        __int64 a1,
        __int64 a2)
{
  _QWORD *v2; // rcx
  _QWORD *result; // rax

  DirectComposition::CResourceMarshaler::CResourceMarshaler(a1, a2);
  result = v2;
  *v2 = &DirectComposition::CNotificationResourceMarshaler::`vftable';
  return result;
}
