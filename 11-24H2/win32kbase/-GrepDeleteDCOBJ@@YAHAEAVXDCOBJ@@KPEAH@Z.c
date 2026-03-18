/*
 * XREFs of ?GrepDeleteDCOBJ@@YAHAEAVXDCOBJ@@KPEAH@Z @ 0x14003605C
 * Callers:
 *     ??1DCMEMOBJ@@QEAA@XZ @ 0x140175590 (--1DCMEMOBJ@@QEAA@XZ.c)
 * Callees:
 *     ?vUnlockIfNeeded@NEEDDYNAMICMODECHANGESHARELOCK@@QEAAXXZ @ 0x14001E1E8 (-vUnlockIfNeeded@NEEDDYNAMICMODECHANGESHARELOCK@@QEAAXXZ.c)
 *     ??$GreAcquireSemaphoreShared@$00$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140020EE4 (--$GreAcquireSemaphoreShared@$00$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ?vDeleteRGNOBJ@RGNOBJ@@QEAAXXZ @ 0x1400281B0 (-vDeleteRGNOBJ@RGNOBJ@@QEAAXXZ.c)
 *     EngSetLastError @ 0x14002DB90 (EngSetLastError.c)
 *     ?bCleanDC@XDCOBJ@@QEAAHH@Z @ 0x140035220 (-bCleanDC@XDCOBJ@@QEAAHH@Z.c)
 *     ?DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT@@YAXPEAVLFONT@@@Z @ 0x140035710 (-DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT@@YAXPEAVLFONT@@@Z.c)
 *     ?vReleaseRao@DC@@QEAAXXZ @ 0x140035740 (-vReleaseRao@DC@@QEAAXXZ.c)
 *     ?DEC_SHARE_REF_CNT_LAZY0@@YAXPEAVBRUSH@@@Z @ 0x140035780 (-DEC_SHARE_REF_CNT_LAZY0@@YAXPEAVBRUSH@@@Z.c)
 *     HmgDecrementShareReferenceCountEx @ 0x1400358E0 (HmgDecrementShareReferenceCountEx.c)
 *     ?HmgLockObjectForRemoval@@YAPEAXPEAUHOBJ__@@JJHEPEAK@Z @ 0x140035CEC (-HmgLockObjectForRemoval@@YAPEAXPEAUHOBJ__@@JJHEPEAK@Z.c)
 *     ?vDeleteCore@XDCOBJ@@QEAAXXZ @ 0x140036330 (-vDeleteCore@XDCOBJ@@QEAAXXZ.c)
 *     ?vReleaseVis@DC@@QEAAXXZ @ 0x1400364AC (-vReleaseVis@DC@@QEAAXXZ.c)
 *     ?vUnreferencePdev@PDEVOBJ@@QEAAXXZ @ 0x140039260 (-vUnreferencePdev@PDEVOBJ@@QEAAXXZ.c)
 *     ?HmgQueryRemoveAttempted@@YAHPEAUHOBJ__@@E@Z @ 0x14019C180 (-HmgQueryRemoveAttempted@@YAHPEAUHOBJ__@@E@Z.c)
 *     ?FreeDCAttributesFastOpt@@YAXAEAUSESSION_GLOBALS@Base@Gre@@PEAVDC@@@Z @ 0x1401C577C (-FreeDCAttributesFastOpt@@YAXAEAUSESSION_GLOBALS@Base@Gre@@PEAVDC@@@Z.c)
 */

