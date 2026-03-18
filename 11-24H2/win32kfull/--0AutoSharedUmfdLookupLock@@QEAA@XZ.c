/*
 * XREFs of ??0AutoSharedUmfdLookupLock@@QEAA@XZ @ 0x1400B398C
 * Callers:
 *     ?UmfdEscEngMapFontFileFD@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1400B36C4 (-UmfdEscEngMapFontFileFD@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 *     ?UmfdEscEngGetFileChangeTime@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1401D96B8 (-UmfdEscEngGetFileChangeTime@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 *     ?UmfdEscParseFontResources@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1401FD678 (-UmfdEscParseFontResources@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 *     ?UmfdEscEngGetFilePath@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x140330538 (-UmfdEscEngGetFilePath@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 * Callees:
 *     <none>
 */

AutoSharedUmfdLookupLock *__fastcall AutoSharedUmfdLookupLock::AutoSharedUmfdLookupLock(
        AutoSharedUmfdLookupLock *this,
        __int64 a2,
        __int64 a3)
{
  struct W32_PUSH_LOCK *v4; // rcx

  v4 = (struct W32_PUSH_LOCK *)(*(_QWORD *)(W32GetSessionState(this, a2, a3) + 96) + 24248LL);
  *(_QWORD *)this = v4;
  GreAcquirePushLockShared(v4);
  return this;
}
