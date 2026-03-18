/*
 * XREFs of GrepDeleteDC @ 0x140034C20
 * Callers:
 *     ?SetMonitorData@@YAPEAUtagMONITOR@@PEAU1@K@Z @ 0x14000C568 (-SetMonitorData@@YAPEAUtagMONITOR@@PEAU1@K@Z.c)
 *     ??1DCOBJA@@QEAA@XZ @ 0x140010220 (--1DCOBJA@@QEAA@XZ.c)
 *     ?vCleanupDCs@@YAXK@Z @ 0x1400150B4 (-vCleanupDCs@@YAXK@Z.c)
 *     NtGdiDeleteObjectApp @ 0x14002B3A0 (NtGdiDeleteObjectApp.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x140034798 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?vUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1400349F0 (-vUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 *     ?vAltUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x140035820 (-vAltUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 *     ?vAltUnlockFast@XDCOBJ@@QEAAXXZ @ 0x140035870 (-vAltUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     hdcOpenDCW @ 0x140067790 (hdcOpenDCW.c)
 *     GreDeleteDC @ 0x14010F4C0 (GreDeleteDC.c)
 *     GreMarkPendingDestroyDC @ 0x14011C458 (GreMarkPendingDestroyDC.c)
 *     ?DestroyDC@@YAXPEAPEAUHDC__@@@Z @ 0x1401527A0 (-DestroyDC@@YAXPEAPEAUHDC__@@@Z.c)
 *     DestroyCacheDC @ 0x1401689F0 (DestroyCacheDC.c)
 * Callees:
 *     ?vUnlockIfNeeded@NEEDDYNAMICMODECHANGESHARELOCK@@QEAAXXZ @ 0x14001E1E8 (-vUnlockIfNeeded@NEEDDYNAMICMODECHANGESHARELOCK@@QEAAXXZ.c)
 *     ??$GreAcquireSemaphoreShared@$00$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140020EE4 (--$GreAcquireSemaphoreShared@$00$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     UserReleaseDC @ 0x140024770 (UserReleaseDC.c)
 *     ?vDeleteRGNOBJ@RGNOBJ@@QEAAXXZ @ 0x1400281B0 (-vDeleteRGNOBJ@RGNOBJ@@QEAAXXZ.c)
 *     EngSetLastError @ 0x14002DB90 (EngSetLastError.c)
 *     ?vLockIgnoreAttributes@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x140034950 (-vLockIgnoreAttributes@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?GetUserAttr@XDCOBJ@@AEAAPEAU_DC_ATTR@@XZ @ 0x140034BE0 (-GetUserAttr@XDCOBJ@@AEAAPEAU_DC_ATTR@@XZ.c)
 *     ?InterlockedDecrementExclusiveLockCount@OBJECT@@QEAAXXZ @ 0x14003506C (-InterlockedDecrementExclusiveLockCount@OBJECT@@QEAAXXZ.c)
 *     ?SaveAttributes@DC@@QEAAHPEAU_DC_ATTR@@@Z @ 0x1400350A0 (-SaveAttributes@DC@@QEAAHPEAU_DC_ATTR@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x140035194 (--1DCOBJ@@QEAA@XZ.c)
 *     ?bCleanDC@XDCOBJ@@QEAAHH@Z @ 0x140035220 (-bCleanDC@XDCOBJ@@QEAAHH@Z.c)
 *     ?DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT@@YAXPEAVLFONT@@@Z @ 0x140035710 (-DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT@@YAXPEAVLFONT@@@Z.c)
 *     ?vReleaseRao@DC@@QEAAXXZ @ 0x140035740 (-vReleaseRao@DC@@QEAAXXZ.c)
 *     ?DEC_SHARE_REF_CNT_LAZY0@@YAXPEAVBRUSH@@@Z @ 0x140035780 (-DEC_SHARE_REF_CNT_LAZY0@@YAXPEAVBRUSH@@@Z.c)
 *     HmgDecrementShareReferenceCountEx @ 0x1400358E0 (HmgDecrementShareReferenceCountEx.c)
 *     ??0DCOBJ@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140035AC0 (--0DCOBJ@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ?HmgLockObjectForRemoval@@YAPEAXPEAUHOBJ__@@JJHEPEAK@Z @ 0x140035CEC (-HmgLockObjectForRemoval@@YAPEAXPEAUHOBJ__@@JJHEPEAK@Z.c)
 *     ?vDeleteCore@XDCOBJ@@QEAAXXZ @ 0x140036330 (-vDeleteCore@XDCOBJ@@QEAAXXZ.c)
 *     ?vReleaseVis@DC@@QEAAXXZ @ 0x1400364AC (-vReleaseVis@DC@@QEAAXXZ.c)
 *     ?vUnreferencePdev@PDEVOBJ@@QEAAXXZ @ 0x140039260 (-vUnreferencePdev@PDEVOBJ@@QEAAXXZ.c)
 *     ?HmgQueryRemoveAttempted@@YAHPEAUHOBJ__@@E@Z @ 0x14019C180 (-HmgQueryRemoveAttempted@@YAHPEAUHOBJ__@@E@Z.c)
 *     ?FreeDCAttributesFastOpt@@YAXAEAUSESSION_GLOBALS@Base@Gre@@PEAVDC@@@Z @ 0x1401C577C (-FreeDCAttributesFastOpt@@YAXAEAUSESSION_GLOBALS@Base@Gre@@PEAVDC@@@Z.c)
 */

