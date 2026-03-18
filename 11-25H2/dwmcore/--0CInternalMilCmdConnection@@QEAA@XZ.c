/*
 * XREFs of ??0CInternalMilCmdConnection@@QEAA@XZ @ 0x1802643AC
 * Callers:
 *     ?MilCompositionEngine_Initialize@@YAJHPEAPEAUHMIL_CONNECTION__@@@Z @ 0x180233120 (-MilCompositionEngine_Initialize@@YAJHPEAPEAUHMIL_CONNECTION__@@@Z.c)
 * Callees:
 *     <none>
 */

CInternalMilCmdConnection *__fastcall CInternalMilCmdConnection::CInternalMilCmdConnection(
        CInternalMilCmdConnection *this)
{
  CInternalMilCmdConnection *result; // rax

  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *(_QWORD *)this = &CInternalMilCmdConnection::`vftable';
  *((_DWORD *)this + 15) = 0;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 6) = &CChannelTable::`vftable';
  *((_DWORD *)this + 16) = 1;
  *((_DWORD *)this + 14) = 24;
  InitializeCriticalSection((LPCRITICAL_SECTION)((char *)this + 88));
  *((_DWORD *)this + 20) = 0;
  result = this;
  *((_QWORD *)this + 16) = 0LL;
  *((_DWORD *)this + 34) = 0;
  return result;
}
