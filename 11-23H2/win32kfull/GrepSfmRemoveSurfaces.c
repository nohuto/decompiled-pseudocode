/*
 * XREFs of GrepSfmRemoveSurfaces @ 0x1C0087020
 * Callers:
 *     <none>
 * Callees:
 *     ?StopSfmStateTracking@SFMLOGICALSURFACE@@QEAAJPEAUHDEV__@@PEAUSfmState@@@Z @ 0x1C0087284 (-StopSfmStateTracking@SFMLOGICALSURFACE@@QEAAJPEAUHDEV__@@PEAUSfmState@@@Z.c)
 *     ?bhLSurfDestroyLogicalSurfaceObject@@YAHPEAVSFMLOGICALSURFACE@@H@Z @ 0x1C00B4964 (-bhLSurfDestroyLogicalSurfaceObject@@YAHPEAVSFMLOGICALSURFACE@@H@Z.c)
 *     ?LockLogicalSurfaceObj@SFMLOGICALSURFACEREF@@AEAAXPEAUHLSURF__@@@Z @ 0x1C00B4A08 (-LockLogicalSurfaceObj@SFMLOGICALSURFACEREF@@AEAAXPEAUHLSURF__@@@Z.c)
 *     ??1SFMLOGICALSURFACEREF@@QEAA@XZ @ 0x1C00C5CF0 (--1SFMLOGICALSURFACEREF@@QEAA@XZ.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C013DC74 (--0-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
 */

struct Gre::Base::SESSION_GLOBALS *__fastcall GrepSfmRemoveSurfaces(Gre::Base *a1)
{
  struct Gre::Base::SESSION_GLOBALS *result; // rax
  struct Gre::Base::SESSION_GLOBALS *v2; // rbp
  struct Gre::Base::SESSION_GLOBALS **v3; // rcx
  struct Gre::Base::SESSION_GLOBALS *v4; // rsi
  SFMLOGICALSURFACE *v5; // rdi
  HLSURF v6; // rbx
  int v7; // eax
  struct SFMLOGICALSURFACE *v8; // rcx
  _BYTE v9[32]; // [rsp+20h] [rbp-38h] BYREF
  struct SFMLOGICALSURFACE *v10; // [rsp+40h] [rbp-18h]
  int v11; // [rsp+48h] [rbp-10h]

  result = Gre::Base::Globals(a1);
  v2 = result;
  v3 = (struct Gre::Base::SESSION_GLOBALS **)(*((_QWORD *)result + 809) + 40LL);
  v4 = *v3;
  if ( *v3 != (struct Gre::Base::SESSION_GLOBALS *)v3 )
  {
    do
    {
      v5 = (struct Gre::Base::SESSION_GLOBALS *)((char *)v4 - 32);
      v4 = *(struct Gre::Base::SESSION_GLOBALS **)v4;
      v6 = *(HLSURF *)v5;
      UnexpectedThreadTerminationHandler<DWMSPRITEREF>::UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v9);
      v10 = 0LL;
      v11 = 0;
      SFMLOGICALSURFACEREF::LockLogicalSurfaceObj((SFMLOGICALSURFACEREF *)v9, v6);
      if ( v10 )
      {
        v7 = *((_DWORD *)v5 + 61);
        if ( (v7 & 0x10) != 0 )
          *((_DWORD *)v5 + 61) = v7 & 0xFFFFFFEF;
        else
          *((_DWORD *)v5 + 62) = 0;
        SFMLOGICALSURFACE::StopSfmStateTracking(v5, 0LL, *((struct SfmState **)v2 + 809));
        v8 = v10;
        if ( v10 )
          _InterlockedDecrement((volatile signed __int32 *)v10 + 3);
        v10 = 0LL;
        bhLSurfDestroyLogicalSurfaceObject(v8, 1);
      }
      SFMLOGICALSURFACEREF::~SFMLOGICALSURFACEREF((SFMLOGICALSURFACEREF *)v9);
      result = (struct Gre::Base::SESSION_GLOBALS *)(*((_QWORD *)v2 + 809) + 40LL);
    }
    while ( v4 != result );
  }
  return result;
}
