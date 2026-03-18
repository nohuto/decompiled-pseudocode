/*
 * XREFs of ?GreGetDIBitsInternalImpl@@YAHPEAUHDC__@@PEAUHBITMAP__@@IIAEAV?$umptr_w@E@@PEAUtagBITMAPINFO@@III@Z @ 0x1C004C270
 * Callers:
 *     GreExtGetObjectW @ 0x1C004B0D0 (GreExtGetObjectW.c)
 *     NtGdiGetDIBitsInternal @ 0x1C004B4D0 (NtGdiGetDIBitsInternal.c)
 *     ?ProcessAlphaBitmap@@YAPEAUHBITMAP__@@PEAU1@@Z @ 0x1C004DAA0 (-ProcessAlphaBitmap@@YAPEAUHBITMAP__@@PEAU1@@Z.c)
 *     GreGetDIBitsInternal @ 0x1C02DDBC0 (GreGetDIBitsInternal.c)
 * Callees:
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x1C004CC34 (--0SURFREF@@QEAA@PEAUHSURF__@@@Z.c)
 *     ?GreGetDIBitsInternalWorker@@YAHKAEAVDCOBJ@@AEAVPDEVOBJ@@AEAVSURFREF@@AEAVXEPALOBJ@@PEAUHDC__@@PEAUHBITMAP__@@IIAEAV?$umptr_w@E@@PEAUtagBITMAPINFO@@III@Z @ 0x1C004CC80 (-GreGetDIBitsInternalWorker@@YAHKAEAVDCOBJ@@AEAVPDEVOBJ@@AEAVSURFREF@@AEAVXEPALOBJ@@PEAUHDC__@@P.c)
 *     ??1NEEDDYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C007E20C (--1NEEDDYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??1SURFREF@@QEAA@XZ @ 0x1C007E42C (--1SURFREF@@QEAA@XZ.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C011C700 (--1DCOBJ@@QEAA@XZ.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C013D7D0 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ @ 0x1C013DB9C (--0-$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ.c)
 *     memset_0 @ 0x1C0140D40 (memset_0.c)
 *     ?vMarkTransformDirty@DC@@QEAAXXZ @ 0x1C026632C (-vMarkTransformDirty@DC@@QEAAXXZ.c)
 */

