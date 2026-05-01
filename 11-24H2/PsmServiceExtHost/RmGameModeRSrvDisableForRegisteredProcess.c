/*
 * XREFs of RmGameModeRSrvDisableForRegisteredProcess @ 0x180089680
 * Callers:
 *     <none>
 * Callees:
 *     ?RmpSystemOpenProcess@@YAJPEAPEAXKK@Z @ 0x18003D570 (-RmpSystemOpenProcess@@YAJPEAPEAXKK@Z.c)
 *     ?RmSrvGameModeDisableForRegisteredProcess@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAX@Z @ 0x180087C14 (-RmSrvGameModeDisableForRegisteredProcess@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAX@Z.c)
 */

__int64 __fastcall RmGameModeRSrvDisableForRegisteredProcess(__int64 a1, unsigned int a2)
{
  struct _RM_SERVICE_GLOBALS *v2; // rcx
  int v3; // ebx
  HANDLE Handle; // [rsp+40h] [rbp+18h] BYREF

  Handle = 0LL;
  v3 = RmpSystemOpenProcess(&Handle, 0x1000u, a2);
  if ( v3 >= 0 )
    v3 = RmSrvGameModeDisableForRegisteredProcess(v2, Handle);
  if ( Handle )
    NtClose(Handle);
  return (unsigned int)v3;
}
