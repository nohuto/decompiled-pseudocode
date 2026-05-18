/*
 * XREFs of ?SendNotification@CApiPortClient@@QEAAJPEAXF@Z @ 0x18000F890
 * Callers:
 *     DwmpNotifyUserLogon @ 0x18000E090 (DwmpNotifyUserLogon.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000EF88 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?EnsureConnected@CApiPortClient@@AEAAJXZ @ 0x18000F66C (-EnsureConnected@CApiPortClient@@AEAAJXZ.c)
 *     ?Translate@CApiPortClient@@CAJJ@Z @ 0x18000FCA4 (-Translate@CApiPortClient@@CAJJ@Z.c)
 *     ?Disconnect@CPortClient@@QEAAXXZ @ 0x18000FE5C (-Disconnect@CPortClient@@QEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180012010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CApiPortClient::SendNotification(CApiPortClient *this, _OWORD *a2)
{
  unsigned int v3; // ebx
  CPortClient *v4; // rcx
  int v5; // esi
  int v6; // eax
  CPortClient *v7; // rbx
  int v8; // ebp
  int v9; // edi
  HANDLE ProcessHeap; // rax
  _DWORD *v11; // rax
  void *v12; // r14
  int v13; // eax
  HANDLE v14; // rax
  int v15; // eax
  int v16; // eax

  v3 = -2144980991;
  EnterCriticalSection(&stru_18001ADE0);
  v5 = qword_18001ADD8 && *((_QWORD *)qword_18001ADD8 + 2);
  if ( !byte_18001AE08 )
  {
    do
    {
      v6 = CApiPortClient::EnsureConnected(v4);
      v3 = v6;
      if ( v6 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(4, &CApiPortClient::MILINSTRUMENTATIONHRESULTLIST, 2u, v6, 0x69u, 0LL);
        goto LABEL_29;
      }
      v7 = qword_18001ADD8;
      if ( qword_18001ADD8 )
        _InterlockedAdd((volatile signed __int32 *)qword_18001ADD8 + 10, 1u);
      LeaveCriticalSection(&stru_18001ADE0);
      v8 = *(_DWORD *)a2;
      v9 = 0;
      ProcessHeap = GetProcessHeap();
      v11 = HeapAlloc(ProcessHeap, 8u, 0x50uLL);
      v12 = v11;
      if ( v11 )
      {
        v11[10] = v8;
        *v11 = 5242920;
        *((_OWORD *)v11 + 3) = *a2;
        *((_OWORD *)v11 + 4) = a2[1];
        v13 = NtAlpcSendWaitReceivePort(*((_QWORD *)v7 + 2), 0x10000LL, v11, 0LL, 0LL, 0LL, 0LL, 0LL);
        if ( v13 == -1073741769 || v13 == -1073741229 )
          _InterlockedCompareExchange((volatile signed __int32 *)v7 + 2, 1, 0);
        if ( v13 < 0 )
        {
          v9 = v13 | 0x10000000;
          MilInstrumentationCheckHR_MaybeFailFast(
            4,
            &CPortClient::MILINSTRUMENTATIONHRESULTLIST,
            9u,
            v13 | 0x10000000,
            0x1B0u,
            0LL);
        }
        v14 = GetProcessHeap();
        HeapFree(v14, 0, v12);
      }
      else
      {
        v9 = -2147024882;
        MilInstrumentationCheckHR_MaybeFailFast(
          4,
          &CPortClient::MILINSTRUMENTATIONHRESULTLIST,
          9u,
          -2147024882,
          0x19Fu,
          0LL);
      }
      if ( v7 && _InterlockedExchangeAdd((volatile signed __int32 *)v7 + 10, 0xFFFFFFFF) == 1 )
        (**(void (__fastcall ***)(CPortClient *, __int64))v7)(v7, 1LL);
      EnterCriticalSection(&stru_18001ADE0);
      v4 = qword_18001ADD8;
      if ( qword_18001ADD8
        && _InterlockedCompareExchange((volatile signed __int32 *)qword_18001ADD8 + 10, 1, 1) == 1
        && *((_DWORD *)v4 + 2) )
      {
        CPortClient::Disconnect(v4);
      }
      if ( v9 != -805306313 )
        break;
      v15 = v5--;
    }
    while ( v15 > 0 );
    v16 = CApiPortClient::Translate(v9);
    v3 = v16;
    if ( v16 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(4, &CApiPortClient::MILINSTRUMENTATIONHRESULTLIST, 2u, v16, 0x82u, 0LL);
  }
LABEL_29:
  LeaveCriticalSection(&stru_18001ADE0);
  return v3;
}
