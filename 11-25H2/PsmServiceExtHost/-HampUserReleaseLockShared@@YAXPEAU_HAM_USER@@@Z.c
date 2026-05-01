/*
 * XREFs of ?HampUserReleaseLockShared@@YAXPEAU_HAM_USER@@@Z @ 0x180037E60
 * Callers:
 *     ?HampAppCheckQueueLicenseUpgradeForHost@@YAKPEAU_HAM_APPLICATION@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180025E50 (-HampAppCheckQueueLicenseUpgradeForHost@@YAKPEAU_HAM_APPLICATION@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall HampUserReleaseLockShared(struct _HAM_USER *a1)
{
  __int64 *Value; // rax
  __int64 v3; // rdx

  if ( HampLockTrackerId != -1 )
  {
    Value = (__int64 *)TlsGetValue(HampLockTrackerId);
    v3 = *Value;
    if ( (*Value & 0x80u) == 0LL )
      NT_ASSERT("(Tracker->Bitmap & LevelMask) != 0");
    if ( Value[8]-- == 1 )
      *Value = v3 & 0xFFFFFFFFFFFFFF7FuLL;
  }
  RtlReleaseSRWLockShared((char *)a1 + 168);
}
