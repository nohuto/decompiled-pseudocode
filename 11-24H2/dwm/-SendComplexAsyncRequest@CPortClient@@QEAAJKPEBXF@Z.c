/*
 * XREFs of ?SendComplexAsyncRequest@CPortClient@@QEAAJKPEBXF@Z @ 0x140002CB8
 * Callers:
 *     ?LpcNotifySettingsChange@CDwmAppHost@@AEAAJK@Z @ 0x140002C30 (-LpcNotifySettingsChange@CDwmAppHost@@AEAAJK@Z.c)
 * Callees:
 *     ?CheckStatus@CPortClient@@AEAAJJ@Z @ 0x140002220 (-CheckStatus@CPortClient@@AEAAJJ@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x140002E0C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CPortClient::SendComplexAsyncRequest(CPortClient *this, int a2, _QWORD *a3)
{
  unsigned int v3; // ebx
  HANDLE ProcessHeap; // rax
  _DWORD *v8; // rax
  void *v9; // rdi
  unsigned int v10; // eax
  int v11; // eax
  HANDLE v12; // rax

  v3 = 0;
  if ( a3 )
  {
    ProcessHeap = GetProcessHeap();
    v8 = HeapAlloc(ProcessHeap, 8u, 0x38uLL);
    v9 = v8;
    if ( v8 )
    {
      v8[10] = a2;
      *v8 = 3670032;
      *((_QWORD *)v8 + 6) = *a3;
      v10 = NtAlpcSendWaitReceivePort(*((_QWORD *)this + 2), 0x10000LL, v8, 0LL, 0LL, 0LL, 0LL, 0LL);
      v11 = CPortClient::CheckStatus(this, v10);
      if ( v11 < 0 )
      {
        v3 = v11 | 0x10000000;
        MilInstrumentationCheckHR_MaybeFailFast(
          4u,
          &CPortClient::MILINSTRUMENTATIONHRESULTLIST,
          9u,
          v11 | 0x10000000,
          0x1B0u,
          0LL);
      }
      v12 = GetProcessHeap();
      HeapFree(v12, 0, v9);
    }
    else
    {
      v3 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(
        4u,
        &CPortClient::MILINSTRUMENTATIONHRESULTLIST,
        9u,
        -2147024882,
        0x19Fu,
        0LL);
    }
  }
  else
  {
    v3 = -2147024890;
    MilInstrumentationCheckHR_MaybeFailFast(
      4u,
      &CPortClient::MILINSTRUMENTATIONHRESULTLIST,
      9u,
      -2147024890,
      0x19Cu,
      0LL);
  }
  return v3;
}
