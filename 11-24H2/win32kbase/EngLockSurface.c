/*
 * XREFs of EngLockSurface @ 0x140036810
 * Callers:
 *     ?MulEnableSurface@@YAPEAUHSURF__@@PEAUDHPDEV__@@@Z @ 0x1400F8150 (-MulEnableSurface@@YAPEAUHSURF__@@PEAUDHPDEV__@@@Z.c)
 *     ?EngCreateLockedBitmap@@YAPEAU_SURFOBJ@@UtagSIZE@@JKKPEAX@Z @ 0x1400F8510 (-EngCreateLockedBitmap@@YAPEAU_SURFOBJ@@UtagSIZE@@JKKPEAX@Z.c)
 * Callees:
 *     ??1HANDLELOCK@@QEAA@XZ @ 0x14002DFB0 (--1HANDLELOCK@@QEAA@XZ.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x14002E8D0 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?vLockHandle@HANDLELOCK@@AEAAXIW4HandleLockOptions@@@Z @ 0x1400307E0 (-vLockHandle@HANDLELOCK@@AEAAXIW4HandleLockOptions@@@Z.c)
 *     ?TrackObjectReferenceIncrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z @ 0x140031250 (-TrackObjectReferenceIncrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z.c)
 *     HmgIncrementShareReferenceCount @ 0x1400357D0 (HmgIncrementShareReferenceCount.c)
 *     ??1SURFREF@@QEAA@XZ @ 0x140036A58 (--1SURFREF@@QEAA@XZ.c)
 *     ??0SURFREF@@QEAA@XZ @ 0x140036A88 (--0SURFREF@@QEAA@XZ.c)
 */

SURFOBJ *__stdcall EngLockSurface(HSURF hsurf)
{
  unsigned int v1; // esi
  SURFOBJ *v2; // rbx
  __int64 v3; // rdi
  __int64 v4; // rcx
  unsigned __int64 v5; // rdx
  __int64 v6; // r10
  __int64 v7; // r11
  unsigned int v8; // r9d
  unsigned int v9; // ecx
  __int64 v10; // r11
  __int64 v11; // rax
  __int64 v12; // r9
  __int64 v13; // r9
  unsigned int v14; // r8d
  unsigned int v15; // ecx
  __int64 v16; // r10
  unsigned int *v18; // [rsp+20h] [rbp-40h] BYREF
  int v19; // [rsp+28h] [rbp-38h]
  __int16 v20; // [rsp+2Ch] [rbp-34h]
  __int64 v21; // [rsp+30h] [rbp-30h]
  _BYTE v22[32]; // [rsp+38h] [rbp-28h] BYREF
  __int64 v23; // [rsp+58h] [rbp-8h]

  v1 = (unsigned int)hsurf;
  SURFREF::SURFREF((SURFREF *)v22);
  v2 = 0LL;
  v3 = 0LL;
  v18 = 0LL;
  v19 = 0;
  v20 = 0;
  v21 = *(_QWORD *)(W32GetSessionState(v4) + 88);
  HANDLELOCK::vLockHandle((__int64 *)&v18, (unsigned __int16)v1 | (v1 >> 8) & 0xFF0000, 0);
  if ( v19 )
  {
    if ( *((_BYTE *)v18 + 14) != 5 || ((HIWORD(v1) ^ *((unsigned __int16 *)v18 + 6)) & 0xFFFFFF7F) != 0 )
    {
      HIBYTE(v20) = 1;
    }
    else
    {
      v5 = *v18;
      v6 = *(_QWORD *)(v21 + 5672);
      if ( (unsigned int)v5 >= 0x10000 )
      {
        if ( *(_DWORD *)v6 <= 0x10000u )
        {
          v5 = (unsigned __int16)v5;
        }
        else
        {
          v7 = *(_QWORD *)(v6 + 16);
          v8 = *(_DWORD *)(v7 + 2056);
          if ( (unsigned __int16)v5 >= v8 + ((*(unsigned __int16 *)(v7 + 2) + 0xFFFF) << 16) )
          {
            v12 = 0LL;
          }
          else
          {
            if ( (unsigned __int16)v5 >= v8 )
              v9 = (((unsigned __int16)v5 - v8) >> 16) + 1;
            else
              v9 = 0;
            v10 = *(_QWORD *)(v7 + 8LL * v9 + 8);
            if ( v9 )
              v11 = (unsigned __int16)v5 + ((1 - v9) << 16) - v8;
            else
              v11 = (unsigned __int16)v5;
            v12 = 0LL;
            if ( (unsigned int)v11 < *(_DWORD *)(v10 + 20) )
              v12 = *(_QWORD *)v10 + 24 * v11;
          }
          if ( *(unsigned __int8 *)(v12 + 13) == WORD1(v5) )
            v5 = (unsigned __int16)v5;
        }
      }
      v13 = *(_QWORD *)(v6 + 16);
      v14 = *(_DWORD *)(v13 + 2056);
      if ( (unsigned int)v5 >= v14 + ((*(unsigned __int16 *)(v13 + 2) + 0xFFFF) << 16) )
        goto LABEL_31;
      if ( (unsigned int)v5 >= v14 )
        v15 = (((unsigned int)v5 - v14) >> 16) + 1;
      else
        v15 = 0;
      v16 = *(_QWORD *)(v13 + 8LL * v15 + 8);
      if ( v15 )
        v5 = ((1 - v15) << 16) - v14 + (unsigned int)v5;
      if ( (unsigned int)v5 >= *(_DWORD *)(v16 + 20) )
LABEL_31:
        v3 = 0LL;
      else
        v3 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v16 + 24) + 8 * (v5 >> 8)) + 16LL * (unsigned __int8)v5 + 8);
      ++*(_DWORD *)(v3 + 8);
      TrackObjectReferenceIncrement(0LL, *(_QWORD *)(v3 + 680));
    }
    HANDLELOCK::vUnlock((HANDLELOCK *)&v18);
  }
  HANDLELOCK::~HANDLELOCK((HANDLELOCK *)&v18);
  v23 = v3;
  if ( v3 )
  {
    HmgIncrementShareReferenceCount((struct _BASEOBJECT *)v3);
    v2 = (SURFOBJ *)((v23 + 24) & -(__int64)(v23 != 0));
  }
  SURFREF::~SURFREF((SURFREF *)v22);
  return v2;
}
