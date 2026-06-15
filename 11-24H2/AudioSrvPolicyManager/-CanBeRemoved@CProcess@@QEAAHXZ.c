/*
 * XREFs of ?CanBeRemoved@CProcess@@QEAAHXZ @ 0x180019E40
 * Callers:
 *     ?ProcessTerminated@CApplicationManager@@QEAAJPEAVCProcess@@@Z @ 0x18000E4F0 (-ProcessTerminated@CApplicationManager@@QEAAJPEAVCProcess@@@Z.c)
 *     ?UnregisterSession@CProcess@@UEAAJPEAUIAudioSessionInfo@@@Z @ 0x180018B40 (-UnregisterSession@CProcess@@UEAAJPEAUIAudioSessionInfo@@@Z.c)
 *     ?Unregister@CApplicationManager@@IEAAJPEAVCProcess@@@Z @ 0x18001E180 (-Unregister@CApplicationManager@@IEAAJPEAVCProcess@@@Z.c)
 * Callees:
 *     ?TsSessionIdIsAScreenReaderProcess@@YA_NKKPEAM@Z @ 0x1800047B0 (-TsSessionIdIsAScreenReaderProcess@@YA_NKKPEAM@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CProcess::CanBeRemoved(CProcess *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // rsi
  int v3; // eax
  unsigned int v4; // edi

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 24);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 24));
  if ( *((_DWORD *)this + 104) != 2
    || *((_QWORD *)this + 10)
    || (v3 = *((_DWORD *)this + 112), v4 = 1, (v3 & 1) != 0)
    || (v3 & 0x1000) != 0
    || *((_DWORD *)this + 113)
    || *((_DWORD *)this + 114)
    || TsSessionIdIsAScreenReaderProcess(*((_DWORD *)this + 41), *((_DWORD *)this + 40), 0LL)
    || *((_DWORD *)this + 122)
    || *((_DWORD *)this + 127)
    || *((_DWORD *)this + 128)
    || *((_DWORD *)this + 129)
    || *((_DWORD *)this + 124) )
  {
    v4 = 0;
  }
  if ( v2 )
    LeaveCriticalSection(v2);
  return v4;
}
