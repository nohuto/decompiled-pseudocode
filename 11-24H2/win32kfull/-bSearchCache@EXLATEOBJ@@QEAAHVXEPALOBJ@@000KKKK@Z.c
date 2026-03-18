/*
 * XREFs of ?bSearchCache@EXLATEOBJ@@QEAAHVXEPALOBJ@@000KKKK@Z @ 0x14000E690
 * Callers:
 *     ?GreGetDIBitsInternalWorker@@YAHKAEAVDCOBJ@@AEAVPDEVOBJ@@AEAVSURFREF@@AEAVXEPALOBJ@@IIAEAV?$umptr_w@E@@PEAUtagBITMAPINFO@@III@Z @ 0x14000EA14 (-GreGetDIBitsInternalWorker@@YAHKAEAVDCOBJ@@AEAVPDEVOBJ@@AEAVSURFREF@@AEAVXEPALOBJ@@IIAEAV-$umpt.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1400A4334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     ?vUnlock@?$SEMOBJ@$0N@@@QEAAXXZ @ 0x1400D2138 (-vUnlock@-$SEMOBJ@$0N@@@QEAAXXZ.c)
 *     ?ulTime@XEPALOBJ@@QEAAKXZ @ 0x14010CBB0 (-ulTime@XEPALOBJ@@QEAAKXZ.c)
 */

