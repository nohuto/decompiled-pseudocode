/*
 * XREFs of ??1PALMEMOBJ@@QEAA@XZ @ 0x1400C6030
 * Callers:
 *     ?CreateSurfacePal@@YAHVXEPALOBJ@@KKK@Z @ 0x1400C5DA4 (-CreateSurfacePal@@YAHVXEPALOBJ@@KKK@Z.c)
 *     EngCreatePalette @ 0x1400C5F20 (EngCreatePalette.c)
 *     GreCreatePalette @ 0x14019AB40 (GreCreatePalette.c)
 *     ?vDynamicSwitchPalettes@@YAXPEAVSURFACE@@PEAVPDEV@@1@Z @ 0x1401C5D14 (-vDynamicSwitchPalettes@@YAXPEAVSURFACE@@PEAVPDEV@@1@Z.c)
 *     bInitPALOBJ @ 0x1402E2008 (bInitPALOBJ.c)
 * Callees:
 *     XEPALOBJ_FreePaletteMemory @ 0x14001A750 (XEPALOBJ_FreePaletteMemory.c)
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 *     ?vUnlock@?$SEMOBJ@$0BE@@@QEAAXXZ @ 0x14001F87C (-vUnlock@-$SEMOBJ@$0BE@@@QEAAXXZ.c)
 *     ??0?$SEMOBJ@$0BE@@@QEAA@XZ @ 0x14001FCA8 (--0-$SEMOBJ@$0BE@@@QEAA@XZ.c)
 *     ?TrackObjectReferenceDecrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z @ 0x140022558 (-TrackObjectReferenceDecrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z.c)
 *     ??1HANDLELOCK@@QEAA@XZ @ 0x14002DFB0 (--1HANDLELOCK@@QEAA@XZ.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x14002E8D0 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?vLockHandle@HANDLELOCK@@AEAAXIW4HandleLockOptions@@@Z @ 0x1400307E0 (-vLockHandle@HANDLELOCK@@AEAAXIW4HandleLockOptions@@@Z.c)
 *     ?vUnlockAndRelease@HANDLELOCK@@QEAAXXZ @ 0x140032060 (-vUnlockAndRelease@HANDLELOCK@@QEAAXXZ.c)
 *     HmgPentryFromPobj @ 0x140032C30 (HmgPentryFromPobj.c)
 *     HmgDecrementShareReferenceCountEx @ 0x1400358E0 (HmgDecrementShareReferenceCountEx.c)
 *     ?vUnrefPalette@XEPALOBJ@@QEAAXXZ @ 0x140036AB0 (-vUnrefPalette@XEPALOBJ@@QEAAXXZ.c)
 */

