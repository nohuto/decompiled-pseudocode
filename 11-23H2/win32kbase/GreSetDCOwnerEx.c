/*
 * XREFs of GreSetDCOwnerEx @ 0x1C004BDD0
 * Callers:
 *     _GetDCEx @ 0x1C004A820 (_GetDCEx.c)
 *     GetMonitorDC @ 0x1C005B3E8 (GetMonitorDC.c)
 *     CreateCacheDC @ 0x1C005BC20 (CreateCacheDC.c)
 *     InitUserScreen @ 0x1C005CD6C (InitUserScreen.c)
 *     DestroyCacheDC @ 0x1C005D380 (DestroyCacheDC.c)
 *     ?DestroyDC@@YAXPEAPEAUHDC__@@@Z @ 0x1C00A0434 (-DestroyDC@@YAXPEAPEAUHDC__@@@Z.c)
 *     GreCleanDCAndSetOwnerEx @ 0x1C00D32B0 (GreCleanDCAndSetOwnerEx.c)
 * Callees:
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C00329E8 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     GreIncQuotaCount @ 0x1C003C4A0 (GreIncQuotaCount.c)
 *     ?SetupDCAttributes@@YAXPEAVDC@@PEAU_DC_ATTR@@@Z @ 0x1C003E79C (-SetupDCAttributes@@YAXPEAVDC@@PEAU_DC_ATTR@@@Z.c)
 *     ?vSet@RGNOBJ@@QEAAXQEBU_RECTL@@@Z @ 0x1C003ED80 (-vSet@RGNOBJ@@QEAAXQEBU_RECTL@@@Z.c)
 *     HmgDecProcessHandleCount @ 0x1C003F938 (HmgDecProcessHandleCount.c)
 *     HmgIncProcessHandleCountEx @ 0x1C0040440 (HmgIncProcessHandleCountEx.c)
 *     GreReleaseHmgrSemaphore @ 0x1C00427F0 (GreReleaseHmgrSemaphore.c)
 *     GreAcquireHmgrSemaphore @ 0x1C0042870 (GreAcquireHmgrSemaphore.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C0043330 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?vLockHandle@HANDLELOCK@@AEAAXIHHH@Z @ 0x1C0043570 (-vLockHandle@HANDLELOCK@@AEAAXIHHH@Z.c)
 *     ?pObj@HANDLELOCK@@QEAAPEAVOBJECT@@XZ @ 0x1C00440F0 (-pObj@HANDLELOCK@@QEAAPEAVOBJECT@@XZ.c)
 *     ??1HANDLELOCK@@QEAA@XZ @ 0x1C00443E0 (--1HANDLELOCK@@QEAA@XZ.c)
 *     ?Pid@HANDLELOCK@@QEAAXK@Z @ 0x1C0046E44 (-Pid@HANDLELOCK@@QEAAXK@Z.c)
 *     GreSetBrushOwner @ 0x1C00601D0 (GreSetBrushOwner.c)
 *     ?FreeDCAttributes@@YAXPEAVDC@@@Z @ 0x1C008ADF8 (-FreeDCAttributes@@YAXPEAVDC@@@Z.c)
 *     HmgFreeDcAttr @ 0x1C008AE88 (HmgFreeDcAttr.c)
 *     ??0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C00981A4 (--0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C00981E4 (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     ?AcquireDcVisRgnExclusive@DC@@QEAA@XZ @ 0x1C00D1650 (-AcquireDcVisRgnExclusive@DC@@QEAA@XZ.c)
 *     ?AcquireDcVisRgnShared@DC@@QEAA@XZ @ 0x1C00D28F8 (-AcquireDcVisRgnShared@DC@@QEAA@XZ.c)
 *     ?GrepValidateVisRgn@@YA_NPEAVDC@@PEAVREGION@@AEAVERECTL@@@Z @ 0x1C00D2BB8 (-GrepValidateVisRgn@@YA_NPEAVDC@@PEAVREGION@@AEAVERECTL@@@Z.c)
 *     HmgAllocateDcAttr @ 0x1C00E02B0 (HmgAllocateDcAttr.c)
 */

