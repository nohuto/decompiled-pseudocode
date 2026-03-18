/*
 * XREFs of ?Release@?$CMILCOMBaseT@UID2D1PrivateCompositorBuffer@@U1@VCMilObjectDeleter@@@@UEAAKXZ @ 0x180045730
 * Callers:
 *     ??$ReleaseInterfaceNoNULL@UID2D1PrivateCompositorBuffer@@@@YAXPEAUID2D1PrivateCompositorBuffer@@@Z @ 0x1800456F8 (--$ReleaseInterfaceNoNULL@UID2D1PrivateCompositorBuffer@@@@YAXPEAUID2D1PrivateCompositorBuffer@@.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CMILCOMBaseT<ID2D1PrivateCompositorBuffer,ID2D1PrivateCompositorBuffer,CMilObjectDeleter>::Release(
        CD2DSharedBuffer *a1)
{
  return CMILRefCountBaseT<ID2D1PrivateCompositorBuffer,CMilObjectDeleter>::InternalRelease(a1);
}
