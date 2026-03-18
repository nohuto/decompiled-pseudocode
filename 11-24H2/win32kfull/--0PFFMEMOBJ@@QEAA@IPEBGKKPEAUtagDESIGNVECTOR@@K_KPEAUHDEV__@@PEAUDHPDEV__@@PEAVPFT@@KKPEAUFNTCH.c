/*
 * XREFs of ??0PFFMEMOBJ@@QEAA@IPEBGKKPEAUtagDESIGNVECTOR@@K_KPEAUHDEV__@@PEAUDHPDEV__@@PEAVPFT@@KKPEAUFNTCHECKSUM@@PEAPEAUFONTFILEVIEW@@PEAU_UNIVERSAL_FONT_ID@@H@Z @ 0x140113D2C
 * Callers:
 *     ?bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@HH@Z @ 0x1400B7F2C (-bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@HH.c)
 *     ?hLoadMemFonts@PUBLIC_PFTOBJ@@QEAAPEAXPEAPEAUFONTFILEVIEW@@PEAUtagDESIGNVECTOR@@KPEAKPEAH@Z @ 0x140113770 (-hLoadMemFonts@PUBLIC_PFTOBJ@@QEAAPEAXPEAPEAUFONTFILEVIEW@@PEAUtagDESIGNVECTOR@@KPEAKPEAH@Z.c)
 *     ?bLoadRemoteFonts@PUBLIC_PFTOBJ@@QEAAHAEAVXDCOBJ@@PEAPEAUFONTFILEVIEW@@IPEAUtagDESIGNVECTOR@@PEAU_UNIVERSAL_FONT_ID@@PEAH@Z @ 0x140221180 (-bLoadRemoteFonts@PUBLIC_PFTOBJ@@QEAAHAEAVXDCOBJ@@PEAPEAUFONTFILEVIEW@@IPEAUtagDESIGNVECTOR@@PEA.c)
 *     ?bLoadFonts@DEVICE_PFTOBJ@@QEAAHPEAUHDEV__@@I@Z @ 0x14030DDA0 (-bLoadFonts@DEVICE_PFTOBJ@@QEAAHPEAUHDEV__@@I@Z.c)
 * Callees:
 *     PALLOCMEM @ 0x1400FEC9C (PALLOCMEM.c)
 *     ?bAddPvtData@PFFOBJ@@QEAAHK@Z @ 0x140114148 (-bAddPvtData@PFFOBJ@@QEAAHK@Z.c)
 *     ?ComputeFileviewCheckSumInFontDriverAddressSpace@@YAKPEAPEAUFONTFILEVIEW@@I@Z @ 0x140114550 (-ComputeFileviewCheckSumInFontDriverAddressSpace@@YAKPEAPEAUFONTFILEVIEW@@I@Z.c)
 *     ComputeFileviewCheckSum @ 0x140114610 (ComputeFileviewCheckSum.c)
 *     ?PutFNTCacheCheckSum@@YAXKK@Z @ 0x140114890 (-PutFNTCacheCheckSum@@YAXKK@Z.c)
 *     memmove @ 0x140340480 (memmove.c)
 */