__int64 __fastcall GreSetDCOwnerEx(__int64 a1, unsigned int a2, int a3, int a4)
{
  unsigned int v5; // ebx
  BOOL v6; // r14d
  unsigned int v7; // edi
  struct _DC_ATTR *DcAttr; // rsi
  struct OBJECT *v9; // rax
  __int64 v10; // r13
  struct OBJECT *v11; // r12
  bool v12; // bl
  char v13; // dl
  unsigned int v14; // ebx
  unsigned int v15; // eax
  unsigned int v16; // ebx
  int v17; // ecx
  __int64 v18; // rcx
  unsigned __int64 CurrentProcessWin32Process; // rax
  unsigned int v20; // ebx
  __int64 v21; // rcx
  __int64 v22; // rax
  unsigned int CurrentProcessId; // eax
  __int64 v24; // rcx
  unsigned int v26; // eax
  _BYTE v27[8]; // [rsp+30h] [rbp-50h] BYREF
  __int64 v28; // [rsp+38h] [rbp-48h]
  char v29; // [rsp+40h] [rbp-40h]
  __int64 v30; // [rsp+48h] [rbp-38h]
  char v31; // [rsp+50h] [rbp-30h]
  struct _RECTL v32; // [rsp+58h] [rbp-28h] BYREF
  __int64 v33; // [rsp+68h] [rbp-18h] BYREF
  int v34; // [rsp+70h] [rbp-10h]
  __int64 v35; // [rsp+C0h] [rbp+40h] BYREF
  int v36; // [rsp+D0h] [rbp+50h]
  int v37; // [rsp+D8h] [rbp+58h]

  v37 = a4;
  v36 = a3;
  v5 = a1;
  v6 = a3 == 0;
  v7 = 0;
  DcAttr = 0LL;
  if ( a2 == -2147483646 && !a3 )
    DcAttr = (struct _DC_ATTR *)HmgAllocateDcAttr();
  GreAcquireHmgrSemaphore(a1);
  v33 = 0LL;
  v34 = 0;
  HANDLELOCK::vLockHandle((HANDLELOCK *)&v33, (unsigned __int16)v5 | (v5 >> 8) & 0xFF0000, 0, 0, 0);
  if ( v34 )
  {
    v9 = HANDLELOCK::pObj((HANDLELOCK *)&v33);
    v10 = v33;
    v11 = v9;
    if ( *(_BYTE *)(v33 + 14) != 1 || *(_WORD *)(v33 + 12) != HIWORD(v5) )
      goto LABEL_45;
    if ( *((_WORD *)v9 + 6) )
    {
      if ( *((struct _KTHREAD **)v9 + 2) != KeGetCurrentThread() )
        goto LABEL_45;
      v10 = v33;
    }
    if ( a2 == -2147483630 )
      goto LABEL_38;
    if ( (*(_DWORD *)(v10 + 8) & 0xFFFFFFFE) == 0x80000012 )
    {
      DC::AcquireDcVisRgnShared(v9);
      v12 = GrepValidateVisRgn(v11, *((struct REGION **)v11 + 142), (struct ERECTL *)&v32);
      if ( v29 )
        CPushLock::ReleaseLock((CPushLock *)(v28 + 1112));
      if ( !v12 )
      {
        DC::AcquireDcVisRgnExclusive(v11);
        v35 = *((_QWORD *)v11 + 142);
        if ( v35 )
          RGNOBJ::vSet((RGNOBJ *)&v35, &v32);
        if ( v31 )
          CPushLock::ReleaseLock((CPushLock *)(v30 + 1112));
      }
    }
    if ( !a2 )
    {
LABEL_38:
      v20 = *(_DWORD *)(v10 + 8) & 0xFFFFFFFE;
      if ( v20 == ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) )
      {
        v22 = SGDGetSessionState(v21);
        PUSHLOCKEX::PUSHLOCKEX((PUSHLOCKEX *)v27, (struct _EX_PUSH_LOCK *)(*(_QWORD *)(v22 + 24) + 2336LL));
        FreeDCAttributes(v11);
        HANDLELOCK::Pid((HANDLELOCK *)&v33, a2);
        CurrentProcessId = (unsigned int)PsGetCurrentProcessId();
        HmgDecProcessHandleCount(CurrentProcessId & 0xFFFFFFFC);
        v7 = 1;
        PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)v27);
      }
      else
      {
        v26 = *(_DWORD *)(v10 + 8) & 0xFFFFFFFE;
        if ( v26 == -2147483630 )
        {
          HANDLELOCK::Pid((HANDLELOCK *)&v33, a2);
          v7 = 1;
        }
        else if ( !v26 && !a2 )
        {
          v7 = 1;
          goto LABEL_45;
        }
      }
      if ( a2 != -2147483630 )
        goto LABEL_41;
    }
    else if ( a2 == -2147483646 )
    {
      v14 = (unsigned int)PsGetCurrentProcessId();
      v15 = *(_DWORD *)(v10 + 8) & 0xFFFFFFFE;
      v16 = v14 & 0xFFFFFFFC;
      if ( v15 == v16 || v15 == -2147483630 || !v15 )
      {
        v17 = 0;
        v7 = 1;
        if ( v15 != v16 )
        {
          v7 = HmgIncProcessHandleCountEx(v16, v13, v37);
          if ( v7 )
          {
            v17 = 1;
          }
          else
          {
            if ( !v36 )
              goto LABEL_41;
            CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v18);
            if ( CurrentProcessWin32Process )
              CurrentProcessWin32Process &= -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
            GreIncQuotaCount((struct _W32PROCESS *)CurrentProcessWin32Process);
            v17 = 1;
            v7 = 1;
          }
        }
        if ( !*(_QWORD *)(v10 + 16) )
        {
          if ( DcAttr )
          {
            SetupDCAttributes(v11, DcAttr);
            DcAttr = 0LL;
          }
          else if ( !v36 )
          {
            v7 = 0;
            if ( v17 )
              HmgDecProcessHandleCount(v16);
            goto LABEL_41;
          }
        }
        HANDLELOCK::Pid((HANDLELOCK *)&v33, v16);
      }
LABEL_41:
      if ( v7 && v6 && (unsigned int)GreSetBrushOwner(**((HBRUSH **)v11 + 17), a2) )
        GreSetBrushOwner(**((HBRUSH **)v11 + 18), a2);
    }
LABEL_45:
    HANDLELOCK::vUnlock((HANDLELOCK *)&v33);
  }
  HANDLELOCK::~HANDLELOCK((HANDLELOCK *)&v33);
  GreReleaseHmgrSemaphore(v24);
  if ( DcAttr )
    HmgFreeDcAttr(DcAttr);
  return v7;
}
