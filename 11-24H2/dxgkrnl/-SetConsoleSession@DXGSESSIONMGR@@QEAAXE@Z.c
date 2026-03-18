/*
 * XREFs of ?SetConsoleSession@DXGSESSIONMGR@@QEAAXE@Z @ 0x1403E6C8C
 * Callers:
 *     ?DestroySession@DXGSESSIONMGR@@QEAAXXZ @ 0x1401FA6BC (-DestroySession@DXGSESSIONMGR@@QEAAXXZ.c)
 *     DxgkSessionConnected @ 0x1403981A0 (DxgkSessionConnected.c)
 *     DxgkSessionReconnected @ 0x1403984F0 (DxgkSessionReconnected.c)
 *     DxgkPreSessionDisconnected @ 0x1403E6B70 (DxgkPreSessionDisconnected.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000A0F0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14000B9E0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x140022D5C (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140022E00 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x140028A90 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ??0DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAA@AEAVDXGPUSHLOCKFAST@@_N@Z @ 0x14004CD50 (--0DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAA@AEAVDXGPUSHLOCKFAST@@_N@Z.c)
 *     Feature_DispBrokerOptimizations__private_IsEnabledDeviceUsageNoInline @ 0x14006799C (Feature_DispBrokerOptimizations__private_IsEnabledDeviceUsageNoInline.c)
 *     ?RegisterTtmDevice@CTTMDEVICE@@QEAAJPEAVDXGSESSIONDATA@@@Z @ 0x1401FB170 (-RegisterTtmDevice@CTTMDEVICE@@QEAAJPEAVDXGSESSIONDATA@@@Z.c)
 *     ?UnRegisterTtmDevice@CTTMDEVICE@@QEAAXE@Z @ 0x1401FC750 (-UnRegisterTtmDevice@CTTMDEVICE@@QEAAXE@Z.c)
 *     ?GetSessionData@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1402D48DC (-GetSessionData@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 */

