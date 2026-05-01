/*
 * XREFs of ?HampHostIdStoreReleaseLockExclusive@@YAXPEAU_HAM_HOSTID_STORE@@@Z @ 0x180043254
 * Callers:
 *     ?HampHostIdStoreFindOrCreateIdForKey@@YAJPEAU_HAM_HOSTID_STORE@@PEAU_HAM_HOSTID_STORE_KEY@@PEA_K@Z @ 0x180042948 (-HampHostIdStoreFindOrCreateIdForKey@@YAJPEAU_HAM_HOSTID_STORE@@PEAU_HAM_HOSTID_STORE_KEY@@PEA_K.c)
 *     ?HampHostIdStoreInvalidateForSession@@YAXPEAU_HAM_HOSTID_STORE@@PEAU_HAM_SESSION@@@Z @ 0x180044FD8 (-HampHostIdStoreInvalidateForSession@@YAXPEAU_HAM_HOSTID_STORE@@PEAU_HAM_SESSION@@@Z.c)
 *     ?HampHostIdStoreInvalidateForPackage@@YAXPEAU_HAM_HOSTID_STORE@@PEAU_HAM_PACKAGE@@@Z @ 0x18006E054 (-HampHostIdStoreInvalidateForPackage@@YAXPEAU_HAM_HOSTID_STORE@@PEAU_HAM_PACKAGE@@@Z.c)
 *     ?HampManagerRundown@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x180081150 (-HampManagerRundown@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 *     ?HampHostIdStoreInvalidateForApplication@@YAXPEAU_HAM_HOSTID_STORE@@PEAU_HAM_APPLICATION@@@Z @ 0x180083D64 (-HampHostIdStoreInvalidateForApplication@@YAXPEAU_HAM_HOSTID_STORE@@PEAU_HAM_APPLICATION@@@Z.c)
 *     ?HampUserLogoff@@YAJPEAU_HAM_USER@@PEAU_HAM_CLIENT_CONTEXT@@K@Z @ 0x180084618 (-HampUserLogoff@@YAJPEAU_HAM_USER@@PEAU_HAM_CLIENT_CONTEXT@@K@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall HampHostIdStoreReleaseLockExclusive(struct _HAM_HOSTID_STORE *a1)
{
  __int64 *Value; // rax
  __int64 v3; // rdx

  if ( HampLockTrackerId != -1 )
  {
    Value = (__int64 *)TlsGetValue(HampLockTrackerId);
    v3 = *Value;
    if ( (*Value & 0x800) == 0 )
      NT_ASSERT("(Tracker->Bitmap & LevelMask) != 0");
    if ( Value[12]-- == 1 )
      *Value = v3 & 0xFFFFFFFFFFFFF7FFuLL;
  }
  *((_DWORD *)a1 + 2) = 0;
  RtlReleaseSRWLockExclusive(a1);
}
