/*
 * XREFs of ?SendComplexSyncRequest@CPortClient@@QEAAJKPEBXFPEAXI1FPEAJ@Z @ 0x18000FEC4
 * Callers:
 *     ?SendRequest@CApiPortClient@@QEAAJPEBXFPEAXIPEAJ1F@Z @ 0x18000FB24 (-SendRequest@CApiPortClient@@QEAAJPEBXFPEAXIPEAJ1F@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000EF88 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CPortClient::SendComplexSyncRequest(
        CPortClient *this,
        int a2,
        _DWORD *a3,
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
  int v17; // eax
  HANDLE v18; // rax
  int v20; // [rsp+40h] [rbp-48h] BYREF
  __int128 v21; // [rsp+44h] [rbp-44h]
  __int128 v22; // [rsp+54h] [rbp-34h]
  int v23; // [rsp+64h] [rbp-24h]

  v21 = 0LL;
  v23 = 0;
  v22 = 0LL;
  v12 = 0;
  ProcessHeap = GetProcessHeap();
  v14 = HeapAlloc(ProcessHeap, 8u, 0x34uLL);
  v15 = v14;
  if ( v14 )
  {
    v14[10] = a2;
    *v14 = 3407884;
    v14[12] = *a3;
    v16 = *((_QWORD *)this + 2);
    v20 = 0x40000000;
    a5 = 52LL;
    v17 = NtAlpcSendWaitReceivePort(v16, 0x20000LL, v14, &v20, v14, &a5, 0LL, 0LL);
    if ( v17 == -1073741769 || v17 == -1073741229 )
      _InterlockedCompareExchange((volatile signed __int32 *)this + 2, 1, 0);
    if ( v17 >= 0 )
    {
      *a9 = v15[11];
    }
    else
    {
      v12 = v17 | 0x10000000;
      MilInstrumentationCheckHR_MaybeFailFast(
        4,
        &CPortClient::MILINSTRUMENTATIONHRESULTLIST,
        9u,
        v17 | 0x10000000,
        0x214u,
        0LL);
    }
    v18 = GetProcessHeap();
    HeapFree(v18, 0, v15);
  }
  else
  {
    v12 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(
      4,
      &CPortClient::MILINSTRUMENTATIONHRESULTLIST,
      9u,
      -2147024882,
      0x1F9u,
      0LL);
  }
  return v12;
}
