/*
 * XREFs of ?SendRequest@CApiPortClient@@QEAAJPEBXFPEAJPEAXF@Z @ 0x18000F3AC
 * Callers:
 *     DwmpNotifyUserLogoff @ 0x18000D890 (DwmpNotifyUserLogoff.c)
 *     DwmpTerminateSessionProcess @ 0x18000DFC0 (DwmpTerminateSessionProcess.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000E74C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?EnsureConnected@CApiPortClient@@AEAAJXZ @ 0x18000EE2C (-EnsureConnected@CApiPortClient@@AEAAJXZ.c)
 *     ?Translate@CApiPortClient@@CAJJ@Z @ 0x18000F668 (-Translate@CApiPortClient@@CAJJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180012010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CApiPortClient::SendRequest(CApiPortClient *this, int *a2, __int64 a3, int *a4)
{
  unsigned int v6; // ebx
  CApiPortClient *v7; // rcx
  int v8; // ebp
  int v9; // r15d
  int v10; // eax
  __int64 v11; // rbx
  int v12; // edi
  int v13; // r14d
  _DWORD *v14; // rax
  _DWORD *v15; // rsi
  int v16; // eax
  __int64 v17; // rbx
  int v18; // eax
  int v19; // eax
  __int64 v21; // [rsp+80h] [rbp+8h] BYREF

  v21 = (__int64)this;
  v6 = -2144980991;
  EnterCriticalSection(&stru_180019DC0);
  if ( !qword_180019DB8 || (v8 = 1, !*(_QWORD *)(qword_180019DB8 + 16)) )
    v8 = 0;
  if ( !byte_180019DE8 )
  {
    v9 = 0;
    do
    {
      v10 = CApiPortClient::EnsureConnected(v7);
      v6 = v10;
      if ( v10 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(4, &CApiPortClient::MILINSTRUMENTATIONHRESULTLIST, 2u, v10, 0xA6u, 0LL);
        goto LABEL_33;
      }
      v11 = qword_180019DB8;
      if ( qword_180019DB8 )
        _InterlockedAdd((volatile signed __int32 *)(qword_180019DB8 + 56), 1u);
      LeaveCriticalSection(&stru_180019DC0);
      v12 = 0;
      v13 = *a2;
      v14 = HeapAlloc(*(HANDLE *)(v11 + 48), 8u, 0x34uLL);
      v15 = v14;
      if ( v14 )
      {
        v14[10] = v13;
        *v14 = 3407884;
        v14[12] = *a2;
        v21 = 52LL;
        v16 = NtAlpcSendWaitReceivePort(*(_QWORD *)(v11 + 16), 0x20000LL, v14, 0LL, v14, &v21, 0LL, 0LL);
        if ( v16 == -1073741769 || v16 == -1073741229 )
          _InterlockedCompareExchange((volatile signed __int32 *)(v11 + 8), 1, 0);
        if ( v16 >= 0 )
        {
          v9 = v15[11];
        }
        else
        {
          v12 = v16 | 0x10000000;
          MilInstrumentationCheckHR_MaybeFailFast(
            4,
            &CPortClient::MILINSTRUMENTATIONHRESULTLIST,
            9u,
            v16 | 0x10000000,
            0x216u,
            0LL);
        }
        HeapFree(*(HANDLE *)(v11 + 48), 0, v15);
      }
      else
      {
        v12 = -2147024882;
        MilInstrumentationCheckHR_MaybeFailFast(
          4,
          &CPortClient::MILINSTRUMENTATIONHRESULTLIST,
          9u,
          -2147024882,
          0x204u,
          0LL);
      }
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v11 + 56), 0xFFFFFFFF) == 1 )
        (**(void (__fastcall ***)(__int64, __int64))v11)(v11, 1LL);
      EnterCriticalSection(&stru_180019DC0);
      v17 = qword_180019DB8;
      if ( qword_180019DB8
        && _InterlockedCompareExchange((volatile signed __int32 *)(qword_180019DB8 + 56), 1, 1) == 1
        && *(_DWORD *)(v17 + 8) )
      {
        if ( *(_BYTE *)(v17 + 24) )
        {
          v7 = *(CApiPortClient **)(v17 + 16);
          if ( v7 )
          {
            CloseHandle(v7);
            *(_BYTE *)(v17 + 24) = 0;
          }
        }
        *(_DWORD *)(v17 + 8) = 0;
        *(_QWORD *)(v17 + 16) = 0LL;
      }
      if ( v12 != -805306313 )
        break;
      v18 = v8--;
    }
    while ( v18 > 0 );
    v19 = CApiPortClient::Translate(v12);
    v6 = v19;
    if ( v19 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(4, &CApiPortClient::MILINSTRUMENTATIONHRESULTLIST, 2u, v19, 0xC5u, 0LL);
    else
      *a4 = CApiPortClient::Translate(v9);
  }
LABEL_33:
  LeaveCriticalSection(&stru_180019DC0);
  return v6;
}
