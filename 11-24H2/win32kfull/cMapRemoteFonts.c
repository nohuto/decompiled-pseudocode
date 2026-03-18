/*
 * XREFs of cMapRemoteFonts @ 0x140115278
 * Callers:
 *     ?GrepAddFontMemResource@@YAPEAXPEAXKPEAUtagDESIGNVECTOR@@KPEAK@Z @ 0x140115154 (-GrepAddFontMemResource@@YAPEAXPEAXKPEAUtagDESIGNVECTOR@@KPEAK@Z.c)
 *     NtGdiAddRemoteFontToDC @ 0x140303420 (NtGdiAddRemoteFontToDC.c)
 * Callees:
 *     ??0SectionObj@Gre@@QEAA@PEAT_LARGE_INTEGER@@@Z @ 0x140115820 (--0SectionObj@Gre@@QEAA@PEAT_LARGE_INTEGER@@@Z.c)
 *     ??1MapViewOfSectionObj@Gre@@QEAA@XZ @ 0x1401E09CC (--1MapViewOfSectionObj@Gre@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 *     memset_0 @ 0x140340780 (memset_0.c)
 */

__int64 __fastcall cMapRemoteFonts(const void **a1, unsigned int a2, __int64 a3, DWORD a4)
{
  union _LARGE_INTEGER v6; // r14
  const void *v7; // rbx
  int v8; // eax
  unsigned int v9; // r12d
  void *v10; // r10
  __int64 v11; // rbx
  const void *v12; // rdx
  int v13; // ebx
  char *v15; // rbx
  DWORD v16; // eax
  __int64 v17; // rax
  unsigned int v18; // ebx
  DWORD v19; // [rsp+30h] [rbp-108h] BYREF
  int v20; // [rsp+34h] [rbp-104h] BYREF
  int v21; // [rsp+38h] [rbp-100h] BYREF
  int v22; // [rsp+3Ch] [rbp-FCh]
  unsigned int v23; // [rsp+40h] [rbp-F8h]
  DWORD LowPart; // [rsp+48h] [rbp-F0h] BYREF
  __int64 v25; // [rsp+50h] [rbp-E8h] BYREF
  int v26; // [rsp+58h] [rbp-E0h]
  const void **v27; // [rsp+60h] [rbp-D8h]
  __int64 v28; // [rsp+68h] [rbp-D0h] BYREF
  __int64 v29; // [rsp+70h] [rbp-C8h]
  __int128 v30; // [rsp+78h] [rbp-C0h]
  unsigned __int64 v31; // [rsp+88h] [rbp-B0h]
  int v32; // [rsp+90h] [rbp-A8h]
  DWORD v33; // [rsp+98h] [rbp-A0h]
  const void **v34; // [rsp+A0h] [rbp-98h]
  __int64 v35; // [rsp+B0h] [rbp-88h]
  const void *v36; // [rsp+C0h] [rbp-78h] BYREF
  unsigned __int64 v37; // [rsp+C8h] [rbp-70h]
  void *v38; // [rsp+D0h] [rbp-68h]
  union _LARGE_INTEGER v39; // [rsp+D8h] [rbp-60h] BYREF
  __int64 v40; // [rsp+E0h] [rbp-58h] BYREF
  int v41; // [rsp+E8h] [rbp-50h]

  v19 = a4;
  v6.QuadPart = a2;
  v27 = a1;
  v33 = a4;
  v34 = a1;
  v35 = a3;
  v26 = 0;
  v7 = *a1;
  v37 = (unsigned __int64)v7;
  v36 = v7;
  *a1 = 0LL;
  if ( a2 - 12 > 0xFFFFFF4 || !a3 )
    return 0LL;
  memset_0((void *)a3, 0, 0x78uLL);
  if ( a4 == 1 )
  {
    v40 = 0LL;
    v41 = 0;
    GreProbeAndReadFromUntrustedVa(&v40, 0xCuLL, v7, 0xCuLL, 4uLL);
    v8 = HIDWORD(v40);
    v20 = HIDWORD(v40);
    if ( HIDWORD(v40) > 3 )
      return 0LL;
    if ( !HIDWORD(v40) )
    {
      v26 = 1;
      v20 = 2;
      v8 = 2;
    }
  }
  else
  {
    v20 = 1;
    v8 = 1;
  }
  v9 = (4 * v8 + 15) & 0xFFFFFFF8;
  v23 = v9;
  if ( v6.LowPart < v9 )
    return 0LL;
  v39 = v6;
  Gre::SectionObj::SectionObj((Gre::SectionObj *)&v25, &v39);
  if ( !v25 )
  {
LABEL_17:
    Gre::SectionObj::~SectionObj((Gre::SectionObj *)&v25);
    return 0LL;
  }
  v28 = 0LL;
  v29 = 0LL;
  v30 = 0LL;
  v31 = 0LL;
  v32 = 5;
  v40 = 0LL;
  if ( !(unsigned __int8)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))Gre::MapViewOfSectionObj::Map)(
                           &v28,
                           v25,
                           1LL,
                           (union _LARGE_INTEGER)v6.QuadPart,
                           &v40)
    || (v10 = (void *)v30, v11 = v30, v40 = v30, v12 = (const void *)v37, v37 >= (unsigned __int64)v30)
    && v37 < (unsigned __int64)v30 + v31
    || (unsigned __int64)v30 >= v37 && (unsigned __int64)v30 < v37 + v6.QuadPart )
  {
    Gre::MapViewOfSectionObj::~MapViewOfSectionObj((Gre::MapViewOfSectionObj *)&v28);
    goto LABEL_17;
  }
  if ( v19 == 2 )
  {
    v6.LowPart -= 16;
    LowPart = v6.LowPart;
    v38 = (void *)(v30 + 16);
    v19 = 0;
    v21 = v6.LowPart;
    GreProbeAndWriteToUntrustedVa((void *)v30, 4uLL, &v19, 4uLL, 1uLL);
    GreProbeAndWriteToUntrustedVa((void *)(v11 + 4), 4uLL, &v20, 4uLL, 1uLL);
    GreProbeAndWriteToUntrustedVa((void *)(v11 + 8), 4uLL, &v21, 4uLL, 1uLL);
    v22 = 1;
    v12 = (const void *)v37;
    v10 = v38;
  }
  v19 = v6.LowPart;
  GreProbeAndReadFromUntrustedVa(v10, v31, v12, v6.LowPart, 1uLL);
  v21 = 1;
  v22 = 1;
  if ( v26 )
  {
    LowPart = 0;
    GreProbeAndWriteToUntrustedVa((void *)v11, 4uLL, &LowPart, 4uLL, 1uLL);
    GreProbeAndWriteToUntrustedVa((void *)(v11 + 4), 4uLL, &v20, 4uLL, 1uLL);
  }
  v13 = v21;
  if ( !Gre::MapViewOfSectionObj::Unmap((Gre::MapViewOfSectionObj *)&v28)
    || !v13
    || (v36 = 0LL, !(unsigned __int8)Gre::MapViewOfSectionObj::Map(&v28, v25, 4LL, 0LL, &v36)) )
  {
    if ( v32 != 5 )
      Gre::MapViewOfSectionObj::Unmap((Gre::MapViewOfSectionObj *)&v28);
    goto LABEL_17;
  }
  v15 = (char *)v30;
  *(_QWORD *)(a3 + 104) = v30;
  *(_QWORD *)(a3 + 16) = &v15[v9];
  v16 = v6.LowPart + 16;
  if ( v33 != 2 )
    v16 = v6.LowPart;
  *(_DWORD *)(a3 + 24) = v16 - v9;
  *(_QWORD *)(a3 + 88) = v31;
  *(_DWORD *)(a3 + 96) = 0;
  *(_DWORD *)(a3 + 100) = 1;
  v17 = v25;
  v25 = 0LL;
  *(_QWORD *)(a3 + 32) = v17;
  *(_DWORD *)(a3 + 112) = (unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC;
  *(_QWORD *)(a3 + 72) = v28;
  *v27 = v15;
  v30 = 0uLL;
  v28 = 0LL;
  v29 = 0LL;
  v31 = 0LL;
  v32 = 5;
  v18 = v20;
  Gre::SectionObj::~SectionObj((Gre::SectionObj *)&v25);
  return v18;
}
