/*
 * XREFs of ?bSetDefaultRegion@DC@@QEAAHXZ @ 0x140174090
 * Callers:
 *     ?bMakeInfoDC@DC@@QEAAHH@Z @ 0x14000CEE0 (-bMakeInfoDC@DC@@QEAAHH@Z.c)
 *     GreCreateDisplayDC @ 0x14000E640 (GreCreateDisplayDC.c)
 *     ?GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z @ 0x140010520 (-GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z.c)
 *     ?GrepSelectBitmap@@YA?AVGSBResult@@AEAVXDCOBJ@@PEAUHBITMAP__@@W4GSBOptions@@@Z @ 0x140036B00 (-GrepSelectBitmap@@YA-AVGSBResult@@AEAVXDCOBJ@@PEAUHBITMAP__@@W4GSBOptions@@@Z.c)
 *     ?GrepRestoreDCOBJ@@YAHAEAVXDCOBJ@@H@Z @ 0x1401211B0 (-GrepRestoreDCOBJ@@YAHAEAVXDCOBJ@@H@Z.c)
 * Callees:
 *     ?GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z @ 0x14000D610 (-GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x14001F398 (--$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??0?$SEMOBJSHARED@$00@@QEAA@XZ @ 0x140022264 (--0-$SEMOBJSHARED@$00@@QEAA@XZ.c)
 *     ?vInitialize@RGNMEMOBJ@@QEAAXK@Z @ 0x140026B80 (-vInitialize@RGNMEMOBJ@@QEAAXK@Z.c)
 *     ?vSet@RGNOBJ@@QEAAXQEBU_RECTL@@@Z @ 0x140029D30 (-vSet@RGNOBJ@@QEAAXQEBU_RECTL@@@Z.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 */

