/*
 * XREFs of DwmpNotifyUserLogoff @ 0x18000D890
 * Callers:
 *     <none>
 * Callees:
 *     ?TraceLoggingWriteEtw@@YAXW4DwmInitEtwType@@JI@Z @ 0x18000CBDC (-TraceLoggingWriteEtw@@YAXW4DwmInitEtwType@@JI@Z.c)
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000E6AC (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?SendRequest@CApiPortClient@@QEAAJPEBXFPEAJPEAXF@Z @ 0x18000F3AC (-SendRequest@CApiPortClient@@QEAAJPEBXFPEAJPEAXF@Z.c)
 */

__int64 DwmpNotifyUserLogoff()
{
  unsigned int v0; // ebx
  CApiPortClient *v1; // rcx
  __int16 v2; // r8
  int v3; // eax
  void *v5; // [rsp+20h] [rbp-18h]
  __int16 v6; // [rsp+28h] [rbp-10h]
  int v7; // [rsp+40h] [rbp+8h] BYREF
  int v8; // [rsp+48h] [rbp+10h] BYREF

  v0 = 0;
  AcquireSRWLockShared(&gDwmStateLock);
  if ( ghDwmProcess )
  {
    v7 = 0;
    v8 = 536870915;
    v3 = CApiPortClient::SendRequest(v1, &v8, v2, &v7, v5, v6);
    v0 = v3;
    if ( v3 < 0 )
      DoStackCaptureDirect(v3, 0x6A3u);
  }
  TraceLoggingWriteEtw(8, v0, 0);
  ReleaseSRWLockShared(&gDwmStateLock);
  return v0;
}
