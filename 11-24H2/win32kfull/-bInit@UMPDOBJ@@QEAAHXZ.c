/*
 * XREFs of ?bInit@UMPDOBJ@@QEAAHXZ @ 0x1400D8410
 * Callers:
 *     ??0XUMPDOBJ@@QEAA@XZ @ 0x1400D8380 (--0XUMPDOBJ@@QEAA@XZ.c)
 * Callees:
 *     ??1HmgInsertObjectHelper@@QEAA@XZ @ 0x14002504C (--1HmgInsertObjectHelper@@QEAA@XZ.c)
 *     ?GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ @ 0x140060BD4 (-GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ.c)
 *     ?FreeNonCachedUserMem@UMPDOBJ@@QEAAXXZ @ 0x1400D8CD0 (-FreeNonCachedUserMem@UMPDOBJ@@QEAAXXZ.c)
 *     ?Insert@HmgInsertObjectHelper@@QEAAPEAUHOBJ__@@PEAVOBJECT@@_N1E@Z @ 0x140196FB8 (-Insert@HmgInsertObjectHelper@@QEAAPEAUHOBJ__@@PEAVOBJECT@@_N1E@Z.c)
 *     ??0PROXYPORT@@QEAA@_K@Z @ 0x1401E9C80 (--0PROXYPORT@@QEAA@_K@Z.c)
 *     ?ResetHeap@UMPDOBJ@@QEAAXXZ @ 0x140201734 (-ResetHeap@UMPDOBJ@@QEAAXXZ.c)
 *     ?CreateUMPDHeap@UMPDOBJ@@AEAAPEAU_UMPDHEAP@@XZ @ 0x1402076C0 (-CreateUMPDHeap@UMPDOBJ@@AEAAPEAU_UMPDHEAP@@XZ.c)
 *     ?bSandboxedCurrentProcess@@YAEXZ @ 0x14025E004 (-bSandboxedCurrentProcess@@YAEXZ.c)
 *     memset_0 @ 0x140340780 (memset_0.c)
 */

__int64 __fastcall UMPDOBJ::bInit(UMPDOBJ *this)
{
  __int64 v2; // rcx
  _QWORD *CurrentProcessWin32Process; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  _QWORD *v6; // rsi
  struct _GRETHREAD *CurrentThread; // rax
  struct _GRETHREAD *v8; // rdi
  unsigned __int8 v9; // al
  unsigned __int64 v10; // rdx
  UMPDOBJ *v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rax
  struct _UMPDHEAP *v14; // rax
  struct _UMPDHEAP *UMPDHeap; // rax
  __int64 v16; // rax
  __int64 v17; // rdi
  char v18; // si
  void *v19; // rcx
  struct _KEVENT *v21; // rcx
  _OWORD v22[2]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v23; // [rsp+50h] [rbp-18h]
  __int64 v24; // [rsp+78h] [rbp+10h] BYREF

  memset_0(this, 0, 0x1D0uLL);
  *((_DWORD *)this + 13) = 1886221639;
  CurrentProcessWin32Process = (_QWORD *)PsGetCurrentProcessWin32Process(v2);
  v6 = CurrentProcessWin32Process;
  if ( CurrentProcessWin32Process && !*CurrentProcessWin32Process )
  {
    GreGetCurrentThread(v5, v4);
    return 0LL;
  }
  CurrentThread = GreGetCurrentThread(v5, v4);
  v8 = CurrentThread;
  if ( !v6 || !CurrentThread )
    return 0LL;
  *((_QWORD *)this + 54) = KeGetCurrentThread();
  *((_DWORD *)this + 110) = (unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC;
  v9 = bSandboxedCurrentProcess();
  *((_BYTE *)this + 456) = v9;
  if ( !v9 )
  {
    if ( *((struct _GRETHREAD **)v8 + 9) == (struct _GRETHREAD *)((char *)v8 + 72) )
    {
      v14 = (struct _UMPDHEAP *)*((_QWORD *)v8 + 6);
      if ( !v14 )
      {
        UMPDHeap = UMPDOBJ::CreateUMPDHeap(v11);
        *((_QWORD *)this + 9) = UMPDHeap;
        *((_QWORD *)v8 + 6) = UMPDHeap;
        v14 = (struct _UMPDHEAP *)*((_QWORD *)this + 9);
        goto LABEL_18;
      }
      *((_DWORD *)v14 + 6) = 0;
    }
    else
    {
      v14 = UMPDOBJ::CreateUMPDHeap(v11);
    }
    *((_QWORD *)this + 9) = v14;
LABEL_18:
    if ( !v14 )
      return 0LL;
    goto LABEL_19;
  }
  v12 = *((_QWORD *)v8 + 7);
  if ( v12 )
  {
    *((_QWORD *)this + 53) = v12;
    UMPDOBJ::ResetHeap(this);
  }
  else
  {
    PROXYPORT::PROXYPORT((PROXYPORT *)&v24, v10);
    v13 = v24;
    if ( !v24 )
      return 0LL;
    *((_QWORD *)this + 53) = v24;
    *((_QWORD *)v8 + 7) = v13;
  }
  *((_QWORD *)this + 5) = v8;
LABEL_19:
  v16 = Win32AllocPoolNonPaged(24LL, 1886221639LL);
  *((_QWORD *)this + 4) = v16;
  if ( !v16 )
  {
LABEL_28:
    UMPDOBJ::FreeNonCachedUserMem(this);
    return 0LL;
  }
  v17 = *((_QWORD *)v8 + 42);
  v18 = 0;
  if ( v17 && *(_BYTE *)(v17 + 80) )
  {
    *(_BYTE *)(v17 + 80) = 0;
    v18 = 1;
  }
  memset(v22, 0, sizeof(v22));
  PushThreadGuardedObject(
    v22,
    v22,
    UnexpectedThreadTerminationHandler<HmgInsertObjectHelper>::OnUnexpectedThreadTerminationStatic);
  v23 = 0LL;
  if ( !HmgInsertObjectHelper::Insert((HmgInsertObjectHelper *)v22, this, 1, 1, 17) )
  {
    HmgInsertObjectHelper::~HmgInsertObjectHelper((HmgInsertObjectHelper *)v22);
    if ( v18 )
      *(_BYTE *)(v17 + 80) = 1;
    v19 = (void *)*((_QWORD *)this + 4);
    if ( v19 )
      Win32FreePool(v19);
    goto LABEL_28;
  }
  GreInitializePushLock((UMPDOBJ *)((char *)this + 400));
  v21 = (struct _KEVENT *)*((_QWORD *)this + 4);
  *((_QWORD *)this + 3) = 0LL;
  KeInitializeEvent(v21, NotificationEvent, 1u);
  *((_BYTE *)this + 457) = 0;
  HmgInsertObjectHelper::~HmgInsertObjectHelper((HmgInsertObjectHelper *)v22);
  if ( v18 )
    *(_BYTE *)(v17 + 80) = 1;
  return 1LL;
}