__int64 __fastcall GrepDeleteDCOBJ(DC **this, unsigned int a2, int *a3)
{
  int v3; // ebx
  DC *v5; // rcx
  unsigned int v6; // esi
  int v7; // eax
  __int64 v8; // rcx
  int v9; // ebx
  __int64 *v10; // rcx
  DC *v11; // rcx
  ULONG_PTR v12; // rbx
  __int64 *v14; // [rsp+30h] [rbp-10h] BYREF
  bool v15; // [rsp+38h] [rbp-8h]
  ULONG_PTR v16; // [rsp+60h] [rbp+20h] BYREF
  __int64 v17; // [rsp+70h] [rbp+30h] BYREF

  v3 = 0;
  v5 = *this;
  v6 = a2;
  if ( (a2 & 0x2000000) != 0 )
    v6 = *((_DWORD *)v5 + 9);
  else
    *((_DWORD *)v5 + 9) |= a2 & 0x3C00000;
  v7 = *((_DWORD *)*this + 9);
  if ( (v7 & 8) != 0 )
  {
    if ( (v6 & 0x400000) != 0 )
      *((_DWORD *)*this + 9) = v7 & 0xFFFFFFF7;
    else
      v3 = 1;
  }
  *a3 = v3;
  if ( (v6 & 0x2000000) == 0 || (unsigned int)HmgQueryRemoveAttempted(*(struct HOBJ__ **)*this, a2) )
  {
    if ( v3 )
    {
      XDCOBJ::bCleanDC(this, HIBYTE(v6) & 1);
    }
    else
    {
      v8 = *((_QWORD *)*this + 6);
      v9 = *(_DWORD *)(v8 + 40);
      v15 = (v9 & 0x80) == 0;
      v10 = *(__int64 **)(W32GetSessionState(v8) + 88);
      v14 = v10;
      if ( (v9 & 0x80) == 0 )
        GreAcquireSemaphoreShared<1,>(v10);
      if ( HmgLockObjectForRemoval(*(struct HOBJ__ **)*this) )
      {
        XDCOBJ::bCleanDC(this, HIBYTE(v6) & 1);
        NEEDDYNAMICMODECHANGESHARELOCK::vUnlockIfNeeded(&v14);
        if ( (v6 & 0x800000) == 0 )
          FreeDCAttributesFastOpt(this[2], *this);
        DEC_SHARE_REF_CNT_LAZY0(*((struct BRUSH **)*this + 17));
        DEC_SHARE_REF_CNT_LAZY0(*((struct BRUSH **)*this + 18));
        DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT(*((struct LFONT **)*this + 19));
        HmgDecrementShareReferenceCountEx(*((struct _BASEOBJECT **)*this + 12), 0LL);
        v11 = *this;
        v17 = *((_QWORD *)*this + 6);
        DC::vReleaseVis(v11);
        DC::vReleaseRao(*this);
        if ( *((_QWORD *)*this + 143) )
        {
          v16 = *((_QWORD *)*this + 143);
          RGNOBJ::vDeleteRGNOBJ(&v16);
          *((_QWORD *)*this + 143) = 0LL;
        }
        if ( *((_QWORD *)*this + 145) )
        {
          v16 = *((_QWORD *)*this + 145);
          RGNOBJ::vDeleteRGNOBJ(&v16);
          *((_QWORD *)*this + 145) = 0LL;
        }
        if ( *((_QWORD *)*this + 144) )
        {
          v16 = *((_QWORD *)*this + 144);
          RGNOBJ::vDeleteRGNOBJ(&v16);
          *((_QWORD *)*this + 144) = 0LL;
        }
        if ( *((_QWORD *)*this + 146) )
        {
          v16 = *((_QWORD *)*this + 146);
          RGNOBJ::vDeleteRGNOBJ(&v16);
          *((_QWORD *)*this + 146) = 0LL;
        }
        if ( *((_QWORD *)*this + 147) )
        {
          v16 = *((_QWORD *)*this + 147);
          RGNOBJ::vDeleteRGNOBJ(&v16);
          *((_QWORD *)*this + 147) = 0LL;
        }
        if ( *((_QWORD *)*this + 148) )
        {
          v16 = *((_QWORD *)*this + 148);
          RGNOBJ::vDeleteRGNOBJ(&v16);
          *((_QWORD *)*this + 148) = 0LL;
        }
        v16 = *((_QWORD *)*this + 7);
        v12 = v16;
        XDCOBJ::vDeleteCore((XDCOBJ *)this);
        PDEVOBJ::vUnreferencePdev((PDEVOBJ *)&v17);
        if ( v12 )
          PDEVOBJ::vUnreferencePdev((PDEVOBJ *)&v16);
      }
      else
      {
        EngSetLastError(0xAAu);
        NEEDDYNAMICMODECHANGESHARELOCK::vUnlockIfNeeded(&v14);
      }
    }
    return 1LL;
  }
  else
  {
    EngSetLastError(0x139Fu);
    return 0LL;
  }
}
