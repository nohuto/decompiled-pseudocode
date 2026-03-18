/*
 * XREFs of ?vInitEUDC@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C02B481C
 * Callers:
 *     ?GreGetGlyphOutlineInternal@@YAKPEAUHDC__@@GIPEAU_GLYPHMETRICS@@KPEAXPEAU_MAT2@@HW4EntryPoint@RFONTOBJ@@@Z @ 0x1C00D3538 (-GreGetGlyphOutlineInternal@@YAKPEAUHDC__@@GIPEAU_GLYPHMETRICS@@KPEAXPEAU_MAT2@@HW4EntryPoint@RF.c)
 *     ?wpgdGetLinkMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@PEAVXDCOBJ@@PEAVESTROBJ@@PEBG2KPEAHH@Z @ 0x1C02B5588 (-wpgdGetLinkMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@PEAVXDCOBJ@@PEAVESTROBJ@@PEBG2KPEAHH@Z.c)
 * Callees:
 *     ?vUnlock@SPRITERANGELOCK@@QEAAXXZ @ 0x1C006ADEC (-vUnlock@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ?vMakeInactive@RFONTOBJ@@QEAAXXZ @ 0x1C006E66C (-vMakeInactive@RFONTOBJ@@QEAAXXZ.c)
 *     ?bMakeInactiveHelper@RFONTOBJ@@QEAAHPEAPEAVRFONT@@@Z @ 0x1C006E81C (-bMakeInactiveHelper@RFONTOBJ@@QEAAHPEAPEAVRFONT@@@Z.c)
 *     ??0SEMOBJSHARED@@QEAA@PEAUHSEMAPHORE__@@@Z @ 0x1C00C4108 (--0SEMOBJSHARED@@QEAA@PEAUHSEMAPHORE__@@@Z.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C00C8860 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ??0IFIOBJR@@QEAA@PEBU_IFIMETRICS@@AEAVRFONTOBJ@@AEAVXDCOBJ@@@Z @ 0x1C00CC9A8 (--0IFIOBJR@@QEAA@PEBU_IFIMETRICS@@AEAVRFONTOBJ@@AEAVXDCOBJ@@@Z.c)
 *     ??0LFONTOBJ@@QEAA@PEAUHLFONT__@@PEAVPDEVOBJ@@@Z @ 0x1C00D1AD8 (--0LFONTOBJ@@QEAA@PEAUHLFONT__@@PEAVPDEVOBJ@@@Z.c)
 *     _tlgKeywordOn @ 0x1C00D9324 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C01381F0 (__security_check_cookie.c)
 *     ?bActive@RFONTOBJ@@QEBA_NAEBVSEMOBJSHARED@@@Z @ 0x1C013DF18 (-bActive@RFONTOBJ@@QEBA_NAEBVSEMOBJSHARED@@@Z.c)
 *     memset_0 @ 0x1C0140D40 (memset_0.c)
 *     ?bCheckEudcFontCaps@RFONTOBJ@@QEBAHAEAVIFIOBJ@@@Z @ 0x1C015BAF8 (-bCheckEudcFontCaps@RFONTOBJ@@QEBAHAEAVIFIOBJ@@@Z.c)
 *     ?vInit@RFONTOBJ@@QEAAXAEAVXDCOBJ@@PEAVPFE@@PEAU_EUDCLOGFONT@@H@Z @ 0x1C015BDFE (-vInit@RFONTOBJ@@QEAAXAEAVXDCOBJ@@PEAVPFE@@PEAU_EUDCLOGFONT@@H@Z.c)
 *     ?pGetLinkedFontList@PFEOBJ@@QEAAPEAU_LIST_ENTRY@@XZ @ 0x1C015C87C (-pGetLinkedFontList@PFEOBJ@@QEAAPEAU_LIST_ENTRY@@XZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@33@Z @ 0x1C027449C (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU.c)
 *     ?ComputeEUDCLogfont@RFONTOBJ@@QEAAXPEAU_EUDCLOGFONT@@AEAVXDCOBJ@@@Z @ 0x1C02B323C (-ComputeEUDCLogfont@RFONTOBJ@@QEAAXPEAU_EUDCLOGFONT@@AEAVXDCOBJ@@@Z.c)
 *     ?GetEUDCDefaultFontPFE@RFONTOBJ@@AEAAPEAVPFE@@I@Z @ 0x1C02B3A90 (-GetEUDCDefaultFontPFE@RFONTOBJ@@AEAAPEAVPFE@@I@Z.c)
 *     ?vInitEUDCRemote@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C02B5000 (-vInitEUDCRemote@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ?UpdateFontLinksLockOrder@RFONTOBJ@@AEAAXXZ @ 0x1C02B5EC8 (-UpdateFontLinksLockOrder@RFONTOBJ@@AEAAXXZ.c)
 */

