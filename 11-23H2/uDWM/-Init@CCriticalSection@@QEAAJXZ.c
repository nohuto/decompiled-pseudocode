/*
 * XREFs of ?Init@CCriticalSection@@QEAAJXZ @ 0x1800228C8
 * Callers:
 *     ??0CMILResourceCacheIndexManager@@QEAA@XZ @ 0x1800220B8 (--0CMILResourceCacheIndexManager@@QEAA@XZ.c)
 *     ??0CMTALock@@QEAA@XZ @ 0x180022870 (--0CMTALock@@QEAA@XZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180065FCC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CCriticalSection::Init(LPCRITICAL_SECTION lpCriticalSection)
{
  signed int v2; // ebx
  signed int LastError; // eax

  v2 = 0;
  SetLastError(0);
  if ( InitializeCriticalSectionAndSpinCount(lpCriticalSection, 0) )
  {
    LOBYTE(lpCriticalSection[1].DebugInfo) = 1;
  }
  else
  {
    LastError = GetLastError();
    v2 = LastError;
    if ( LastError > 0 )
      v2 = (unsigned __int16)LastError | 0x80070000;
    if ( v2 >= 0 )
      v2 = -2003304445;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v2, 0x50u, 0LL);
  }
  return (unsigned int)v2;
}
