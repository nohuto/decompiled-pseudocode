/*
 * XREFs of bDeleteSurface @ 0x1400365C0
 * Callers:
 *     GreDeleteObject @ 0x140010390 (GreDeleteObject.c)
 *     bDeleteBrush @ 0x140014820 (bDeleteBrush.c)
 *     NtGdiDeleteObjectApp @ 0x14002B3A0 (NtGdiDeleteObjectApp.c)
 *     vUnreferencePdevWorker @ 0x14003D4F0 (vUnreferencePdevWorker.c)
 *     EngDeleteSurface @ 0x1400F8410 (EngDeleteSurface.c)
 *     ?vDeleteIcmDIBs@BRUSH@@QEAAXXZ @ 0x14019B948 (-vDeleteIcmDIBs@BRUSH@@QEAAXXZ.c)
 * Callees:
 *     ??1HANDLELOCK@@QEAA@XZ @ 0x14002DFB0 (--1HANDLELOCK@@QEAA@XZ.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x14002E8D0 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?vLockHandle@HANDLELOCK@@AEAAXIW4HandleLockOptions@@@Z @ 0x1400307E0 (-vLockHandle@HANDLELOCK@@AEAAXIW4HandleLockOptions@@@Z.c)
 *     ?TrackObjectReferenceIncrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z @ 0x140031250 (-TrackObjectReferenceIncrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z.c)
 *     ??1SURFREF@@QEAA@XZ @ 0x140036A58 (--1SURFREF@@QEAA@XZ.c)
 *     ??0SURFREF@@QEAA@XZ @ 0x140036A88 (--0SURFREF@@QEAA@XZ.c)
 *     ?bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x140037010 (-bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 */

__int64 __fastcall bDeleteSurface(unsigned int a1)
{
  unsigned int v2; // ebx
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
  unsigned int v17; // eax
  __int64 v18; // rcx
  unsigned int *v20; // [rsp+20h] [rbp-40h] BYREF
  int v21; // [rsp+28h] [rbp-38h]
  __int16 v22; // [rsp+2Ch] [rbp-34h]
  __int64 v23; // [rsp+30h] [rbp-30h]
  _BYTE v24[32]; // [rsp+38h] [rbp-28h] BYREF
  __int64 v25; // [rsp+58h] [rbp-8h]

  SURFREF::SURFREF((SURFREF *)v24);
  v2 = 0;
  v3 = 0LL;
  v20 = 0LL;
  v21 = 0;
  v22 = 0;
  v23 = *(_QWORD *)(W32GetSessionState(v4) + 88);
  HANDLELOCK::vLockHandle((__int64 *)&v20, (unsigned __int16)a1 | (a1 >> 8) & 0xFF0000, 0);
  if ( v21 )
  {
    if ( *((_BYTE *)v20 + 14) != 5 || ((HIWORD(a1) ^ *((unsigned __int16 *)v20 + 6)) & 0xFFFFFF7F) != 0 )
    {
      HIBYTE(v22) = 1;
    }
    else
    {
      v5 = *v20;
      v6 = *(_QWORD *)(v23 + 5672);
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
        goto LABEL_33;
      if ( (unsigned int)v5 >= v14 )
        v15 = (((unsigned int)v5 - v14) >> 16) + 1;
      else
        v15 = 0;
      v16 = *(_QWORD *)(v13 + 8LL * v15 + 8);
      if ( v15 )
        v5 = ((1 - v15) << 16) - v14 + (unsigned int)v5;
      if ( (unsigned int)v5 >= *(_DWORD *)(v16 + 20) )
LABEL_33:
        v3 = 0LL;
      else
        v3 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v16 + 24) + 8 * (v5 >> 8)) + 16LL * (unsigned __int8)v5 + 8);
      ++*(_DWORD *)(v3 + 8);
      TrackObjectReferenceIncrement(0LL, *(_QWORD *)(v3 + 680));
    }
    HANDLELOCK::vUnlock((HANDLELOCK *)&v20);
  }
  HANDLELOCK::~HANDLELOCK((HANDLELOCK *)&v20);
  v25 = v3;
  if ( v3 )
  {
    v17 = SURFACE::bDeleteSurface(v3, 0LL, 0LL);
    v18 = v25;
    if ( v17 )
      v18 = 0LL;
    v2 = v17;
    v25 = v18;
  }
  SURFREF::~SURFREF((SURFREF *)v24);
  return v2;
}
