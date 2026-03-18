/*
 * XREFs of ?SendVideoPortCalloutRequest@@YAJPEAU_POWER_INIT@@PEAH@Z @ 0x140128208
 * Callers:
 *     VideoPortCallout @ 0x1401237F0 (VideoPortCallout.c)
 * Callees:
 *     CSTPush @ 0x1401282E0 (CSTPush.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 *     memset @ 0x14023F500 (memset.c)
 */

__int64 __fastcall SendVideoPortCalloutRequest(struct _POWER_INIT *a1, int *a2)
{
  __int64 v3; // rcx
  __int64 UserSessionState; // rax
  _QWORD v6[120]; // [rsp+20h] [rbp-3D8h] BYREF

  if ( (unsigned int)CSTPush(4LL, a1) )
  {
    memset(v6, 0, 0x3B8uLL);
    v6[5] = 0LL;
    v6[0] = 0x303B80390LL;
    LODWORD(v6[6]) = 197636;
    *a2 = 1;
    UserSessionState = W32GetUserSessionState(v3);
    return LpcRequestPort(*(_QWORD *)(UserSessionState + 71544), v6);
  }
  else
  {
    *a2 = 0;
    return 3221225495LL;
  }
}
