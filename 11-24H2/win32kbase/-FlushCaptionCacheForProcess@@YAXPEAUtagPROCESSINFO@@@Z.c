/*
 * XREFs of ?FlushCaptionCacheForProcess@@YAXPEAUtagPROCESSINFO@@@Z @ 0x140062600
 * Callers:
 *     ?DestroyProcessesObjects@@YAXPEAUtagPROCESSINFO@@@Z @ 0x140061204 (-DestroyProcessesObjects@@YAXPEAUtagPROCESSINFO@@@Z.c)
 * Callees:
 *     HMAssignmentUnlock @ 0x14005F130 (HMAssignmentUnlock.c)
 */

void __fastcall FlushCaptionCacheForProcess(struct tagPROCESSINFO *a1)
{
  __int64 v2; // rsi
  __int64 v3; // rbx
  __int64 *v4; // rdi

  v2 = 5LL;
  v3 = W32GetUserSessionState(a1) + 43200;
  v4 = (__int64 *)v3;
  do
  {
    if ( *(_QWORD *)v3 )
    {
      if ( *(struct tagPROCESSINFO **)(*(_QWORD *)v3 + 24LL) == a1 )
        HMAssignmentUnlock(v4);
    }
    v4 += 2;
    v3 += 16LL;
    --v2;
  }
  while ( v2 );
}
