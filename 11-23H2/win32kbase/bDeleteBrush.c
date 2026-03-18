/*
 * XREFs of bDeleteBrush @ 0x1C00C64F0
 * Callers:
 *     ?GrepCloseCurrentProcess@@YAHXZ @ 0x1C0034CE8 (-GrepCloseCurrentProcess@@YAHXZ.c)
 *     NtGdiDeleteObjectApp @ 0x1C0041980 (NtGdiDeleteObjectApp.c)
 *     ?DEC_SHARE_REF_CNT_LAZY0@@YAXPEAVBRUSH@@@Z @ 0x1C0045680 (-DEC_SHARE_REF_CNT_LAZY0@@YAXPEAVBRUSH@@@Z.c)
 *     GreDeleteObject @ 0x1C00472A0 (GreDeleteObject.c)
 *     ??1BRUSHMEMOBJ@@QEAA@XZ @ 0x1C0060894 (--1BRUSHMEMOBJ@@QEAA@XZ.c)
 *     ??$vGarbageCollectObject@VBRUSHSELOBJGC@@@@YAXPEAUHOBJ__@@@Z @ 0x1C00D2E48 (--$vGarbageCollectObject@VBRUSHSELOBJGC@@@@YAXPEAUHOBJ__@@@Z.c)
 * Callees:
 *     Win32FreePool @ 0x1C0038570 (Win32FreePool.c)
 *     ?bPEBCacheHandle@@YAHW4_HANDLECACHETYPE@@PEAT_OBJECTATTR@@PEAU_ENTRY@@PEAVHANDLELOCK@@PEAPEAU_BASEOBJECT@@@Z @ 0x1C003D250 (-bPEBCacheHandle@@YAHW4_HANDLECACHETYPE@@PEAT_OBJECTATTR@@PEAU_ENTRY@@PEAVHANDLELOCK@@PEAPEAU_BA.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C0043330 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?pObj@HANDLELOCK@@QEAAPEAVOBJECT@@XZ @ 0x1C00440F0 (-pObj@HANDLELOCK@@QEAAPEAVOBJECT@@XZ.c)
 *     ??1HANDLELOCK@@QEAA@XZ @ 0x1C00443E0 (--1HANDLELOCK@@QEAA@XZ.c)
 *     ?HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z @ 0x1C0044F10 (-HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z.c)
 *     HmgRemoveObject @ 0x1C0047F80 (HmgRemoveObject.c)
 *     ??0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z @ 0x1C00604A0 (--0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z.c)
 *     ??1BRUSHSELOBJ@@QEAA@XZ @ 0x1C006051C (--1BRUSHSELOBJ@@QEAA@XZ.c)
 *     bDeleteSurface @ 0x1C0062930 (bDeleteSurface.c)
 *     ?vFreeOrCacheRBrush@RBRUSH@@QEAAXW4RBTYPE@@@Z @ 0x1C00892E0 (-vFreeOrCacheRBrush@RBRUSH@@QEAAXW4RBTYPE@@@Z.c)
 *     ?bLockHobj@HANDLELOCK@@QEAAHPEAUHOBJ__@@E@Z @ 0x1C008B090 (-bLockHobj@HANDLELOCK@@QEAAHPEAUHOBJ__@@E@Z.c)
 *     ?FreeBrushMemory@@YAXPEAVBRUSH@@@Z @ 0x1C00B354C (-FreeBrushMemory@@YAXPEAVBRUSH@@@Z.c)
 *     HmgFreeObjectAttr @ 0x1C00C4E90 (HmgFreeObjectAttr.c)
 *     ?vDeleteIcmDIBs@BRUSH@@QEAAXXZ @ 0x1C0150CA8 (-vDeleteIcmDIBs@BRUSH@@QEAAXXZ.c)
 *     ?ReleaseReferenceCountedObjectHandle@@YAXW4ReferenceTrackerCountedType@@PEAX@Z @ 0x1C016D424 (-ReleaseReferenceCountedObjectHandle@@YAXW4ReferenceTrackerCountedType@@PEAX@Z.c)
 */

