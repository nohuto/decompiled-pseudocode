/*
 * XREFs of NtGdiDeleteObjectApp @ 0x14002B3A0
 * Callers:
 *     <none>
 * Callees:
 *     bDeleteBrush @ 0x140014820 (bDeleteBrush.c)
 *     ?GreReleaseSemaphoreSharedInternal@@YAXPEAUHSEMAPHORE__@@@Z @ 0x14001FC40 (-GreReleaseSemaphoreSharedInternal@@YAXPEAUHSEMAPHORE__@@@Z.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x14001FC70 (EtwTraceGreLockReleaseSemaphore.c)
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x140021F20 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 *     ??0?$SEMOBJSHARED@$00@@QEAA@XZ @ 0x140022264 (--0-$SEMOBJSHARED@$00@@QEAA@XZ.c)
 *     ??1RGNOBJAPI@@QEAA@XZ @ 0x14002D0C0 (--1RGNOBJAPI@@QEAA@XZ.c)
 *     ??0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z @ 0x14002D140 (--0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z.c)
 *     ?bDeleteRGNOBJAPI@RGNOBJAPI@@QEAAHXZ @ 0x14002E270 (-bDeleteRGNOBJAPI@RGNOBJAPI@@QEAAHXZ.c)
 *     HmgShareLockCheck @ 0x14002F820 (HmgShareLockCheck.c)
 *     GrepDeleteDC @ 0x140034C20 (GrepDeleteDC.c)
 *     HmgDecrementShareReferenceCountEx @ 0x1400358E0 (HmgDecrementShareReferenceCountEx.c)
 *     bDeleteSurface @ 0x1400365C0 (bDeleteSurface.c)
 *     ??$GrepReleaseLockValidate@$00@@YAXXZ @ 0x140038030 (--$GrepReleaseLockValidate@$00@@YAXXZ.c)
 *     ??0?$SEMOBJ@$0N@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1400E8C68 (--0-$SEMOBJ@$0N@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ?bDeletePalette@XEPALOBJ@@QEAAHW4_CLEANUPTYPE@@@Z @ 0x1401C256C (-bDeletePalette@XEPALOBJ@@QEAAHW4_CLEANUPTYPE@@@Z.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall NtGdiDeleteObjectApp(struct HOBJ__ *a1)
{
  unsigned int v2; // r12d
  int v3; // ebx
  unsigned int v4; // edi
  __int64 v5; // rcx
  unsigned int v6; // r14d
  unsigned __int64 v7; // rdx
  __int64 v8; // r15
  __int64 v9; // r10
  unsigned int v10; // r9d
  unsigned int v11; // ecx
  __int64 v12; // r11
  __int64 v13; // rax
  __int64 v14; // r9
  __int64 v16; // r9
  unsigned int v17; // r8d
  __int64 v18; // r9
  __int64 v19; // r8
  int v20; // ebx
  int v21; // ebx
  int v22; // ebx
  int v23; // ebx
  int v24; // ebx
  unsigned int v25; // ebx
  int v26; // r8d
  unsigned int (__fastcall *v27)(struct HOBJ__ *, _QWORD); // rax
  __int64 SessionState; // rax
  __int64 v29; // rdx
  HSEMAPHORE v30; // rax
  int v31; // r8d
  unsigned int v32; // esi
  int v33; // r8d
  struct _ERESOURCE *v34; // rbx
  struct _GRETHREAD *v35; // rax
  bool v36; // zf
  struct _ERESOURCE *v37; // rbx
  struct _GRETHREAD *v38; // rax
  _QWORD v39[8]; // [rsp+20h] [rbp-40h] BYREF
  HSEMAPHORE v40; // [rsp+90h] [rbp+30h] BYREF
  HSEMAPHORE v41; // [rsp+98h] [rbp+38h] BYREF

  if ( ((unsigned int)a1 & 0x800000) != 0 )
    return 1LL;
  v2 = (unsigned int)a1 >> 16;
  v3 = BYTE2(a1) & 0x1F;
  v4 = 0;
  v5 = *(_QWORD *)(W32GetSessionState(a1) + 88);
  v6 = 1;
  v7 = (unsigned __int16)a1 | ((unsigned int)a1 >> 8) & 0xFF0000;
  v8 = *(_QWORD *)(v5 + 5672);
  if ( (unsigned int)v7 >= 0x10000 )
  {
    if ( *(_DWORD *)v8 <= 0x10000u )
    {
      v7 = (unsigned __int16)a1;
    }
    else
    {
      v9 = *(_QWORD *)(v8 + 16);
      v10 = *(_DWORD *)(v9 + 2056);
      if ( (unsigned __int16)a1 >= v10 + ((*(unsigned __int16 *)(v9 + 2) + 0xFFFF) << 16) )
      {
        v14 = 0LL;
      }
      else
      {
        if ( (unsigned __int16)a1 >= v10 )
          v11 = (((unsigned __int16)a1 - v10) >> 16) + 1;
        else
          v11 = 0;
        v12 = *(_QWORD *)(v9 + 8LL * v11 + 8);
        if ( v11 )
          v13 = (unsigned __int16)a1 + ((1 - v11) << 16) - v10;
        else
          v13 = (unsigned __int16)a1;
        v14 = 0LL;
        if ( (unsigned int)v13 < *(_DWORD *)(v12 + 20) )
          v14 = *(_QWORD *)v12 + 24 * v13;
      }
      v5 = WORD1(v7);
      if ( *(unsigned __int8 *)(v14 + 13) == (_DWORD)v5 )
        v7 = (unsigned __int16)a1;
    }
  }
  v16 = *(_QWORD *)(v8 + 16);
  v17 = *(_DWORD *)(v16 + 2056);
  if ( (unsigned int)v7 < v17 + ((*(unsigned __int16 *)(v16 + 2) + 0xFFFF) << 16) )
  {
    if ( (unsigned int)v7 >= v17 )
      v5 = (((unsigned int)v7 - v17) >> 16) + 1;
    else
      v5 = 0LL;
    v18 = *(_QWORD *)(v16 + 8LL * (unsigned int)v5 + 8);
    if ( (_DWORD)v5 )
      v7 = ((1 - (_DWORD)v5) << 16) - v17 + (unsigned int)v7;
    v19 = 0LL;
    if ( (unsigned int)v7 < *(_DWORD *)(v18 + 20) )
    {
      v5 = 2LL * (unsigned __int8)v7;
      if ( *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v18 + 24) + 8 * (v7 >> 8)) + 16LL * (unsigned __int8)v7 + 8) )
      {
        v5 = 3LL * (unsigned int)v7;
        v19 = *(_QWORD *)v18 + 24LL * (unsigned int)v7;
      }
    }
    if ( v19 )
    {
      v5 = *(unsigned __int8 *)(v19 + 14);
      if ( (_DWORD)v5 == v3 && *(_WORD *)(v19 + 12) == (_WORD)v2 && (*(_DWORD *)(v19 + 8) & 0xFFFFFFFE) == 0 )
      {
        LOBYTE(v4) = a1 != 0LL;
        return v4;
      }
    }
  }
  v20 = v3 - 1;
  if ( !v20 )
    return GrepDeleteDC((HDC)a1);
  v21 = v20 - 3;
  if ( !v21 )
  {
    RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v39, (HRGN)a1, 0, 0);
    if ( !v39[0] || *(_DWORD *)(v39[0] + 76LL) || !(unsigned int)RGNOBJAPI::bDeleteRGNOBJAPI((RGNOBJAPI *)v39) )
      v6 = 0;
    RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v39);
    return v6;
  }
  v22 = v21 - 1;
  if ( !v22 )
  {
    SEMOBJSHARED<1>::SEMOBJSHARED<1>(&v40);
    v25 = bDeleteSurface(a1);
    EtwTraceGreLockReleaseSemaphore((__int64)L"DynamicModeChange", (int)v40, v26);
    GrepReleaseLockValidate<1>();
    GreReleaseSemaphoreSharedInternal((struct _ERESOURCE *)v40);
    return v25;
  }
  v23 = v22 - 3;
  if ( !v23 )
  {
    SessionState = W32GetSessionState(v5);
    SEMOBJ<13>::SEMOBJ<13>(&v41, *(_QWORD *)(SessionState + 88));
    LOBYTE(v29) = 8;
    v30 = (HSEMAPHORE)HmgShareLockCheck(a1, v29);
    v40 = v30;
    if ( v30 )
    {
      if ( ((_DWORD)v30[6] & 0x1000000) == 0 )
      {
        v32 = XEPALOBJ::bDeletePalette(&v40, 0LL);
        if ( v40 )
          HmgDecrementShareReferenceCountEx((struct _BASEOBJECT *)v40, 0LL);
        v34 = (struct _ERESOURCE *)v41;
        if ( v41 )
        {
          EtwTraceGreLockReleaseSemaphore((__int64)L"Palette", (int)v41, v33);
          v35 = GreGetCurrentThreadCrossSessionCheck();
          if ( v35 )
          {
            v36 = (*((_BYTE *)v35 + 21))-- == 1;
            if ( v36 )
              *(_QWORD *)v35 &= ~0x2000uLL;
          }
          GreReleaseSemaphoreSharedInternal(v34);
        }
        return v32;
      }
      HmgDecrementShareReferenceCountEx((struct _BASEOBJECT *)v30, 0LL);
    }
    v37 = (struct _ERESOURCE *)v41;
    if ( v41 )
    {
      EtwTraceGreLockReleaseSemaphore((__int64)L"Palette", (int)v41, v31);
      v38 = GreGetCurrentThreadCrossSessionCheck();
      if ( v38 )
      {
        v36 = (*((_BYTE *)v38 + 21))-- == 1;
        if ( v36 )
          *(_QWORD *)v38 &= ~0x2000uLL;
      }
      GreReleaseSemaphoreSharedInternal(v37);
    }
    return 0LL;
  }
  v24 = v23 - 2;
  if ( !v24 )
  {
    v27 = *(unsigned int (__fastcall **)(struct HOBJ__ *, _QWORD))(*(_QWORD *)(W32GetWin32kBaseApiSetTable() + 24)
                                                                 + 592LL);
    if ( v27 )
      return v27(a1, 0LL);
    return v4;
  }
  if ( v24 != 6 )
    return 0LL;
  return bDeleteBrush(a1, 0, 0);
}
