/*
 * XREFs of ?SendNotification@CApiPortClient@@QEAAJPEAXF@Z @ 0x18000F104
 * Callers:
 *     DwmpNotifyUserLogon @ 0x18000D920 (DwmpNotifyUserLogon.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000E74C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?EnsureConnected@CApiPortClient@@AEAAJXZ @ 0x18000EE2C (-EnsureConnected@CApiPortClient@@AEAAJXZ.c)
 *     ?Translate@CApiPortClient@@CAJJ@Z @ 0x18000F668 (-Translate@CApiPortClient@@CAJJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180012010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CApiPortClient::SendNotification(CApiPortClient *this, _OWORD *a2)
{
  unsigned int v3; // ebx
  CApiPortClient *v4; // rcx
  int v5; // esi
  int v6; // eax
  __int64 v7; // rbx
  int v8; // ebp
  int v9; // edi
  _DWORD *v10; // rax
  void *v11; // r14
  int v12; // eax
  __int64 v13; // rbx
  int v14; // eax
  int v15; // eax

  v3 = -2144980991;
  EnterCriticalSection(&stru_180019DC0);
  if ( !qword_180019DB8 || (v5 = 1, !*(_QWORD *)(qword_180019DB8 + 16)) )
    v5 = 0;
  if ( !byte_180019DE8 )
  {
    do
    {
      v6 = CApiPortClient::EnsureConnected(v4);
      v3 = v6;
      if ( v6 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(4, &CApiPortClient::MILINSTRUMENTATIONHRESULTLIST, 2u, v6, 0x6Du, 0LL);
        goto LABEL_30;
      }
      v7 = qword_180019DB8;
      if ( qword_180019DB8 )
        _InterlockedAdd((volatile signed __int32 *)(qword_180019DB8 + 56), 1u);
      LeaveCriticalSection(&stru_180019DC0);
      v8 = *(_DWORD *)a2;
      v9 = 0;
      v10 = HeapAlloc(*(HANDLE *)(v7 + 48), 8u, 0x50uLL);
      v11 = v10;
      if ( v10 )
      {
        v10[10] = v8;
        *v10 = 5242920;
        *((_OWORD *)v10 + 3) = *a2;
        *((_OWORD *)v10 + 4) = a2[1];
        v12 = NtAlpcSendWaitReceivePort(*(_QWORD *)(v7 + 16), 0x10000LL, v10, 0LL, 0LL, 0LL, 0LL, 0LL);
        if ( v12 == -1073741769 || v12 == -1073741229 )
          _InterlockedCompareExchange((volatile signed __int32 *)(v7 + 8), 1, 0);
        if ( v12 < 0 )
        {
          v9 = v12 | 0x10000000;
          MilInstrumentationCheckHR_MaybeFailFast(
            4,
            &CPortClient::MILINSTRUMENTATIONHRESULTLIST,
            9u,
            v12 | 0x10000000,
            0x1C2u,
            0LL);
        }
        HeapFree(*(HANDLE *)(v7 + 48), 0, v11);
      }
      else
      {
        v9 = -2147024882;
        MilInstrumentationCheckHR_MaybeFailFast(
          4,
          &CPortClient::MILINSTRUMENTATIONHRESULTLIST,
          9u,
          -2147024882,
          0x1B1u,
          0LL);
      }
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v7 + 56), 0xFFFFFFFF) == 1 )
        (**(void (__fastcall ***)(__int64, __int64))v7)(v7, 1LL);
      EnterCriticalSection(&stru_180019DC0);
      v13 = qword_180019DB8;
      if ( qword_180019DB8
        && _InterlockedCompareExchange((volatile signed __int32 *)(qword_180019DB8 + 56), 1, 1) == 1
        && *(_DWORD *)(v13 + 8) )
      {
        if ( *(_BYTE *)(v13 + 24) )
        {
          v4 = *(CApiPortClient **)(v13 + 16);
          if ( v4 )
          {
            CloseHandle(v4);
            *(_BYTE *)(v13 + 24) = 0;
          }
        }
        *(_DWORD *)(v13 + 8) = 0;
        *(_QWORD *)(v13 + 16) = 0LL;
      }
      if ( v9 != -805306313 )
        break;
      v14 = v5--;
    }
    while ( v14 > 0 );
    v15 = CApiPortClient::Translate(v9);
    v3 = v15;
    if ( v15 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(4, &CApiPortClient::MILINSTRUMENTATIONHRESULTLIST, 2u, v15, 0x86u, 0LL);
  }
LABEL_30:
  LeaveCriticalSection(&stru_180019DC0);
  return v3;
}
