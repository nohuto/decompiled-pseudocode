/*
 * XREFs of ?StartPnPTransitionOnSession@DXGSESSIONDATA@@QEAAXPEAU_PNP_TRANS_TOKEN@@@Z @ 0x1401F5B7C
 * Callers:
 *     ?StartPnPTransition@DXGSESSIONMGR@@QEAAPEAXPEAX_K@Z @ 0x1401F59A0 (-StartPnPTransition@DXGSESSIONMGR@@QEAAPEAXPEAX_K@Z.c)
 *     ?CreateSession@DXGSESSIONMGR@@QEAAJXZ @ 0x1403E1E58 (-CreateSession@DXGSESSIONMGR@@QEAAJXZ.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x1400110B0 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140013010 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     memmove @ 0x14009F9C0 (memmove.c)
 */

void __fastcall DXGSESSIONDATA::StartPnPTransitionOnSession(DXGSESSIONDATA *this, struct _PNP_TRANS_TOKEN *a2)
{
  __int64 v2; // r9
  unsigned int v4; // edi
  DXGSESSIONDATA *v5; // rbx
  char v6; // r14
  unsigned int i; // r8d
  struct _PNP_TRANS_TOKEN *v8; // rdx
  char v9; // si
  __int64 CurrentProcess; // rax
  int v11; // eax
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // kr00_8
  char *v14; // rax
  char *v15; // rsi
  unsigned int v16; // ecx
  __int64 v17; // r8
  _QWORD *v18; // rdx
  __int64 v19; // r9
  _QWORD *v20; // rax
  __int64 v21; // rdx
  char *v22; // rax
  char **v23; // r8
  __int64 v24; // rdx
  char *v25; // rcx
  __int64 v26; // rcx
  struct _PNP_TRANS_TOKEN *v27; // rdx
  struct _PNP_TRANS_TOKEN **v28; // rcx
  struct _KEVENT *v29; // rcx
  __int64 v30; // [rsp+20h] [rbp-88h]
  __int64 v31; // [rsp+28h] [rbp-80h]
  struct _KAPC_STATE ApcState; // [rsp+50h] [rbp-58h] BYREF

  v2 = *((unsigned int *)this + 4694);
  v4 = *((_DWORD *)this + 4694);
  v5 = this;
  v6 = 1;
  for ( i = 0; i < (unsigned int)v2; ++i )
  {
    this = (DXGSESSIONDATA *)(32LL * i);
    v8 = *(struct _PNP_TRANS_TOKEN **)((char *)this + *((_QWORD *)v5 + 2348) + 8);
    if ( v8 )
    {
      if ( v8 == a2 )
        return;
      v6 = 0;
    }
    else
    {
      v4 = i;
    }
  }
  if ( *((_QWORD *)v5 + 2317) )
  {
    v9 = 0;
    memset(&ApcState, 0, sizeof(ApcState));
    CurrentProcess = PsGetCurrentProcess(this);
    if ( (unsigned int)PsGetProcessSessionIdEx(CurrentProcess) != *(_DWORD *)v5 )
    {
      v9 = 1;
      KeStackAttachProcess(*((PRKPROCESS *)v5 + 2332), &ApcState);
    }
    _InterlockedIncrement(*((volatile signed __int32 **)v5 + 2317));
    if ( v9 )
      KeUnstackDetachProcess(&ApcState);
  }
  v11 = *((_DWORD *)v5 + 4694);
  if ( v4 == v11 )
  {
    *((_DWORD *)v5 + 4694) = 2 * v11;
    v13 = (unsigned int)(2 * v11);
    v12 = 32 * v13;
    if ( !is_mul_ok(v13, 0x20uLL) )
      v12 = -1LL;
    v14 = (char *)operator new[](v12, 0x4B677844u, 256LL, v2);
    v15 = v14;
    if ( !v14 )
    {
      WdLogSingleEntry2(6LL, *(unsigned int *)v5, *((unsigned int *)v5 + 4694));
      v31 = *((unsigned int *)v5 + 4694);
      v30 = *(unsigned int *)v5;
      WdLogGlobalForLineNumber = 4569;
      DxgkLogInternalTriageEvent(
        0LL,
        262145,
        0xFFFFFFFFLL,
        L"Failed to expend PnP transition record array for session 0x%I64x (new NumRecords = 0x%I64x).",
        v30,
        v31,
        0LL,
        0LL,
        0LL);
      *((_DWORD *)v5 + 4694) >>= 1;
      return;
    }
    memmove(v14, *((const void **)v5 + 2348), 32LL * v4);
    v16 = 0;
    if ( v4 )
    {
      while ( 1 )
      {
        v17 = 32LL * v16;
        v18 = (_QWORD *)(v17 + *((_QWORD *)v5 + 2348) + 16LL);
        v19 = *v18;
        if ( *(_QWORD **)(*v18 + 8LL) != v18 )
          break;
        v20 = (_QWORD *)v18[1];
        if ( (_QWORD *)*v20 != v18 )
          break;
        *v20 = v19;
        *(_QWORD *)(v19 + 8) = v20;
        v21 = *(_QWORD *)&v15[v17 + 8];
        v22 = &v15[v17 + 16];
        v23 = *(char ***)(v21 + 32);
        v24 = v21 + 24;
        if ( *v23 != (char *)v24 )
          break;
        *(_QWORD *)v22 = v24;
        ++v16;
        *((_QWORD *)v22 + 1) = v23;
        *v23 = v22;
        *(_QWORD *)(v24 + 8) = v22;
        if ( v16 >= v4 )
          goto LABEL_23;
      }
LABEL_27:
      __fastfail(3u);
    }
LABEL_23:
    v25 = (char *)*((_QWORD *)v5 + 2348);
    if ( v25 != (char *)v5 + 18792 )
      DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v25);
    *((_QWORD *)v5 + 2348) = v15;
  }
  v26 = 32LL * v4;
  *(_QWORD *)(v26 + *((_QWORD *)v5 + 2348)) = v5;
  *(_QWORD *)(*((_QWORD *)v5 + 2348) + v26 + 8) = a2;
  v27 = (struct _PNP_TRANS_TOKEN *)(v26 + *((_QWORD *)v5 + 2348) + 16LL);
  v28 = (struct _PNP_TRANS_TOKEN **)*((_QWORD *)a2 + 4);
  if ( *v28 != (struct _PNP_TRANS_TOKEN *)((char *)a2 + 24) )
    goto LABEL_27;
  *(_QWORD *)v27 = (char *)a2 + 24;
  *((_QWORD *)v27 + 1) = v28;
  *v28 = v27;
  *((_QWORD *)a2 + 4) = v27;
  ++*((_DWORD *)a2 + 1);
  v29 = (struct _KEVENT *)*((_QWORD *)v5 + 2346);
  if ( v29 )
  {
    if ( v6 )
      KeResetEvent(v29);
  }
}