__int64 __fastcall DC::bSetDefaultRegion(DC *this)
{
  __int64 v2; // rcx
  struct _ENTRY *EntryFromObject; // rax
  __int64 v4; // rcx
  unsigned __int64 v5; // rax
  _DWORD *v6; // rbx
  int v7; // esi
  LONG v8; // r13d
  unsigned __int64 v9; // r15
  __int64 v10; // rax
  LONG v11; // r8d
  LONG *v12; // rcx
  LONG v13; // eax
  LONG left; // edx
  LONG top; // ecx
  LONG right; // r9d
  LONG bottom; // r8d
  __int64 v18; // r12
  __int64 v19; // rax
  __int64 v20; // rcx
  unsigned __int64 v21; // rbx
  HANDLE v22; // rax
  char *v23; // rcx
  __int64 result; // rax
  __int64 v25; // rbx
  HANDLE CurrentThreadId; // rax
  char *v27; // rcx
  int v28; // eax
  unsigned __int64 v29; // [rsp+20h] [rbp-30h] BYREF
  __int64 v30; // [rsp+28h] [rbp-28h] BYREF
  struct _RECTL v31; // [rsp+30h] [rbp-20h] BYREF

  v2 = *(_QWORD *)(W32GetSessionState(this) + 88);
  *((_DWORD *)this + 9) |= 0x10u;
  EntryFromObject = GdiHandleManager::GetEntryFromObject(*(GdiHandleManager **)(v2 + 5672), this);
  *((_BYTE *)EntryFromObject + 15) |= 4u;
  v4 = *((_QWORD *)this + 62);
  if ( v4 && (*(_DWORD *)(v4 + 116) & 0x800) != 0 )
    v5 = *(_QWORD *)((char *)this + 532);
  else
    v5 = *((_QWORD *)this + 64);
  v6 = (_DWORD *)*((_QWORD *)this + 6);
  *(_QWORD *)&v31.right = v5;
  v7 = 0;
  *(_QWORD *)&v31.left = 0LL;
  v8 = v5;
  v29 = v5;
  v9 = HIDWORD(v5);
  if ( v4 )
  {
    SEMOBJSHARED<1>::SEMOBJSHARED<1>((HSEMAPHORE *)&v30);
    if ( (v6[10] & 0x8000) != 0
      && ((v10 = *((_QWORD *)this + 62), v11 = *(_DWORD *)(v10 + 56), v12 = (LONG *)(v10 + 60), v11 < v8)
       || *v12 < SHIDWORD(v29)) )
    {
      v13 = *v12;
      left = v31.left;
      top = v31.top;
      right = v31.right;
      if ( v31.left < 0 )
        left = 0;
      v31.left = left;
      if ( v31.top < 0 )
        top = 0;
      v31.top = top;
      if ( v11 < v31.right )
        right = v11;
      bottom = v31.bottom;
      v31.right = right;
      if ( v13 < v31.bottom )
        bottom = v13;
      v31.bottom = bottom;
      if ( right >= left )
      {
        if ( bottom < top )
          top = bottom;
        v31.top = top;
      }
      else
      {
        left = right;
        v31.left = right;
      }
    }
    else
    {
      bottom = v31.bottom;
      right = v31.right;
      top = v31.top;
      left = v31.left;
    }
    if ( (v6[10] & 0x20000) != 0 && *(int *)(*((_QWORD *)this + 62) + 112LL) < 0 )
    {
      v31.left = v6[644] + left;
      v31.right = v6[644] + right;
      v31.top = v6[645] + top;
      v31.bottom = v6[645] + bottom;
    }
    GreReleaseSemaphoreCommon<1,void (*)(HSEMAPHORE__ *)>(
      (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
      v30);
  }
  v18 = *(_QWORD *)(W32GetSessionState(v4) + 88);
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx((char *)this + 1112, 0LL);
  *((_QWORD *)this + 140) = PsGetCurrentThreadId();
  v19 = *((_QWORD *)this + 142);
  if ( v19 && v19 != *(_QWORD *)(v18 + 4160) )
  {
    v29 = *((_QWORD *)this + 142);
    RGNOBJ::vSet((RGNOBJ *)&v29, &v31);
LABEL_36:
    v25 = *((_QWORD *)this + 142);
    *(_DWORD *)(v25 + 72) = _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(W32GetSessionState(v20) + 88)
                                                                            + 4144LL));
    CurrentThreadId = PsGetCurrentThreadId();
    v27 = (char *)this + 1112;
    if ( CurrentThreadId == *((HANDLE *)this + 140) )
    {
      *((_QWORD *)this + 140) = 0LL;
      ExReleasePushLockExclusiveEx(v27, 0LL);
    }
    else
    {
      ExReleasePushLockSharedEx(v27, 0LL);
    }
    KeLeaveCriticalRegion();
    *(struct _RECTL *)((char *)this + 1000) = v31;
    *((_QWORD *)this + 127) = 0LL;
    *((_QWORD *)this + 129) = 0LL;
    *((_DWORD *)this + 260) = v8;
    *((_DWORD *)this + 261) = v9;
    if ( (*((_DWORD *)this + 10) & 1) != 0 )
    {
      v28 = *((_DWORD *)this + 257);
      v7 = *((_DWORD *)this + 256);
    }
    else
    {
      v28 = 0;
    }
    *((_DWORD *)this + 299) = v28;
    result = 1LL;
    *((_DWORD *)this + 298) = v7;
    return result;
  }
  v29 = 0LL;
  RGNMEMOBJ::vInitialize((RGNMEMOBJ *)&v29, 0x70u);
  v21 = v29;
  if ( v29 )
  {
    RGNOBJ::vSet((RGNOBJ *)&v29, &v31);
    *((_QWORD *)this + 142) = v21;
    goto LABEL_36;
  }
  *((_QWORD *)this + 142) = *(_QWORD *)(v18 + 4160);
  v22 = PsGetCurrentThreadId();
  v23 = (char *)this + 1112;
  if ( v22 == *((HANDLE *)this + 140) )
  {
    *((_QWORD *)this + 140) = 0LL;
    ExReleasePushLockExclusiveEx(v23, 0LL);
  }
  else
  {
    ExReleasePushLockSharedEx(v23, 0LL);
  }
  KeLeaveCriticalRegion();
  return 0LL;
}