__int64 __fastcall GreGetDIBitsInternalImpl(
        __int64 a1,
        HSURF a2,
        int a3,
        int a4,
        __int64 a5,
        unsigned int *a6,
        int a7,
        int a8,
        unsigned int a9)
{
  unsigned int *v9; // rsi
  int v10; // eax
  int v12; // r13d
  __int64 v13; // rbx
  char v14; // r15
  int v15; // r14d
  __int64 *ThreadWin32Thread; // rax
  __int64 v17; // rax
  __int64 v18; // rdx
  struct UMPDOBJ *v19; // rdx
  DC *v20; // r9
  int v21; // edi
  struct _DC_ATTR *UserAttr; // rax
  struct _DC_ATTR *v23; // rax
  __int64 v24; // rdi
  Gre::Base *v25; // rcx
  struct Gre::Base::SESSION_GLOBALS *v26; // rdi
  _DWORD *v27; // rdi
  unsigned int v28; // r14d
  __int16 v29; // cx
  unsigned int v31; // r8d
  unsigned int v32; // r9d
  int v33; // ecx
  int v34; // eax
  int v35; // edi
  __int64 v36; // rdx
  __int64 *v37; // rax
  __int64 v38; // rax
  __int64 v39; // rcx
  bool v40; // zf
  struct UMPDOBJ *v41; // rax
  DC *v42; // rdx
  int v43; // edi
  struct _DC_ATTR *v44; // rax
  int v45; // ecx
  unsigned int v46; // edi
  unsigned int DIBitsInternalWorker; // eax
  DC *v48; // r9
  unsigned int v49; // edi
  struct _DC_ATTR *v50; // rax
  __int64 v51; // rbx
  Gre::Base *v52; // rcx
  struct Gre::Base::SESSION_GLOBALS *v53; // rbx
  DC *v54; // [rsp+70h] [rbp-90h] BYREF
  __int64 v55; // [rsp+78h] [rbp-88h]
  _BYTE v56[32]; // [rsp+80h] [rbp-80h] BYREF
  DC *v57; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v58; // [rsp+A8h] [rbp-58h]
  _BYTE v59[32]; // [rsp+B0h] [rbp-50h] BYREF
  int v60; // [rsp+D0h] [rbp-30h] BYREF
  int v61; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v62; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v63; // [rsp+E8h] [rbp-18h] BYREF
  _BYTE v64[32]; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v65; // [rsp+110h] [rbp+10h]
  __int64 v66; // [rsp+118h] [rbp+18h]
  __int64 v67; // [rsp+120h] [rbp+20h]
  __int64 v68; // [rsp+128h] [rbp+28h]
  __int16 v69; // [rsp+130h] [rbp+30h]

  v9 = a6;
  v10 = a4;
  if ( !a6 )
    goto LABEL_133;
  v12 = a7;
  if ( a7 )
  {
    if ( a7 != 1 && a7 != 2 )
      goto LABEL_133;
    v10 = a4;
  }
  if ( a9 < 0xC )
  {
LABEL_133:
    EngSetLastError(0x57u);
    return 0LL;
  }
  v13 = 0LL;
  if ( !v10 )
  {
    v66 = 0LL;
    v68 = 0LL;
    v69 = 0;
    *(_QWORD *)(a5 + 16) = 0LL;
    v67 = 0LL;
    *(_QWORD *)a5 = 0LL;
    *(_QWORD *)(a5 + 8) = 0LL;
    *(_WORD *)(a5 + 24) = 0;
  }
  v14 = 1;
  v58 = 0LL;
  v15 = 1;
  UnexpectedThreadTerminationHandler<DCOBJ>::UnexpectedThreadTerminationHandler<DCOBJ>(v59);
  v57 = (DC *)HmgLockEx(a1, 1LL, 0LL);
  if ( v57 )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
    if ( ThreadWin32Thread && (v17 = *ThreadWin32Thread) != 0 && (v18 = *(_QWORD *)(v17 + 40), v18 != v17 + 40) )
      v19 = (struct UMPDOBJ *)(v18 - 40);
    else
      v19 = 0LL;
    v20 = v57;
    if ( *((_WORD *)v57 + 6) == 1 )
    {
      *((_QWORD *)v57 + 271) = v19;
      *((_DWORD *)v57 + 544) = 0xFFFF;
      v20 = v57;
    }
    else if ( *((struct UMPDOBJ **)v57 + 271) != v19 )
    {
      XDCOBJ::LogUmpdCallbackStatus((XDCOBJ *)&v57, v19);
      v20 = 0LL;
      _InterlockedDecrement((volatile signed __int32 *)v57 + 3);
      v57 = 0LL;
      goto LABEL_43;
    }
    if ( HIDWORD(v58) )
    {
      if ( (*(_DWORD *)(*((_QWORD *)v20 + 6) + 40LL) & 0x8000) == 0 )
      {
LABEL_21:
        _InterlockedDecrement((volatile signed __int32 *)v20 + 3);
        v20 = 0LL;
        v57 = 0LL;
        goto LABEL_43;
      }
      v21 = *((_DWORD *)v20 + 528);
      if ( v21 != ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) )
      {
        v20 = v57;
        goto LABEL_21;
      }
    }
    else
    {
      if ( !*((_DWORD *)v20 + 528) )
        goto LABEL_30;
      *((_DWORD *)v20 + 528) = 0;
    }
  }
  else if ( (unsigned __int8)PsIsWin32KFilterAuditEnabled() || (unsigned __int8)PsIsWin32KFilterEnabled() )
  {
    PsGetWin32KFilterSet();
  }
  v20 = v57;
