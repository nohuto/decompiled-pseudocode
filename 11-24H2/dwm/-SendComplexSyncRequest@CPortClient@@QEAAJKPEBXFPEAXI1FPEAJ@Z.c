/*
 * XREFs of ?SendComplexSyncRequest@CPortClient@@QEAAJKPEBXFPEAXI1FPEAJ@Z @ 0x14000CED0
 * Callers:
 *     ?LpcSyncFlush@CDwmAppHost@@AEAAJXZ @ 0x140003644 (-LpcSyncFlush@CDwmAppHost@@AEAAJXZ.c)
 * Callees:
 *     ?CheckStatus@CPortClient@@AEAAJJ@Z @ 0x140002220 (-CheckStatus@CPortClient@@AEAAJJ@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x140002E0C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CPortClient::SendComplexSyncRequest(
        CPortClient *this,
        int a2,
        _QWORD *a3,
        __int64 a4,
        __int64 a5,
        unsigned int a6,
        void *a7,
        __int16 a8,
        int *a9)
{
  unsigned int v12; // ebx
  HANDLE ProcessHeap; // rax
  _DWORD *v14; // rax
  _DWORD *v15; // rdi
  __int64 v16; // rcx
  unsigned int v17; // eax
  int v18; // eax
  HANDLE v19; // rax
  int v21; // [rsp+40h] [rbp-48h] BYREF
  __int128 v22; // [rsp+44h] [rbp-44h]
  __int128 v23; // [rsp+54h] [rbp-34h]
  int v24; // [rsp+64h] [rbp-24h]

  v22 = 0LL;
  v24 = 0;
  v23 = 0LL;
  v12 = 0;
  ProcessHeap = GetProcessHeap();
  v14 = HeapAlloc(ProcessHeap, 8u, 0x38uLL);
  v15 = v14;
  if ( v14 )
  {
    v14[10] = a2;
    *v14 = 3670032;
    *((_QWORD *)v14 + 6) = *a3;
    v16 = *((_QWORD *)this + 2);
    v21 = 0x40000000;
    a5 = 56LL;
    v17 = NtAlpcSendWaitReceivePort(v16, 0x20000LL, v14, &v21, v14, &a5, 0LL, 0LL);
    v18 = CPortClient::CheckStatus(this, v17);
    if ( v18 >= 0 )
    {
      *a9 = v15[11];
    }
    else
    {
      v12 = v18 | 0x10000000;
      MilInstrumentationCheckHR_MaybeFailFast(
        4u,
        &CPortClient::MILINSTRUMENTATIONHRESULTLIST,
        9LL,
        v18 | 0x10000000,
        0x214u,
        0LL);
    }
    v19 = GetProcessHeap();
    HeapFree(v19, 0, v15);
  }
  else
  {
    v12 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(
      4u,
      &CPortClient::MILINSTRUMENTATIONHRESULTLIST,
      9LL,
      -2147024882,
      0x1F9u,
      0LL);
  }
  return v12;
}
