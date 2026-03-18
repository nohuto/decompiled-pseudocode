/*
 * XREFs of EditionIsGetKeyStateBlocked @ 0x1C00785F0
 * Callers:
 *     <none>
 * Callees:
 *     ??B?$SGDCRITTYPEgpresUser@PEAU_ERESOURCE@@@@QEAAAEAPEAU_ERESOURCE@@XZ @ 0x1C01389C0 (--B-$SGDCRITTYPEgpresUser@PEAU_ERESOURCE@@@@QEAAAEAPEAU_ERESOURCE@@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C014083C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall EditionIsGetKeyStateBlocked(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  PERESOURCE *v4; // rax
  unsigned int v5; // ebx
  __int64 v6; // rdi
  __int64 *ThreadWin32Thread; // rax

  v4 = (PERESOURCE *)SGDCRITTYPEgpresUser<_ERESOURCE *>::operator _ERESOURCE * &(a1, a2, a3, a4);
  v5 = 0;
  if ( !ExIsResourceAcquiredSharedLite(*v4) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 151LL);
  v6 = 0LL;
  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( ThreadWin32Thread )
    v6 = *ThreadWin32Thread;
  LOBYTE(v5) = *(_QWORD *)(v6 + 456) != grpdeskRitInput;
  return v5;
}
