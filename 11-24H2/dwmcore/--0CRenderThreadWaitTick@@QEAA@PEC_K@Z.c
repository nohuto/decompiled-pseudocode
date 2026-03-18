/*
 * XREFs of ??0CRenderThreadWaitTick@@QEAA@PEC_K@Z @ 0x18025CCE0
 * Callers:
 *     ?WaitForWork@CScheduler@@QEAAXPEAUIMessageLoopExtensions@@@Z @ 0x180157830 (-WaitForWork@CScheduler@@QEAAXPEAUIMessageLoopExtensions@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x18012B3DC (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgPr.c)
 *     _tlgKeywordOn @ 0x1801B92C0 (_tlgKeywordOn.c)
 *     ?IsKernelDebuggerPresent@@YAHXZ @ 0x180226E04 (-IsKernelDebuggerPresent@@YAHXZ.c)
 */

CRenderThreadWaitTick *__fastcall CRenderThreadWaitTick::CRenderThreadWaitTick(
        CRenderThreadWaitTick *this,
        volatile unsigned __int64 *a2)
{
  ULONGLONG v3; // rdi
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v8; // [rsp+40h] [rbp+8h] BYREF
  volatile unsigned __int64 *v9; // [rsp+48h] [rbp+10h] BYREF

  v9 = a2;
  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = qword_1803FAD80;
  *(_QWORD *)this = &qword_1803FAD80;
  qword_1803FAD80 = 0LL;
  if ( *((_QWORD *)this + 1) )
  {
    v3 = GetTickCount64() - *((_QWORD *)this + 1);
    if ( v3 > (unsigned int)CCommonRegistryData::RenderThreadTimeoutMilliseconds
      && !IsDebuggerPresent()
      && !(unsigned int)IsKernelDebuggerPresent()
      && (unsigned int)dword_1803F8CA8 > 5
      && tlgKeywordOn((__int64)&dword_1803F8CA8, 0x400000000000LL) )
    {
      LODWORD(v9) = v3;
      v8 = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
        v4,
        byte_1803CC9F3,
        v5,
        v6,
        (__int64)&v8,
        (__int64)&v9);
    }
  }
  return this;
}
