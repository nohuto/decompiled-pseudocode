/*
 * XREFs of ?CreateHLSURFClone@SFMLOGICALSURFACE@@SAPEAUHLSURF__@@PEAUHDEV__@@PEAV1@HHH@Z @ 0x1400C916C
 * Callers:
 *     GreHintSpriteShape @ 0x140027AF0 (GreHintSpriteShape.c)
 *     ?bSpDwmCreateLogicalSurface@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUtagSIZE@@PEAPEAV3@@Z @ 0x1400CAC90 (-bSpDwmCreateLogicalSurface@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUtagSIZE@@P.c)
 *     SFMLOGICALSURFACE_CreateHLSURFCloneWrap @ 0x140217D70 (SFMLOGICALSURFACE_CreateHLSURFCloneWrap.c)
 * Callees:
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x14000A534 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ??1HmgInsertObjectHelper@@QEAA@XZ @ 0x14002504C (--1HmgInsertObjectHelper@@QEAA@XZ.c)
 *     ??0HmgInsertObjectHelper@@QEAA@XZ @ 0x1400252C0 (--0HmgInsertObjectHelper@@QEAA@XZ.c)
 *     ?bhLSurfDestroyLogicalSurfaceObject@@YAHPEAVSFMLOGICALSURFACE@@H@Z @ 0x14002C588 (-bhLSurfDestroyLogicalSurfaceObject@@YAHPEAVSFMLOGICALSURFACE@@H@Z.c)
 *     ??0CFixPred@Prediction@@QEAA@XZ @ 0x1400BB03C (--0CFixPred@Prediction@@QEAA@XZ.c)
 *     ?vDirtyRegionAccum@SFMLOGICALSURFACE@@QEAAXPEAVREGION@@@Z @ 0x1400C7410 (-vDirtyRegionAccum@SFMLOGICALSURFACE@@QEAAXPEAVREGION@@@Z.c)
 *     ?SpNotifyLSurface@@YAJPEAUHDEV__@@PEAUHLSURF__@@HKPEAU_CD_HLSURF_CREATIONCONTEXT@@@Z @ 0x1400C751C (-SpNotifyLSurface@@YAJPEAUHDEV__@@PEAUHLSURF__@@HKPEAU_CD_HLSURF_CREATIONCONTEXT@@@Z.c)
 *     ?Initialize@SFMLOGICALSURFACE@@QEAAHPEAUHWND__@@IIU_LUID@@W4_HLSURF_DISPOSITION@@@Z @ 0x1400C767C (-Initialize@SFMLOGICALSURFACE@@QEAAHPEAUHWND__@@IIU_LUID@@W4_HLSURF_DISPOSITION@@@Z.c)
 */

