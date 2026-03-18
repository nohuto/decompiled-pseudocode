/*
 * XREFs of DxgkGetPresentStats @ 0x140338344
 * Callers:
 *     ?CompleteIndependentFlipToken@CTokenManager@@IEAAJ_KAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@I@Z @ 0x14001D29C (-CompleteIndependentFlipToken@CTokenManager@@IEAAJ_KAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@I.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000A0F0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14000B9E0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??1DXGADAPTERBYHANDLE@@QEAA@XZ @ 0x14000C948 (--1DXGADAPTERBYHANDLE@@QEAA@XZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x14000C9A0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z @ 0x14000F940 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z.c)
 *     ?AcquireShared@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x140011820 (-AcquireShared@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x140012300 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140022E00 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x14002DF18 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x14029C800 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkGetPresentStats(__int64 a1, unsigned int a2, unsigned int a3, __int64 a4)
{
  __int64 v4; // r13
  struct DXGPROCESS *Current; // rax
  struct DXGPROCESS *v6; // rbx
  __int64 v7; // rsi
  __int64 result; // rax
  struct _KTHREAD **v9; // rcx
  __int64 v10; // rdi
  __int64 v11; // rsi
  __int64 v12; // r8
  __int64 v13; // rdi
  int v14; // edx
  __int64 v15; // rdi
  __int64 v16; // r8
  __int64 v17; // rdi
  int v18; // edx
  unsigned __int64 v19; // rdx
  int v20; // eax
  const wchar_t *v21; // r9
  __int64 v22; // rax
  unsigned int v23; // ebx
  unsigned __int64 v24; // rdx
  struct _KTHREAD **v27; // [rsp+58h] [rbp-A8h] BYREF
  char v28; // [rsp+60h] [rbp-A0h]
  DXGADAPTER *v29[2]; // [rsp+68h] [rbp-98h] BYREF
  __int64 v30; // [rsp+78h] [rbp-88h]
  char v31[8]; // [rsp+80h] [rbp-80h] BYREF
  char *v32; // [rsp+88h] [rbp-78h]
  int v33; // [rsp+90h] [rbp-70h]
  _BYTE v34[144]; // [rsp+A0h] [rbp-60h] BYREF

  v30 = a4;
  v4 = (unsigned int)a1;
  Current = DXGPROCESS::GetCurrent(a1);
  v6 = Current;
  if ( !Current )
  {
    LODWORD(v7) = -1073741811;
    WdLogSingleEntry1(2LL, -1073741811LL);
    WdLogGlobalForLineNumber = 641;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Invalid process context, returning 0x%I64x",
      -1073741811LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return (unsigned int)v7;
  }
  if ( !(*(unsigned int (**)(void))(*((_QWORD *)Current + 11) + 232LL))() )
  {
    WdLogSingleEntry2(3LL, v6, -1073741790LL);
    result = 3221225506LL;
    WdLogGlobalForLineNumber = 653;
    return result;
  }
  v9 = (struct _KTHREAD **)((char *)v6 + 104);
  v28 = 0;
  v27 = (struct _KTHREAD **)((char *)v6 + 104);
  if ( v6 == (struct DXGPROCESS *)-104LL )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 637;
    DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"m_pMutex != NULL", 637LL, 0LL, 0LL, 0LL, 0LL);
    v9 = v27;
  }
  if ( v9[3] == KeGetCurrentThread() )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 644;
    DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"!m_pMutex->IsOwner()", 644LL, 0LL, 0LL, 0LL, 0LL);
  }
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v27);
  v33 = 0;
  v32 = (char *)v6 + 248;
  if ( v6 != (struct DXGPROCESS *)-248LL && *((struct _KTHREAD **)v6 + 32) == KeGetCurrentThread() )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1512;
    DxgkLogInternalTriageEvent(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"bAllowAcquireRecursive || pPushLock == NULL || !m_pPushLock->IsExclusiveOwner()",
      1512LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  DXGAUTOPUSHLOCK::AcquireShared((DXGAUTOPUSHLOCK *)v31);
  v10 = ((unsigned int)v4 >> 6) & 0xFFFFFF;
  if ( (*((_DWORD *)v6 + 102) & 0x100) != 0 )
  {
    v11 = *((_QWORD *)v6 + 74);
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v11 + 248));
    if ( (unsigned int)v10 < *(_DWORD *)(v11 + 296) )
    {
      v12 = *(_QWORD *)(v11 + 280);
      v13 = 2 * v10;
      if ( (((unsigned int)v4 >> 25) & 0x60) == (*(_BYTE *)(v12 + 8 * v13 + 8) & 0x60)
        && (*(_DWORD *)(v12 + 8 * v13 + 8) & 0x2000) == 0 )
      {
        v14 = *(_DWORD *)(v12 + 8 * v13 + 8) & 0x1F;
        if ( v14 )
        {
          if ( v14 == 1 )
          {
            v15 = *(_QWORD *)(v12 + 8 * v13);
LABEL_21:
            _InterlockedDecrement((volatile signed __int32 *)(v11 + 264));
            ExReleasePushLockSharedEx(v11 + 248, 0LL);
            KeLeaveCriticalRegion();
            goto LABEL_29;
          }
          WdLogSingleEntry0(2LL);
          WdLogGlobalForLineNumber = 318;
          DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
        }
      }
    }
    v15 = 0LL;
    goto LABEL_21;
  }
  if ( (unsigned int)v10 < *((_DWORD *)v6 + 74) )
  {
    v16 = *((_QWORD *)v6 + 35);
    v17 = 2 * v10;
    if ( (((unsigned int)v4 >> 25) & 0x60) == (*(_BYTE *)(v16 + 8 * v17 + 8) & 0x60)
      && (*(_DWORD *)(v16 + 8 * v17 + 8) & 0x2000) == 0 )
    {
      v18 = *(_DWORD *)(v16 + 8 * v17 + 8) & 0x1F;
      if ( v18 )
      {
        if ( v18 == 1 )
        {
          v15 = *(_QWORD *)(v16 + 8 * v17);
          goto LABEL_29;
        }
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 318;
        DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
      }
    }
  }
  v15 = 0LL;
LABEL_29:
  v29[0] = (DXGADAPTER *)v15;
  if ( v15 )
  {
    _InterlockedIncrement64((volatile signed __int64 *)(v15 + 24));
    v29[1] = (DXGADAPTER *)-1LL;
  }
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v31);
  if ( v15 )
  {
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v34, (struct DXGADAPTER *const)v15, 0LL);
    v20 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v34, 0LL);
    v7 = v20;
    if ( v20 >= 0 )
    {
      if ( !*(_BYTE *)(v15 + 3017) )
      {
        v22 = *(_QWORD *)(v15 + 3128);
        if ( v22 )
        {
          v23 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64))(*(_QWORD *)(*(_QWORD *)(v22 + 736) + 8LL)
                                                                           + 504LL))(
                  *(_QWORD *)(v22 + 744),
                  a2,
                  a3,
                  v30);
          COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v34);
          DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE(v29, v24);
          DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v27);
          return v23;
        }
      }
      v7 = -1073741811LL;
      WdLogSingleEntry2(2LL, v15, -1073741811LL);
      v21 = L"DXGADAPTER 0x%I64x is not an active render adapter, returning 0x%I64x";
      WdLogGlobalForLineNumber = 695;
    }
    else
    {
      WdLogSingleEntry2(2LL, v15, v20);
      v21 = L"Failed to acquire shared access for DXGADAPTER 0x%I64x, returning 0x%I64x";
      WdLogGlobalForLineNumber = 686;
    }
    DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, v21, v15, v7, 0LL, 0LL, 0LL);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v34);
  }
  else
  {
    LODWORD(v7) = -1073741811;
    WdLogSingleEntry2(2LL, v4, -1073741811LL);
    WdLogGlobalForLineNumber = 674;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Invalid hAdapter (0x%I64x) specified, returning 0x%I64x",
      v4,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
  }
  DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE(v29, v19);
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v27);
  return (unsigned int)v7;
}
