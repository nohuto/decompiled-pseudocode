/*
 * XREFs of ?hspCreateDwmSpriteObj@@YAPEAUHSPRITE__@@PEAUHWND__@@_KPEAUHDEV__@@H@Z @ 0x14016AE00
 * Callers:
 *     GreTransferSpriteStateToDwmState @ 0x140169AB8 (GreTransferSpriteStateToDwmState.c)
 *     ?GreCreateSpriteInternal@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@PEAUtagMINIWINDOWINFO@@KHHHHHHPEBG@Z @ 0x14032066C (-GreCreateSpriteInternal@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@PEAUtagMINIWINDOWINFO@@KHHH.c)
 * Callees:
 *     ??1HmgInsertObjectHelper@@QEAA@XZ @ 0x14002504C (--1HmgInsertObjectHelper@@QEAA@XZ.c)
 *     ??0HmgInsertObjectHelper@@QEAA@XZ @ 0x1400252C0 (--0HmgInsertObjectHelper@@QEAA@XZ.c)
 *     ??1DWMSPRITEREF@@QEAA@XZ @ 0x1400278B8 (--1DWMSPRITEREF@@QEAA@XZ.c)
 *     ??0DWMSPRITEREF@@QEAA@PEAUHSPRITE__@@@Z @ 0x1400278E4 (--0DWMSPRITEREF@@QEAA@PEAUHSPRITE__@@@Z.c)
 *     ?vspDestroyDwmSpriteObjInternal@@YAXPEAUHDEV__@@_NPEAVDWMSPRITE@@@Z @ 0x140030624 (-vspDestroyDwmSpriteObjInternal@@YAXPEAUHDEV__@@_NPEAVDWMSPRITE@@@Z.c)
 *     ??0SFMLOGICALSURFACEREF@@QEAA@PEAUHLSURF__@@W4DestructorDisposition@0@@Z @ 0x1400CAC50 (--0SFMLOGICALSURFACEREF@@QEAA@PEAUHLSURF__@@W4DestructorDisposition@0@@Z.c)
 *     ??1SFMLOGICALSURFACEREF@@QEAA@XZ @ 0x1400CCA5C (--1SFMLOGICALSURFACEREF@@QEAA@XZ.c)
 *     ?hlsurfCreateLogicalSurfaceObject@@YAPEAUHLSURF__@@QEAUHDEV__@@KPEAU_CD_HLSURF_CREATIONCONTEXT@@@Z @ 0x14016B0D4 (-hlsurfCreateLogicalSurfaceObject@@YAPEAUHLSURF__@@QEAUHDEV__@@KPEAU_CD_HLSURF_CREATIONCONTEXT@@.c)
 *     ?SetLogicalSurface@DWMSPRITE@@QEAAXPEAUHDEV__@@PEAVSFMLOGICALSURFACE@@@Z @ 0x14016B1E8 (-SetLogicalSurface@DWMSPRITE@@QEAAXPEAUHDEV__@@PEAVSFMLOGICALSURFACE@@@Z.c)
 *     ?hspGetNeighborSprite@@YAPEAUHSPRITE__@@PEAU1@_N1@Z @ 0x14016BBF8 (-hspGetNeighborSprite@@YAPEAUHSPRITE__@@PEAU1@_N1@Z.c)
 *     ?InterlockedIncrementExclusiveLockCount@OBJECT@@QEAAXXZ @ 0x140320A80 (-InterlockedIncrementExclusiveLockCount@OBJECT@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

__int64 __fastcall hspCreateDwmSpriteObj(Gre::Base *a1, __int64 a2, HDEV a3, int a4)
{
  __int64 v7; // rbx
  struct Gre::Base::SESSION_GLOBALS *v8; // r15
  __int64 Object; // rax
  _QWORD *v10; // rdi
  _QWORD *v11; // rsi
  __int64 v12; // r8
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rax
  HSPRITE v16; // rcx
  _QWORD *v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rax
  struct _RTL_GENERIC_TABLE *v20; // rcx
  HLSURF LogicalSurfaceObject; // rax
  HDEV v22; // rdx
  HDEV v23; // rdx
  HSPRITE NeighborSprite; // rax
  __int64 *v26; // rdx
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rcx
  unsigned __int8 NewElement[8]; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v31; // [rsp+28h] [rbp-D8h]
  _QWORD Buffer[2]; // [rsp+30h] [rbp-D0h] BYREF
  Gre::Base *v33; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v34; // [rsp+48h] [rbp-B8h]
  _BYTE v35[32]; // [rsp+58h] [rbp-A8h] BYREF
  struct SFMLOGICALSURFACE *v36; // [rsp+78h] [rbp-88h]
  _BYTE v37[32]; // [rsp+88h] [rbp-78h] BYREF
  _QWORD *v38; // [rsp+A8h] [rbp-58h]
  _BYTE v39[96]; // [rsp+B0h] [rbp-50h] BYREF

  v31 = a2;
  v34 = 0LL;
  v7 = 0LL;
  v8 = Gre::Base::Globals(a1);
  Object = AllocateObject(152LL, 15LL);
  v10 = (_QWORD *)Object;
  if ( Object )
  {
    v11 = (_QWORD *)(Object + 24);
    NewElement[0] = 0;
    *(_QWORD *)(Object + 32) = Object + 24;
    *(_QWORD *)(Object + 24) = Object + 24;
    ++*(_DWORD *)(*((_QWORD *)v8 + 17) + 96LL);
    HmgInsertObjectHelper::HmgInsertObjectHelper((HmgInsertObjectHelper *)v37);
    if ( v38 )
      goto LABEL_14;
    LOBYTE(v12) = 15;
    if ( !HmgInsertObjectInternal(v10, 9LL, v12) )
      goto LABEL_14;
    v14 = *v10;
    LOBYTE(v13) = 15;
    v38 = v10;
    NewElement[0] = 1;
    HmgMarkUndeletable(v14, v13);
    v15 = *((_QWORD *)v8 + 17);
    v16 = *(HSPRITE *)(v15 + 144);
    if ( !v16 )
    {
      v17 = *(_QWORD **)(v15 + 88);
      v18 = v15 + 80;
      if ( *v17 != v18 )
        goto LABEL_6;
      *v11 = v18;
      v11[1] = v17;
      *v17 = v11;
      *(_QWORD *)(v18 + 8) = v11;
      goto LABEL_8;
    }
    NeighborSprite = hspGetNeighborSprite(v16, 0, 0);
    if ( NeighborSprite )
    {
      DWMSPRITEREF::DWMSPRITEREF((DWMSPRITEREF *)v35, NeighborSprite);
      v26 = (__int64 *)(((unsigned __int64)v36 + 24) & ((unsigned __int128)-(__int128)(unsigned __int64)v36 >> 64));
      v27 = *v26;
      if ( *(__int64 **)(*v26 + 8) == v26 )
      {
        *v11 = v27;
        v11[1] = v26;
        *(_QWORD *)(v27 + 8) = v11;
        *v26 = (__int64)v11;
        DWMSPRITEREF::~DWMSPRITEREF((DWMSPRITEREF *)v35);
LABEL_8:
        if ( a1 )
        {
          v19 = *v10;
          v10[5] = a1;
          v20 = (struct _RTL_GENERIC_TABLE *)*((_QWORD *)v8 + 17);
          Buffer[1] = v19;
          Buffer[0] = a1;
          RtlInsertElementGenericTable(v20, Buffer, 0x10u, NewElement);
        }
        if ( !NewElement[0] )
        {
LABEL_18:
          OBJECT::InterlockedIncrementExclusiveLockCount((OBJECT *)v10);
LABEL_15:
          HmgInsertObjectHelper::~HmgInsertObjectHelper((HmgInsertObjectHelper *)v37);
          if ( NewElement[0] )
          {
            GreInitializePushLock((struct W32_PUSH_LOCK *)(v10 + 11));
            v7 = *v10;
            v10[6] = v31;
          }
          else
          {
            LOBYTE(v23) = 1;
            vspDestroyDwmSpriteObjInternal(a3, v23, (struct DWMSPRITE *)v10);
          }
          return v7;
        }
        EtwDwmSpriteCreateEvent(a1, *v10);
        v33 = a1;
        ThreadRestrictNewHandlesRegion::ThreadRestrictNewHandlesRegion((ThreadRestrictNewHandlesRegion *)v39);
        LogicalSurfaceObject = hlsurfCreateLogicalSurfaceObject(
                                 a3,
                                 (unsigned int)(a4 != 0) + 4,
                                 (struct _CD_HLSURF_CREATIONCONTEXT *)&v33);
        if ( LogicalSurfaceObject )
        {
          SFMLOGICALSURFACEREF::SFMLOGICALSURFACEREF((__int64)v35, LogicalSurfaceObject);
          DWMSPRITE::SetLogicalSurface((DWMSPRITE *)v10, v22, v36);
          SFMLOGICALSURFACEREF::~SFMLOGICALSURFACEREF((SFMLOGICALSURFACEREF *)v35);
        }
        else
        {
          NewElement[0] = 0;
        }
        ThreadRestrictNewHandlesRegion::~ThreadRestrictNewHandlesRegion((ThreadRestrictNewHandlesRegion *)v39);
LABEL_14:
        if ( NewElement[0] )
          goto LABEL_15;
        goto LABEL_18;
      }
    }
    else
    {
      v28 = *((_QWORD *)v8 + 17) + 80LL;
      v29 = *(_QWORD *)v28;
      if ( *(_QWORD *)(*(_QWORD *)v28 + 8LL) == v28 )
      {
        *v11 = v29;
        v11[1] = v28;
        *(_QWORD *)(v29 + 8) = v11;
        *(_QWORD *)v28 = v11;
        goto LABEL_8;
      }
    }
LABEL_6:
    __fastfail(3u);
  }
  return v7;
}