__int64 EXLATEOBJ::bSearchCache(Gre::Base *a1, __int64 a2, __int64 a3, ...)
{
  unsigned int v3; // esi
  struct Gre::Base::SESSION_GLOBALS *v7; // r15
  HSEMAPHORE v8; // r12
  struct _KTHREAD *CurrentThread; // r14
  _QWORD *ThreadWin32Thread; // rax
  __int64 v11; // r14
  __int64 v12; // rdx
  char v13; // cl
  int v14; // r14d
  unsigned int v15; // r8d
  __int64 v16; // rdx
  __int64 v17; // rax
  int v18; // ecx
  char *v19; // r9
  struct _KTHREAD *v20; // rdi
  __int64 *v21; // rax
  __int64 v22; // rax
  __int64 v24; // rax
  int v25; // ecx
  __int64 v26; // rax
  int v27; // ecx
  _DWORD *v28; // r10
  int v29; // r11d
  int v30; // ebp
  unsigned int v31; // eax
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebp
  __int64 CurrentThreadProcess; // rax
  __int64 v35; // rax
  int v36; // ebx
  __int64 v37; // rax
  unsigned __int64 v38; // rcx
  int v39; // r8d
  int v40; // eax
  __int64 v41; // rax
  HSEMAPHORE v43; // [rsp+68h] [rbp+10h] BYREF
  __int64 v44; // [rsp+78h] [rbp+20h] BYREF
  va_list va; // [rsp+78h] [rbp+20h]
  __int64 v46; // [rsp+80h] [rbp+28h]
  __int64 v47; // [rsp+88h] [rbp+30h]
  __int64 v48; // [rsp+90h] [rbp+38h]
  __int64 v49; // [rsp+98h] [rbp+40h]
  __int64 v50; // [rsp+A0h] [rbp+48h]
  va_list va1; // [rsp+A8h] [rbp+50h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v44 = va_arg(va1, _QWORD);
  v46 = va_arg(va1, _QWORD);
  v47 = va_arg(va1, _QWORD);
  v48 = va_arg(va1, _QWORD);
  v49 = va_arg(va1, _QWORD);
  v50 = va_arg(va1, _QWORD);
  v3 = *(_DWORD *)(a2 + 56);
  v7 = Gre::Base::Globals(a1);
  v8 = (HSEMAPHORE)(*(_QWORD *)v7 + 312LL);
  v43 = v8;
  GreAcquireSemaphoreInternal(v8);
  CurrentThread = KeGetCurrentThread();
  if ( !(unsigned __int8)KeIsAttachedProcess()
    || (CurrentProcess = PsGetCurrentProcess(),
        ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
        CurrentThreadProcess = PsGetCurrentThreadProcess(),
        ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    ThreadWin32Thread = (_QWORD *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
    {
      if ( *ThreadWin32Thread )
      {
        v11 = *ThreadWin32Thread + 8LL;
        if ( *ThreadWin32Thread != -8LL )
        {
          v12 = *(_QWORD *)v11;
          if ( (*(_QWORD *)v11 & 0xFFFFFFFFFFFFE000uLL) != 0 && (*(_QWORD *)v11 & 0x2000LL) == 0 )
          {
            v38 = 0LL;
            v39 = 37;
            do
            {
              v40 = v38;
              if ( !_bittest64(&v12, v38) )
                v40 = v39;
              ++v38;
              v39 = v40;
            }
            while ( v38 < 0x40 );
            if ( v40 > 13 )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v38, v12, (unsigned int)v40);
          }
          v13 = *(_BYTE *)(v11 + 21);
          *(_BYTE *)(v11 + 21) = v13 + 1;
          if ( !v13 )
            *(_QWORD *)v11 |= 0x2000uLL;
        }
      }
    }
  }
  v14 = v48;
  v15 = 0;
  v16 = v46;
  while ( v15 < 8 )
  {
    v17 = *(_QWORD *)(a2 + 120);
    if ( v17 == a2 )
      v18 = *(_DWORD *)(a2 + 32);
    else
      v18 = *(_DWORD *)(v17 + 32);
    v19 = (char *)v7 + 32 * v3;
    if ( *((_DWORD *)v19 + 1076) == v18 )
    {
      v24 = *(_QWORD *)(a3 + 120);
      v25 = v24 == a3 ? *(_DWORD *)(a3 + 32) : *(_DWORD *)(v24 + 32);
      if ( *((_DWORD *)v19 + 1077) == v25 )
      {
        v26 = *(_QWORD *)(v16 + 120);
        v27 = v26 == v16 ? *(_DWORD *)(v16 + 32) : *(_DWORD *)(v26 + 32);
        if ( *((_DWORD *)v19 + 1079) == v27 )
        {
          v28 = (_DWORD *)*((_QWORD *)v19 + 537);
          *(_QWORD *)a1 = v28;
          v29 = v28[19];
          if ( (v29 & 0x6000) == (_DWORD)v50 )
          {
            if ( (v30 = v28[1], (v29 & 0x100) == 0 && (v30 & 4) == 0)
              || (v30 & 4) != 0
              && (_DWORD)v49 == v28[6]
              && (v31 = XEPALOBJ::ulTime((XEPALOBJ *)va), *((_DWORD *)v19 + 1078) == v31)
              || (v29 & 0x100) != 0 && (_DWORD)v47 == v28[7] && v14 == v28[8] )
            {
              _InterlockedIncrement((volatile signed __int32 *)v19 + 1072);
              *(_DWORD *)(a2 + 56) = v3;
              SEMOBJ<13>::vUnlock(&v43);
              return 1LL;
            }
          }
        }
      }
    }
    v3 = ((_BYTE)v3 + 1) & 7;
    ++v15;
  }
  *(_QWORD *)a1 = 0LL;
  if ( v8 )
  {
    EtwTraceGreLockReleaseSemaphore(L"Palette", v8);
    v20 = KeGetCurrentThread();
    if ( !(unsigned __int8)KeIsAttachedProcess()
      || (v35 = PsGetCurrentProcess(),
          v36 = PsGetProcessSessionIdEx(v35),
          v37 = PsGetCurrentThreadProcess(),
          v36 == (unsigned int)PsGetProcessSessionIdEx(v37)) )
    {
      v21 = (__int64 *)PsGetThreadWin32Thread(v20);
      if ( v21 )
      {
        v22 = *v21;
        if ( v22 )
        {
          v41 = v22 + 8;
          if ( v41 )
          {
            if ( (*(_BYTE *)(v41 + 21))-- == 1 )
              *(_QWORD *)v41 &= ~0x2000uLL;
            if ( !*(_QWORD *)v41 )
              GrepOnAllLocksReleased();
          }
        }
      }
    }
    GreReleaseSemaphoreExclusiveInternal(v8);
  }
  return 0LL;
}