LABEL_30:
  if ( !v20 )
    goto LABEL_53;
  if ( (*((_DWORD *)v20 + 11) & 2) == 0 )
  {
    if ( !HIDWORD(v58) )
    {
      UserAttr = XDCOBJ::GetUserAttr((XDCOBJ *)&v57);
      if ( UserAttr && !DC::SaveAttributes(v57, UserAttr) )
      {
        v20 = 0LL;
        _InterlockedDecrement((volatile signed __int32 *)v57 + 3);
        v57 = 0LL;
LABEL_43:
        if ( v20 )
        {
          if ( (_DWORD)v58 && (*((_DWORD *)v20 + 11) & 2) != 0 )
          {
            if ( !HIDWORD(v58) )
            {
              v23 = XDCOBJ::GetUserAttr((XDCOBJ *)&v57);
              if ( v23 )
                DC::RestoreAttributes(v57, v23);
              v20 = v57;
            }
            *((_DWORD *)v20 + 11) &= ~2u;
            v20 = v57;
            LODWORD(v58) = 0;
          }
          v60 = 0;
          v24 = *(_QWORD *)v20;
          HmgDecrementExclusiveReferenceCountEx(v20, HIDWORD(v58), &v60);
          if ( v60 )
            GrepDeleteDC(v24, 0x2000000LL);
        }
        goto LABEL_53;
      }
      v20 = v57;
    }
    *((_DWORD *)v20 + 11) |= 2u;
    v20 = v57;
    LODWORD(v58) = 1;
  }
  if ( (*((_DWORD *)v20 + 130) & 4) != 0 )
  {
    DC::vMarkTransformDirty(v20);
    v20 = v57;
  }
  if ( v20 )
  {
    if ( (*(_DWORD *)(*((_QWORD *)v20 + 6) + 40LL) & 0x8000) != 0 )
      v15 = 0;
    goto LABEL_43;
  }
LABEL_53:
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v59);
  if ( v15 )
  {
    LOBYTE(a6) = 1;
    v26 = Gre::Base::Globals(v25);
    GreAcquireSemaphoreSharedInternal(*((_QWORD *)v26 + 10));
    EtwTraceGreLockAcquireSemaphoreShared(L"GreBaseGlobals.hsemDynamicModeChange", *((_QWORD *)v26 + 10));
  }
  else
  {
    v14 = 0;
    LOBYTE(a6) = 0;
  }
  SURFREF::SURFREF((SURFREF *)v64, a2);
  v27 = (_DWORD *)v65;
  if ( !v65 )
    goto LABEL_74;
  v28 = *v9;
  if ( *(_QWORD *)a5 )
    goto LABEL_71;
  if ( v28 != 12 )
  {
    if ( a9 < 0x28 )
      goto LABEL_74;
    if ( !*((_WORD *)v9 + 7) )
    {
      if ( v28 > 0x28 )
        memset_0(v9, 0, *v9);
      *v9 = 40;
      v31 = v27[14];
      v9[1] = v31;
      v32 = v27[15];
      v9[2] = v32;
      *((_WORD *)v9 + 6) = 1;
      v9[4] = 0;
      v33 = (unsigned __int16)gaulConvert[2 * v27[24]];
      *((_WORD *)v9 + 7) = v33;
      if ( v33 == 16 || v33 == 32 )
        v9[4] = 3;
      *((_QWORD *)v9 + 3) = 0LL;
      v9[5] = v32 * (((int)(v31 * v33 + 31) >> 3) & 0xFFFFFFFC);
      v34 = dword_1C0319778[v27[24]];
      v9[9] = v34;
      v9[8] = v34;
      SURFREF::~SURFREF((SURFREF *)v64);
      NEEDDYNAMICMODECHANGESHARELOCK::~NEEDDYNAMICMODECHANGESHARELOCK((NEEDDYNAMICMODECHANGESHARELOCK *)&a6);
      return 1LL;
    }
LABEL_71:
    if ( v28 < 0x28 || v9[4] - 4 > 1 )
      goto LABEL_76;
    EngSetLastError(0x57u);
LABEL_74:
    SURFREF::~SURFREF((SURFREF *)v64);
    NEEDDYNAMICMODECHANGESHARELOCK::~NEEDDYNAMICMODECHANGESHARELOCK((NEEDDYNAMICMODECHANGESHARELOCK *)&a6);
    return 0LL;
  }
  if ( !*((_WORD *)v9 + 5) )
  {
    *((_WORD *)v9 + 2) = *(_WORD *)(v65 + 56);
    *((_WORD *)v9 + 3) = *((_WORD *)v27 + 30);
    *((_WORD *)v9 + 4) = 1;
    v29 = gaulConvert[2 * v27[24]];
    *((_WORD *)v9 + 5) = v29;
    if ( (unsigned __int16)v29 >= 0x10u )
      *((_WORD *)v9 + 5) = 24;
    SURFREF::~SURFREF((SURFREF *)v64);
    NEEDDYNAMICMODECHANGESHARELOCK::~NEEDDYNAMICMODECHANGESHARELOCK((NEEDDYNAMICMODECHANGESHARELOCK *)&a6);
    return 1LL;
  }
