/*
 * XREFs of ?QueryVidPnExclusiveOwnershipCallBack@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1403783F0
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x14000CB60 (--1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x14000CC20 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 */

__int64 __fastcall QueryVidPnExclusiveOwnershipCallBack(struct DXGADAPTER *this, char *a2)
{
  volatile signed __int32 *v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  int v9; // eax
  __int64 v10; // rdi
  unsigned int v11; // ebp
  __int64 v12; // r15
  __int64 v13; // rcx
  __int64 v14; // r12
  int v15; // edi
  __int64 v17; // rcx
  __int128 v18; // xmm0
  int v19; // edx
  __int64 v20; // rcx
  int v21; // edx
  _QWORD *v22; // rax
  _QWORD v23[2]; // [rsp+60h] [rbp-48h] BYREF
  char v24; // [rsp+70h] [rbp-38h]

  v23[1] = this;
  _InterlockedIncrement64((volatile signed __int64 *)this + 3);
  v23[0] = -1LL;
  v4 = (volatile signed __int32 *)((char *)this + 136);
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v4, 0LL);
  _InterlockedIncrement(v4 + 4);
  v9 = *((_DWORD *)this + 50);
  v24 = 1;
  if ( v9 == 1 )
  {
    v10 = *((_QWORD *)this + 390);
    v11 = 0;
    if ( *(_DWORD *)(v10 + 96) )
    {
      while ( 1 )
      {
        v12 = *((_QWORD *)this + 390);
        v13 = v12;
        v14 = 4024LL * v11;
        v15 = *(_DWORD *)(*(_QWORD *)(v10 + 128) + v14 + 736);
        if ( v11 >= *(_DWORD *)(v12 + 96) )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 6489;
          DxgkLogInternalTriageEvent(
            0LL,
            262146LL,
            0xFFFFFFFFLL,
            L"VidPnSourceId < m_NumVidPnSources",
            6489LL,
            0LL,
            0LL,
            0LL,
            0LL);
          v13 = *((_QWORD *)this + 390);
        }
        if ( *(_QWORD *)(*(_QWORD *)(v12 + 128) + v14 + 744) )
          break;
        if ( v15 == 2 || v15 == 3 || v15 == 4 )
          goto LABEL_13;
LABEL_9:
        v10 = *((_QWORD *)this + 390);
        if ( ++v11 >= *(_DWORD *)(v10 + 96) )
          goto LABEL_10;
      }
      v15 = 4;
LABEL_13:
      v17 = *(_QWORD *)(v13 + 128);
      if ( *(_QWORD *)(v17 + v14 + 752) == *(_QWORD *)a2 )
      {
        v18 = *(_OWORD *)(v17 + v14 + 628);
        v19 = *((_DWORD *)a2 + 2);
        v20 = *(_QWORD *)(v17 + v14 + 628);
        if ( (int)v20 <= v19 && SDWORD2(v18) >= v19 )
        {
          v21 = *((_DWORD *)a2 + 3);
          if ( SHIDWORD(v20) <= v21 && SHIDWORD(v18) >= v21 )
          {
            if ( *((_DWORD *)a2 + 4) != -1 )
            {
              WdLogSingleEntry0(1LL);
              WdLogGlobalForLineNumber = 11059;
              DxgkLogInternalTriageEvent(
                0LL,
                262146LL,
                0xFFFFFFFFLL,
                L"pCallbackContext->VidPnSourceId == D3DDDI_ID_UNINITIALIZED",
                11059LL,
                0LL,
                0LL,
                0LL,
                0LL);
            }
            *((_DWORD *)a2 + 4) = v11;
            *(_QWORD *)(a2 + 20) = *(_QWORD *)((char *)this + 412);
            *((_DWORD *)a2 + 7) = v15;
          }
        }
      }
      goto LABEL_9;
    }
LABEL_10:
    _InterlockedDecrement(v4 + 4);
    ExReleasePushLockSharedEx(v4, 0LL);
    KeLeaveCriticalRegion();
    DXGADAPTER::ReleaseReference(this);
  }
  else
  {
    v22 = (_QWORD *)WdLogNewEntry5_WdTrace(v6, v5, v7, v8);
    v22[3] = this;
    v22[4] = *((int *)this + 104);
    v22[5] = *((unsigned int *)this + 103);
    WdLogGlobalForLineNumber = 11018;
    DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v23);
  }
  return 0LL;
}