void __fastcall DXGSESSIONMGR::SetConsoleSession(struct DXGSESSIONDATA **this, char a2)
{
  struct DXGSESSIONDATA *SessionData; // r14
  struct DXGSESSIONDATA *v5; // rax
  CTTMDEVICE *v6; // rsi
  CTTMDEVICE *v7; // r13
  CTTMDEVICE *v8; // rcx
  int v9; // eax
  __int64 v10; // rbx
  struct DXGSESSIONDATA *v11; // rax
  __int64 v12; // rdx
  struct DXGSESSIONDATA *v13; // rcx
  _QWORD *i; // rbx
  CTTMDEVICE *v15; // rsi
  __int64 v16; // rcx
  __int64 v17; // [rsp+58h] [rbp-29h] BYREF
  char v18; // [rsp+60h] [rbp-21h]
  _BYTE v19[16]; // [rsp+68h] [rbp-19h] BYREF
  _BYTE v20[16]; // [rsp+78h] [rbp-9h] BYREF
  _BYTE v21[16]; // [rsp+88h] [rbp+7h] BYREF
  _BYTE v22[32]; // [rsp+98h] [rbp+17h] BYREF

  SessionData = DXGSESSIONMGR::GetSessionData((DXGSESSIONMGR *)this);
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v21, (struct DXGFASTMUTEX *const)this, 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v21);
  DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE(
    (DXGAUTOPUSHLOCKEXCLUSIVE *)v22,
    (struct _KTHREAD **)SessionData + 2319);
  if ( a2 )
  {
    if ( this[17] )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 7211;
      DxgkLogInternalTriageEvent(
        0LL,
        262146LL,
        0xFFFFFFFFLL,
        L"m_pConsoleSessionData == NULL",
        7211LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    if ( (unsigned int)Feature_DispBrokerOptimizations__private_IsEnabledDeviceUsageNoInline() )
    {
      DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v19, (struct DXGFASTMUTEX *const)(this + 11), 0);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v19);
      this[17] = SessionData;
      *((_DWORD *)this + 36) = *(_DWORD *)SessionData;
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v19);
    }
    else
    {
      this[17] = SessionData;
      *((_DWORD *)this + 36) = *(_DWORD *)SessionData;
    }
  }
  v5 = this[17];
  if ( v5 && *((_BYTE *)v5 + 18497) )
  {
    DXGAUTOPUSHLOCKFASTEXCLUSIVE::DXGAUTOPUSHLOCKFASTEXCLUSIVE(
      (DXGAUTOPUSHLOCKFASTEXCLUSIVE *)&v17,
      (struct DXGPUSHLOCKFAST *)(this + 42));
    if ( a2 )
    {
      v6 = this[45];
      while ( v6 != (CTTMDEVICE *)(this + 45) )
      {
        v7 = v6;
        if ( *((_QWORD *)v6 + 4) )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 7257;
          DxgkLogInternalTriageEvent(
            0LL,
            262146LL,
            0xFFFFFFFFLL,
            L"pTmmDevice->m_pRegisteredSession == NULL",
            7257LL,
            0LL,
            0LL,
            0LL,
            0LL);
        }
        v8 = v6;
        v6 = *(CTTMDEVICE **)v6;
        v9 = CTTMDEVICE::RegisterTtmDevice(v8, this[17]);
        if ( (int)(v9 + 0x80000000) >= 0 && v9 != -1073741130 )
        {
          v10 = v9;
          WdLogSingleEntry4(2LL, *((unsigned int *)v7 + 20), *((_QWORD *)v7 + 8), *(unsigned int *)this[17], v9);
          v11 = this[17];
          v12 = *((unsigned int *)v7 + 20);
          WdLogGlobalForLineNumber = 7277;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000LL,
            0xFFFFFFFFLL,
            L"Failed to register TTM device for target 0x%I64x on adapter 0x%I64x to current console session 0x%I64x, (Status = 0x%I64x).",
            v12,
            *((_QWORD *)v7 + 8),
            *(unsigned int *)v11,
            v10,
            0LL);
        }
      }
    }
    else
    {
      v13 = this[17];
      if ( v13 )
      {
        for ( i = (_QWORD *)*((_QWORD *)v13 + 2327); i != (_QWORD *)((char *)v13 + 18616); v13 = this[17] )
        {
          v15 = (CTTMDEVICE *)(i - 2);
          if ( (struct DXGSESSIONDATA *)i[2] != v13 )
          {
            WdLogSingleEntry0(1LL);
            WdLogGlobalForLineNumber = 7292;
            DxgkLogInternalTriageEvent(
              0LL,
              262146LL,
              0xFFFFFFFFLL,
              L"pTmmDevice->m_pRegisteredSession == m_pConsoleSessionData",
              7292LL,
              0LL,
              0LL,
              0LL,
              0LL);
          }
          i = (_QWORD *)*i;
          CTTMDEVICE::UnRegisterTtmDevice(v15, 1);
        }
      }
    }
    if ( v18 )
    {
      v16 = v17;
      *(_QWORD *)(v17 + 8) = 0LL;
      ExReleasePushLockExclusiveEx(v16, 0LL);
      KeLeaveCriticalRegion();
      v18 = 0;
    }
  }
  if ( !a2 )
  {
    if ( this[17] != SessionData )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 7310;
      DxgkLogInternalTriageEvent(
        0LL,
        262146LL,
        0xFFFFFFFFLL,
        L"m_pConsoleSessionData == pSessionData",
        7310LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    if ( (unsigned int)Feature_DispBrokerOptimizations__private_IsEnabledDeviceUsageNoInline() )
    {
      DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v20, (struct DXGFASTMUTEX *const)(this + 11), 0);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v20);
      *((_DWORD *)this + 36) = -1;
      this[17] = 0LL;
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v20);
    }
    else
    {
      *((_DWORD *)this + 36) = -1;
      this[17] = 0LL;
    }
  }
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v22);
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v21);
}
