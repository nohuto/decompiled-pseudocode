/*
 * XREFs of ?ValidateAndReferencePDEV@@YA_NPEAUHDEV__@@@Z @ 0x1400DC978
 * Callers:
 *     ??0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z @ 0x1400DBCE4 (--0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z.c)
 * Callees:
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x140060D30 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 *     ??0?$SEMOBJ@$0BD@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1400DCF10 (--0-$SEMOBJ@$0BD@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 */

char __fastcall ValidateAndReferencePDEV(Gre::Base *a1)
{
  struct Gre::Base::SESSION_GLOBALS *v2; // rbx
  HDEV i; // rax
  HSEMAPHORE v4; // rbx
  struct _GRETHREAD *v5; // rax
  HSEMAPHORE v7; // rbx
  struct _GRETHREAD *v8; // rax
  bool v9; // zf
  HSEMAPHORE v10; // [rsp+38h] [rbp+10h] BYREF
  HDEV v11; // [rsp+40h] [rbp+18h] BYREF

  v2 = Gre::Base::Globals(a1);
  SEMOBJ<19>::SEMOBJ<19>(&v10, v2);
  for ( i = (HDEV)*((_QWORD *)v2 + 481); i; i = *(HDEV *)i )
  {
    v11 = i;
    if ( i == (HDEV)a1 )
    {
      PDEVOBJ::vReferencePdev((PDEVOBJ *)&v11);
      v4 = v10;
      if ( v10 )
      {
        EtwTraceGreLockReleaseSemaphore(L"DriverMgmt", v10);
        v5 = GreGetCurrentThreadCrossSessionCheck();
        if ( v5 )
        {
          v9 = (*((_BYTE *)v5 + 27))-- == 1;
          if ( v9 )
            *(_QWORD *)v5 &= ~0x80000uLL;
          if ( !*(_QWORD *)v5 )
            GrepOnAllLocksReleased();
        }
        GreReleaseSemaphoreExclusiveInternal(v4);
      }
      return 1;
    }
  }
  v7 = v10;
  if ( v10 )
  {
    EtwTraceGreLockReleaseSemaphore(L"DriverMgmt", v10);
    v8 = GreGetCurrentThreadCrossSessionCheck();
    if ( v8 )
    {
      v9 = (*((_BYTE *)v8 + 27))-- == 1;
      if ( v9 )
        *(_QWORD *)v8 &= ~0x80000uLL;
      if ( !*(_QWORD *)v8 )
        GrepOnAllLocksReleased();
    }
    GreReleaseSemaphoreExclusiveInternal(v7);
  }
  return 0;
}
