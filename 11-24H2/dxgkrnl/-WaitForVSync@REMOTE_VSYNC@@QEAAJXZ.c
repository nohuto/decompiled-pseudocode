/*
 * XREFs of ?WaitForVSync@REMOTE_VSYNC@@QEAAJXZ @ 0x140422FF0
 * Callers:
 *     DxgkWaitForVerticalBlankEventInternal @ 0x1402BCA10 (DxgkWaitForVerticalBlankEventInternal.c)
 * Callees:
 *     ?EnableVSyncEventSignaling@REMOTE_VSYNC@@QEAAJXZ @ 0x1401F3A9C (-EnableVSyncEventSignaling@REMOTE_VSYNC@@QEAAJXZ.c)
 */

NTSTATUS __fastcall REMOTE_VSYNC::WaitForVSync(BLTQUEUE **this)
{
  NTSTATUS result; // eax
  BLTQUEUE *v3; // rcx
  union _LARGE_INTEGER Timeout; // [rsp+48h] [rbp+10h] BYREF

  result = REMOTE_VSYNC::EnableVSyncEventSignaling(this);
  if ( result >= 0 )
  {
    v3 = this[2];
    Timeout.QuadPart = -5000000LL;
    return KeWaitForSingleObject(v3, UserRequest, 0, 0, &Timeout);
  }
  return result;
}
