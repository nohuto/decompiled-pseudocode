/*
 * XREFs of ?hlsurfCreateLogicalSurfaceObject@@YAPEAUHLSURF__@@QEAUHDEV__@@KPEAU_CD_HLSURF_CREATIONCONTEXT@@@Z @ 0x14016B0D4
 * Callers:
 *     ?hspCreateDwmSpriteObj@@YAPEAUHSPRITE__@@PEAUHWND__@@_KPEAUHDEV__@@H@Z @ 0x14016AE00 (-hspCreateDwmSpriteObj@@YAPEAUHSPRITE__@@PEAUHWND__@@_KPEAUHDEV__@@H@Z.c)
 * Callees:
 *     ??1HmgInsertObjectHelper@@QEAA@XZ @ 0x14002504C (--1HmgInsertObjectHelper@@QEAA@XZ.c)
 *     ??0HmgInsertObjectHelper@@QEAA@XZ @ 0x1400252C0 (--0HmgInsertObjectHelper@@QEAA@XZ.c)
 *     ?bhLSurfDestroyLogicalSurfaceObject@@YAHPEAVSFMLOGICALSURFACE@@H@Z @ 0x14002C588 (-bhLSurfDestroyLogicalSurfaceObject@@YAHPEAVSFMLOGICALSURFACE@@H@Z.c)
 *     ?SpNotifyLSurface@@YAJPEAUHDEV__@@PEAUHLSURF__@@HKPEAU_CD_HLSURF_CREATIONCONTEXT@@@Z @ 0x1400C751C (-SpNotifyLSurface@@YAJPEAUHDEV__@@PEAUHLSURF__@@HKPEAU_CD_HLSURF_CREATIONCONTEXT@@@Z.c)
 *     ?Initialize@SFMLOGICALSURFACE@@QEAAHPEAUHWND__@@IIU_LUID@@W4_HLSURF_DISPOSITION@@@Z @ 0x1400C767C (-Initialize@SFMLOGICALSURFACE@@QEAAHPEAUHWND__@@IIU_LUID@@W4_HLSURF_DISPOSITION@@@Z.c)
 */

HLSURF __fastcall hlsurfCreateLogicalSurfaceObject(_QWORD *a1, unsigned int a2, struct _CD_HLSURF_CREATIONCONTEXT *a3)
{
  __int64 Object; // rax
  HLSURF v7; // rdi
  __int64 v8; // rbx
  __int64 v9; // r8
  HLSURF v10; // rdx
  _BYTE v12[32]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v13; // [rsp+50h] [rbp-18h]

  Object = AllocateObject(304LL, 18LL);
  v7 = 0LL;
  v8 = Object;
  if ( Object
    && (unsigned int)SFMLOGICALSURFACE::Initialize(
                       Object,
                       *(_QWORD *)a3,
                       *((_DWORD *)a3 + 2),
                       *((_DWORD *)a3 + 3),
                       *((_QWORD *)a3 + 2),
                       1) )
  {
    HmgInsertObjectHelper::HmgInsertObjectHelper((HmgInsertObjectHelper *)v12);
    if ( v13 || (LOBYTE(v9) = 18, !HmgInsertObjectInternal(v8, 9LL, v9)) )
    {
      bhLSurfDestroyLogicalSurfaceObject((HLSURF *)v8, 0);
    }
    else
    {
      v7 = *(HLSURF *)v8;
      v10 = *(HLSURF *)v8;
      v13 = v8;
      if ( (int)SpNotifyLSurface(a1, v10, 1, a2, a3) >= 0 )
        *(_QWORD *)(v8 + 24) = a1;
      EtwLogicalSurfCreateEvent(v7, a2);
    }
    HmgInsertObjectHelper::~HmgInsertObjectHelper((HmgInsertObjectHelper *)v12);
  }
  return v7;
}