__int64 __fastcall GrepDeleteDC(HDC a1, unsigned int a2)
{
  __int64 v4; // rbx
  unsigned int v5; // edi
  _QWORD *CurrentProcessWin32Process; // rax
  __int64 v7; // rdx
  DC *v8; // rcx
  int v9; // r14d
  int v10; // eax
  int v11; // ebx
  int v12; // edx
  __int64 *v13; // rcx
  int v14; // r8d
  int v15; // r9d
  DC *v16; // rbx
  ULONG_PTR v17; // rbx
  struct _DC_ATTR *UserAttr; // rax
  int v20; // r8d
  unsigned int v21; // r8d
  int v22; // eax
  int v23; // eax
  unsigned __int8 v24; // [rsp+20h] [rbp-39h]
  unsigned int *v25; // [rsp+28h] [rbp-31h]
  __int64 *v26; // [rsp+30h] [rbp-29h] BYREF
  bool v27; // [rsp+38h] [rbp-21h]
  DC *v28; // [rsp+40h] [rbp-19h] BYREF
  int v29; // [rsp+48h] [rbp-11h]
  struct Gre::Base::SESSION_GLOBALS *v30; // [rsp+50h] [rbp-9h]
  char v31; // [rsp+60h] [rbp+7h]
  ULONG_PTR v32; // [rsp+D0h] [rbp+77h] BYREF
  __int64 v33; // [rsp+D8h] [rbp+7Fh] BYREF

  v4 = *(_QWORD *)(W32GetSessionState(a1) + 88);
  DCOBJ::DCOBJ((DCOBJ *)&v28, (struct Gre::Base::SESSION_GLOBALS *)v4);
  v5 = 0;
  if ( !*(_DWORD *)(v4 + 3032)
    && (CurrentProcessWin32Process = (_QWORD *)PsGetCurrentProcessWin32Process()) != 0LL
    && *CurrentProcessWin32Process )
  {
    XDCOBJ::vLockIgnoreAttributes((XDCOBJ *)&v28, a1);
    v8 = v28;
    if ( !v28 )
      goto LABEL_41;
    if ( (*((_DWORD *)v28 + 11) & 2) == 0 )
    {
      if ( (v31 & 2) == 0 )
      {
        UserAttr = XDCOBJ::GetUserAttr((XDCOBJ *)&v28);
        if ( UserAttr && !(unsigned int)DC::SaveAttributes(v28, UserAttr) )
        {
          OBJECT::InterlockedDecrementExclusiveLockCount(v28);
          v28 = 0LL;
          goto LABEL_41;
        }
        v8 = v28;
      }
      *((_DWORD *)v8 + 11) |= 2u;
      v8 = v28;
      v29 = 1;
    }
    v20 = *((_DWORD *)v8 + 130);
    if ( (v20 & 4) == 0 )
      goto LABEL_6;
    v21 = v20 & 0xFFFFFFFB;
    *((_DWORD *)v8 + 130) = v21;
    v7 = *((_QWORD *)v8 + 122);
    v22 = *(_DWORD *)(v7 + 340);
    if ( (v21 & 1) != 0 )
      v23 = v22 | 0x16090;
    else
      v23 = v22 | 0x6090;
    *(_DWORD *)(v7 + 340) = v23;
  }
  else
  {
    XDCOBJ::vLockIgnoreAttributes((XDCOBJ *)&v28, a1);
  }
  v8 = v28;
LABEL_6:
  if ( !v8 )
  {
LABEL_41:
    EngSetLastError(0xAAu);
    DCOBJ::~DCOBJ((DCOBJ *)&v28);
    return 0LL;
  }
  v9 = 0;
  if ( (a2 & 0x2000000) != 0 )
  {
    a2 = *((_DWORD *)v8 + 9);
  }
  else
  {
    *((_DWORD *)v8 + 9) |= a2 & 0x3C00000;
    v8 = v28;
  }
  v10 = *((_DWORD *)v8 + 9);
  if ( (v10 & 8) != 0 )
  {
    if ( (a2 & 0x400000) != 0 )
    {
      *((_DWORD *)v8 + 9) = v10 & 0xFFFFFFF7;
      v8 = v28;
    }
    else
    {
      v9 = 1;
    }
  }
  if ( (a2 & 0x2000000) == 0 )
    goto LABEL_13;
  if ( !(unsigned int)HmgQueryRemoveAttempted(*(struct HOBJ__ **)v8, v7) )
  {
    EngSetLastError(0x139Fu);
    goto LABEL_41;
  }
  v8 = v28;
LABEL_13:
  if ( v9 )
  {
    XDCOBJ::bCleanDC((XDCOBJ *)&v28, HIBYTE(a2) & 1);
  }
  else
  {
    v11 = *(_DWORD *)(*((_QWORD *)v8 + 6) + 40LL);
    v27 = (v11 & 0x80) == 0;
    v13 = *(__int64 **)(W32GetSessionState(v8) + 88);
    v26 = v13;
    if ( (v11 & 0x80) == 0 )
      GreAcquireSemaphoreShared<1,>(v13);
    if ( HmgLockObjectForRemoval(*(struct HOBJ__ **)v28, v12, v14, v15, v24, v25) )
    {
      XDCOBJ::bCleanDC((XDCOBJ *)&v28, HIBYTE(a2) & 1);
      NEEDDYNAMICMODECHANGESHARELOCK::vUnlockIfNeeded(&v26);
      if ( (a2 & 0x800000) == 0 )
        FreeDCAttributesFastOpt(v30, v28);
      DEC_SHARE_REF_CNT_LAZY0(*((struct BRUSH **)v28 + 17));
      DEC_SHARE_REF_CNT_LAZY0(*((struct BRUSH **)v28 + 18));
      DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT(*((struct LFONT **)v28 + 19));
      HmgDecrementShareReferenceCountEx(*((struct _BASEOBJECT **)v28 + 12), 0LL);
      v33 = *((_QWORD *)v28 + 6);
      DC::vReleaseVis(v28);
      DC::vReleaseRao(v28);
      v16 = v28;
      if ( *((_QWORD *)v28 + 143) )
      {
        v32 = *((_QWORD *)v28 + 143);
        RGNOBJ::vDeleteRGNOBJ(&v32);
        *((_QWORD *)v28 + 143) = 0LL;
        v16 = v28;
      }
      if ( *((_QWORD *)v16 + 145) )
      {
        v32 = *((_QWORD *)v16 + 145);
        RGNOBJ::vDeleteRGNOBJ(&v32);
        *((_QWORD *)v28 + 145) = 0LL;
        v16 = v28;
      }
      if ( *((_QWORD *)v16 + 144) )
      {
        v32 = *((_QWORD *)v16 + 144);
        RGNOBJ::vDeleteRGNOBJ(&v32);
        *((_QWORD *)v28 + 144) = 0LL;
        v16 = v28;
      }
      if ( *((_QWORD *)v16 + 146) )
      {
        v32 = *((_QWORD *)v16 + 146);
        RGNOBJ::vDeleteRGNOBJ(&v32);
        *((_QWORD *)v28 + 146) = 0LL;
        v16 = v28;
      }
      if ( *((_QWORD *)v16 + 147) )
      {
        v32 = *((_QWORD *)v16 + 147);
        RGNOBJ::vDeleteRGNOBJ(&v32);
        *((_QWORD *)v28 + 147) = 0LL;
        v16 = v28;
      }
      if ( *((_QWORD *)v16 + 148) )
      {
        v32 = *((_QWORD *)v16 + 148);
        RGNOBJ::vDeleteRGNOBJ(&v32);
        *((_QWORD *)v28 + 148) = 0LL;
        v16 = v28;
      }
      v17 = *((_QWORD *)v16 + 7);
      v32 = v17;
      XDCOBJ::vDeleteCore((XDCOBJ *)&v28);
      PDEVOBJ::vUnreferencePdev((PDEVOBJ *)&v33);
      if ( v17 )
        PDEVOBJ::vUnreferencePdev((PDEVOBJ *)&v32);
    }
    else
    {
      EngSetLastError(0xAAu);
      NEEDDYNAMICMODECHANGESHARELOCK::vUnlockIfNeeded(&v26);
    }
  }
  DCOBJ::~DCOBJ((DCOBJ *)&v28);
  if ( !v9 )
    return 1LL;
  LOBYTE(v5) = (unsigned int)UserReleaseDC((__int64)a1) != 0;
  return v5;
}
