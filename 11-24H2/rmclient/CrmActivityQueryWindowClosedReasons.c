/*
 * XREFs of CrmActivityQueryWindowClosedReasons @ 0x180011C90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CrmActivityQueryWindowClosedReasons(
        struct _CRMP_ACTIVITY_CONTEXT *a1,
        enum _CRM_WINDOW_CLOSED_REASON **a2,
        unsigned int *a3)
{
  return CrmpActivityQueryWindowClosedReasons(a1, a2, a3);
}
