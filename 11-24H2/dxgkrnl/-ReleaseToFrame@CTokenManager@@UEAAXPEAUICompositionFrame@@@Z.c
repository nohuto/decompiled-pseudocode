/*
 * XREFs of ?ReleaseToFrame@CTokenManager@@UEAAXPEAUICompositionFrame@@@Z @ 0x14005EC50
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseFlipManagerTokensToFrame@CTokenManager@@IEAA_NPEAVCCompositionFrame@@@Z @ 0x14001B09C (-ReleaseFlipManagerTokensToFrame@CTokenManager@@IEAA_NPEAVCCompositionFrame@@@Z.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x14001BAF0 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?DeleteAllTokens@CTokenQueue@@AEAAXXZ @ 0x14002009C (-DeleteAllTokens@CTokenQueue@@AEAAXXZ.c)
 *     ?ReleaseCompositionHandleTokensToFrame@CTokenManager@@IEAAXPEAVCCompositionFrame@@@Z @ 0x140033074 (-ReleaseCompositionHandleTokensToFrame@CTokenManager@@IEAAXPEAVCCompositionFrame@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     DxgkDestroyContextInternal @ 0x14018C558 (DxgkDestroyContextInternal.c)
 */

void __fastcall CTokenManager::ReleaseToFrame(CTokenManager *this, struct ICompositionFrame *a2)
{
  char v2; // r14
  struct ICompositionFrame *v3; // rsi
  CTokenManager *v4; // r13
  _QWORD *i; // rsi
  __int64 v6; // rdi
  _DWORD *j; // rbx
  char *v8; // rcx
  __int64 v9; // rax
  struct _RTL_GENERIC_TABLE *v10; // rdi
  ULONG v11; // r12d
  _QWORD *ElementGenericTable; // r15
  __int64 v13; // rbp
  bool v14; // r13
  struct ICompositionFrame *v15; // rbx
  struct ICompositionFrame **v16; // rax
  bool v17; // zf
  _DWORD *v18; // r14
  _QWORD *v19; // rdi
  struct ICompositionFrame **v20; // rcx
  struct ICompositionFrame **v21; // rax
  struct ICompositionFrame **v22; // rax
  int v23; // ecx
  CTokenQueue *v24; // rbx
  char v25; // r14
  char *v26; // rbx
  __int64 v27; // rdi
  _QWORD *v28; // rdx
  _QWORD *v29; // rcx
  __int64 v30; // rax
  PVOID RestartKey[11]; // [rsp+20h] [rbp-58h] BYREF
  char v34; // [rsp+90h] [rbp+18h]
  int v35; // [rsp+98h] [rbp+20h] BYREF

  v2 = 0;
  v3 = a2;
  v4 = this;
  v34 = 0;
  if ( *((_BYTE *)this + 92) )
  {
    ExAcquirePushLockExclusiveEx((char *)this + 152, 0LL);
    *((_BYTE *)v4 + 160) = 1;
    for ( i = (_QWORD *)*((_QWORD *)v4 + 17); i != (_QWORD *)((char *)v4 + 136); i = (_QWORD *)*i )
    {
      RestartKey[0] = 0LL;
      v6 = (__int64)(i + 14);
      if ( !i )
        v6 = 120LL;
      for ( j = RtlEnumerateGenericTableWithoutSplaying((PRTL_GENERIC_TABLE)v6, RestartKey);
            j;
            j = RtlEnumerateGenericTableWithoutSplaying((PRTL_GENERIC_TABLE)v6, RestartKey) )
      {
        if ( *((_BYTE *)j + 12) )
        {
          if ( j[2] )
          {
            v35 = j[2];
            DxgkDestroyContextInternal(&v35);
          }
          RtlDeleteElementGenericTable((PRTL_GENERIC_TABLE)v6, j);
          RestartKey[0] = 0LL;
        }
      }
    }
    v8 = (char *)v4 + 152;
    if ( *((_BYTE *)v4 + 160) )
      ExReleasePushLockExclusiveEx(v8, 0LL);
    else
      ExReleasePushLockSharedEx(v8, 0LL);
    v3 = a2;
    v2 = 0;
    *((_BYTE *)v4 + 92) = 0;
  }
  v9 = *((_QWORD *)v4 + 24);
  if ( v9 && (*(_QWORD *)(v9 + 2088) != v9 + 16 || *(_DWORD *)(v9 + 32)) )
  {
    *((_QWORD *)v3 + 27) = v9;
    *(_BYTE *)(v9 + 2108) = 1;
    *(_QWORD *)(v9 + 2088) = v9 + 16;
    *((_BYTE *)v3 + 224) = 1;
    *((_QWORD *)v4 + 24) = 0LL;
  }
  if ( !*((_DWORD *)v4 + 22) )
  {
    v2 = 1;
    goto LABEL_51;
  }
  v10 = (struct _RTL_GENERIC_TABLE *)((char *)v4 + 200);
  RestartKey[0] = (char *)v4 + 200;
  v11 = RtlNumberGenericTableElements((PRTL_GENERIC_TABLE)((char *)v4 + 200)) - 1;
  ElementGenericTable = RtlGetElementGenericTable((PRTL_GENERIC_TABLE)((char *)v4 + 200), v11);
  if ( ElementGenericTable )
  {
    while ( 1 )
    {
      v13 = ElementGenericTable[1];
      v14 = 0;
      if ( *(_QWORD *)v13 == v13 )
      {
        ++*(_DWORD *)(v13 + 24);
        goto LABEL_43;
      }
      v15 = *(struct ICompositionFrame **)(v13 + 8);
      if ( *(_QWORD *)v15 != v13 || (v16 = (struct ICompositionFrame **)*((_QWORD *)v15 + 1), *v16 != v15) )
LABEL_49:
        __fastfail(3u);
      *(_QWORD *)(v13 + 8) = v16;
      *v16 = (struct ICompositionFrame *)v13;
      if ( v15 == (struct ICompositionFrame *)v13 )
        goto LABEL_43;
      while ( 1 )
      {
        v17 = *(_QWORD *)(v13 + 16) == 0LL;
        v18 = (_DWORD *)((char *)v15 - 8);
        LOBYTE(v35) = 0;
        if ( !v17 )
        {
          v19 = (_QWORD *)*((_QWORD *)v18 + 6);
          KeEnterCriticalRegion();
          ExAcquirePushLockExclusiveEx(v19 + 6, 0LL);
          v19[7] = PsGetCurrentThreadId();
          v19[23] = 0LL;
          CPushLock::ReleaseLock((CPushLock *)(v19 + 6));
          v3 = a2;
          if ( *(_DWORD **)(v13 + 16) == v18 )
            *(_QWORD *)(v13 + 16) = 0LL;
        }
        if ( (*(int (__fastcall **)(_QWORD *, struct ICompositionFrame *, int *))(*(_QWORD *)v18 + 32LL))(
               (_QWORD *)v15 - 1,
               v3,
               &v35) < 0 )
        {
          (*(void (__fastcall **)(_QWORD *))(*(_QWORD *)v18 + 56LL))((_QWORD *)v15 - 1);
          (**(void (__fastcall ***)(__int64, __int64))v18)((__int64)v15 - 8, 1LL);
          goto LABEL_36;
        }
        if ( !(_BYTE)v35 )
          break;
        v20 = (struct ICompositionFrame **)*((_QWORD *)v3 + 33);
        if ( *v20 != (struct ICompositionFrame *)((char *)v3 + 256) )
          goto LABEL_49;
        *(_QWORD *)v15 = (char *)v3 + 256;
        *((_QWORD *)v15 + 1) = v20;
        *v20 = v15;
        *((_QWORD *)v3 + 33) = v15;
LABEL_36:
        v15 = *(struct ICompositionFrame **)(v13 + 8);
        if ( *(_QWORD *)v15 != v13 )
          goto LABEL_49;
        v21 = (struct ICompositionFrame **)*((_QWORD *)v15 + 1);
        if ( *v21 != v15 )
          goto LABEL_49;
        *(_QWORD *)(v13 + 8) = v21;
        *v21 = (struct ICompositionFrame *)v13;
        if ( v15 == (struct ICompositionFrame *)v13 )
          goto LABEL_42;
      }
      v22 = *(struct ICompositionFrame ***)(v13 + 8);
      v23 = v18[6];
      if ( *v22 != (struct ICompositionFrame *)v13 )
        goto LABEL_49;
      *(_QWORD *)v15 = v13;
      *((_QWORD *)v15 + 1) = v22;
      *v22 = v15;
      v14 = v23 == 2;
      *(_QWORD *)(v13 + 8) = v15;
LABEL_42:
      v2 = v34;
      v10 = (struct _RTL_GENERIC_TABLE *)RestartKey[0];
LABEL_43:
      v24 = (CTokenQueue *)ElementGenericTable[1];
      v2 |= v14;
      v34 = v2;
      if ( *((_DWORD *)v24 + 6) >= 0x20u )
      {
        if ( v24 )
        {
          CTokenQueue::DeleteAllTokens(v24);
          ExFreePoolWithTag(v24, 0);
        }
        RtlDeleteElementGenericTable(v10, ElementGenericTable);
      }
      ElementGenericTable = RtlGetElementGenericTable(v10, --v11);
      if ( !ElementGenericTable )
      {
        v4 = this;
        break;
      }
    }
  }
LABEL_51:
  CTokenManager::ReleaseCompositionHandleTokensToFrame(v4, v3);
  v25 = CTokenManager::ReleaseFlipManagerTokensToFrame(v4, v3) | v2;
  v26 = (char *)v4 + 152;
  v27 = (*(__int64 (__fastcall **)(struct ICompositionFrame *))(*(_QWORD *)v3 + 72LL))(v3);
  ExAcquirePushLockExclusiveEx((char *)v4 + 152, 0LL);
  *((_BYTE *)v4 + 160) = 1;
  v28 = (_QWORD *)((char *)v4 + 136);
  *((_QWORD *)v4 + 16) = v27;
  if ( (_QWORD *)*v28 != v28 )
  {
    v29 = (_QWORD *)*((_QWORD *)v4 + 18);
    if ( v29 != v28 )
    {
      do
      {
        v30 = (__int64)(v29 + 10);
        if ( !v29 )
          v30 = 88LL;
        *(_QWORD *)v30 = v27;
        v29 = (_QWORD *)v29[1];
      }
      while ( v29 != v28 );
      v26 = (char *)v4 + 152;
    }
  }
  if ( v26[8] )
    ExReleasePushLockExclusiveEx(v26, 0LL);
  else
    ExReleasePushLockSharedEx(v26, 0LL);
  if ( !v25 )
    ZwClearEvent(*((HANDLE *)v4 + 8));
}
