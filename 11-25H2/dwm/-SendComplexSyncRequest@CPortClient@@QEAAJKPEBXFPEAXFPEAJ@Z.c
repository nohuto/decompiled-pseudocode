/*
 * XREFs of ?SendComplexSyncRequest@CPortClient@@QEAAJKPEBXFPEAXFPEAJ@Z @ 0x140002C40
 * Callers:
 *     ?LpcSyncFlush@CDwmAppHost@@AEAAJXZ @ 0x140003934 (-LpcSyncFlush@CDwmAppHost@@AEAAJXZ.c)
 * Callees:
 *     ?CheckStatus@CPortClient@@AEAAJJ@Z @ 0x140002E50 (-CheckStatus@CPortClient@@AEAAJJ@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1400030AC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?LpcVerifyOutgoingPayloadSize@@YAXPEBU_PORT_MESSAGE@@@Z @ 0x140003168 (-LpcVerifyOutgoingPayloadSize@@YAXPEBU_PORT_MESSAGE@@@Z.c)
 */

__int64 __fastcall CPortClient::SendComplexSyncRequest(
        HANDLE *this,
        ULONG a2,
        HANDLE *a3,
        __int64 a4,
        void *a5,
        __int16 a6,
        int *a7)
{
  unsigned int v7; // ebx
  struct _PORT_MESSAGE *v11; // rax
  struct _PORT_MESSAGE *v12; // rdi
  HANDLE v13; // rcx
  int v14; // eax
  int v15; // eax
  __int64 v17; // [rsp+60h] [rbp+8h] BYREF

  v7 = 0;
  v11 = (struct _PORT_MESSAGE *)HeapAlloc(this[6], 8u, 0x38uLL);
  v12 = v11;
  if ( v11 )
  {
    v11[1].u1.Length = a2;
    v11->u1.Length = 3670032;
    LpcVerifyOutgoingPayloadSize(v11);
    v12[1].ClientId.UniqueProcess = *a3;
    v13 = this[2];
    v17 = 56LL;
    v14 = NtAlpcSendWaitReceivePort(v13, 0x20000LL, v12, 0LL, v12, &v17, 0LL, 0LL);
    v15 = CPortClient::CheckStatus((CPortClient *)this, v14);
    if ( v15 < 0 )
    {
      v7 = v15 | 0x10000000;
      MilInstrumentationCheckHR_MaybeFailFast(
        4u,
        &CPortClient::MILINSTRUMENTATIONHRESULTLIST,
        9u,
        v15 | 0x10000000,
        0x216u,
        0LL);
    }
    else
    {
      *a7 = v12[1].u2.ZeroInit;
    }
    HeapFree(this[6], 0, v12);
  }
  else
  {
    v7 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(
      4u,
      &CPortClient::MILINSTRUMENTATIONHRESULTLIST,
      9u,
      -2147024882,
      0x204u,
      0LL);
  }
  return v7;
}