HLSURF __fastcall SFMLOGICALSURFACE::CreateHLSURFClone(
        _QWORD *a1,
        struct SFMLOGICALSURFACE *a2,
        int a3,
        int a4,
        int a5)
{
  HLSURF v5; // r14
  int v9; // ebx
  int v11; // r15d
  __int64 Object; // rax
  __int64 v13; // rdi
  __int64 v14; // r8
  BOOL v15; // ebx
  struct REGION *v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rax
  struct REGION *v19; // [rsp+38h] [rbp-41h] BYREF
  __int64 v20; // [rsp+40h] [rbp-39h] BYREF
  __int64 v21; // [rsp+48h] [rbp-31h] BYREF
  __int64 v22; // [rsp+50h] [rbp-29h] BYREF
  int v23; // [rsp+58h] [rbp-21h]
  int v24; // [rsp+5Ch] [rbp-1Dh]
  __int64 v25; // [rsp+60h] [rbp-19h]
  _BYTE v26[32]; // [rsp+68h] [rbp-11h] BYREF
  __int64 v27; // [rsp+88h] [rbp+Fh]
  __int64 v29; // [rsp+E0h] [rbp+67h] BYREF
  int v30; // [rsp+F0h] [rbp+77h]

  v30 = a4;
  v5 = 0LL;
  Prediction::CFixPred::CFixPred((Prediction::CFixPred *)&v20);
  RGNMEMOBJ::vInitialize((RGNMEMOBJ *)&v20, 0x70u);
  RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v20);
  Prediction::CFixPred::CFixPred((Prediction::CFixPred *)&v19);
  RGNMEMOBJ::vInitialize((RGNMEMOBJ *)&v19, 0x70u);
  RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v19);
  Prediction::CFixPred::CFixPred((Prediction::CFixPred *)&v29);
  RGNMEMOBJ::vInitialize((RGNMEMOBJ *)&v29, 0x70u);
  RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v29);
  v9 = *((_DWORD *)a2 + 63);
  v22 = *((_QWORD *)a2 + 33);
  v23 = *((_DWORD *)a2 + 68);
  v24 = *((_DWORD *)a2 + 69);
  v25 = *((_QWORD *)a2 + 25);
  if ( !v20 || !v19 || !v29 )
    goto LABEL_2;
  if ( a3 )
  {
    if ( *((_QWORD *)a2 + 16) )
    {
      v21 = *((_QWORD *)a2 + 16);
      if ( !RGNOBJ::bCopy((RGNOBJ *)&v20, (struct RGNOBJ *)&v21) )
      {
LABEL_36:
        RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v29);
        RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v19);
        RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v20);
        return 0LL;
      }
    }
    else
    {
      a3 = 0;
    }
  }
  else
  {
    v9 &= ~2u;
  }
  if ( a4 && *((_QWORD *)a2 + 10) )
  {
    v21 = *((_QWORD *)a2 + 10);
    if ( !RGNOBJ::bCopy((RGNOBJ *)&v19, (struct RGNOBJ *)&v21) )
      goto LABEL_36;
  }
  else
  {
    v30 = 0;
  }
  v11 = a5;
  if ( a5 && *((_QWORD *)a2 + 11) )
  {
    v21 = *((_QWORD *)a2 + 11);
    if ( !RGNOBJ::bCopy((RGNOBJ *)&v29, (struct RGNOBJ *)&v21) )
      goto LABEL_36;
  }
  else
  {
    v11 = 0;
  }
  Object = AllocateObject(304LL, 18LL);
  v13 = Object;
  if ( !Object )
  {
LABEL_2:
    RGNMEMOBJ::vPopThreadGuardedObject((RGNMEMOBJ *)&v29);
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v29);
    RGNMEMOBJ::vPopThreadGuardedObject((RGNMEMOBJ *)&v19);
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v19);
    RGNMEMOBJ::vPopThreadGuardedObject((RGNMEMOBJ *)&v20);
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v20);
    return 0LL;
  }
  if ( (unsigned int)SFMLOGICALSURFACE::Initialize(
                       Object,
                       *((_QWORD *)a2 + 33),
                       *((_DWORD *)a2 + 68),
                       *((_DWORD *)a2 + 69),
                       *((_QWORD *)a2 + 25),
                       *((_DWORD *)a2 + 72)) )
  {
    *(_DWORD *)(v13 + 252) = v9;
    *(_DWORD *)(v13 + 212) = *((_DWORD *)a2 + 53);
    *(_DWORD *)(v13 + 240) = *((_DWORD *)a2 + 60);
    HmgInsertObjectHelper::HmgInsertObjectHelper((HmgInsertObjectHelper *)v26);
    if ( v27 || (LOBYTE(v14) = 18, !HmgInsertObjectInternal(v13, 9LL, v14)) )
    {
      bhLSurfDestroyLogicalSurfaceObject((HLSURF *)v13, 0);
    }
    else
    {
      v5 = *(HLSURF *)v13;
      v27 = v13;
      v15 = (v9 & 0x10) != 0;
      if ( (int)SpNotifyLSurface(a1, v5, 1, v15 + 4, (struct _CD_HLSURF_CREATIONCONTEXT *)&v22) >= 0 )
        *(_QWORD *)(v13 + 24) = a1;
      if ( a3 )
      {
        RGNMEMOBJ::vPopThreadGuardedObject((RGNMEMOBJ *)&v20);
        v18 = v20;
        v20 = 0LL;
        *(_QWORD *)(v13 + 128) = v18;
      }
      if ( v30 )
      {
        RGNMEMOBJ::vPopThreadGuardedObject((RGNMEMOBJ *)&v19);
        v16 = v19;
        v19 = 0LL;
        SFMLOGICALSURFACE::vDirtyRegionAccum((SFMLOGICALSURFACE *)v13, v16);
      }
      if ( v11 )
      {
        RGNMEMOBJ::vPopThreadGuardedObject((RGNMEMOBJ *)&v29);
        v17 = v29;
        v29 = 0LL;
        *(_QWORD *)(v13 + 88) = v17;
      }
      EtwLogicalSurfCreateEvent(v5, (unsigned int)(v15 + 4));
    }
    HmgInsertObjectHelper::~HmgInsertObjectHelper((HmgInsertObjectHelper *)v26);
  }
  RGNMEMOBJ::vPopThreadGuardedObject((RGNMEMOBJ *)&v29);
  RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v29);
  RGNMEMOBJ::vPopThreadGuardedObject((RGNMEMOBJ *)&v19);
  RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v19);
  RGNMEMOBJ::vPopThreadGuardedObject((RGNMEMOBJ *)&v20);
  RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v20);
  return v5;
}