PFFMEMOBJ *__fastcall PFFMEMOBJ::PFFMEMOBJ(
        PFFMEMOBJ *this,
        unsigned int a2,
        const unsigned __int16 *a3,
        unsigned int a4,
        unsigned int a5,
        struct tagDESIGNVECTOR *Src,
        size_t Size,
        unsigned __int64 a8,
        HDEV a9,
        struct DHPDEV__ *a10,
        struct PFT *a11,
        unsigned int a12,
        unsigned int a13,
        struct FNTCHECKSUM *a14,
        struct FONTFILEVIEW **a15,
        struct _UNIVERSAL_FONT_ID *a16,
        int a17)
{
  unsigned __int64 v18; // rbx
  int v19; // r8d
  __int64 v20; // r14
  unsigned int v22; // r13d
  unsigned int v23; // ebx
  int v24; // edx
  int v25; // eax
  unsigned int v26; // ecx
  unsigned int v27; // ecx
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // r8
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 SessionState; // rax
  __int64 v35; // rcx
  __int64 v36; // rbx
  __int64 v37; // rcx
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  unsigned int v41; // edx
  int v42; // ecx
  _QWORD *v43; // rax
  __int64 v44; // rax
  unsigned int v46; // eax
  unsigned int v47; // [rsp+58h] [rbp+10h]

  v18 = 8LL * a2;
  v19 = -1;
  v20 = a4;
  v47 = 0;
  v22 = 0;
  *(_QWORD *)this = 0LL;
  *((_WORD *)this + 8) = 0;
  *((_DWORD *)this + 5) = a13;
  *((_DWORD *)this + 2) = 0;
  if ( v18 > 0xFFFFFFFF || (v23 = v18 + 224, v23 < 0xE0) )
  {
    v23 = -1;
    v24 = 0;
  }
  else
  {
    v24 = 1;
  }
  if ( a3 && v24 )
  {
    v22 = v23;
    v25 = -1;
    v26 = v23 + ((2 * a4 + 3) & 0xFFFFFFFC);
    v24 = 0;
    if ( v26 >= v23 )
      v25 = v23 + ((2 * a4 + 3) & 0xFFFFFFFC);
    v23 = v25;
    LOBYTE(v24) = v26 >= v22;
  }
  v27 = v23;
  if ( (_DWORD)Size )
  {
    if ( !v24 )
      return this;
    v46 = v23 + Size;
    v47 = v23;
    v24 = 0;
    if ( v23 + (unsigned int)Size >= v23 )
      v19 = v23 + Size;
    v23 = v19;
    LOBYTE(v24) = v46 >= v27;
  }
  if ( v24 )
  {
    v28 = PALLOCMEM(v23, 1717989447LL);
    *(_QWORD *)this = v28;
    if ( v28 )
    {
      PushThreadGuardedObject(v28 + 168, v28, CleanUpPFF);
      **(_QWORD **)this = v23;
      *(_QWORD *)(*(_QWORD *)this + 16LL) = 0LL;
      *(_QWORD *)(*(_QWORD *)this + 8LL) = 0LL;
      *(_QWORD *)(*(_QWORD *)this + 88LL) = a8;
      *(_QWORD *)(*(_QWORD *)this + 96LL) = a9;
      *(_QWORD *)(*(_QWORD *)this + 104LL) = a10;
      *(_QWORD *)(*(_QWORD *)this + 136LL) = a11;
      *(_DWORD *)(*(_QWORD *)this + 36LL) = a5;
      *(_DWORD *)(*(_QWORD *)this + 32LL) = v20;
      v32 = *(_QWORD *)(W32GetSessionState(a5, v29, v30) + 96);
      if ( a9 == *(HDEV *)(v32 + 24152) )
        *(_QWORD *)(a8 + 8) = *(_QWORD *)this;
      SessionState = W32GetSessionState(v32, v31, v33);
      v35 = *(_QWORD *)this;
      v36 = *(_QWORD *)(SessionState + 96);
      if ( (_DWORD)v20 )
      {
        *(_QWORD *)(v35 + 24) = v35 + v22;
        memmove(*(void **)(*(_QWORD *)this + 24LL), a3, 2 * v20);
      }
      else
      {
        *(_QWORD *)(v35 + 24) = 0LL;
      }
      *(_DWORD *)(*(_QWORD *)this + 48LL) = Size;
      v37 = *(_QWORD *)this;
      if ( (_DWORD)Size )
      {
        *(_QWORD *)(v37 + 40) = v37 + v47;
        memmove(*(void **)(*(_QWORD *)this + 40LL), Src, (unsigned int)Size);
      }
      else
      {
        *(_QWORD *)(v37 + 40) = 0LL;
      }
      if ( *(_DWORD *)(W32GetUserGdiSessionState(v37) + 24)
        && *(_BYTE *)(v36 + 13504)
        && *(_BYTE *)(*(_QWORD *)(W32GetSessionState(v39, v38, v40) + 96) + 19612LL) )
      {
        v41 = a12;
      }
      else
      {
        v41 = a12 | 0x200;
      }
      v42 = v41 | 0x1000;
      *(_QWORD *)(*(_QWORD *)this + 208LL) = a15;
      if ( !a17 )
        v42 = v41;
      *(_DWORD *)(*(_QWORD *)this + 216LL) = 0;
      *(_DWORD *)(*(_QWORD *)this + 68LL) = 0;
      *(_DWORD *)(*(_QWORD *)this + 52LL) = v42;
      *(_QWORD *)(*(_QWORD *)this + 112LL) = 0LL;
      *(_QWORD *)(*(_QWORD *)this + 120LL) = 0LL;
      *(_QWORD *)(*(_QWORD *)this + 128LL) = 0LL;
      v43 = (_QWORD *)(*(_QWORD *)this + 72LL);
      v43[1] = v43;
      *v43 = v43;
      *(_QWORD *)(*(_QWORD *)this + 152LL) = 0LL;
      v44 = *(_QWORD *)this;
      if ( (a13 & 0x1C) != 0 )
      {
        *(_DWORD *)(v44 + 56) = 0;
        *(_DWORD *)(*(_QWORD *)this + 60LL) = 0;
        PFFOBJ::bAddPvtData(this, a13);
      }
      else if ( (a13 & 0x20) != 0 )
      {
        *(_DWORD *)(v44 + 56) = 0;
        *(_DWORD *)(*(_QWORD *)this + 60LL) = 1;
      }
      else
      {
        *(_DWORD *)(v44 + 56) = 1;
        *(_DWORD *)(*(_QWORD *)this + 60LL) = 0;
      }
      *(_QWORD *)(*(_QWORD *)this + 160LL) = 0LL;
      *(_DWORD *)(*(_QWORD *)this + 144LL) = 0;
      if ( a16 )
      {
        *(_DWORD *)(*(_QWORD *)this + 144LL) = *(_DWORD *)a16;
      }
      else if ( a15 )
      {
        *(_DWORD *)(*(_QWORD *)this + 144LL) = *((_DWORD *)a14 + 1);
        if ( !*(_DWORD *)(*(_QWORD *)this + 144LL) )
        {
          *(_DWORD *)(*(_QWORD *)this + 144LL) += ComputeFileviewCheckSumInFontDriverAddressSpace(a15, a5);
          if ( (a13 & 0x10) == 0 )
            PutFNTCacheCheckSum(*(_DWORD *)a14, *(_DWORD *)(*(_QWORD *)this + 144LL));
        }
        if ( *(_DWORD *)(*(_QWORD *)this + 48LL) )
          *(_DWORD *)(*(_QWORD *)this + 144LL) += ComputeFileviewCheckSum(Src, (unsigned int)Size);
      }
    }
  }
  return this;
}