__int64 __fastcall bDeleteBrush(struct HOBJ__ *a1, int a2, int a3)
{
  __int64 v5; // rbx
  unsigned int v6; // esi
  int v7; // r14d
  __int64 v8; // r15
  __int64 v9; // rcx
  __int64 v10; // r15
  _DWORD *v11; // rsi
  __int64 CurrentProcessWin32Process; // rax
  __int64 v13; // rsi
  __int64 ProcessWow64Process; // rax
  __int64 v15; // rdx
  int v16; // ecx
  int v17; // ecx
  int v18; // edx
  __int64 v19; // rax
  int v20; // eax
  char *v21; // rcx
  __int64 v22; // rcx
  int v23; // r8d
  volatile signed __int32 *v24; // rcx
  int v25; // r8d
  _DWORD *v27; // [rsp+68h] [rbp-A0h] BYREF
  int v28; // [rsp+70h] [rbp-98h]
  _DWORD *v29; // [rsp+88h] [rbp-80h]
  struct OBJECT *v30; // [rsp+90h] [rbp-78h]
  _QWORD v31[14]; // [rsp+98h] [rbp-70h] BYREF

  v5 = 0LL;
  v6 = 1;
  v7 = 1;
  v8 = 0LL;
  if ( !a2 )
  {
    v27 = 0LL;
    v28 = 0;
    HANDLELOCK::bLockHobj((HANDLELOCK *)&v27, a1, 16);
    if ( !v28 )
    {
LABEL_26:
      HANDLELOCK::~HANDLELOCK((HANDLELOCK *)&v27);
      goto LABEL_27;
    }
    v30 = HANDLELOCK::pObj((HANDLELOCK *)&v27);
    v10 = *((_QWORD *)v27 + 2);
    if ( v10 )
    {
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v9);
      v13 = CurrentProcessWin32Process;
      if ( CurrentProcessWin32Process )
        v13 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process;
      if ( v13 )
      {
        ProcessWow64Process = PsGetProcessWow64Process(*(_QWORD *)v13);
        v15 = *(unsigned int *)(v13 + 292);
        v16 = *(_DWORD *)(v13 + 292);
        if ( ProcessWow64Process )
          v11 = (_DWORD *)(v15 ^ (unsigned int)__ROR4__(v10, 32 - (v16 & 0x1F)));
        else
          v11 = (_DWORD *)(__ROR8__(v10, 64 - (v16 & 0x3Fu)) ^ v15);
LABEL_12:
        v8 = (__int64)v11;
        v29 = v11;
        if ( *((_DWORD *)HANDLELOCK::pObj((HANDLELOCK *)&v27) + 2) )
        {
          **((_DWORD **)v30 + 6) = 2;
          v17 = 1;
LABEL_14:
          v7 = 0;
LABEL_23:
          if ( v17 )
            HANDLELOCK::vUnlock((HANDLELOCK *)&v27);
          v6 = 1;
          goto LABEL_26;
        }
        if ( v11 )
        {
          v17 = 1;
          if ( (*v11 & 1) != 0 )
            goto LABEL_14;
          v18 = *((_DWORD *)v30 + 10) & 0x400;
          if ( (*((_DWORD *)v30 + 10) & 0x10) != 0
            && (!v18 || ((unsigned int)a1 & 0x7F0000) != 0x500000)
            && (unsigned int)bPEBCacheHandle(v18 != 0, v11, v27, (__int64)&v27, 0LL) )
          {
            v7 = 0;
          }
        }
        v17 = v7;
        goto LABEL_23;
      }
      DbgkWerCaptureLiveKernelDump(L"win32kfull.sys", 356LL, 41LL, 0LL, 0LL, 0LL, 0LL, 0LL, 0);
    }
    v11 = 0LL;
    goto LABEL_12;
  }
LABEL_27:
  if ( !v7 )
    return v6;
  if ( a3 )
  {
    if ( a3 != 1 )
      goto LABEL_33;
    v19 = HmgRemoveObjectImpl(a1, 0, 1, 2, 16, 0LL);
  }
  else
  {
    v19 = HmgRemoveObject((__int64)a1, 0, 0, 0, 16, 0LL);
  }
  v5 = v19;
LABEL_33:
  if ( v5 )
  {
    v20 = *(_DWORD *)(v5 + 40);
    if ( (v20 & 0x400) != 0 )
    {
      v21 = *(char **)(v5 + 152);
      if ( v21 )
      {
        if ( (v20 & 0x4000) == 0 )
          Win32FreePool(v21);
      }
    }
    v22 = *(_QWORD *)(v5 + 24);
    if ( v22 )
      bDeleteSurface(v22);
    if ( *(_DWORD *)(v5 + 100) != -1 )
    {
      v23 = *(_DWORD *)(v5 + 40);
      if ( v23 >= 0 )
      {
        v24 = *(volatile signed __int32 **)(v5 + 120);
        v25 = v23 & 0x40000000;
        if ( _InterlockedExchangeAdd(v24, 0xFFFFFFFF) == 1 )
          RBRUSH::vFreeOrCacheRBrush(v24, v25 != 0);
        *(_QWORD *)(v5 + 120) = 0LL;
      }
    }
    if ( (*(_DWORD *)(v5 + 40) & 0x80u) != 0 )
      BRUSH::vDeleteIcmDIBs((BRUSH *)v5);
    if ( *(_QWORD *)(v5 + 136) )
      ReleaseReferenceCountedObjectHandle(2LL);
    FreeBrushMemory((unsigned int *)v5);
    if ( !a2 && v8 )
      HmgFreeObjectAttr(v8);
  }
  else
  {
    BRUSHSELOBJ::BRUSHSELOBJ((BRUSHSELOBJ *)v31, (HBRUSH)a1);
    if ( !v31[0] || (*(_DWORD *)(v31[0] + 40LL) & 0x200) == 0 )
      v6 = 0;
    BRUSHSELOBJ::~BRUSHSELOBJ((BRUSHSELOBJ *)v31);
  }
  return v6;
}
