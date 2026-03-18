/*
 * XREFs of ?PostMessageToChannel@CChannelContext@@QEAAJPEBUMIL_MESSAGE@@@Z @ 0x1800E77DC
 * Callers:
 *     ?NotifyHelper@CComposition@@QEAAJPEAUMIL_MESSAGE@@@Z @ 0x18002FD74 (-NotifyHelper@CComposition@@QEAAJPEAUMIL_MESSAGE@@@Z.c)
 *     ?ProcessComposition@CComposition@@QEAAXXZ @ 0x1800E6E20 (-ProcessComposition@CComposition@@QEAAXXZ.c)
 *     ?SendResponse@CaptureBitsResponse@@UEAAJJ@Z @ 0x1801AA5C0 (-SendResponse@CaptureBitsResponse@@UEAAJJ@Z.c)
 *     ?SendResponseWorker@CAsyncFlushResponse@@CAJPEAVCChannelContext@@IJ@Z @ 0x1801AAEA4 (-SendResponseWorker@CAsyncFlushResponse@@CAJPEAVCChannelContext@@IJ@Z.c)
 *     ?OnPresentComplete@CAsyncFlushResponse@@UEAAJXZ @ 0x1801DAEB0 (-OnPresentComplete@CAsyncFlushResponse@@UEAAJXZ.c)
 *     ?SendResponse@MagnifierCaptureBitsResponse@@UEAAJJ@Z @ 0x18021A370 (-SendResponse@MagnifierCaptureBitsResponse@@UEAAJJ@Z.c)
 *     ?SignalFinishedFlush@CChannelContext@@QEAAXXZ @ 0x1802207C8 (-SignalFinishedFlush@CChannelContext@@QEAAXXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?PostMessageToClient@CInternalMilCmdConnection@@UEAAJPEBUUCE_RDP_HEADER@@@Z @ 0x1801DFBE0 (-PostMessageToClient@CInternalMilCmdConnection@@UEAAJPEBUUCE_RDP_HEADER@@@Z.c)
 *     memset_0 @ 0x18025D108 (memset_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CChannelContext::PostMessageToChannel(CChannelContext *this, const struct MIL_MESSAGE *a2)
{
  int v2; // ebp
  HANDLE ProcessHeap; // rax
  char *v6; // rax
  char *v7; // rbx
  CInternalMilCmdConnection *v8; // rcx
  __int64 (__fastcall *v9)(CInternalMilCmdConnection *__hidden, const struct UCE_RDP_HEADER *); // rax
  int v10; // eax
  unsigned int v11; // edi
  HANDLE v13; // rax

  v2 = *(_DWORD *)a2;
  ProcessHeap = GetProcessHeap();
  v6 = (char *)HeapAlloc(ProcessHeap, 0, 0x44uLL);
  v7 = v6;
  if ( v6 )
  {
    memset_0(v6, 0, 0x44uLL);
    *(_DWORD *)v7 = 10;
    *((_DWORD *)v7 + 1) = 68;
    *((_DWORD *)v7 + 10) = v2;
    *(_OWORD *)(v7 + 40) = *(_OWORD *)a2;
    *((_QWORD *)v7 + 7) = *((_QWORD *)a2 + 2);
    *((_DWORD *)v7 + 16) = *((_DWORD *)a2 + 6);
    *((_DWORD *)v7 + 4) = *((_DWORD *)this + 6);
    v8 = (CInternalMilCmdConnection *)*((_QWORD *)this + 7);
    v9 = *(__int64 (__fastcall **)(CInternalMilCmdConnection *__hidden, const struct UCE_RDP_HEADER *))(*(_QWORD *)v8 + 8LL);
    if ( v9 == CInternalMilCmdConnection::PostMessageToClient )
      v10 = CInternalMilCmdConnection::PostMessageToClient(v8, (const struct UCE_RDP_HEADER *)v7);
    else
      v10 = v9(v8, (const struct UCE_RDP_HEADER *)v7);
    v11 = v10;
    if ( v10 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0xADu, 0LL);
  }
  else
  {
    v11 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x3Du, 0LL);
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0xA5u, 0LL);
    v7 = 0LL;
  }
  if ( v7 )
  {
    v13 = GetProcessHeap();
    HeapFree(v13, 0, v7);
  }
  return v11;
}
