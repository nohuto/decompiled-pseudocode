/*
 * XREFs of ?GrepCreateCompatibleBitmap@@YAPEAUHBITMAP__@@AEAVOPTAPIDCOBJ@@HHKPEAU_LUID@@PEAG@Z @ 0x140013C4C
 * Callers:
 *     GreCreateCompatibleBitmapEx @ 0x1400135CC (GreCreateCompatibleBitmapEx.c)
 *     NtGdiCreateCompatibleBitmap @ 0x140013BE0 (NtGdiCreateCompatibleBitmap.c)
 *     ?TrapAppContainerRenderingWorker@@YA_NAEAVXDCOBJ@@AEAPEAUHSURF__@@1PEAK@Z @ 0x14001E530 (-TrapAppContainerRenderingWorker@@YA_NAEAVXDCOBJ@@AEAPEAUHSURF__@@1PEAK@Z.c)
 *     CreateOrGetRedirectionBitmap @ 0x14002CDD0 (CreateOrGetRedirectionBitmap.c)
 *     ?GrepCreateDIBitmapComp@@YAPEAUHBITMAP__@@AEAVOPTAPIDCOBJ@@HHKAEAV?$umptr_r@E@@PEAUtagBITMAPINFO@@KIPEAX@Z @ 0x1401B8D54 (-GrepCreateDIBitmapComp@@YAPEAUHBITMAP__@@AEAVOPTAPIDCOBJ@@HHKAEAV-$umptr_r@E@@PEAUtagBITMAPINFO.c)
 * Callees:
 *     ??$GrepReleaseLockValidate@$00@@YAXXZ @ 0x140014258 (--$GrepReleaseLockValidate@$00@@YAXXZ.c)
 *     ??1SFMALTLOGICALSURFACEREF@@QEAA@XZ @ 0x14001487C (--1SFMALTLOGICALSURFACEREF@@QEAA@XZ.c)
 *     ?CreateCompatibleSurface@@YA?AVSURFREF@@PEAUHDEV__@@KPEAUHPALETTE__@@HHHHHHHHHKKPEAX@Z @ 0x1400148B8 (-CreateCompatibleSurface@@YA-AVSURFREF@@PEAUHDEV__@@KPEAUHPALETTE__@@HHHHHHHHHKKPEAX@Z.c)
 *     ??0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z @ 0x140014E94 (--0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ??$GrepAcquireLockValidate@$00@@YAXXZ @ 0x14001505C (--$GrepAcquireLockValidate@$00@@YAXXZ.c)
 *     ??0APIDCOBJ@@QEAA@AEAVOPTAPIDCOBJ@@@Z @ 0x140015954 (--0APIDCOBJ@@QEAA@AEAVOPTAPIDCOBJ@@@Z.c)
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x14001A440 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ?bValid@OPTAPIDCOBJ@@QEAA_NXZ @ 0x14001F7E4 (-bValid@OPTAPIDCOBJ@@QEAA_NXZ.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x14001FDF0 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ?pSurfaceEff@XDCOBJ@@QEBAPEAVSURFACE@@XZ @ 0x1400D2008 (-pSurfaceEff@XDCOBJ@@QEBAPEAVSURFACE@@XZ.c)
 *     ?vSetPID@SURFREF@@QEAAXK@Z @ 0x14019DB4C (-vSetPID@SURFREF@@QEAAXK@Z.c)
 */