void __fastcall PALMEMOBJ::~PALMEMOBJ(__int64 **this)
{
  __int64 v2; // r14
  struct _BASEOBJECT *v3; // rcx
  __int64 v4; // rsi
  __int64 v5; // rcx
  __int64 v6; // rbx
  unsigned __int64 v7; // rdx
  __int64 v8; // r11
  unsigned int v9; // r10d
  unsigned int v10; // ecx
  __int64 v11; // r11
  __int64 v12; // rax
  __int64 v13; // r10
  __int64 v14; // r10
  unsigned int v15; // r8d
  unsigned int v16; // ecx
  __int64 v17; // r11
  __int64 v18; // rbx
  char v19; // cl
  __int64 v20; // rdx
  __int64 v21; // rcx
  char *v22; // rcx
  unsigned int *v23; // [rsp+20h] [rbp-20h] BYREF
  int v24; // [rsp+28h] [rbp-18h]
  __int16 v25; // [rsp+2Ch] [rbp-14h]
  __int64 v26; // [rsp+30h] [rbp-10h]
  struct _BASEOBJECT *v27; // [rsp+60h] [rbp+20h] BYREF

  v2 = *(_QWORD *)(W32GetSessionState(this) + 88);
  if ( !*this )
    return;
  if ( *((_DWORD *)this + 2) )
  {
    v3 = (struct _BASEOBJECT *)*this;
LABEL_4:
    HmgDecrementShareReferenceCountEx(v3, 0LL);
    *this = 0LL;
    return;
  }
  v4 = **this;
  SEMOBJ<20>::SEMOBJ<20>((HSEMAPHORE *)&v27);
  v23 = 0LL;
  v24 = 0;
  v25 = 0;
  v26 = *(_QWORD *)(W32GetSessionState(v5) + 88);
  HANDLELOCK::vLockHandle((__int64 *)&v23, (unsigned __int16)v4 | ((unsigned int)v4 >> 8) & 0xFF0000, 0);
  if ( !v24 )
    goto LABEL_44;
  v6 = *(_QWORD *)(v26 + 5672);
  v7 = *v23;
  if ( (unsigned int)v7 >= 0x10000 )
  {
    if ( *(_DWORD *)v6 <= 0x10000u )
    {
      v7 = (unsigned __int16)v7;
    }
    else
    {
      v8 = *(_QWORD *)(v6 + 16);
      v9 = *(_DWORD *)(v8 + 2056);
      if ( (unsigned __int16)v7 >= v9 + ((*(unsigned __int16 *)(v8 + 2) + 0xFFFF) << 16) )
      {
        v13 = 0LL;
      }
      else
      {
        if ( (unsigned __int16)v7 >= v9 )
          v10 = (((unsigned __int16)v7 - v9) >> 16) + 1;
        else
          v10 = 0;
        v11 = *(_QWORD *)(v8 + 8LL * v10 + 8);
        if ( v10 )
          v12 = (unsigned __int16)v7 + ((1 - v10) << 16) - v9;
        else
          v12 = (unsigned __int16)v7;
        v13 = 0LL;
        if ( (unsigned int)v12 < *(_DWORD *)(v11 + 20) )
          v13 = *(_QWORD *)v11 + 24 * v12;
      }
      if ( *(unsigned __int8 *)(v13 + 13) == WORD1(v7) )
        v7 = (unsigned __int16)v7;
    }
  }
  v14 = *(_QWORD *)(v6 + 16);
  v15 = *(_DWORD *)(v14 + 2056);
  if ( (unsigned int)v7 >= v15 + ((*(unsigned __int16 *)(v14 + 2) + 0xFFFF) << 16) )
    goto LABEL_48;
  if ( (unsigned int)v7 >= v15 )
    v16 = (((unsigned int)v7 - v15) >> 16) + 1;
  else
    v16 = 0;
  v17 = *(_QWORD *)(v14 + 8LL * v16 + 8);
  if ( v16 )
    v7 = ((1 - v16) << 16) - v15 + (unsigned int)v7;
  if ( (unsigned int)v7 >= *(_DWORD *)(v17 + 20) )
LABEL_48:
    v18 = 0LL;
  else
    v18 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v17 + 24) + 8 * (v7 >> 8)) + 16LL * (unsigned __int8)v7 + 8);
  if ( *((_BYTE *)v23 + 14) != 8 || *((_WORD *)v23 + 6) != WORD1(v4) )
  {
    HIBYTE(v25) = 1;
LABEL_43:
    HANDLELOCK::vUnlock((HANDLELOCK *)&v23);
LABEL_44:
    v18 = 0LL;
    goto LABEL_36;
  }
  if ( *(_WORD *)(v18 + 12) || *(_DWORD *)(v18 + 8) != 1 )
  {
    *((_BYTE *)v23 + 15) |= 8u;
    goto LABEL_43;
  }
  v19 = *(_BYTE *)(HmgPentryFromPobj((_DWORD *)v18) + 14);
  if ( v19 == 5 )
  {
    v20 = *(_QWORD *)(v18 + 680);
    v21 = 0LL;
    goto LABEL_34;
  }
  if ( v19 == 16 )
  {
    v20 = *(_QWORD *)(v18 + 136);
    v21 = 2LL;
LABEL_34:
    TrackObjectReferenceDecrement(v21, v20);
  }
  HANDLELOCK::vUnlockAndRelease((HANDLELOCK *)&v23);
LABEL_36:
  HANDLELOCK::~HANDLELOCK((HANDLELOCK *)&v23);
  SEMOBJ<20>::vUnlock((HSEMAPHORE *)&v27);
  v3 = (struct _BASEOBJECT *)*this;
  if ( !v18 )
    goto LABEL_4;
  if ( v3 != *((struct _BASEOBJECT **)v3 + 15) )
  {
    v27 = (struct _BASEOBJECT *)*((_QWORD *)v3 + 15);
    XEPALOBJ::vUnrefPalette(&v27);
  }
  v22 = (char *)(*this)[13];
  if ( v22 )
  {
    if ( v22 != *(char **)(v2 + 3760) )
      GreDeleteFastMutex(v22);
    (*this)[13] = 0LL;
  }
  XEPALOBJ_FreePaletteMemory((__int64)this);
}
