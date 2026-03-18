/*
 * XREFs of ?bMakeInactiveHelper@RFONTOBJ@@QEAAHPEAPEAVRFONT@@@Z @ 0x14025A0F4
 * Callers:
 *     ?vMakeInactive@RFONTOBJ@@QEAAXXZ @ 0x14005D0AC (-vMakeInactive@RFONTOBJ@@QEAAXXZ.c)
 *     ?vInitEUDC@RFONTOBJ@@QEAAXAEAVUDCOBJ@@@Z @ 0x14025B70C (-vInitEUDC@RFONTOBJ@@QEAAXAEAVUDCOBJ@@@Z.c)
 *     vMakeInactiveHelper @ 0x14030CC74 (vMakeInactiveHelper.c)
 * Callees:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x14005CE04 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ??$GreReleasePushLockShared2@$0BA@$0A@@@YAXAEAUGLOBALS@Font@Gre@@@Z @ 0x1400A3DC0 (--$GreReleasePushLockShared2@$0BA@$0A@@@YAXAEAUGLOBALS@Font@Gre@@@Z.c)
 *     ??$GreAcquirePushLockShared2@$0BA@$0A@@@YAXAEAUGLOBALS@Font@Gre@@@Z @ 0x1400A3EA8 (--$GreAcquirePushLockShared2@$0BA@$0A@@@YAXAEAUGLOBALS@Font@Gre@@@Z.c)
 *     ?vUnlock@?$SEMOBJ@$0BC@@@QEAAXXZ @ 0x1400BBF8C (-vUnlock@-$SEMOBJ@$0BC@@@QEAAXXZ.c)
 *     ??0?$SEMOBJ@$0BC@@@QEAA@AEAUGLOBALS@Font@Gre@@@Z @ 0x1400DCDFC (--0-$SEMOBJ@$0BC@@@QEAA@AEAUGLOBALS@Font@Gre@@@Z.c)
 *     ?prfntInactive@PDEVOBJ@@QEBAPEAU_LIST_ENTRY@@XZ @ 0x14016DFBC (-prfntInactive@PDEVOBJ@@QEBAPEAU_LIST_ENTRY@@XZ.c)
 *     ?cInactive@PDEVOBJ@@QEAAII@Z @ 0x14019DFE0 (-cInactive@PDEVOBJ@@QEAAII@Z.c)
 *     ?vDeleteRFONT@RFONTOBJ@@QEAAXPEAUHDEV__@@PEAVPFFOBJ@@H@Z @ 0x140200EE0 (-vDeleteRFONT@RFONTOBJ@@QEAAXPEAUHDEV__@@PEAVPFFOBJ@@H@Z.c)
 */