__int64 __fastcall GrepCreateCompatibleBitmap(
        struct OPTAPIDCOBJ *this,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        struct _LUID *a5,
        unsigned __int16 *a6)
{
  __int64 v6; // rdi
  __int64 v8; // rsi
  __int64 v9; // r15
  __int64 v11; // r14
  int v12; // r13d
  BOOL v13; // eax
  int v14; // r12d
  Gre::Base *v15; // rcx
  __int64 v16; // rbx
  HSEMAPHORE v17; // r13
  Gre::Base *v18; // rcx
  struct Gre::Base::SESSION_GLOBALS *v19; // rax
  __int64 v20; // r14
  __int64 v21; // r10
  bool v22; // zf
  __int64 *v23; // rax
  __int64 v24; // r14
  float v25; // xmm6_4
  float v26; // xmm8_4
  int v27; // eax
  __int64 v28; // r8
  __int64 v29; // rcx
  unsigned __int64 v30; // rax
  __m128i v32; // xmm0
  int v33; // r9d
  __m128i v34; // xmm1
  unsigned int v35; // r8d
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rax
  int v39; // r8d
  unsigned int v40; // ecx
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rax
  struct _LUID *v44; // rcx
  unsigned __int16 ScaledLogPixels; // ax
  struct SURFACE *v46; // rax
  __int64 v47; // r8
  __int64 *v48; // rax
  __int64 v49; // [rsp+88h] [rbp-80h] BYREF
  unsigned int v50; // [rsp+90h] [rbp-78h]
  int v51; // [rsp+94h] [rbp-74h]
  unsigned __int64 v52; // [rsp+98h] [rbp-70h]
  _BYTE v53[8]; // [rsp+A0h] [rbp-68h] BYREF
  _BYTE v54[32]; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v55; // [rsp+C8h] [rbp-40h]
  _QWORD v56[3]; // [rsp+D8h] [rbp-30h] BYREF
  __int64 v57; // [rsp+F0h] [rbp-18h]
  _BYTE v58[192]; // [rsp+148h] [rbp+40h] BYREF
  BOOL v59; // [rsp+250h] [rbp+148h]
  int v60; // [rsp+258h] [rbp+150h]
  BOOL v61; // [rsp+260h] [rbp+158h]

  v6 = 0LL;
  v8 = (int)a3;
  v9 = (int)a2;
  v60 = 0;
  v52 = __PAIR64__(a3, a2);
  v61 = (a4 & 0x1000000) == 0;
  v11 = 0LL;
  v12 = 0;
  if ( (a4 & 0x2000000) != 0 )
  {
    if ( (a4 & 0x1000000) != 0 )
    {
      v12 = 1;
      v60 = 1;
    }
    else
    {
      DbgPrint("GreCreateCompatibleBitmap: got CCB_KMSECTIONVIEW without CCB_NOVIDEOMEMORY...ignoring CCB_KMSECTIONVIEW\n");
    }
  }
  v51 = a4 & 0x4000000;
  v13 = (a4 & 0x4000000) != 0;
  v14 = (a4 >> 27) & 1;
  v59 = v13;
  if ( (int)v9 <= 0 || (int)v8 <= 0 || (unsigned __int64)(v8 * v9) > 0x3FFFFFFF )
  {
    EngSetLastError(0x57u);
    return 0LL;
  }
  if ( *((_QWORD *)this + 13) )
  {
    if ( OPTAPIDCOBJ::bValid(this) )
    {
      APIDCOBJ::APIDCOBJ((APIDCOBJ *)v56, this);
      v16 = *(_QWORD *)(v56[0] + 48LL);
      v49 = v16;
      if ( (*(_DWORD *)(v16 + 40) & 0x8000) == 0 )
      {
        v17 = (HSEMAPHORE)(*(_QWORD *)Gre::Base::Globals(v15) + 624LL);
        GreAcquireSemaphoreSharedInternal(v17);
        GrepAcquireLockValidate<1>();
        v19 = Gre::Base::Globals(v18);
        v20 = *(_QWORD *)(v56[0] + 496LL);
        if ( v20 )
        {
          if ( v57 )
            v20 = v57;
        }
        else
        {
          v20 = *((_QWORD *)v19 + 533);
        }
        NEEDGRELOCK::vLock((NEEDGRELOCK *)v53, (struct XDCOBJ *)v56);
        DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v58, (struct PDEVOBJ *)&v49);
        v21 = v56[0];
        if ( *(_DWORD *)(v56[0] + 32LL) == 1 )
        {
          v23 = *(__int64 **)(v20 + 128);
          v50 = *(_DWORD *)(v20 + 96);
          if ( v23 )
            goto LABEL_13;
        }
        else
        {
          v22 = (*(_DWORD *)(v16 + 2156) & 0x100) == 0;
          v50 = *(_DWORD *)(v16 + 2092);
          if ( v22 )
          {
            v23 = *(__int64 **)(v16 + 1792);
LABEL_13:
            v24 = *v23;
            goto LABEL_14;
          }
        }
        v24 = 0LL;
LABEL_14:
        v25 = 0.0;
        v26 = 0.0;
        if ( a6 )
        {
          if ( *a6 != 96 )
          {
            ScaledLogPixels = GreGetScaledLogPixels();
            v21 = v56[0];
            v25 = (float)ScaledLogPixels / 96.0;
            v26 = v25;
            goto LABEL_28;
          }
        }
        else
        {
          v27 = *(_DWORD *)(v56[0] + 520LL);
          if ( (v27 & 1) != 0 && (v27 & 2) == 0 )
          {
            v25 = *(float *)(v56[0] + 524LL);
            HIDWORD(v49) = *(_DWORD *)(v56[0] + 528LL);
            LODWORD(v49) = HIDWORD(v49);
            v26 = *((float *)&v49 + 1);
LABEL_28:
            if ( v25 != 0.0 )
              goto LABEL_29;
          }
        }
        if ( v26 == 0.0 )
        {
LABEL_17:
          if ( v51 )
          {
            if ( (*(_DWORD *)(v16 + 40) & 0x4000000) != 0 )
            {
              if ( a5 )
              {
                v44 = *(struct _LUID **)(v16 + 1784);
                if ( v44 )
                {
                  v44[13] = *a5;
                  v21 = v56[0];
                }
              }
            }
          }
          CreateCompatibleSurface(
            v54,
            *(_QWORD *)(v21 + 48),
            v50,
            v24,
            v9,
            v8,
            v61,
            v60,
            v59,
            0,
            0,
            0,
            v14,
            0,
            0,
            0LL,
            v49);
          v29 = v55;
          if ( v55 )
          {
            if ( v25 != 0.0 || v26 != 0.0 )
            {
              v30 = v52;
              *(_DWORD *)(v55 + 116) |= 0x800u;
              *(_QWORD *)(v29 + 668) = v30;
              *(float *)(v29 + 660) = v25;
              *(float *)(v29 + 664) = v26;
              v29 = v55;
            }
            LOBYTE(v28) = 5;
            HmgSetOwner(*(_QWORD *)(v29 + 32), 2147483650LL, v28);
            v6 = *(_QWORD *)(v55 + 32);
          }
          SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v54);
          DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v58);
          NEEDGRELOCK::vUnlock((NEEDGRELOCK *)v53);
          EtwTraceGreLockReleaseSemaphore(L"DynamicModeChange", v17);
          GrepReleaseLockValidate<1>();
          GreReleaseSemaphoreSharedInternal(v17);
LABEL_24:
          APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v56);
          return v6;
        }
