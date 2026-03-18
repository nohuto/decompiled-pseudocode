/*
 * XREFs of DxgkGetPresentStats @ 0x14034A864
 * Callers:
 *     ?CompleteIndependentFlipToken@CTokenManager@@IEAAJ_KAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@I@Z @ 0x14000DDC4 (-CompleteIndependentFlipToken@CTokenManager@@IEAAJ_KAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@I.c)
 * Callees:
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140013780 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?AcquireShared@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x140014A20 (-AcquireShared@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x140015500 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1400196D0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14001AFC0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??1DXGADAPTERBYHANDLE@@QEAA@XZ @ 0x14001BF28 (--1DXGADAPTERBYHANDLE@@QEAA@XZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x14001BF80 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z @ 0x14001EF20 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x14002D968 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline @ 0x14006681C (Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x140296C50 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkGetPresentStats(__int64 a1, unsigned int a2, unsigned int a3, __int64 a4)
{
  __int64 v4; // r13
  struct DXGPROCESS *Current; // rax
  struct DXGPROCESS *v6; // rbx
  __int64 v7; // rsi
  __int64 result; // rax
  __int64 v9; // rdi
  __int64 v10; // rsi
  __int64 v11; // r8
  __int64 v12; // rdi
  int v13; // edx
  __int64 v14; // rdi
  __int64 v15; // r8
  __int64 v16; // rdi
  int v17; // edx
  unsigned __int64 v18; // rdx
  int v19; // eax
  const wchar_t *v20; // r9
  __int64 v21; // rax
  unsigned int v22; // ebx
  unsigned __int64 v23; // rdx
  struct _KTHREAD **v26; // [rsp+58h] [rbp-A8h] BYREF
  char v27; // [rsp+60h] [rbp-A0h]
  DXGADAPTER *v28[2]; // [rsp+68h] [rbp-98h] BYREF
  __int64 v29; // [rsp+78h] [rbp-88h]
  char v30[8]; // [rsp+80h] [rbp-80h] BYREF
  char *v31; // [rsp+88h] [rbp-78h]
  int v32; // [rsp+90h] [rbp-70h]
  _BYTE v33[144]; // [rsp+A0h] [rbp-60h] BYREF

  v29 = a4;
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
      0x40000,
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
  v27 = 0;
  v26 = (struct _KTHREAD **)((char *)v6 + 104);
  if ( v6 == (struct DXGPROCESS *)-104LL )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 638;
    DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"m_pMutex != NULL", 638LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( v26[3] == KeGetCurrentThread() )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 645;
    DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"!m_pMutex->IsOwner()", 645LL, 0LL, 0LL, 0LL, 0LL);
  }
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v26);
  v32 = 0;
  v31 = (char *)v6 + 248;
  if ( v6 != (struct DXGPROCESS *)-248LL )
  {
    Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
    if ( *((struct _KTHREAD **)v6 + 32) == KeGetCurrentThread() )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 1575;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        0xFFFFFFFFLL,
        L"bAllowAcquireRecursive || pPushLock == NULL || !m_pPushLock->IsExclusiveOwner()",
        1575LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
  }
  DXGAUTOPUSHLOCK::AcquireShared((DXGAUTOPUSHLOCK *)v30);
  v9 = ((unsigned int)v4 >> 6) & 0xFFFFFF;
  if ( (*((_DWORD *)v6 + 102) & 0x100) != 0 )
  {
    v10 = *((_QWORD *)v6 + 74);
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v10 + 248));
    if ( (unsigned int)v9 < *(_DWORD *)(v10 + 296) )
    {
      v11 = *(_QWORD *)(v10 + 280);
      v12 = 2 * v9;
      if ( (((unsigned int)v4 >> 25) & 0x60) == (*(_BYTE *)(v11 + 8 * v12 + 8) & 0x60)
        && (*(_DWORD *)(v11 + 8 * v12 + 8) & 0x2000) == 0 )
      {
        v13 = *(_DWORD *)(v11 + 8 * v12 + 8) & 0x1F;
        if ( v13 )
        {
          if ( v13 == 1 )
          {
            v14 = *(_QWORD *)(v11 + 8 * v12);
LABEL_21:
            _InterlockedDecrement((volatile signed __int32 *)(v10 + 264));
            ExReleasePushLockSharedEx(v10 + 248, 0LL);
            KeLeaveCriticalRegion();
            goto LABEL_29;
          }
          WdLogSingleEntry0(2LL);
          WdLogGlobalForLineNumber = 318;
          DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
        }
      }
    }
    v14 = 0LL;
    goto LABEL_21;
  }
  if ( (unsigned int)v9 < *((_DWORD *)v6 + 74) )
  {
    v15 = *((_QWORD *)v6 + 35);
    v16 = 2 * v9;
    if ( (((unsigned int)v4 >> 25) & 0x60) == (*(_BYTE *)(v15 + 8 * v16 + 8) & 0x60)
      && (*(_DWORD *)(v15 + 8 * v16 + 8) & 0x2000) == 0 )
    {
      v17 = *(_DWORD *)(v15 + 8 * v16 + 8) & 0x1F;
      if ( v17 )
      {
        if ( v17 == 1 )
        {
          v14 = *(_QWORD *)(v15 + 8 * v16);
          goto LABEL_29;
        }
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 318;
        DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
      }
    }
  }
  v14 = 0LL;
LABEL_29:
  v28[0] = (DXGADAPTER *)v14;
  if ( v14 )
  {
    _InterlockedIncrement64((volatile signed __int64 *)(v14 + 24));
    v28[1] = (DXGADAPTER *)-1LL;
  }
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v30);
  if ( v14 )
  {
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v33, (struct DXGADAPTER *const)v14, 0LL);
    v19 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v33, 0LL);
    v7 = v19;
    if ( v19 >= 0 )
    {
      if ( !*(_BYTE *)(v14 + 3017) )
      {
        v21 = *(_QWORD *)(v14 + 3128);
        if ( v21 )
        {
          v22 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64))(*(_QWORD *)(*(_QWORD *)(v21 + 736) + 8LL)
                                                                           + 504LL))(
                  *(_QWORD *)(v21 + 744),
                  a2,
                  a3,
                  v29);
          COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v33);
          DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE(v28, v23);
          DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v26);
          return v22;
        }
      }
      v7 = -1073741811LL;
      WdLogSingleEntry2(2LL, v14, -1073741811LL);
      v20 = L"DXGADAPTER 0x%I64x is not an active render adapter, returning 0x%I64x";
      WdLogGlobalForLineNumber = 695;
    }
    else
    {
      WdLogSingleEntry2(2LL, v14, v19);
      v20 = L"Failed to acquire shared access for DXGADAPTER 0x%I64x, returning 0x%I64x";
      WdLogGlobalForLineNumber = 686;
    }
    DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, v20, v14, v7, 0LL, 0LL, 0LL);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v33);
  }
  else
  {
    LODWORD(v7) = -1073741811;
    WdLogSingleEntry2(2LL, v4, -1073741811LL);
    WdLogGlobalForLineNumber = 674;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Invalid hAdapter (0x%I64x) specified, returning 0x%I64x",
      v4,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
  }
  DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE(v28, v18);
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v26);
  return (unsigned int)v7;
}
