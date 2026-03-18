/*
 * XREFs of ?PostMessageToClient@CInternalMilCmdConnection@@UEAAJPEBUUCE_RDP_HEADER@@@Z @ 0x1801DFBE0
 * Callers:
 *     ?PostMessageToChannel@CChannelContext@@QEAAJPEBUMIL_MESSAGE@@@Z @ 0x1800E77DC (-PostMessageToChannel@CChannelContext@@QEAAJPEBUMIL_MESSAGE@@@Z.c)
 *     ?SendResponse@CAsyncFlushResponse@@UEAAJJ@Z @ 0x1801DFA10 (-SendResponse@CAsyncFlushResponse@@UEAAJJ@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B2FCC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??1?$CWriteGuard@VCReadWriteLock@@@@QEAA@XZ @ 0x1801FFA0C (--1-$CWriteGuard@VCReadWriteLock@@@@QEAA@XZ.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18025AF2C (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall CInternalMilCmdConnection::PostMessageToClient(RTL_SRWLOCK *this, const struct UCE_RDP_HEADER *a2)
{
  RTL_SRWLOCK *v2; // rsi
  unsigned int v5; // edx
  char *Ptr; // rax
  unsigned int LastError; // ebx
  HANDLE *v9; // rdx
  _OWORD *v10; // rcx
  char *v11; // rbp
  HANDLE ProcessHeap; // rax
  _QWORD *v13; // rax
  _QWORD *v14; // rdi
  HANDLE *v15; // rcx
  const char *v16; // r9
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  RTL_SRWLOCK *v18; // [rsp+40h] [rbp+8h] BYREF

  v2 = this + 16;
  v18 = this + 16;
  AcquireSRWLockExclusive(this + 16);
  LODWORD(v2[1].Ptr) = GetCurrentThreadId();
  if ( !LOBYTE(this[3].Ptr) )
    goto LABEL_7;
  if ( *((_DWORD *)a2 + 1) >= 0x44u && *(_DWORD *)a2 == 10 )
  {
    v5 = *((_DWORD *)a2 + 4);
    if ( !v5 )
      goto LABEL_7;
    if ( v5 >= HIDWORD(this[7].Ptr) )
      goto LABEL_7;
    Ptr = (char *)this[9].Ptr;
    if ( !*(_DWORD *)&Ptr[LODWORD(this[7].Ptr) * v5] )
      goto LABEL_7;
    v9 = (HANDLE *)&Ptr[LODWORD(this[7].Ptr) * v5];
    if ( !v9 )
      goto LABEL_7;
    if ( *((_DWORD *)a2 + 10) == 1 )
    {
      if ( SetEvent(v9[2]) )
        goto LABEL_7;
      LastError = wil::details::in1diag3::Return_GetLastError(
                    retaddr,
                    (void *)0x63,
                    (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\internalmilcmdconnection.cpp",
                    v16);
    }
    else
    {
      if ( *((_DWORD *)a2 + 10) == 2 || *((_DWORD *)a2 + 10) == 17 || *((_DWORD *)a2 + 10) == 19 )
      {
        v10 = v9[1];
        v10[9] = *(_OWORD *)((char *)a2 + 40);
        *((_QWORD *)v10 + 20) = *((_QWORD *)a2 + 7);
        *((_DWORD *)v10 + 42) = *((_DWORD *)a2 + 16);
LABEL_7:
        LODWORD(v2[1].Ptr) = 0;
        ReleaseSRWLockExclusive(v2);
        return 0LL;
      }
      v11 = (char *)v9[1];
      ProcessHeap = GetProcessHeap();
      v13 = HeapAlloc(ProcessHeap, 0, 0x30uLL);
      v14 = v13;
      if ( v13 )
      {
        *((_OWORD *)v13 + 1) = *(_OWORD *)((char *)a2 + 40);
        v13[4] = *((_QWORD *)a2 + 7);
        *((_DWORD *)v13 + 10) = *((_DWORD *)a2 + 16);
        EnterCriticalSection((LPCRITICAL_SECTION)(v11 + 104));
        v15 = (HANDLE *)*((_QWORD *)v11 + 11);
        if ( *v15 != v11 + 80 )
          __fastfail(3u);
        *v14 = v11 + 80;
        v14[1] = v15;
        *v15 = v14;
        *((_QWORD *)v11 + 11) = v14;
        SetEvent(*((HANDLE *)v11 + 12));
        LeaveCriticalSection((LPCRITICAL_SECTION)(v11 + 104));
        goto LABEL_7;
      }
      LastError = -2147024882;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x179,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\channel.cpp",
        (const char *)0x8007000ELL);
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x89,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\internalmilcmdconnection.cpp",
        (const char *)0x8007000ELL);
    }
    CWriteGuard<CReadWriteLock>::~CWriteGuard<CReadWriteLock>(&v18);
  }
  else
  {
    LastError = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2003303421, 0x73u, 0LL);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x55,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\internalmilcmdconnection.cpp",
      (const char *)0x88980403LL);
    LODWORD(v2[1].Ptr) = 0;
    ReleaseSRWLockExclusive(v2);
  }
  return LastError;
}
