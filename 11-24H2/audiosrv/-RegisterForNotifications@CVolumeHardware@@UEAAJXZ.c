/*
 * XREFs of ?RegisterForNotifications@CVolumeHardware@@UEAAJXZ @ 0x180114ED0
 * Callers:
 *     <none>
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x1800150E8 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CVolumeHardware::RegisterForNotifications(CVolumeHardware *this)
{
  int v2; // eax
  unsigned int v3; // ebx

  v2 = (*(__int64 (__fastcall **)(_QWORD, GUID *, CVolumeHardware *))(**((_QWORD **)this + 31) + 112LL))(
         *((_QWORD *)this + 31),
         &GUID_7fb7b48f_531d_44a2_bcb3_5ad5a134b3dc,
         this);
  v3 = v2;
  if ( v2 < 0 )
    AudSrvTraceLoggingErrorHelper("CVolumeHardware::RegisterForNotifications", 1636, v2);
  else
    *((_DWORD *)this + 70) = 1;
  return v3;
}
