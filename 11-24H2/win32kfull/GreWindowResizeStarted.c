/*
 * XREFs of GreWindowResizeStarted @ 0x1401DAAE0
 * Callers:
 *     ?xxxDrawDragRectEx@@YAXPEAUMOVESIZEDATA@@PEAUtagRECT@@I1@Z @ 0x140211840 (-xxxDrawDragRectEx@@YAXPEAUMOVESIZEDATA@@PEAUtagRECT@@I1@Z.c)
 * Callees:
 *     IsDwmActive @ 0x140022F80 (IsDwmActive.c)
 *     ??0ENTER_DWM_CRIT_COMMON@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@PEAUHDEV__@@W4Options@0@@Z @ 0x140023E24 (--0ENTER_DWM_CRIT_COMMON@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@PEAUHDEV__@@W4Options@0@@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$01P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x1400255B0 (--$GreReleaseSemaphoreCommon@$01P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??1DWMSPRITEREF@@QEAA@XZ @ 0x1400278B8 (--1DWMSPRITEREF@@QEAA@XZ.c)
 *     ??0DWMSPRITEREF@@QEAA@PEAUHWND__@@@Z @ 0x140029324 (--0DWMSPRITEREF@@QEAA@PEAUHWND__@@@Z.c)
 *     ??$GreAcquireSemaphoreCommon@$01P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x1400308A8 (--$GreAcquireSemaphoreCommon@$01P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??1DWMSPRITELOCK@@QEAA@XZ @ 0x140062CF0 (--1DWMSPRITELOCK@@QEAA@XZ.c)
 *     ??1?$SEMOBJEXORSHARED@$06@@QEAA@XZ @ 0x140062D4C (--1-$SEMOBJEXORSHARED@$06@@QEAA@XZ.c)
 *     ?bRedirectionBitmap@SURFACE@@QEAAHXZ @ 0x1400E08E8 (-bRedirectionBitmap@SURFACE@@QEAAHXZ.c)
 *     DwmAsyncUpdateSprite @ 0x14016AADC (DwmAsyncUpdateSprite.c)
 *     ?CheckAndProcessWindowResizeComplete@@YAXPEAVDWMSPRITE@@HPEAH@Z @ 0x1401DAD5C (-CheckAndProcessWindowResizeComplete@@YAXPEAVDWMSPRITE@@HPEAH@Z.c)
 *     UserDCompositionCreateSynchronizationObject @ 0x1402B387C (UserDCompositionCreateSynchronizationObject.c)
 */

__int64 __fastcall GreWindowResizeStarted(__int64 a1, HWND a2, int a3, int *a4, _DWORD *a5)
{
  unsigned int v7; // r15d
  _DWORD *v8; // rsi
  int v9; // r13d
  Gre::Base *v10; // rcx
  struct Gre::Base::SESSION_GLOBALS *v11; // rbx
  __int64 v12; // r12
  Gre::Base *v13; // rcx
  Gre::Base *v14; // rcx
  struct DWMSPRITE *v15; // rdi
  __int64 *v16; // r14
  __int64 v17; // rax
  bool v18; // bl
  int v19; // ecx
  int v20; // eax
  PVOID v22; // rbx
  __int64 v23; // rcx
  __int64 v24; // rbx
  __int64 v25; // rdi
  void *v26; // rax
  PVOID Object; // [rsp+68h] [rbp-41h] BYREF
  void *v28; // [rsp+70h] [rbp-39h] BYREF
  _BYTE v29[8]; // [rsp+78h] [rbp-31h] BYREF
  _BYTE v30[8]; // [rsp+80h] [rbp-29h] BYREF
  _BYTE v31[16]; // [rsp+88h] [rbp-21h] BYREF
  _BYTE v32[32]; // [rsp+98h] [rbp-11h] BYREF
  struct DWMSPRITE *v33; // [rsp+B8h] [rbp+Fh]

  v7 = 0;
  v8 = *(_DWORD **)(W32GetSessionState(a1, a2) + 96);
  v9 = v8[27] & 2;
  LODWORD(Object) = v8[27] & 1;
  v11 = Gre::Base::Globals(v10);
  v12 = *(_QWORD *)v11 + 1144LL;
  GreAcquireSemaphoreCommon<2,void (*)(HSEMAPHORE__ *)>((void (__fastcall *)(__int64))GreAcquireSemaphoreInternal, v12);
  if ( IsDwmActive(v13) )
  {
    ENTER_DWM_CRIT_COMMON::ENTER_DWM_CRIT_COMMON((__int64)v29, v11, a1, 0);
    if ( IsDwmActive(v14) )
    {
      DWMSPRITEREF::DWMSPRITEREF((DWMSPRITEREF *)v32, a2);
      v15 = v33;
      if ( v33 )
      {
        v16 = (__int64 *)*((_QWORD *)v33 + 18);
        v18 = 0;
        if ( v16 )
        {
          v17 = v16[23];
          if ( v17 )
          {
            if ( v17 != 24 && (unsigned int)SURFACE::bRedirectionBitmap((SURFACE *)(v17 - 24)) )
              v18 = 1;
          }
        }
        if ( (_DWORD)Object && v18 || a3 && v9 )
        {
          if ( *((int *)v15 + 29) >= 1 )
            CheckAndProcessWindowResizeComplete(v15, 1, 0LL);
          *(_QWORD *)((char *)v15 + 116) = (unsigned int)v18 + 1;
          if ( a3 && v9 )
          {
            Object = 0LL;
            if ( (unsigned int)UserDCompositionCreateSynchronizationObject(&Object) )
            {
              v22 = Object;
              v28 = 0LL;
              if ( (int)CompositionObject::OpenDwmHandle((CompositionObject *)Object, &v28) < 0 )
              {
                ObfDereferenceObject(v22);
              }
              else
              {
                *((_QWORD *)v15 + 13) = v28;
                *((_QWORD *)v15 + 12) = v22;
                *((_DWORD *)v15 + 30) = 1;
                *((_DWORD *)v15 + 31) = 1;
                v24 = *v16;
                v25 = *(_QWORD *)v15;
                v26 = (void *)UserReferenceDwmApiPort(v23);
                DwmAsyncUpdateSprite(v26, v25, v24, 512, 0LL, 0LL, 0, 0, 0, 0, 0LL);
              }
            }
            v19 = v8[29];
            v20 = v8[27] & 8;
          }
          else
          {
            v19 = v8[28];
            v20 = v8[27] & 4;
          }
          v7 = 1;
          *a4 = v20;
          *a5 = v19;
        }
      }
      DWMSPRITEREF::~DWMSPRITEREF((DWMSPRITEREF *)v32);
    }
    SEMOBJEXORSHARED<7>::~SEMOBJEXORSHARED<7>((__int64)v31);
    DWMSPRITELOCK::~DWMSPRITELOCK((DWMSPRITELOCK *)v30);
  }
  if ( v12 )
    GreReleaseSemaphoreCommon<2,void (*)(HSEMAPHORE__ *)>(
      (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreExclusiveInternal,
      v12);
  return v7;
}
