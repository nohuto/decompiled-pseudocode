/*
 * XREFs of ?AddRef@OUTPUTDUPL_SESSION_MGR@@QEAAHPEAU_EPROCESS@@PEAU_D3DKMT_OUTPUTDUPL_ACTIVE_CTX@@@Z @ 0x1403EADF0
 * Callers:
 *     ?Initialize@OUTPUTDUPL_CONTEXT@@QEAAJPEBU_D3DKMT_CREATE_OUTPUTDUPL@@@Z @ 0x1403EA850 (-Initialize@OUTPUTDUPL_CONTEXT@@QEAAJPEBU_D3DKMT_CREATE_OUTPUTDUPL@@@Z.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1400196D0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14001AFC0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x140028800 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?TriggerLowBoxActiveContextWNF@OUTPUTDUPL_SESSION_MGR@@AEAAJXZ @ 0x1401E14F4 (-TriggerLowBoxActiveContextWNF@OUTPUTDUPL_SESSION_MGR@@AEAAJXZ.c)
 *     ?GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z @ 0x140300638 (-GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z.c)
 */

__int64 __fastcall OUTPUTDUPL_SESSION_MGR::AddRef(
        OUTPUTDUPL_SESSION_MGR *this,
        struct _EPROCESS *a2,
        struct _D3DKMT_OUTPUTDUPL_ACTIVE_CTX *a3)
{
  struct _EPROCESS *v6; // r9
  unsigned int v7; // edi
  unsigned int v8; // ebp
  unsigned int v9; // r13d
  unsigned int v10; // edx
  unsigned int v11; // r8d
  char *Buffer; // rsi
  unsigned int v13; // eax
  __int64 v14; // rcx
  int v15; // r10d
  AUTOEXPANDALLOCATION *v16; // rcx
  unsigned int v17; // edx
  __int64 v18; // rax
  __int64 v19; // r14
  struct _EPROCESS *v20; // rax
  __int64 v21; // rdx
  _BYTE v23[72]; // [rsp+50h] [rbp-48h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v23, (OUTPUTDUPL_SESSION_MGR *)((char *)this + 8), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v23);
  v7 = 0;
  v8 = -1;
  if ( !a3 || *((_DWORD *)this + 32) < 0x10u )
  {
    v9 = 0;
    v10 = *((_DWORD *)this + 1);
    v11 = 0;
    Buffer = (char *)**((_QWORD **)this + 7);
    if ( v10 )
    {
      v13 = *((_DWORD *)this + 1);
      while ( 1 )
      {
        v10 = v13;
        if ( v7 )
          goto LABEL_13;
        v14 = 32LL * v11;
        v6 = *(struct _EPROCESS **)&Buffer[v14 + 8];
        if ( a2 == v6 )
          break;
        if ( v8 != -1 )
          goto LABEL_9;
        if ( v6 )
        {
LABEL_10:
          if ( *(_DWORD *)&Buffer[v14] )
            ++v9;
          goto LABEL_12;
        }
        v8 = v11;
LABEL_12:
        ++v11;
        v13 = v10;
        if ( v11 >= v10 )
          goto LABEL_13;
      }
      v15 = *(_DWORD *)&Buffer[v14];
      v8 = v11;
      if ( v15 )
      {
        v7 = 1;
        *(_DWORD *)&Buffer[v14] = v15 + 1;
        v10 = *((_DWORD *)this + 1);
      }
LABEL_9:
      if ( v6 )
        goto LABEL_10;
      goto LABEL_12;
    }
LABEL_13:
    if ( v9 < *(_DWORD *)this || v7 )
    {
      if ( v8 == -1 )
      {
        v16 = (AUTOEXPANDALLOCATION *)*((_QWORD *)this + 7);
        v17 = v10 + 1;
        *((_DWORD *)this + 1) = v17;
        Buffer = (char *)AUTOEXPANDALLOCATION::GetBuffer(v16, 32 * v17, 1, (__int64)v6);
        if ( !Buffer )
        {
          v7 = 0;
          goto LABEL_34;
        }
        v8 = *((_DWORD *)this + 1) - 1;
        v18 = 32LL * v8;
        *(_OWORD *)&Buffer[v18] = 0LL;
        *(_OWORD *)&Buffer[v18 + 16] = 0LL;
      }
      v19 = 32LL * v8;
      v20 = *(struct _EPROCESS **)&Buffer[v19 + 8];
      if ( v20 && v20 != a2 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 4266;
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          0xFFFFFFFFLL,
          L"(pProcesses[IndexFound].pProcess == NULL) || (pProcesses[IndexFound].pProcess == pProcess)",
          4266LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      if ( v8 == -1 )
      {
        if ( !v7 )
          goto LABEL_34;
      }
      else if ( !v7 )
      {
        if ( *(_DWORD *)&Buffer[v19] )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 4271;
          DxgkLogInternalTriageEvent(
            0LL,
            262146,
            0xFFFFFFFFLL,
            L"pProcesses[IndexFound].RefCount == 0",
            4271LL,
            0LL,
            0LL,
            0LL,
            0LL);
        }
        *(_QWORD *)&Buffer[v19 + 8] = a2;
        *(_DWORD *)&Buffer[v19] = 1;
        *(LARGE_INTEGER *)&Buffer[v19 + 16] = KeQueryPerformanceCounter(0LL);
        v7 = 1;
        if ( v9 >= *((_DWORD *)this + 16) )
          *((_DWORD *)this + 16) = v9 + 1;
      }
      if ( a3 )
      {
        v21 = 3LL * *((unsigned int *)this + 32);
        *(_OWORD *)((char *)this + 8 * v21 + 136) = *(_OWORD *)a3;
        *((_QWORD *)this + v21 + 19) = *((_QWORD *)a3 + 2);
        ++*((_DWORD *)this + 32);
        OUTPUTDUPL_SESSION_MGR::TriggerLowBoxActiveContextWNF(this);
      }
    }
  }
LABEL_34:
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v23);
  return v7;
}