__int64 __fastcall RFONTOBJ::bMakeInactiveHelper(struct _LIST_ENTRY **this, struct RFONT **a2)
{
  struct RFONT **v2; // rsi
  unsigned int v4; // r15d
  struct _LIST_ENTRY *v5; // r14
  __int64 SessionState; // rax
  __int64 v7; // rdi
  int Blink_high; // eax
  struct RFONT *Blink; // rax
  struct RFONT *Flink; // rcx
  struct RFONT *v12; // rcx
  struct _LIST_ENTRY *v13; // rax
  unsigned int i; // edx
  struct RFONT *v15; // rcx
  struct _LIST_ENTRY *v16; // rcx
  struct _LIST_ENTRY *v17; // rax
  struct _LIST_ENTRY *v18; // rcx
  struct _LIST_ENTRY *v19; // r8
  struct _LIST_ENTRY *v20; // rdx
  struct _LIST_ENTRY *v21; // rcx
  unsigned int v22; // r8d
  struct _LIST_ENTRY *v23; // rax
  struct _LIST_ENTRY *v24; // r8
  struct _LIST_ENTRY *v25; // rcx
  struct _LIST_ENTRY *v26; // rax
  struct _LIST_ENTRY *v27; // r8
  int v28; // edx
  struct _LIST_ENTRY *v29; // rax
  struct _LIST_ENTRY *v30; // r8
  struct _LIST_ENTRY *v31; // rcx
  struct _LIST_ENTRY *v32; // [rsp+20h] [rbp-30h] BYREF
  _OWORD v33[2]; // [rsp+30h] [rbp-20h] BYREF
  struct _LIST_ENTRY *v34; // [rsp+90h] [rbp+40h] BYREF
  struct _LIST_ENTRY *v35; // [rsp+A0h] [rbp+50h] BYREF
  HSEMAPHORE v36; // [rsp+A8h] [rbp+58h] BYREF

  v2 = a2;
  v4 = 0;
  if ( !*this )
    return 0LL;
  v5 = 0LL;
  SessionState = W32GetSessionState((_DWORD)this, a2);
  v7 = *(_QWORD *)(SessionState + 96) + 4872LL;
  if ( v2 )
  {
    GreAcquirePushLockShared2<16,0>(*(_QWORD *)(SessionState + 96) + 4872LL);
    _InterlockedIncrement((volatile signed __int32 *)(v7 + 8636));
    GreReleasePushLockShared2<16,0>(v7);
  }
  SEMOBJ<18>::SEMOBJ<18>(&v36, v7);
  Blink_high = HIDWORD((*this)[41].Blink);
  if ( Blink_high <= 0 )
  {
    GreAcquirePushLockShared2<16,0>(v7);
    _InterlockedDecrement((volatile signed __int32 *)(v7 + 8636));
    GreReleasePushLockShared2<16,0>(v7);
    SEMOBJ<18>::vUnlock(&v36);
    return 0LL;
  }
  HIDWORD((*this)[41].Blink) = Blink_high - 1;
  if ( SHIDWORD((*this)[41].Blink) <= 0 )
  {
    if ( v2 )
    {
      Blink = (struct RFONT *)(*this)[45].Blink;
      if ( Blink )
      {
        *v2++ = Blink;
        (*this)[45].Blink = 0LL;
      }
      v4 = 1;
      Flink = (struct RFONT *)(*this)[46].Flink;
      if ( Flink )
      {
        *v2++ = Flink;
        (*this)[46].Flink = 0LL;
      }
      v12 = (struct RFONT *)(*this)[46].Blink;
      if ( v12 )
      {
        *v2++ = v12;
        (*this)[46].Blink = 0LL;
      }
      v13 = *this;
      for ( i = 0; i < LODWORD((*this)[53].Flink); ++i )
      {
        v15 = (struct RFONT *)*((_QWORD *)&v13[47].Flink->Flink + i);
        if ( v15 )
        {
          *v2++ = v15;
          *((_QWORD *)&(*this)[47].Flink->Flink + i) = 0LL;
        }
        v13 = *this;
      }
      v16 = v13[47].Flink;
      if ( v16 && v16 != (struct _LIST_ENTRY *)&v13[47].Blink )
        Win32FreePool(v16);
      (*this)[47].Flink = 0LL;
      LODWORD((*this)[53].Flink) = 0;
      LODWORD((*this)[52].Blink) = 0;
    }
    v17 = (*this)[6].Blink;
    v18 = *this + 42;
    v34 = v17;
    v19 = v18->Flink;
    if ( v18->Flink->Blink == v18 )
    {
      v20 = v18->Blink;
      if ( v20->Flink == v18 )
      {
        v20->Flink = v19;
        v19->Blink = v20;
        v21 = (*this)[8].Flink;
        if ( !LODWORD(v21[3].Blink) && !HIDWORD(v21[3].Blink) && !v21[9].Blink )
        {
          v5 = *this;
          goto LABEL_29;
        }
        if ( ((__int64)v17[2].Blink & 0x800000) != 0 )
          v22 = (unsigned int)v17[219].Blink[97].Flink;
        else
          v22 = (unsigned int)v17[97].Flink;
        if ( v22 < 0x80 )
        {
          if ( ((__int64)v17[2].Blink & 0x800000) != 0 )
            v28 = (int)v17[219].Blink[97].Flink;
          else
            v28 = (int)v17[97].Flink;
          PDEVOBJ::cInactive((PDEVOBJ *)&v34, v28 + 1);
        }
        else
        {
          v23 = PDEVOBJ::prfntInactive((PDEVOBJ *)&v34);
          v24 = v23->Blink;
          if ( v24->Flink != v23 )
            goto LABEL_50;
          v25 = v24->Blink;
          if ( v25->Flink != v24 )
            goto LABEL_50;
          v23->Blink = v25;
          v25->Flink = v23;
          v26 = PDEVOBJ::prfntInactive((PDEVOBJ *)&v34);
          v5 = v27 - 42;
          if ( v27 == v26 )
            v5 = 0LL;
        }
        v29 = PDEVOBJ::prfntInactive((PDEVOBJ *)&v34);
        v31 = v29->Flink;
        if ( v29->Flink->Blink == v29 )
        {
          v30->Flink = v31;
          v30->Blink = v29;
          v31->Blink = v30;
          v29->Flink = v30;
          goto LABEL_29;
        }
      }
    }
LABEL_50:
    __fastfail(3u);
  }
LABEL_29:
  SEMOBJ<18>::vUnlock(&v36);
  if ( v2 && !v4 )
  {
    GreAcquirePushLockShared2<16,0>(v7);
    _InterlockedDecrement((volatile signed __int32 *)(v7 + 8636));
    GreReleasePushLockShared2<16,0>(v7);
  }
  if ( v5 )
  {
    v32 = v5[8].Flink;
    v35 = v5;
    memset(v33, 0, sizeof(v33));
    PushThreadGuardedObject(v33, v5, RestartInactiveHelper);
    RFONTOBJ::vDeleteRFONT((RFONTOBJ *)&v35, 0LL, (struct PFFOBJ *)&v32, 1);
    PopThreadGuardedObject(v33);
    v35 = 0LL;
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v35);
  }
  *this = 0LL;
  return v4;
}
