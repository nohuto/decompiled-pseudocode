/*
 * XREFs of GreSfmCloseCompositorRef @ 0x14002AC68
 * Callers:
 *     NtGdiHLSurfSetInformation @ 0x14019C6A0 (NtGdiHLSurfSetInformation.c)
 * Callees:
 *     ?InterlockedDecrementExclusiveLockCount@OBJECT@@QEAAXXZ @ 0x14001FD60 (-InterlockedDecrementExclusiveLockCount@OBJECT@@QEAAXXZ.c)
 *     IsDwmActive @ 0x140022F80 (IsDwmActive.c)
 *     ??$GrepAcquireLockValidate@$03@@YAXXZ @ 0x1400230C4 (--$GrepAcquireLockValidate@$03@@YAXXZ.c)
 *     ??0?$SEMOBJ@$05@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140023F40 (--0-$SEMOBJ@$05@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??1ENTER_GRE_DWM_CRIT@@QEAA@XZ @ 0x14002AE50 (--1ENTER_GRE_DWM_CRIT@@QEAA@XZ.c)
 *     ??0?$SEMOBJ@$01@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14002AF14 (--0-$SEMOBJ@$01@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??0GreAcquireUnownedDMCLockShared@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14002AF4C (--0GreAcquireUnownedDMCLockShared@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??0?$SEMOBJ@$06@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14002AF98 (--0-$SEMOBJ@$06@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??0?$SEMOBJ@$07@@QEAA@AEAVPDEVOBJ@@@Z @ 0x14002AFD0 (--0-$SEMOBJ@$07@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ??0?$SEMOBJ@$02@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14002B064 (--0-$SEMOBJ@$02@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ?StopSfmStateTracking@SFMLOGICALSURFACE@@QEAAJPEAUHDEV__@@PEAUSfmState@@@Z @ 0x14002C0E4 (-StopSfmStateTracking@SFMLOGICALSURFACE@@QEAAJPEAUHDEV__@@PEAUSfmState@@@Z.c)
 *     ?bhLSurfDestroyLogicalSurfaceObject@@YAHPEAVSFMLOGICALSURFACE@@H@Z @ 0x14002C588 (-bhLSurfDestroyLogicalSurfaceObject@@YAHPEAVSFMLOGICALSURFACE@@H@Z.c)
 *     ??0SFMLOGICALSURFACEREF@@QEAA@PEAUHLSURF__@@W4DestructorDisposition@0@@Z @ 0x1400CAC50 (--0SFMLOGICALSURFACEREF@@QEAA@PEAUHLSURF__@@W4DestructorDisposition@0@@Z.c)
 *     ??1SFMLOGICALSURFACEREF@@QEAA@XZ @ 0x1400CCA5C (--1SFMLOGICALSURFACEREF@@QEAA@XZ.c)
 */

__int64 __fastcall GreSfmCloseCompositorRef(Gre::Base *a1, __int64 a2)
{
  struct Gre::Base::SESSION_GLOBALS *v4; // rbx
  Gre::Base *v5; // rcx
  Gre::Base *v6; // rcx
  OBJECT *v7; // rsi
  struct W32_PUSH_LOCK *v8; // rbx
  int v9; // eax
  struct Gre::Base::SESSION_GLOBALS *v11; // rax
  unsigned int v12; // edi
  OBJECT *v13; // rsi
  _BYTE v15[32]; // [rsp+20h] [rbp-29h] BYREF
  OBJECT *v16; // [rsp+40h] [rbp-9h]
  _BYTE v17[16]; // [rsp+50h] [rbp+7h] BYREF
  _BYTE v18[8]; // [rsp+60h] [rbp+17h] BYREF
  _BYTE v19[8]; // [rsp+68h] [rbp+1Fh] BYREF
  HSEMAPHORE v20; // [rsp+70h] [rbp+27h]
  HSEMAPHORE v21; // [rsp+78h] [rbp+2Fh] BYREF
  _BYTE v22[8]; // [rsp+80h] [rbp+37h] BYREF
  _BYTE v23[8]; // [rsp+88h] [rbp+3Fh] BYREF
  Gre::Base *v24; // [rsp+B0h] [rbp+67h] BYREF

  v24 = a1;
  v4 = Gre::Base::Globals(a1);
  GreAcquireUnownedDMCLockShared::GreAcquireUnownedDMCLockShared((GreAcquireUnownedDMCLockShared *)v17, v4);
  SEMOBJ<2>::SEMOBJ<2>(v18, v4);
  SEMOBJ<3>::SEMOBJ<3>(v19, v4);
  v20 = (HSEMAPHORE)*((_QWORD *)a1 + 7);
  GreAcquireSemaphoreInternal(v20);
  GrepAcquireLockValidate<4>();
  SEMOBJ<6>::SEMOBJ<6>(&v21, v4);
  SEMOBJ<7>::SEMOBJ<7>(v22, v4);
  SEMOBJ<8>::SEMOBJ<8>(v23, &v24);
  if ( (unsigned int)UserIsCurrentProcessDwm() )
  {
    if ( IsDwmActive(v5) )
    {
      SFMLOGICALSURFACEREF::SFMLOGICALSURFACEREF(v15, a2);
      v7 = v16;
      if ( v16 )
      {
        v8 = (OBJECT *)((char *)v16 + 256);
        if ( v16 != (OBJECT *)-256LL )
          GreAcquirePushLockExclusive((OBJECT *)((char *)v16 + 256));
        v9 = *((_DWORD *)v7 + 61);
        if ( (v9 & 8) == 0 || (v9 & 0x10) != 0 )
        {
          v12 = -2147020579;
        }
        else if ( (*((_DWORD *)v7 + 62))-- == 1 )
        {
          v11 = Gre::Base::Globals(v6);
          SFMLOGICALSURFACE::StopSfmStateTracking(v7, (HDEV)a1, *((struct SfmState **)v11 + 529));
          v12 = 0;
          if ( *((_WORD *)v7 + 6) == 1 && !*((_DWORD *)v7 + 2) )
          {
            if ( v7 != (OBJECT *)-256LL )
            {
              GreReleasePushLockExclusive((OBJECT *)((char *)v7 + 256));
              v8 = 0LL;
            }
            v13 = v16;
            if ( v16 )
              OBJECT::InterlockedDecrementExclusiveLockCount(v16);
            v16 = 0LL;
            if ( !(unsigned int)bhLSurfDestroyLogicalSurfaceObject(v13, 1) )
              v12 = -1073741823;
          }
        }
        else
        {
          v12 = 0;
        }
        if ( v8 )
          GreReleasePushLockExclusive(v8);
      }
      else
      {
        v12 = -1073741816;
      }
      SFMLOGICALSURFACEREF::~SFMLOGICALSURFACEREF((SFMLOGICALSURFACEREF *)v15);
    }
    else
    {
      v12 = -1071775733;
    }
  }
  else
  {
    v12 = -1073741790;
  }
  ENTER_GRE_DWM_CRIT::~ENTER_GRE_DWM_CRIT((ENTER_GRE_DWM_CRIT *)v17);
  return v12;
}
