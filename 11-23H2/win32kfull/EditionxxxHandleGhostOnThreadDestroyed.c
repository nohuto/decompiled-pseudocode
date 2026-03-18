/*
 * XREFs of EditionxxxHandleGhostOnThreadDestroyed @ 0x1C0080270
 * Callers:
 *     <none>
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C014083C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?xxxHandleHealthyThread@@YAXPEAUtagTHREADINFO@@@Z @ 0x1C01F3FF4 (-xxxHandleHealthyThread@@YAXPEAUtagTHREADINFO@@@Z.c)
 */

void __fastcall EditionxxxHandleGhostOnThreadDestroyed(struct tagTHREADINFO *a1)
{
  _QWORD *v2; // rbx
  void *v3; // rcx

  if ( (*((_DWORD *)a1 + 122) & 1) == 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 471LL);
  if ( *((int *)a1 + 122) < 0 )
    xxxHandleHealthyThread(a1);
  v2 = (_QWORD *)*((_QWORD *)a1 + 150);
  if ( v2 )
  {
    *((_QWORD *)a1 + 150) = 0LL;
    do
    {
      v3 = v2;
      v2 = (_QWORD *)*v2;
      Win32FreePool(v3);
    }
    while ( v2 );
  }
}