LABEL_29:
        v32 = (__m128i)COERCE_UNSIGNED_INT((float)(int)v9);
        *(float *)v32.m128i_i32 = *(float *)v32.m128i_i32 * v25;
        v34 = (__m128i)COERCE_UNSIGNED_INT((float)(int)v8);
        v33 = _mm_cvtsi128_si32(v32);
        *(float *)v34.m128i_i32 = *(float *)v34.m128i_i32 * v26;
        v35 = (unsigned __int8)(v33 >> 23);
        if ( v35 <= 0x9E )
        {
          v36 = v33 & 0x7FFFFFLL | 0x800000;
          v37 = v35 < 0x76 ? v36 >> (118 - (unsigned __int8)v35) : v36 << ((unsigned __int8)v35 - 118);
          v38 = (v37 + 0x80000000LL) >> 32;
          LODWORD(v9) = -(int)v38;
          if ( v33 >= 0 )
            LODWORD(v9) = v38;
        }
        v39 = _mm_cvtsi128_si32(v34);
        v40 = (unsigned __int8)(v39 >> 23);
        if ( v40 <= 0x9E )
        {
          v41 = v39 & 0x7FFFFFLL | 0x800000;
          v42 = v40 < 0x76 ? v41 >> (118 - (unsigned __int8)v40) : v41 << ((unsigned __int8)v40 - 118);
          v43 = (v42 + 0x80000000LL) >> 32;
          LODWORD(v8) = -(int)v43;
          if ( v39 >= 0 )
            LODWORD(v8) = v43;
        }
        goto LABEL_17;
      }
      v46 = XDCOBJ::pSurfaceEff((XDCOBJ *)v56);
      if ( *(_DWORD *)(v56[0] + 32LL) == 1 )
      {
        v47 = *((unsigned int *)v46 + 24);
        v48 = (__int64 *)*((_QWORD *)v46 + 16);
        if ( !v48 )
        {
LABEL_56:
          CreateCompatibleSurface(
            v54,
            *(_QWORD *)(v56[0] + 48LL),
            v47,
            v11,
            v9,
            v8,
            v61,
            v12,
            v59,
            0,
            0,
            0,
            v14,
            0,
            0,
            0LL,
            v49);
          if ( v55 )
          {
            SURFREF::vSetPID((SURFREF *)v54, 0x80000002);
            v6 = *(_QWORD *)(v55 + 32);
          }
          SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v54);
          goto LABEL_24;
        }
      }
      else
      {
        v47 = *(unsigned int *)(v16 + 2092);
        if ( (*(_DWORD *)(v16 + 2156) & 0x100) != 0 )
          goto LABEL_56;
        v48 = *(__int64 **)(v16 + 1792);
      }
      v11 = *v48;
      goto LABEL_56;
    }
    return 0LL;
  }
  return GreCreateBitmap((unsigned int)v9, (unsigned int)v8, 1LL);
}