LABEL_76:
  v55 = 0LL;
  UnexpectedThreadTerminationHandler<DCOBJ>::UnexpectedThreadTerminationHandler<DCOBJ>(v56);
  v35 = a1;
  LOBYTE(v36) = 1;
  v54 = (DC *)HmgLockEx(a1, v36, 0LL);
  if ( v54 )
  {
    v37 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
    if ( !v37
      || (v38 = *v37) == 0
      || (v39 = *(_QWORD *)(v38 + 40), v40 = v39 == v38 + 40, v41 = (struct UMPDOBJ *)(v39 - 40), v40) )
    {
      v41 = 0LL;
    }
    v42 = v54;
    if ( *((_WORD *)v54 + 6) == 1 )
    {
      *((_QWORD *)v54 + 271) = v41;
      *((_DWORD *)v54 + 544) = 0xFFFF;
      v42 = v54;
    }
    else if ( *((struct UMPDOBJ **)v54 + 271) != v41 )
    {
      XDCOBJ::LogUmpdCallbackStatus((XDCOBJ *)&v54, v41);
      goto LABEL_91;
    }
    if ( HIDWORD(v55) )
    {
      if ( (*(_DWORD *)(*((_QWORD *)v42 + 6) + 40LL) & 0x8000) == 0 )
      {
LABEL_87:
        _InterlockedDecrement((volatile signed __int32 *)v42 + 3);
        v54 = 0LL;
LABEL_88:
        DCOBJ::~DCOBJ((DCOBJ *)&v54);
        goto LABEL_74;
      }
      v43 = *((_DWORD *)v42 + 528);
      if ( v43 != ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) )
      {
        v42 = v54;
        goto LABEL_87;
      }
      v35 = a1;
    }
    else
    {
      if ( !*((_DWORD *)v42 + 528) )
        goto LABEL_98;
      *((_DWORD *)v42 + 528) = 0;
    }
  }
  else if ( (unsigned __int8)PsIsWin32KFilterAuditEnabled() || (unsigned __int8)PsIsWin32KFilterEnabled() )
  {
    PsGetWin32KFilterSet();
  }
  v42 = v54;
LABEL_98:
  if ( !v42 )
    goto LABEL_88;
  if ( (*((_DWORD *)v42 + 11) & 2) != 0 )
    goto LABEL_105;
  if ( !HIDWORD(v55) )
  {
    v44 = XDCOBJ::GetUserAttr((XDCOBJ *)&v54);
    if ( !v44 || DC::SaveAttributes(v54, v44) )
    {
      v42 = v54;
      goto LABEL_104;
    }
LABEL_91:
    _InterlockedDecrement((volatile signed __int32 *)v54 + 3);
    v54 = 0LL;
    DCOBJ::~DCOBJ((DCOBJ *)&v54);
    goto LABEL_74;
  }
