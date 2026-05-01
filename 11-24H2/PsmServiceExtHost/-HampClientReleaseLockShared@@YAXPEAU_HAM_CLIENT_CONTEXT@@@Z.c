/*
 * XREFs of ?HampClientReleaseLockShared@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x18001DCA0
 * Callers:
 *     ?HampClientGetPid@@YAKPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x18001DC6C (-HampClientGetPid@@YAKPEAU_HAM_CLIENT_CONTEXT@@@Z.c)
 *     ?HampHostFindByClient@@YAJPEAU_HAM_CLIENT_CONTEXT@@W4_HOST_GROUP@@PEAPEAU_RM_HAM_ACTIVITY_HOST@@PEA_K@Z @ 0x180044E44 (-HampHostFindByClient@@YAJPEAU_HAM_CLIENT_CONTEXT@@W4_HOST_GROUP@@PEAPEAU_RM_HAM_ACTIVITY_HOST@@.c)
 *     ?HampSystemIssueActivityCallback@@YAXPEAU_HAM_CLIENT_CONTEXT@@PEAU_HAM_ACTIVITY_CALLBACK_PAYLOAD@@K@Z @ 0x18005711C (-HampSystemIssueActivityCallback@@YAXPEAU_HAM_CLIENT_CONTEXT@@PEAU_HAM_ACTIVITY_CALLBACK_PAYLOAD.c)
 * Callees:
 *     <none>
 */

void __fastcall HampClientReleaseLockShared(struct _HAM_CLIENT_CONTEXT *a1)
{
  __int64 *Value; // rax
  __int64 v3; // rdx

  if ( HampLockTrackerId != -1 )
  {
    Value = (__int64 *)TlsGetValue(HampLockTrackerId);
    v3 = *Value;
    if ( (*Value & 0x200) == 0 )
      NT_ASSERT("(Tracker->Bitmap & LevelMask) != 0");
    if ( Value[10]-- == 1 )
      *Value = v3 & 0xFFFFFFFFFFFFFDFFuLL;
  }
  RtlReleaseSRWLockShared((char *)a1 + 40);
}
