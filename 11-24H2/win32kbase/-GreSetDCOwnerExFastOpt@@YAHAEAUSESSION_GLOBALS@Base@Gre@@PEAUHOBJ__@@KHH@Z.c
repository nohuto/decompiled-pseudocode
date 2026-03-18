/*
 * XREFs of ?GreSetDCOwnerExFastOpt@@YAHAEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@KHH@Z @ 0x1401C5800
 * Callers:
 *     GreSetDCOwnerEx @ 0x14000F100 (GreSetDCOwnerEx.c)
 *     _GetDCEx @ 0x140099850 (_GetDCEx.c)
 * Callees:
 *     HmgAllocateDcAttr @ 0x14001E2CC (HmgAllocateDcAttr.c)
 *     ?vUnlock@?$SEMOBJ@$0BE@@@QEAAXXZ @ 0x14001F87C (-vUnlock@-$SEMOBJ@$0BE@@@QEAAXXZ.c)
 *     ?vSet@RGNOBJ@@QEAAXQEBU_RECTL@@@Z @ 0x140029D30 (-vSet@RGNOBJ@@QEAAXQEBU_RECTL@@@Z.c)
 *     ??1HANDLELOCK@@QEAA@XZ @ 0x14002DFB0 (--1HANDLELOCK@@QEAA@XZ.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x14002E8D0 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ??0HANDLELOCK@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@W4HandleLockOptions@@@Z @ 0x140030720 (--0HANDLELOCK@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@W4HandleLockOptions@@@Z.c)
 *     ?Pid@HANDLELOCK@@QEAAXK@Z @ 0x140032EF8 (-Pid@HANDLELOCK@@QEAAXK@Z.c)
 *     ?SetupDCAttributes@@YAXPEAVDC@@PEAU_DC_ATTR@@@Z @ 0x1400346B8 (-SetupDCAttributes@@YAXPEAVDC@@PEAU_DC_ATTR@@@Z.c)
 *     ?GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z @ 0x140035F20 (-GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z.c)
 *     ?W32ReleasePushLockExclusive@@YAXPEAVW32_PUSH_LOCK@@@Z @ 0x1400403D0 (-W32ReleasePushLockExclusive@@YAXPEAVW32_PUSH_LOCK@@@Z.c)
 *     ?GreEnterCriticalRegionAndAcquirePushLockExclusive@@YAXPEAVW32_PUSH_LOCK@@@Z @ 0x140040560 (-GreEnterCriticalRegionAndAcquirePushLockExclusive@@YAXPEAVW32_PUSH_LOCK@@@Z.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x140047450 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     GreIncQuotaCount @ 0x140062A60 (GreIncQuotaCount.c)
 *     HmgDecProcessHandleCount @ 0x140084620 (HmgDecProcessHandleCount.c)
 *     GreSetBrushOwner @ 0x1400857A0 (GreSetBrushOwner.c)
 *     HmgFreeDcAttr @ 0x1400BF91C (HmgFreeDcAttr.c)
 *     HmgIncProcessHandleCountEx @ 0x1400D9480 (HmgIncProcessHandleCountEx.c)
 *     ??0?$SEMOBJ@$0BE@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1401C1930 (--0-$SEMOBJ@$0BE@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ?AcquireDcVisRgnExclusive@DC@@QEAA@XZ @ 0x1401C2DFC (-AcquireDcVisRgnExclusive@DC@@QEAA@XZ.c)
 *     ?AcquireDcVisRgnShared@DC@@QEAA@XZ @ 0x1401C3128 (-AcquireDcVisRgnShared@DC@@QEAA@XZ.c)
 *     HmgDecProcessHandleCountFastOpt @ 0x1401C4E28 (HmgDecProcessHandleCountFastOpt.c)
 *     ?FreeDCAttributesFastOpt@@YAXAEAUSESSION_GLOBALS@Base@Gre@@PEAVDC@@@Z @ 0x1401C577C (-FreeDCAttributesFastOpt@@YAXAEAUSESSION_GLOBALS@Base@Gre@@PEAVDC@@@Z.c)
 *     ?GrepValidateVisRgn@@YA_NPEAVDC@@PEAVREGION@@AEAVERECTL@@@Z @ 0x1401CD320 (-GrepValidateVisRgn@@YA_NPEAVDC@@PEAVREGION@@AEAVERECTL@@@Z.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 */

