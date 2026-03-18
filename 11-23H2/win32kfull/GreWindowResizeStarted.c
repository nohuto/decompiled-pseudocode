/*
 * XREFs of GreWindowResizeStarted @ 0x1C0267E20
 * Callers:
 *     ?xxxDrawDragRectEx@@YAXPEAUMOVESIZEDATA@@PEAUtagRECT@@I1@Z @ 0x1C01EBD4C (-xxxDrawDragRectEx@@YAXPEAUMOVESIZEDATA@@PEAUtagRECT@@I1@Z.c)
 * Callees:
 *     ??0DWMSPRITEREF@@QEAA@PEAUHWND__@@@Z @ 0x1C0026D20 (--0DWMSPRITEREF@@QEAA@PEAUHWND__@@@Z.c)
 *     ?bRedirectionBitmap@SURFACE@@QEAAHXZ @ 0x1C006CA94 (-bRedirectionBitmap@SURFACE@@QEAAHXZ.c)
 *     DwmAsyncUpdateSprite @ 0x1C007AAF0 (DwmAsyncUpdateSprite.c)
 *     ??0DWMSPRITELOCK@@QEAA@AEAVPDEVOBJ@@HH@Z @ 0x1C00AA9F0 (--0DWMSPRITELOCK@@QEAA@AEAVPDEVOBJ@@HH@Z.c)
 *     IsDwmActive @ 0x1C00B3EF0 (IsDwmActive.c)
 *     ??1DWMSPRITELOCK@@QEAA@XZ @ 0x1C00B4A3C (--1DWMSPRITELOCK@@QEAA@XZ.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00FB6CC (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C013D7D0 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     UserDCompositionCreateSynchronizationObject @ 0x1C01FDD6C (UserDCompositionCreateSynchronizationObject.c)
 *     ?CheckAndProcessWindowResizeComplete@@YAXPEAVDWMSPRITE@@HPEAH@Z @ 0x1C0264EC4 (-CheckAndProcessWindowResizeComplete@@YAXPEAVDWMSPRITE@@HPEAH@Z.c)
 */

__int64 __fastcall GreWindowResizeStarted(void *a1, HWND a2, int a3, int *a4, _DWORD *a5)
{
  unsigned int v6; // r12d
  _DWORD *v7; // rsi
  int v8; // r13d
  Gre::Base *v9; // rcx
  struct Gre::Base::SESSION_GLOBALS *v10; // r15
  Gre::Base *v11; // rcx
  struct PDEVOBJ *v12; // rdx
  Gre::Base *v13; // rcx
  struct DWMSPRITE *v14; // rdi
  __int64 *v15; // r14
  __int64 v16; // rax
  bool v17; // bl
  PVOID v18; // rbx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // rbx
  __int64 v23; // rdi
  void *v24; // rax
  int v25; // ecx
  int v26; // eax
  char v28[8]; // [rsp+68h] [rbp-21h] BYREF
  void *v29; // [rsp+70h] [rbp-19h] BYREF
  __int64 v30; // [rsp+78h] [rbp-11h] BYREF
  _BYTE v31[32]; // [rsp+80h] [rbp-9h] BYREF
  struct DWMSPRITE *v32; // [rsp+A0h] [rbp+17h]
  PVOID Object; // [rsp+E8h] [rbp+5Fh] BYREF
  int v34; // [rsp+F8h] [rbp+6Fh]
  int *v35; // [rsp+100h] [rbp+77h]

  v35 = a4;
  v34 = a3;
  Object = a1;
  v6 = 0;
  v7 = *(_DWORD **)(SGDGetSessionState(a1) + 32);
  v8 = v7[2177] & 2;
  LODWORD(Object) = v7[2177] & 1;
  v10 = Gre::Base::Globals(v9);
  v30 = *((_QWORD *)v10 + 15);
  GreAcquireSemaphore(v30);
  if ( IsDwmActive(v11) )
  {
    DWMSPRITELOCK::DWMSPRITELOCK((DWMSPRITELOCK *)v28, v12, 0, 0);
    GreAcquireSemaphore(*((_QWORD *)v10 + 9));
    EtwTraceGreLockAcquireSemaphoreExclusive(L"GreBaseGlobals.hsemDwmState", *((_QWORD *)v10 + 9), 7LL);
    if ( IsDwmActive(v13) )
    {
      DWMSPRITEREF::DWMSPRITEREF((DWMSPRITEREF *)v31, a2);
      v14 = v32;
      if ( v32 )
      {
        v15 = (__int64 *)*((_QWORD *)v32 + 18);
        v17 = 0;
        if ( v15 )
        {
          v16 = v15[23];
          if ( v16 )
          {
            if ( v16 != 24 && (unsigned int)SURFACE::bRedirectionBitmap((SURFACE *)(v16 - 24)) )
              v17 = 1;
          }
        }
        if ( (_DWORD)Object && v17 || v34 && v8 )
        {
          if ( *((int *)v14 + 29) >= 1 )
            CheckAndProcessWindowResizeComplete(v14, 1, 0LL);
          *(_QWORD *)((char *)v14 + 116) = (unsigned int)v17 + 1;
          if ( v34 && v8 )
          {
            Object = 0LL;
            if ( (unsigned int)UserDCompositionCreateSynchronizationObject(&Object) )
            {
              v18 = Object;
              v29 = 0LL;
              if ( (int)CompositionObject::OpenDwmHandle((CompositionObject *)Object, &v29) < 0 )
              {
                ObfDereferenceObject(v18);
              }
              else
              {
                *((_QWORD *)v14 + 13) = v29;
                *((_QWORD *)v14 + 12) = v18;
                *((_DWORD *)v14 + 30) = 1;
                *((_DWORD *)v14 + 31) = 1;
                v22 = *v15;
                v23 = *(_QWORD *)v14;
                v24 = (void *)UserReferenceDwmApiPort(v20, v19, v21);
                DwmAsyncUpdateSprite(v24, v23, v22, 512, 0LL, 0LL, 0, 0, 0, 0, 0LL);
              }
            }
            v25 = v7[2179];
            v26 = v7[2177] & 8;
          }
          else
          {
            v25 = v7[2178];
            v26 = v7[2177] & 4;
          }
          v6 = 1;
          v14 = v32;
          *v35 = v26;
          *a5 = v25;
        }
        if ( v14 )
          _InterlockedDecrement((volatile signed __int32 *)v14 + 3);
      }
      v32 = 0LL;
      UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((__int64)v31);
    }
    EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemDwmState");
    GreReleaseSemaphoreInternal(*((_QWORD *)v10 + 9));
    DWMSPRITELOCK::~DWMSPRITELOCK((DWMSPRITELOCK *)v28);
  }
  SEMOBJ::vUnlock((SEMOBJ *)&v30);
  return v6;
}