void __fastcall RFONTOBJ::vInitEUDC(RFONTOBJ *this, struct XDCOBJ *a2)
{
  __int64 v2; // rax
  __int64 v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // r15
  __int64 v9; // rax
  struct HLFONT__ *v10; // rdx
  const struct _IFIMETRICS *v11; // rdx
  __int64 v12; // rdi
  __int64 v13; // r13
  __int64 v14; // rax
  _BYTE *v15; // r14
  __int64 v16; // r12
  __int64 v17; // r13
  __int64 v18; // rax
  __int64 v19; // rax
  void *v20; // rcx
  struct XDCOBJ *v21; // rdi
  unsigned int v22; // ecx
  __int64 v23; // rax
  __int64 v24; // rdi
  struct PFE *EUDCDefaultFontPFE; // rax
  struct PFE *v26; // rdi
  __int64 v27; // rcx
  int v28; // eax
  struct XDCOBJ *v29; // r15
  unsigned int v30; // ecx
  __int64 v31; // rcx
  struct _LIST_ENTRY *Flink; // rdi
  __int64 v33; // rbx
  int Blink; // ecx
  struct XDCOBJ *v35; // rcx
  Gre::Base *v36; // rcx
  int v37; // r15d
  struct Gre::Base::SESSION_GLOBALS *v38; // rax
  const struct SEMOBJSHARED *v39; // rdx
  const struct SEMOBJSHARED *v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // r9
  bool v44; // di
  __int64 v45; // rcx
  __int64 v46; // rdx
  __int64 v47; // r8
  __int64 v48; // rax
  int v49; // ecx
  __int64 *v50; // rbx
  __int64 v51; // rdi
  __int64 v52; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v53; // [rsp+48h] [rbp-B8h] BYREF
  struct XDCOBJ *v54; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v55; // [rsp+58h] [rbp-A8h] BYREF
  BOOL v56; // [rsp+60h] [rbp-A0h]
  __int64 v57; // [rsp+68h] [rbp-98h] BYREF
  __int64 v58; // [rsp+70h] [rbp-90h]
  __int64 v59; // [rsp+78h] [rbp-88h] BYREF
  _QWORD v60[2]; // [rsp+80h] [rbp-80h] BYREF
  struct LFONT *v61; // [rsp+90h] [rbp-70h] BYREF
  _OWORD v62[4]; // [rsp+A0h] [rbp-60h] BYREF
  __int128 v63; // [rsp+E0h] [rbp-20h] BYREF
  __int128 v64; // [rsp+F0h] [rbp-10h]
  _BYTE v65[80]; // [rsp+100h] [rbp+0h] BYREF

  v2 = *(_QWORD *)a2;
  v54 = a2;
  if ( *(_DWORD *)(v2 + 304) )
  {
    RFONTOBJ::vInitEUDCRemote(this, a2);
    return;
  }
  v5 = *(_QWORD *)(*(_QWORD *)this + 120LL);
  v59 = v5;
  v53 = v5;
  v6 = SGDGetSessionState(this);
  v7 = *(_QWORD *)this;
  v8 = *(_QWORD *)(v6 + 32);
  if ( !*(_QWORD *)(*(_QWORD *)this + 728LL) && (*(_QWORD *)(v8 + 13320) || *(_QWORD *)(v8 + 13328))
    || (*(_DWORD *)(v8 + 19360) || *(_DWORD *)(v8 + 19352)) && !*(_QWORD *)(v7 + 736)
    || (v9 = *(_QWORD *)(v5 + 120)) != 0
    && (!*(_QWORD *)(v7 + 744) || *(_DWORD *)(v7 + 832) != 1 || *(_DWORD *)(v7 + 836) != *(_DWORD *)(v9 + 104)) )
  {
    v10 = *(struct HLFONT__ **)(*(_QWORD *)a2 + 1744LL);
    v52 = *(_QWORD *)(*(_QWORD *)a2 + 48LL);
    LFONTOBJ::LFONTOBJ((LFONTOBJ *)&v61, v10, (struct PDEVOBJ *)&v52);
    v11 = *(const struct _IFIMETRICS **)(v5 + 32);
    v52 = *(_QWORD *)this;
    IFIOBJR::IFIOBJR((IFIOBJR *)v62, v11, (struct RFONTOBJ *)&v52, a2);
    v63 = 0LL;
    v64 = 0LL;
    RFONTOBJ::ComputeEUDCLogfont(this, (struct _EUDCLOGFONT *)&v63, a2);
    v12 = *(_QWORD *)this;
    v13 = *(_QWORD *)(*(_QWORD *)this + 736LL);
    v58 = *(_QWORD *)(*(_QWORD *)this + 728LL);
    v55 = v13;
    memset_0(v65, 0, sizeof(v65));
    v14 = *(_QWORD *)(v5 + 120);
    v15 = v65;
    v16 = 0LL;
    v56 = 0;
    if ( v14 )
    {
      v56 = *(_DWORD *)(v12 + 832) == 0;
      if ( *(_QWORD *)(v12 + 744) && *(_DWORD *)(v12 + 836) != *(_DWORD *)(v14 + 104) )
      {
        v17 = 0LL;
        if ( *(_DWORD *)(v12 + 840) )
        {
          do
          {
            v18 = *(_QWORD *)(v12 + 744);
            if ( *(_QWORD *)(v18 + 8 * v17) )
            {
              v57 = *(_QWORD *)(v18 + 8 * v17);
              RFONTOBJ::bMakeInactiveHelper((RFONTOBJ *)&v57, 0LL);
              v19 = *(_QWORD *)this;
              v57 = 0LL;
              *(_QWORD *)(*(_QWORD *)(v19 + 744) + 8 * v17) = 0LL;
              RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v57);
            }
            v12 = *(_QWORD *)this;
            v17 = (unsigned int)(v17 + 1);
          }
          while ( (unsigned int)v17 < *(_DWORD *)(*(_QWORD *)this + 840LL) );
        }
        v20 = *(void **)(v12 + 744);
        if ( v20 != (void *)(v12 + 752) )
          Win32FreePool(v20);
        v13 = v55;
        *(_QWORD *)(*(_QWORD *)this + 744LL) = 0LL;
        *(_DWORD *)(*(_QWORD *)this + 840LL) = 0;
      }
      v12 = *(_QWORD *)this;
      if ( !*(_QWORD *)(*(_QWORD *)this + 744LL) )
        v56 = 1;
    }
    *(_DWORD *)(v12 + 712) |= 0x200u;
    v21 = v54;
    if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v54 + 48LL) + 40LL) & 0x8000) != 0 )
    {
      EtwTraceGreLockReleaseSemaphore(L"prfnt->hsemEUDC");
      GreReleaseSemaphoreInternal(*(_QWORD *)(*(_QWORD *)this + 848LL));
      EtwTraceGreLockReleaseSemaphore(L"prfnt->hsemCache");
      GreReleaseSemaphoreInternal(*(_QWORD *)(*(_QWORD *)this + 504LL));
    }
    v22 = *(_DWORD *)(*(_QWORD *)this + 844LL) != 0;
    LODWORD(v57) = v22;
    if ( !v58 )
    {
      v23 = *(_QWORD *)(v8 + 8LL * v22 + 13320);
      if ( v23 )
      {
        v52 = 0LL;
        v60[0] = *(_QWORD *)(v23 + 32);
        if ( (unsigned int)RFONTOBJ::bCheckEudcFontCaps(this, (struct IFIOBJ *)v60) )
        {
          RFONTOBJ::vInit(
            (RFONTOBJ *)&v52,
            v21,
            *(struct PFE **)(v8 + 8LL * (unsigned int)v57 + 13320),
            (struct _EUDCLOGFONT *)&v63);
          v24 = v58;
          if ( v52 )
            v24 = v52;
          v58 = v24;
        }
        else
        {
          v58 = 0LL;
        }
        RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v52);
        v22 = v57;
      }
    }
    if ( *(_DWORD *)(v8 + 19360) )
    {
      if ( v13 )
      {
        v13 = v55;
        goto LABEL_46;
      }
      EUDCDefaultFontPFE = RFONTOBJ::GetEUDCDefaultFontPFE(this, v22);
      v26 = EUDCDefaultFontPFE;
      if ( EUDCDefaultFontPFE )
      {
        v27 = *((_QWORD *)EUDCDefaultFontPFE + 4);
        v52 = 0LL;
        v60[0] = v27;
        v28 = RFONTOBJ::bCheckEudcFontCaps(this, (struct IFIOBJ *)v60);
        v29 = v54;
        if ( v28 )
        {
          RFONTOBJ::vInit((RFONTOBJ *)&v52, v54, v26, (struct _EUDCLOGFONT *)&v63);
          if ( v52 )
            v13 = v52;
          v55 = v13;
        }
        else
        {
          v55 = 0LL;
        }
        RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v52);
LABEL_47:
        if ( v56 )
        {
          v30 = *(_DWORD *)(*(_QWORD *)(v5 + 120) + 100LL);
          if ( v30 <= 0xA )
          {
            v15 = v65;
            goto LABEL_55;
          }
          v31 = 8 * v30;
          if ( (_DWORD)v31 )
            v15 = (_BYTE *)Win32AllocPoolZInit(v31, 1718382187LL);
          else
            v15 = 0LL;
          if ( v15 )
          {
LABEL_55:
            Flink = PFEOBJ::pGetLinkedFontList((PFEOBJ *)&v53)->Flink;
            if ( Flink != PFEOBJ::pGetLinkedFontList((PFEOBJ *)&v53) )
            {
              v33 = (unsigned int)v57;
              do
              {
                Blink = (int)Flink[1].Blink;
                v62[0] = v63;
                v62[1] = v64;
                if ( Blink )
                  HIDWORD(v62[0]) = Blink * HIDWORD(v63) / SHIDWORD(Flink[1].Blink);
                v35 = *((_QWORD *)&Flink[2].Flink + v33) != 0LL ? (struct XDCOBJ *)(unsigned int)v33 : 0LL;
                v54 = v35;
                v60[0] = *(_QWORD *)(*((_QWORD *)&Flink[2].Flink + (_QWORD)v35) + 32LL);
                if ( (unsigned int)RFONTOBJ::bCheckEudcFontCaps(this, (struct IFIOBJ *)v60) )
                {
                  v52 = 0LL;
                  RFONTOBJ::vInit(
                    (RFONTOBJ *)&v52,
                    v29,
                    *((struct PFE **)&Flink[2].Flink + (_QWORD)v54),
                    (struct _EUDCLOGFONT *)v62);
                  if ( v52 )
                  {
                    *(_QWORD *)&v15[8 * v16] = v52;
                    v16 = (unsigned int)(v16 + 1);
                  }
                  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v52);
                }
                Flink = Flink->Flink;
              }
              while ( Flink != PFEOBJ::pGetLinkedFontList((PFEOBJ *)&v53) );
              v5 = v59;
              v13 = v55;
            }
          }
        }
        if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v29 + 48LL) + 40LL) & 0x8000) != 0 )
        {
          GreAcquireSemaphore(*(_QWORD *)(*(_QWORD *)this + 504LL));
          GreAcquireSemaphore(*(_QWORD *)(*(_QWORD *)this + 848LL));
        }
        v36 = *(Gre::Base **)this;
        v37 = *(_DWORD *)(*(_QWORD *)this + 712LL) & 0x200;
        *((_DWORD *)v36 + 178) = *(_DWORD *)(*(_QWORD *)this + 712LL) & 0xFFFFFDFF;
        v38 = Gre::Base::Globals(v36);
        SEMOBJSHARED::SEMOBJSHARED((SEMOBJSHARED *)&v53, *((HSEMAPHORE *)v38 + 3));
        if ( !RFONTOBJ::bActive(this, v39)
          && v37
          && (unsigned int)dword_1C0354098 > 5
          && tlgKeywordOn((__int64)&dword_1C0354098, 0x400000000000LL) )
        {
          LODWORD(v57) = 0;
          LODWORD(v54) = 2;
          v59 = 0x1000000LL;
          LODWORD(v55) = 68651;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
            v41,
            byte_1C031E89C,
            v42,
            v43,
            (__int64)&v55,
            (__int64)&v59,
            (__int64)&v54,
            (__int64)&v57);
        }
        v44 = RFONTOBJ::bActive(this, v40);
        SPRITERANGELOCK::vUnlock((SPRITERANGELOCK *)&v53);
        if ( ((unsigned __int8)-(v37 != 0) & v44) != 0 )
        {
          *(_QWORD *)(*(_QWORD *)this + 728LL) = v58;
          *(_QWORD *)(*(_QWORD *)this + 736LL) = v13;
          if ( v56 )
          {
            v45 = *(_QWORD *)this;
            if ( (_DWORD)v16 )
            {
              if ( (unsigned int)v16 <= 0xA )
                *(_QWORD *)(v45 + 744) = v45 + 752;
              else
                *(_QWORD *)(v45 + 744) = v15;
              v46 = 0LL;
              v47 = (unsigned int)v16;
              do
              {
                *(_QWORD *)(v46 + *(_QWORD *)(*(_QWORD *)this + 744LL)) = *(_QWORD *)&v15[v46];
                v46 += 8LL;
                --v47;
              }
              while ( v47 );
            }
            else
            {
              *(_QWORD *)(v45 + 744) = 0LL;
            }
            *(_DWORD *)(*(_QWORD *)this + 840LL) = v16;
            v48 = *(_QWORD *)(v5 + 120);
            if ( v48 )
              v49 = *(_DWORD *)(v48 + 104);
            else
              v49 = 0;
            *(_DWORD *)(*(_QWORD *)this + 836LL) = v49;
            *(_DWORD *)(*(_QWORD *)this + 832LL) = 1;
          }
          if ( *(_BYTE **)(*(_QWORD *)this + 744LL) != v15 && v15 && v15 != v65 )
            Win32FreePool(v15);
          RFONTOBJ::UpdateFontLinksLockOrder(this);
        }
        else
        {
          v53 = v58;
          RFONTOBJ::vMakeInactive((RFONTOBJ *)&v53);
          v53 = v13;
          RFONTOBJ::vMakeInactive((RFONTOBJ *)&v53);
          if ( (_DWORD)v16 )
          {
            v50 = (__int64 *)v15;
            v51 = (unsigned int)v16;
            do
            {
              v53 = *v50;
              RFONTOBJ::vMakeInactive((RFONTOBJ *)&v53);
              v53 = 0LL;
              RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v53);
              ++v50;
              --v51;
            }
            while ( v51 );
          }
          if ( v15 != v65 )
            Win32FreePool(v15);
          v53 = 0LL;
          RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v53);
          v53 = 0LL;
          RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v53);
        }
        v52 = 0LL;
        RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v52);
        if ( v61 )
          DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT(v61);
        return;
      }
    }
    v13 = 0LL;
    v55 = 0LL;
LABEL_46:
    v29 = v54;
    goto LABEL_47;
  }
}