LABEL_104:
  *((_DWORD *)v42 + 11) |= 2u;
  v42 = v54;
  LODWORD(v55) = 1;
LABEL_105:
  if ( (*((_DWORD *)v42 + 130) & 4) != 0 )
  {
    DC::vMarkTransformDirty(v42);
    v42 = v54;
  }
  if ( !v42 )
    goto LABEL_88;
  v63 = *((_QWORD *)v42 + 6);
  v62 = *((_QWORD *)v42 + 11);
  if ( (*(_DWORD *)(v63 + 40) & 0x8000) != 0 )
  {
    DIBitsInternalWorker = GreGetDIBitsInternalWorker(
                             v28,
                             (unsigned int)&v54,
                             (unsigned int)&v63,
                             (unsigned int)v64,
                             (__int64)&v62,
                             v35,
                             (_DWORD)a2,
                             a3,
                             a4,
                             a5,
                             (__int64)v9,
                             v12,
                             a8,
                             a9);
    v48 = v54;
    v49 = DIBitsInternalWorker;
    if ( v54 )
    {
      if ( (_DWORD)v55 && (*((_DWORD *)v54 + 11) & 2) != 0 )
      {
        if ( !HIDWORD(v55) )
        {
          v50 = XDCOBJ::GetUserAttr((XDCOBJ *)&v54);
          if ( v50 )
            DC::RestoreAttributes(v54, v50);
          v48 = v54;
        }
        *((_DWORD *)v48 + 11) &= ~2u;
        v48 = v54;
        LODWORD(v55) = 0;
      }
      v61 = 0;
      v51 = *(_QWORD *)v48;
      HmgDecrementExclusiveReferenceCountEx(v48, HIDWORD(v55), &v61);
      if ( v61 )
        GrepDeleteDC(v51, 0x2000000LL);
    }
    UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v56);
    if ( v65 )
      DEC_SHARE_REF_CNT(v65);
    UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v64);
    if ( v14 )
    {
      v53 = Gre::Base::Globals(v52);
      EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemDynamicModeChange");
      GreReleaseSemaphoreInternal(*((_QWORD *)v53 + 10));
    }
    return v49;
  }
  else
  {
    NEEDGRELOCK::vLock((NEEDGRELOCK *)&v61, (struct XDCOBJ *)&v54);
    if ( v65 )
    {
      if ( v65 != -24 )
      {
        v45 = *(_DWORD *)(v65 + 112);
        if ( (v45 & 0x80004000) != 0 && (v45 & 0x200) == 0 )
        {
          v13 = v65;
          GreLockDisplayDevice(*(_QWORD *)(v65 + 48));
        }
      }
    }
    v46 = GreGetDIBitsInternalWorker(
            v28,
            (unsigned int)&v54,
            (unsigned int)&v63,
            (unsigned int)v64,
            (__int64)&v62,
            v35,
            (_DWORD)a2,
            a3,
            a4,
            a5,
            (__int64)v9,
            v12,
            a8,
            a9);
    if ( v13 )
      GreUnlockDisplayDevice(*(_QWORD *)(v13 + 48));
    NEEDGRELOCK::vUnlock((NEEDGRELOCK *)&v61);
    DCOBJ::~DCOBJ((DCOBJ *)&v54);
    SURFREF::~SURFREF((SURFREF *)v64);
    NEEDDYNAMICMODECHANGESHARELOCK::~NEEDDYNAMICMODECHANGESHARELOCK((NEEDDYNAMICMODECHANGESHARELOCK *)&a6);
    return v46;
  }
}
