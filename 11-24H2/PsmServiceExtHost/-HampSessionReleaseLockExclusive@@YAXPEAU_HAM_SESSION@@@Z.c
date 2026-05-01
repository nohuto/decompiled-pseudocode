/*
 * XREFs of ?HampSessionReleaseLockExclusive@@YAXPEAU_HAM_SESSION@@@Z @ 0x180045E20
 * Callers:
 *     ?HampSessionLogoff@@YAJPEAU_HAM_SESSION@@PEAU_HAM_CLIENT_CONTEXT@@K@Z @ 0x180046070 (-HampSessionLogoff@@YAJPEAU_HAM_SESSION@@PEAU_HAM_CLIENT_CONTEXT@@K@Z.c)
 *     ?HampManagerOnDplKeyStateChanged@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_EDP_DPL_WNF_KEYS_STATE_DATA@@@Z @ 0x180046DF4 (-HampManagerOnDplKeyStateChanged@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_EDP_DPL_WNF_KEYS_STATE_DAT.c)
 *     ?HampSessionMarkLogoffInProgress@@YAJPEAU_HAM_SESSION@@@Z @ 0x1800714EC (-HampSessionMarkLogoffInProgress@@YAJPEAU_HAM_SESSION@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall HampSessionReleaseLockExclusive(struct _HAM_SESSION *a1)
{
  __int64 *Value; // rax
  __int64 v3; // rdx

  if ( HampLockTrackerId != -1 )
  {
    Value = (__int64 *)TlsGetValue(HampLockTrackerId);
    v3 = *Value;
    if ( (*Value & 0x100) == 0 )
      NT_ASSERT("(Tracker->Bitmap & LevelMask) != 0");
    if ( Value[9]-- == 1 )
      *Value = v3 & 0xFFFFFFFFFFFFFEFFuLL;
  }
  *((_DWORD *)a1 + 26) = 0;
  RtlReleaseSRWLockExclusive((char *)a1 + 96);
}