__int64 __fastcall GreSetDCOwnerExFastOpt(
        struct Gre::Base::SESSION_GLOBALS *a1,
        struct HOBJ__ *a2,
        int a3,
        int a4,
        unsigned int a5)
{
  BOOL v6; // r14d
  unsigned int v7; // ebx
  unsigned int v9; // edi
  struct _DC_ATTR *DcAttr; // rsi
  unsigned int *v11; // r12
  struct OBJECT *EntryObject; // r13
  bool v13; // bl
  unsigned int CurrentProcessId; // ebx
  unsigned int v15; // eax
  unsigned int v16; // ebx
  int v17; // ecx
  __int64 v18; // rcx
  unsigned __int64 CurrentProcessWin32Process; // rax
  unsigned int v20; // ebx
  GdiHandleManager **v21; // rdi
  struct W32_PUSH_LOCK *v22; // rbx
  unsigned int v23; // eax
  unsigned int v24; // eax
  unsigned int *v27; // [rsp+28h] [rbp-49h] BYREF
  int v28; // [rsp+30h] [rbp-41h]
  char v29; // [rsp+35h] [rbp-3Ch]
  __int64 v30; // [rsp+38h] [rbp-39h]
  __int64 v31; // [rsp+40h] [rbp-31h] BYREF
  char v32; // [rsp+48h] [rbp-29h]
  struct Gre::Base::SESSION_GLOBALS *v33; // [rsp+58h] [rbp-19h]
  HSEMAPHORE v34; // [rsp+60h] [rbp-11h] BYREF
  __int64 v35; // [rsp+68h] [rbp-9h] BYREF
  char v36; // [rsp+70h] [rbp-1h]
  struct _RECTL v37; // [rsp+78h] [rbp+7h] BYREF

  v33 = a1;
  v6 = a4 == 0;
  v7 = (unsigned int)a2;
  v9 = 0;
  DcAttr = 0LL;
  if ( a3 == -2147483646 && !a4 )
    DcAttr = (struct _DC_ATTR *)HmgAllocateDcAttr();
  SEMOBJ<20>::SEMOBJ<20>(&v34, a1);
  HANDLELOCK::HANDLELOCK((__int64)&v27, (__int64)a1, v7, 1u);
  if ( v28 )
  {
    v11 = v27;
    EntryObject = GdiHandleManager::GetEntryObject(*(GdiHandleManager **)(v30 + 5672), *v27);
    if ( *((_BYTE *)v11 + 14) != 1 || *((_WORD *)v11 + 6) != HIWORD(v7) )
      goto LABEL_54;
    if ( *((_WORD *)EntryObject + 6) )
    {
      if ( *((struct _KTHREAD **)EntryObject + 2) != KeGetCurrentThread() )
        goto LABEL_54;
      v11 = v27;
    }
    if ( a3 != -2147483630 )
    {
      if ( (v11[2] & 0xFFFFFFFE) == 0x80000012 )
      {
        DC::AcquireDcVisRgnShared(EntryObject, (__int64)&v31);
        v13 = GrepValidateVisRgn(EntryObject, *((struct REGION **)EntryObject + 142), (struct ERECTL *)&v37);
        if ( v32 )
          CPushLock::ReleaseLock((CPushLock *)(v31 + 1112));
        if ( !v13 )
        {
          DC::AcquireDcVisRgnExclusive(EntryObject, (__int64)&v35);
          v31 = *((_QWORD *)EntryObject + 142);
          if ( v31 )
            RGNOBJ::vSet((RGNOBJ *)&v31, &v37);
          if ( v36 )
            CPushLock::ReleaseLock((CPushLock *)(v35 + 1112));
        }
      }
      if ( a3 )
      {
        if ( a3 == -2147483646 )
        {
          CurrentProcessId = (unsigned int)PsGetCurrentProcessId();
          v15 = v11[2] & 0xFFFFFFFE;
          v16 = CurrentProcessId & 0xFFFFFFFC;
          if ( v15 == v16 || v15 == -2147483630 || !v15 )
          {
            v17 = 0;
            v9 = 1;
            if ( v15 != v16 )
            {
              v9 = HmgIncProcessHandleCountEx(v16, a5);
              if ( v9 )
              {
                v17 = 1;
              }
              else
              {
                if ( !a4 )
                  goto LABEL_44;
                CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v18);
                if ( CurrentProcessWin32Process )
                  CurrentProcessWin32Process &= -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
                GreIncQuotaCount((struct _W32PROCESS *)CurrentProcessWin32Process);
                v17 = 1;
                v9 = 1;
              }
            }
            if ( *((_QWORD *)v11 + 2) )
              goto LABEL_34;
            if ( DcAttr )
            {
              SetupDCAttributes(EntryObject, DcAttr);
              DcAttr = 0LL;
LABEL_34:
              HANDLELOCK::Pid((HANDLELOCK *)&v27, v16);
              goto LABEL_44;
            }
            if ( a4 )
              goto LABEL_34;
            v9 = 0;
            if ( v17 )
              HmgDecProcessHandleCount(v16);
          }
LABEL_44:
          if ( v9 )
          {
            if ( v6 && (unsigned int)GreSetBrushOwner(**((HBRUSH **)EntryObject + 17), a3) )
              GreSetBrushOwner(**((HBRUSH **)EntryObject + 18), a3);
            goto LABEL_55;
          }
          goto LABEL_54;
        }
        goto LABEL_54;
      }
    }
    v20 = v11[2] & 0xFFFFFFFE;
    if ( v20 == ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) )
    {
      v21 = (GdiHandleManager **)v33;
      v22 = (struct Gre::Base::SESSION_GLOBALS *)((char *)v33 + 2176);
      if ( v33 != (struct Gre::Base::SESSION_GLOBALS *)-2176LL )
        GreEnterCriticalRegionAndAcquirePushLockExclusive((struct Gre::Base::SESSION_GLOBALS *)((char *)v33 + 2176));
      FreeDCAttributesFastOpt(v21, EntryObject);
      HANDLELOCK::Pid((HANDLELOCK *)&v27, a3);
      v23 = (unsigned int)PsGetCurrentProcessId();
      HmgDecProcessHandleCountFastOpt(v21, v23 & 0xFFFFFFFC);
      v9 = 1;
      if ( v22 )
        W32ReleasePushLockExclusive(v22);
    }
    else
    {
      v24 = v11[2] & 0xFFFFFFFE;
      if ( v24 == -2147483630 )
      {
        HANDLELOCK::Pid((HANDLELOCK *)&v27, a3);
        v9 = 1;
      }
      else if ( !v24 && !a3 )
      {
        v9 = 1;
        goto LABEL_55;
      }
    }
    if ( a3 != -2147483630 )
      goto LABEL_44;
    if ( !v9 )
LABEL_54:
      v29 = 1;
LABEL_55:
    HANDLELOCK::vUnlock((HANDLELOCK *)&v27);
  }
  HANDLELOCK::~HANDLELOCK((HANDLELOCK *)&v27);
  SEMOBJ<20>::vUnlock(&v34);
  if ( DcAttr )
    HmgFreeDcAttr((__int64)DcAttr);
  return v9;
}
