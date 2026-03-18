/*
 * XREFs of ??1DCOBJA@@QEAA@XZ @ 0x140010220
 * Callers:
 *     GreGetDCOrgEx @ 0x14000F3C0 (GreGetDCOrgEx.c)
 *     ?ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z @ 0x14000F604 (-ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z.c)
 *     GreSelectVisRgnShared @ 0x14000FDA0 (GreSelectVisRgnShared.c)
 *     GreSetDCOrg @ 0x14000FE10 (GreSetDCOrg.c)
 *     GreGetBounds @ 0x14000FF10 (GreGetBounds.c)
 *     GreIsRendering @ 0x140010150 (GreIsRendering.c)
 *     GreLockVisRgnSharedOrExclusive @ 0x140010ED0 (GreLockVisRgnSharedOrExclusive.c)
 *     GreValidateVisrgn @ 0x140022F24 (GreValidateVisrgn.c)
 *     _GetDCEx @ 0x140099850 (_GetDCEx.c)
 *     GreCopyVisRgn @ 0x140179AC0 (GreCopyVisRgn.c)
 *     GreIntersectVisRect @ 0x140179B90 (GreIntersectVisRect.c)
 * Callees:
 *     ??1HANDLELOCK@@QEAA@XZ @ 0x14002DFB0 (--1HANDLELOCK@@QEAA@XZ.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x14002E8D0 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?vLockHandle@HANDLELOCK@@AEAAXIW4HandleLockOptions@@@Z @ 0x1400307E0 (-vLockHandle@HANDLELOCK@@AEAAXIW4HandleLockOptions@@@Z.c)
 *     HmgPentryFromPobj @ 0x140032C30 (HmgPentryFromPobj.c)
 *     GrepDeleteDC @ 0x140034C20 (GrepDeleteDC.c)
 *     ?ReferenceDereferenceCommon@CReferenceCountedType@CReferenceTracker@NSInstrumentation@@AEAAXPEAUSCircularBuffer@123@_N@Z @ 0x1400D9130 (-ReferenceDereferenceCommon@CReferenceCountedType@CReferenceTracker@NSInstrumentation@@AEAAXPEAU.c)
 */

void __fastcall DCOBJA::~DCOBJA(DCOBJA *this)
{
  __int64 v1; // rbx
  HDC v3; // r14
  __int64 v4; // rbp
  __int64 v5; // rdx
  char v6; // cl
  char v7; // di
  struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *v8; // rdx
  NSInstrumentation::CReferenceTracker::CReferenceCountedType *v9; // rcx
  char *v10; // rax
  __int64 v11; // rcx
  char **v12; // rdx
  __int64 v13; // [rsp+20h] [rbp-28h] BYREF
  int v14; // [rsp+28h] [rbp-20h]
  __int16 v15; // [rsp+2Ch] [rbp-1Ch]
  __int64 v16; // [rsp+30h] [rbp-18h]

  v1 = *(_QWORD *)this;
  if ( !*(_QWORD *)this )
    goto LABEL_14;
  v3 = *(HDC *)v1;
  v4 = *(_QWORD *)(W32GetSessionState() + 88);
  v13 = 0LL;
  v14 = 0;
  v15 = 0;
  v5 = (unsigned __int16)*(_DWORD *)v1 | (*(_DWORD *)v1 >> 8) & 0xFF0000u;
  v16 = v4;
  HANDLELOCK::vLockHandle(&v13, v5, 5LL);
  if ( !v14 )
  {
    HmgPentryFromPobj(v1);
    HANDLELOCK::~HANDLELOCK((HANDLELOCK *)&v13);
    goto LABEL_14;
  }
  v6 = *(_BYTE *)(v13 + 14);
  v7 = *(_BYTE *)(v13 + 15) & 8;
  if ( v6 == 5 )
  {
    v8 = *(struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer **)(v1 + 680);
    if ( v8 )
    {
      v9 = *(NSInstrumentation::CReferenceTracker::CReferenceCountedType **)(v4 + 5704);
      goto LABEL_9;
    }
  }
  else if ( v6 == 16 )
  {
    v8 = *(struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer **)(v1 + 136);
    if ( v8 )
    {
      v9 = *(NSInstrumentation::CReferenceTracker::CReferenceCountedType **)(v4 + 5736);
LABEL_9:
      if ( v9 )
        NSInstrumentation::CReferenceTracker::CReferenceCountedType::ReferenceDereferenceCommon(v9, v8, 0);
    }
  }
  --*(_DWORD *)(v1 + 8);
  HANDLELOCK::vUnlock((HANDLELOCK *)&v13);
  HANDLELOCK::~HANDLELOCK((HANDLELOCK *)&v13);
  if ( v7 )
    GrepDeleteDC(v3);
LABEL_14:
  v10 = (char *)this + 40;
  if ( this != (DCOBJA *)-40LL )
  {
    v11 = *(_QWORD *)v10;
    if ( *(char **)(*(_QWORD *)v10 + 8LL) != v10 || (v12 = (char **)*((_QWORD *)this + 6), *v12 != v10) )
      __fastfail(3u);
    *v12 = (char *)v11;
    *(_QWORD *)(v11 + 8) = v12;
    *((_QWORD *)this + 6) = (char *)this + 40;
    *(_QWORD *)v10 = v10;
  }
}
