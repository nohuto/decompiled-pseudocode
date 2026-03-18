/*
 * XREFs of ?NumHandles@@YAKPEAX@Z @ 0x1402737D8
 * Callers:
 *     ?InitiateWin32kCleanup@@YAXXZ @ 0x140272F14 (-InitiateWin32kCleanup@@YAXXZ.c)
 * Callees:
 *     ?HYDRA_HINT@@YAXW4HydraHint@@@Z @ 0x1401DFCE4 (-HYDRA_HINT@@YAXW4HydraHint@@@Z.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

__int64 __fastcall NumHandles(void *a1)
{
  __int64 v1; // rdx
  __int64 result; // rax
  _OWORD ObjectInformation[3]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v4; // [rsp+60h] [rbp-18h]

  v4 = 0LL;
  memset(ObjectInformation, 0, sizeof(ObjectInformation));
  if ( !a1 || ZwQueryObject(a1, ObjectBasicInformation, ObjectInformation, 0x38u, 0LL) )
    return 0LL;
  result = DWORD2(ObjectInformation[0]);
  if ( DWORD2(ObjectInformation[0]) > 1 )
  {
    HYDRA_HINT(0x400000LL, v1);
    return DWORD2(ObjectInformation[0]);
  }
  return result;
}
