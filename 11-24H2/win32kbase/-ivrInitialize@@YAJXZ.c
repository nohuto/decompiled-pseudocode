/*
 * XREFs of ?ivrInitialize@@YAJXZ @ 0x140217B2C
 * Callers:
 *     InputInitialize @ 0x140218A5C (InputInitialize.c)
 * Callees:
 *     ?ivrInitAllwin32knsDelayLoads@@YAXPEAX@Z @ 0x140217914 (-ivrInitAllwin32knsDelayLoads@@YAXPEAX@Z.c)
 *     ivrLoadImage @ 0x140217F30 (ivrLoadImage.c)
 */

__int64 ivrInitialize(void)
{
  __int64 Image; // rbx
  __int64 v1; // rcx
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 UserSessionState; // rax

  Image = ivrLoadImage();
  *(_QWORD *)(W32GetUserSessionState(v1) + 19488) = Image;
  if ( !*(_QWORD *)(W32GetUserSessionState(v2) + 19488) )
    return 3221226092LL;
  UserSessionState = W32GetUserSessionState(v3);
  ivrInitAllwin32knsDelayLoads(*(_QWORD **)(UserSessionState + 19488));
  return 0LL;
}
