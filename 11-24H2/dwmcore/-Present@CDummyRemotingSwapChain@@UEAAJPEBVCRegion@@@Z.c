/*
 * XREFs of ?Present@CDummyRemotingSwapChain@@UEAAJPEBVCRegion@@@Z @ 0x1802C7300
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?NotifyPresent@CPresentStats@CDummyRemotingSwapChain@@QEAAJPEAVCD3DDevice@@I@Z @ 0x1802C7268 (-NotifyPresent@CPresentStats@CDummyRemotingSwapChain@@QEAAJPEAVCD3DDevice@@I@Z.c)
 */

__int64 __fastcall CDummyRemotingSwapChain::Present(CDummyRemotingSwapChain *this, const struct CRegion *a2)
{
  unsigned int v2; // ebx
  unsigned int v3; // edx
  _BYTE *v4; // r8
  __int64 v5; // r10
  bool v6; // zf
  unsigned int v7; // eax
  struct CD3DDevice *v8; // rdx
  int v9; // eax
  int v10; // eax
  unsigned int v12; // [rsp+20h] [rbp-18h]

  if ( *(_DWORD *)(*((_QWORD *)this + 6) + 1112LL) )
  {
    v2 = -2003304307;
    v12 = 209;
LABEL_11:
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v2, v12, 0LL);
    return v2;
  }
  v3 = 0;
  v4 = (char *)this + 193;
  v5 = 2LL;
  do
  {
    v6 = *v4 == 0;
    v7 = v3 + 1;
    v4 += 96;
    if ( !v6 )
      v7 = v3;
    v3 = v7;
    --v5;
  }
  while ( v5 );
  if ( v7 >= 2 )
  {
    v2 = -2003304309;
    v12 = 221;
    goto LABEL_11;
  }
  v8 = (struct CD3DDevice *)*((_QWORD *)this + 6);
  v9 = *((_DWORD *)this + 74) + 1;
  *((_DWORD *)this + 74) = v9;
  v10 = CDummyRemotingSwapChain::CPresentStats::NotifyPresent(
          (CDummyRemotingSwapChain *)((char *)this + 96 * (v9 & 1) + 104),
          v8,
          v9);
  v2 = v10;
  if ( v10 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v10, 0xD9u, 0LL);
  return v2;
}
