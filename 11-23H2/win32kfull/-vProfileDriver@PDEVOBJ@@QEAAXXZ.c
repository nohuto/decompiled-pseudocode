/*
 * XREFs of ?vProfileDriver@PDEVOBJ@@QEAAXXZ @ 0x1C00913D8
 * Callers:
 *     PDEVOBJ_vProfileDriverWrap @ 0x1C00913C0 (PDEVOBJ_vProfileDriverWrap.c)
 * Callees:
 *     ?CreateCompatibleSurface@@YA?AVSURFREF@@PEAUHDEV__@@KPEAUHPALETTE__@@HHHHHHHHHKKPEAX@Z @ 0x1C0025B70 (-CreateCompatibleSurface@@YA-AVSURFREF@@PEAUHDEV__@@KPEAUHPALETTE__@@HHHHHHHHHKKPEAX@Z.c)
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1C007A678 (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     ?bDeleteSurface@SURFREF@@QEAAHH@Z @ 0x1C0091A64 (-bDeleteSurface@SURFREF@@QEAAHH@Z.c)
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C00BE394 (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C00FB100 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00FB6CC (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ??0DLODCOBJ@@QEAA@XZ @ 0x1C011C6C4 (--0DLODCOBJ@@QEAA@XZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C011C870 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C01381F0 (__security_check_cookie.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C013D7D0 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C01409C0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall PDEVOBJ::vProfileDriver(PDEVOBJ *this)
{
  struct Gre::Base::SESSION_GLOBALS *v2; // rax
  __int64 v3; // rdx
  struct Gre::Base::SESSION_GLOBALS *v4; // rbx
  __int64 v5; // rax
  Gre::Base *v6; // rcx
  __int64 v7; // rax
  __int64 *v8; // rdi
  __int64 v9; // rbx
  __int64 v10; // rax
  __int64 v11; // r15
  __int64 v12; // rsi
  BOOL (__stdcall *v13)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, BLENDOBJ *); // r12
  __int64 v14; // rdx
  signed __int32 v15; // ett
  BOOL (__stdcall *v16)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, BLENDOBJ *); // r10
  __int64 v17; // rdx
  __int64 v18; // rdx
  signed __int32 v19; // ett
  __int64 v20; // rdx
  __int64 v21; // rdx
  signed __int32 v22; // ett
  BOOL (__stdcall *v23)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, ULONG, ULONG); // r10
  __int64 v24; // rdx
  Gre::Base *v25; // [rsp+88h] [rbp-80h] BYREF
  Gre::Base *v26; // [rsp+90h] [rbp-78h] BYREF
  Gre::Base *v27; // [rsp+98h] [rbp-70h] BYREF
  Gre::Base *v28; // [rsp+A0h] [rbp-68h] BYREF
  Gre::Base *v29; // [rsp+A8h] [rbp-60h] BYREF
  Gre::Base *v30; // [rsp+B0h] [rbp-58h] BYREF
  __int128 v31; // [rsp+B8h] [rbp-50h] BYREF
  __int128 v32; // [rsp+C8h] [rbp-40h]
  __int64 v33; // [rsp+D8h] [rbp-30h] BYREF
  char v34; // [rsp+E0h] [rbp-28h]
  int v35; // [rsp+E4h] [rbp-24h]
  __int64 v36; // [rsp+E8h] [rbp-20h] BYREF
  _DWORD v37[4]; // [rsp+F0h] [rbp-18h] BYREF
  __int64 v38; // [rsp+100h] [rbp-8h]
  int v39; // [rsp+108h] [rbp+0h]
  int v40; // [rsp+10Ch] [rbp+4h]
  _BYTE v41[32]; // [rsp+110h] [rbp+8h] BYREF
  __int64 v42; // [rsp+130h] [rbp+28h]
  __int128 v43; // [rsp+138h] [rbp+30h] BYREF
  __int64 v44; // [rsp+148h] [rbp+40h]
  int v45; // [rsp+150h] [rbp+48h]
  _QWORD v46[2]; // [rsp+158h] [rbp+50h] BYREF
  _BYTE v47[40]; // [rsp+168h] [rbp+60h] BYREF
  __int64 v48; // [rsp+190h] [rbp+88h]
  __int64 v49; // [rsp+198h] [rbp+90h]
  __m128i v50; // [rsp+1A8h] [rbp+A0h] BYREF
  int v51; // [rsp+1B8h] [rbp+B0h] BYREF
  __m128i si128; // [rsp+1BCh] [rbp+B4h]
  int v53; // [rsp+1CCh] [rbp+C4h]

  v2 = Gre::Base::Globals(this);
  v3 = *(_QWORD *)this;
  v37[3] = 0;
  v40 = 0;
  v4 = v2;
  v31 = 0LL;
  v32 = 0LL;
  if ( (*(_DWORD *)(v3 + 40) & 1) != 0 )
  {
    DLODCOBJ::DLODCOBJ((DLODCOBJ *)v46);
    v5 = *(_QWORD *)this;
    v43 = 0LL;
    v49 = 0LL;
    v48 = 0LL;
    v46[0] = 0LL;
    v45 = 1;
    v6 = (Gre::Base *)*(unsigned int *)(v5 + 40);
    if ( ((unsigned __int8)v6 & 1) != 0 )
    {
      Gre::Base::Globals(v6);
      v7 = *(_QWORD *)this;
      *(_QWORD *)&v43 = *(_QWORD *)(*(_QWORD *)this + 48LL);
      v44 = v7;
      GreAcquireSemaphore(v43);
      EtwTraceGreLockAcquireSemaphoreExclusive(L"hsemTrg", v43, 11LL);
    }
    v36 = *((_QWORD *)v4 + 14);
    GreAcquireSemaphore(v36);
    v8 = (__int64 *)*((_QWORD *)v4 + 751);
    v9 = *((_QWORD *)v4 + 750);
    v10 = *(_QWORD *)this;
    v11 = *(_QWORD *)(*(_QWORD *)this + 2528LL);
    v12 = *(_QWORD *)(*(_QWORD *)this + 1776LL);
    v53 = 0;
    v51 = 0;
    si128 = _mm_load_si128((const __m128i *)&_xmm);
    v50 = si128;
    *(_DWORD *)(v10 + 2408) = 0;
    v37[0] = 6;
    v38 = *v8;
    v33 = 0LL;
    v34 = 0;
    v35 = 0;
    v27 = 0LL;
    v26 = 0LL;
    v25 = 0LL;
    v37[1] = 40;
    v37[2] = 40;
    v39 = 1;
    v13 = EngAlphaBlend;
    if ( SURFMEM::bCreateDIB((SURFMEM *)&v33, (struct _DEVBITMAPINFO *)v37, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0)
      && (unsigned int)EXLATEOBJ::bInitXlateObj(&v27, 0LL, 0LL, v8, v8, v9, v9, 0, 0, 0, 0)
      && (unsigned int)EXLATEOBJ::bInitXlateObj(&v26, 0LL, 0LL, v12, v8, v9, v9, 0, 0, 0, 0)
      && (unsigned int)EXLATEOBJ::bInitXlateObj(&v25, 0LL, 0LL, v8, v12, v9, v9, 0, 0, 0, 0) )
    {
      v14 = *(_QWORD *)this;
      *((_QWORD *)&v31 + 1) = v27;
      *(_QWORD *)&v32 = v26;
      *((_QWORD *)&v32 + 1) = v25;
      WORD1(v31) = 511;
      _m_prefetchw((const void *)(v14 + 40));
      do
        v15 = *(_DWORD *)(v14 + 40);
      while ( v15 != _InterlockedCompareExchange((volatile signed __int32 *)(v14 + 40), v15 & 0xFFFBFFFF, v15) );
      if ( (*(_DWORD *)(v11 + 112) & 0x10000) != 0 )
        v16 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, BLENDOBJ *))(*(_QWORD *)this + 3232LL);
      else
        v16 = EngAlphaBlend;
      v17 = v33 + 24;
      if ( !v33 )
        v17 = 0LL;
      if ( ((unsigned int (__fastcall *)(__int64, __int64, int *, Gre::Base *, __m128i *, __m128i *, __int128 *))v16)(
             (v11 + 24) & -(__int64)(v11 != 0),
             v17,
             &v51,
             v25,
             &v50,
             &v50,
             &v31)
        && (*(_DWORD *)(*(_QWORD *)this + 40LL) & 0x40000) == 0 )
      {
        *(_DWORD *)(*(_QWORD *)this + 2408LL) |= 2u;
        *(_DWORD *)(*(_QWORD *)this + 44LL) |= 2u;
      }
    }
    EXLATEOBJ::vAltUnlock(&v25);
    EXLATEOBJ::vAltUnlock(&v26);
    EXLATEOBJ::vAltUnlock(&v27);
    SURFMEM::~SURFMEM((SURFMEM *)&v33);
    CreateCompatibleSurface(
      (SURFREF *)v41,
      *(HDEV *)this,
      *(_DWORD *)(v11 + 96),
      0LL,
      0x28u,
      0x28u,
      1u,
      0,
      0,
      0,
      0,
      0,
      0,
      0,
      0,
      0LL);
    if ( v42 )
    {
      v30 = 0LL;
      v29 = 0LL;
      v28 = 0LL;
      if ( (unsigned int)EXLATEOBJ::bInitXlateObj(&v30, 0LL, 0LL, v12, v12, v9, v9, 0, 0, 0, 0)
        && (unsigned int)EXLATEOBJ::bInitXlateObj(&v29, 0LL, 0LL, v12, v8, v9, v9, 0, 0, 0, 0)
        && (unsigned int)EXLATEOBJ::bInitXlateObj(&v28, 0LL, 0LL, v8, v12, v9, v9, 0, 0, 0, 0) )
      {
        v18 = *(_QWORD *)this;
        *((_QWORD *)&v31 + 1) = v29;
        *(_QWORD *)&v32 = v29;
        *((_QWORD *)&v32 + 1) = v28;
        LODWORD(v31) = 8716288;
        _m_prefetchw((const void *)(v18 + 40));
        do
          v19 = *(_DWORD *)(v18 + 40);
        while ( v19 != _InterlockedCompareExchange((volatile signed __int32 *)(v18 + 40), v19 & 0xFFFBFFFF, v19) );
        if ( (*(_DWORD *)(v11 + 112) & 0x10000) != 0 )
          v13 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, BLENDOBJ *))(*(_QWORD *)this + 3232LL);
        v20 = v42 + 24;
        if ( !v42 )
          v20 = 0LL;
        if ( ((unsigned int (__fastcall *)(__int64, __int64, int *, Gre::Base *, __m128i *, __m128i *, __int128 *))v13)(
               (v11 + 24) & -(__int64)(v11 != 0),
               v20,
               &v51,
               v30,
               &v50,
               &v50,
               &v31)
          && (*(_DWORD *)(*(_QWORD *)this + 40LL) & 0x40000) == 0 )
        {
          *(_DWORD *)(*(_QWORD *)this + 2408LL) |= 1u;
          *(_DWORD *)(*(_QWORD *)this + 44LL) |= 1u;
        }
      }
      v21 = *(_QWORD *)this;
      _m_prefetchw((const void *)(*(_QWORD *)this + 40LL));
      do
        v22 = *(_DWORD *)(v21 + 40);
      while ( v22 != _InterlockedCompareExchange((volatile signed __int32 *)(v21 + 40), v22 & 0xFFFBFFFF, v22) );
      if ( (*(_DWORD *)(v11 + 112) & 0x8000) != 0 )
        v23 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, ULONG, ULONG))(*(_QWORD *)this + 3256LL);
      else
        v23 = EngTransparentBlt;
      v24 = v42 + 24;
      if ( !v42 )
        v24 = 0LL;
      if ( ((unsigned int (__fastcall *)(__int64, __int64, _QWORD, _QWORD, __m128i *, __m128i *, int, _DWORD))v23)(
             (v11 + 24) & -(__int64)(v11 != 0),
             v24,
             0LL,
             0LL,
             &v50,
             &v50,
             1,
             0)
        && (*(_DWORD *)(*(_QWORD *)this + 40LL) & 0x40000) == 0 )
      {
        *(_DWORD *)(*(_QWORD *)this + 44LL) |= 4u;
      }
      EXLATEOBJ::vAltUnlock(&v28);
      EXLATEOBJ::vAltUnlock(&v29);
      EXLATEOBJ::vAltUnlock(&v30);
    }
    SURFREF::bDeleteSurface((SURFREF *)v41, 0);
    if ( v42 )
      DEC_SHARE_REF_CNT(v42);
    UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v41);
    SEMOBJ::vUnlock((SEMOBJ *)&v36);
    DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)&v43);
    if ( v46[0] )
      DLODCOBJ::vUnlock((DLODCOBJ *)v46);
    UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v47);
  }
}
