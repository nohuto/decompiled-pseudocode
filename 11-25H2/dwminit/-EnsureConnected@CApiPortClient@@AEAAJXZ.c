/*
 * XREFs of ?EnsureConnected@CApiPortClient@@AEAAJXZ @ 0x18000EE2C
 * Callers:
 *     ?SendNotification@CApiPortClient@@QEAAJPEAXF@Z @ 0x18000F104 (-SendNotification@CApiPortClient@@QEAAJPEAXF@Z.c)
 *     ?SendRequest@CApiPortClient@@QEAAJPEBXFPEAJPEAXF@Z @ 0x18000F3AC (-SendRequest@CApiPortClient@@QEAAJPEBXFPEAJPEAXF@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1800021A0 (__security_check_cookie.c)
 *     ??2@YAPEAX_K@Z @ 0x18000282C (--2@YAPEAX_K@Z.c)
 *     memset_0 @ 0x180003118 (memset_0.c)
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x180008EE8 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000E74C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Disconnect@CApiPortClient@@AEAAXXZ @ 0x18000EDE8 (-Disconnect@CApiPortClient@@AEAAXXZ.c)
 *     ?Translate@CApiPortClient@@CAJJ@Z @ 0x18000F668 (-Translate@CApiPortClient@@CAJJ@Z.c)
 *     ?ConnectWithName@CPortClient@@QEAAJPEBG@Z @ 0x18000F76C (-ConnectWithName@CPortClient@@QEAAJPEBG@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180012010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CApiPortClient::EnsureConnected(CApiPortClient *this)
{
  unsigned int v1; // ebx
  void *v2; // rax
  __int64 v3; // rcx
  __int64 v4; // rdi
  HANDLE ProcessHeap; // rax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  unsigned __int16 v11[48]; // [rsp+40h] [rbp-D8h] BYREF
  unsigned __int16 v12[48]; // [rsp+A0h] [rbp-78h] BYREF

  if ( qword_180019DB8 && *(_QWORD *)(qword_180019DB8 + 16) )
    return 0;
  CApiPortClient::Disconnect((CApiPortClient *)&g_PortClient);
  v2 = operator new(0x40uLL);
  v3 = qword_180019DB0;
  v4 = (__int64)v2;
  LODWORD(v2) = g_PortClient;
  *(_QWORD *)(v4 + 16) = 0LL;
  *(_QWORD *)(v4 + 40) = 0LL;
  *(_QWORD *)v4 = &CPortClient::`vftable';
  *(_DWORD *)(v4 + 8) = 0;
  *(_BYTE *)(v4 + 24) = 0;
  *(_DWORD *)(v4 + 28) = (_DWORD)v2;
  *(_QWORD *)(v4 + 32) = v3;
  ProcessHeap = GetProcessHeap();
  *(_DWORD *)(v4 + 56) = 1;
  *(_QWORD *)(v4 + 48) = ProcessHeap;
  *(_QWORD *)v4 = &CPortClientRefCounted::`vftable';
  memset_0(v11, 0, 0x52uLL);
  memset_0(v12, 0, 0x52uLL);
  LeaveCriticalSection(&stru_180019DC0);
  if ( NtCurrentPeb()->SessionId
    && (v6 = StringCchPrintfW(v11, 41LL, L"\\Sessions\\%d", NtCurrentPeb()->SessionId), v1 = v6, v6 < 0) )
  {
    MilInstrumentationCheckHR_MaybeFailFast(4, &CApiPortClient::MILINSTRUMENTATIONHRESULTLIST, 2u, v6, 0x10Cu, 0LL);
  }
  else
  {
    v7 = StringCchPrintfW(v12, 41LL, L"%s\\Windows\\DwmApiPort", v11);
    v1 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(4, &CApiPortClient::MILINSTRUMENTATIONHRESULTLIST, 2u, v7, 0x113u, 0LL);
    }
    else
    {
      v8 = CPortClient::ConnectWithName((CPortClient *)v4, v12);
      v9 = CApiPortClient::Translate(v8);
      v1 = v9;
      if ( v9 >= 0 )
      {
        EnterCriticalSection(&stru_180019DC0);
        if ( !qword_180019DB8 )
        {
          qword_180019DB8 = v4;
          return v1;
        }
        goto LABEL_14;
      }
      MilInstrumentationCheckHR_MaybeFailFast(4, &CApiPortClient::MILINSTRUMENTATIONHRESULTLIST, 2u, v9, 0x116u, 0LL);
    }
  }
  EnterCriticalSection(&stru_180019DC0);
LABEL_14:
  if ( v4 && _InterlockedExchangeAdd((volatile signed __int32 *)(v4 + 56), 0xFFFFFFFF) == 1 )
    (**(void (__fastcall ***)(__int64, __int64))v4)(v4, 1LL);
  return v1;
}
