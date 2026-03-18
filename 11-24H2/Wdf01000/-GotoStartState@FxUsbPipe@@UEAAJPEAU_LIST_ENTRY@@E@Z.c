/*
 * XREFs of ?GotoStartState@FxUsbPipe@@UEAAJPEAU_LIST_ENTRY@@E@Z @ 0x14002EA20
 * Callers:
 *     <none>
 * Callees:
 *     ?FormatRepeater@FxUsbPipeContinuousReader@@QEAAJPEAUFxUsbPipeRepeatReader@@@Z @ 0x14001D11C (-FormatRepeater@FxUsbPipeContinuousReader@@QEAAJPEAUFxUsbPipeRepeatReader@@@Z.c)
 *     ?GotoStartState@FxIoTarget@@MEAAJPEAU_LIST_ENTRY@@E@Z @ 0x14002E3D0 (-GotoStartState@FxIoTarget@@MEAAJPEAU_LIST_ENTRY@@E@Z.c)
 *     ?AddRef@FxObject@@QEAAKPEAXJPEBD@Z @ 0x140049F80 (-AddRef@FxObject@@QEAAKPEAXJPEBD@Z.c)
 */

__int64 __fastcall FxUsbPipe::GotoStartState(FxUsbPipe *this, _LIST_ENTRY *RequestListHead, unsigned __int8 Lock)
{
  int started; // esi
  int v6; // edi
  FxUsbPipeContinuousReader *m_Reader; // rax
  __int64 result; // rax
  int i; // ebx
  FxUsbPipeContinuousReader *v10; // rcx
  FxUsbPipeContinuousReader *v11; // rcx
  __int64 v12; // r15
  FxObject *Request; // rbx
  _LIST_ENTRY *Blink; // rax
  _LIST_ENTRY *p_m_Globals; // rbx

  started = FxIoTarget::GotoStartState(this, RequestListHead, Lock);
  v6 = 0;
  m_Reader = this->m_Reader;
  if ( m_Reader && started >= 0 && !m_Reader->m_ReadersSubmitted )
  {
    for ( i = 0; ; ++i )
    {
      v10 = this->m_Reader;
      if ( i >= v10->m_NumReaders )
        break;
      result = FxUsbPipeContinuousReader::FormatRepeater(v10, &v10->m_Readers[i]);
      started = result;
      if ( (int)result < 0 )
        return result;
    }
    v10->m_NumFailedReaders = 0;
    v11 = this->m_Reader;
    if ( v11->m_NumReaders )
    {
      v12 = 0LL;
      do
      {
        Request = v11->m_Readers[v12].Request;
        Request[1].m_SpinLock.m_Lock = (unsigned __int64)this;
        FxObject::AddRef(Request, this, 1196, "minkernel\\wdf\\framework\\shared\\targets\\usb\\fxusbpipe.cpp");
        _InterlockedIncrement(&this->m_Reader->m_Pipe->m_IoCount);
        Blink = RequestListHead->Blink;
        p_m_Globals = (_LIST_ENTRY *)&Request[1].m_Globals;
        if ( Blink->Flink != RequestListHead )
          __fastfail(3u);
        p_m_Globals->Blink = Blink;
        p_m_Globals->Flink = RequestListHead;
        Blink->Flink = p_m_Globals;
        RequestListHead->Blink = p_m_Globals;
        KeClearEvent(&this->m_Reader->m_Readers[v6].ReadCompletedEvent.m_Event);
        v11 = this->m_Reader;
        ++v6;
        ++v12;
      }
      while ( v6 < v11->m_NumReaders );
    }
    v11->m_ReadersSubmitted = 1;
  }
  return (unsigned int)started;
}
