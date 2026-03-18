/*
 * XREFs of NtGdiExtTextOutW @ 0x14025F050
 * Callers:
 *     <none>
 * Callees:
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x14001A440 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x14001A490 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??0?$ReturnValueTracer@K@@QEAA@K@Z @ 0x14005C3CC (--0-$ReturnValueTracer@K@@QEAA@K@Z.c)
 *     ??1EUDCCountRegion@@QEAA@XZ @ 0x1400A3BBC (--1EUDCCountRegion@@QEAA@XZ.c)
 *     ?GreExtTextOutRect@@YA?AV?$ReturnValueTracer@H@@PEAUHDC__@@PEAUtagRECT@@W4EntryPoint@RFONTOBJ@@@Z @ 0x1400C4500 (-GreExtTextOutRect@@YA-AV-$ReturnValueTracer@H@@PEAUHDC__@@PEAUtagRECT@@W4EntryPoint@RFONTOBJ@@@.c)
 *     ?GrepExtTextOutW@@YA?AV?$ReturnValueTracer@H@@AEAVXDCOBJ@@HHIPEBUtagRECT@@PEBGHPEBHPEAXKW4EntryPoint@RFONTOBJ@@@Z @ 0x140172E10 (-GrepExtTextOutW@@YA-AV-$ReturnValueTracer@H@@AEAVXDCOBJ@@HHIPEBUtagRECT@@PEBGHPEBHPEAXKW4EntryP.c)
 *     ??0EUDCCountRegion@@QEAA@AEAUGLOBALS@Font@Gre@@@Z @ 0x14025B654 (--0EUDCCountRegion@@QEAA@AEAUGLOBALS@Font@Gre@@@Z.c)
 *     ?IsReady@EUDCCountRegion@@QEBA_NXZ @ 0x14031D3AC (-IsReady@EUDCCountRegion@@QEBA_NXZ.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x140340280 (RtlCopyVolatileMemory.c)
 *     memmove @ 0x140340480 (memmove.c)
 */

__int64 __fastcall NtGdiExtTextOutW(
        HDC a1,
        __int64 a2,
        unsigned int a3,
        int a4,
        ULONG64 a5,
        __int64 a6,
        unsigned int a7,
        __int64 a8,
        unsigned int a9)
{
  __int128 *v10; // rbx
  __int64 v11; // rcx
  __int64 v12; // rax
  int v13; // r9d
  int *v14; // rax
  int v15; // esi
  int v16; // edx
  __int16 v17; // r9
  const void *v18; // r10
  unsigned int v19; // r14d
  unsigned int v20; // r13d
  __int64 v21; // rcx
  __int64 v22; // r15
  _BYTE *v23; // rdi
  _QWORD *v24; // r12
  ULONG64 v25; // rcx
  char *v26; // rdx
  void *v27; // r14
  _BYTE *v28; // rdi
  size_t v29; // r8
  ULONG *v30; // r13
  __int64 v31; // rdx
  int v32; // ecx
  __int64 SessionState; // rax
  int *v34; // rax
  int v35; // edx
  unsigned int *v36; // rcx
  unsigned int v38; // [rsp+60h] [rbp-288h] BYREF
  unsigned int v39; // [rsp+68h] [rbp-280h]
  int v40; // [rsp+6Ch] [rbp-27Ch]
  unsigned int v41; // [rsp+70h] [rbp-278h] BYREF
  unsigned int v42; // [rsp+78h] [rbp-270h] BYREF
  __int128 *v43; // [rsp+80h] [rbp-268h]
  int v44; // [rsp+88h] [rbp-260h]
  unsigned int v45; // [rsp+90h] [rbp-258h] BYREF
  unsigned int v46; // [rsp+98h] [rbp-250h] BYREF
  __int64 v47; // [rsp+A0h] [rbp-248h]
  _BYTE *v48; // [rsp+A8h] [rbp-240h]
  __int64 v49; // [rsp+B0h] [rbp-238h]
  __int64 v50; // [rsp+B8h] [rbp-230h]
  _BYTE *v51; // [rsp+C0h] [rbp-228h]
  HDC v52; // [rsp+C8h] [rbp-220h]
  HDC v53; // [rsp+D0h] [rbp-218h]
  __int64 v54; // [rsp+D8h] [rbp-210h]
  __int64 v55; // [rsp+E0h] [rbp-208h]
  _BYTE v56[56]; // [rsp+E8h] [rbp-200h] BYREF
  _BYTE v57[64]; // [rsp+120h] [rbp-1C8h] BYREF
  DC *v58[14]; // [rsp+160h] [rbp-188h] BYREF
  __int128 v59; // [rsp+1D0h] [rbp-118h] BYREF
  _BYTE v60[192]; // [rsp+1E0h] [rbp-108h] BYREF

  v40 = a4;
  v52 = a1;
  v39 = a7;
  v53 = a1;
  v38 = a2;
  v46 = a3;
  v44 = a4;
  v10 = (__int128 *)a5;
  v43 = (__int128 *)a5;
  v11 = a6;
  v49 = a6;
  v55 = a6;
  v41 = a7;
  v47 = a8;
  v45 = a9;
  v59 = 0LL;
  if ( a7 > 0xFFFF )
    goto LABEL_52;
  if ( a5 )
  {
    if ( (a4 & 6) != 0 )
    {
      if ( a5 >= MmUserProbeAddress )
        v10 = (__int128 *)MmUserProbeAddress;
      RtlCopyVolatileMemory(&v59, v10, 0x10uLL);
      v10 = &v59;
      v43 = &v59;
      LOBYTE(a4) = v40;
      v11 = v49;
    }
    else
    {
      v10 = 0LL;
      v43 = 0LL;
    }
  }
  if ( a7 )
  {
    if ( (a4 & 6) != 0 && !v10 || !v11 )
    {
      v16 = 0;
      goto LABEL_20;
    }
    v15 = *ReturnValueTracer<unsigned long>::ReturnValueTracer<unsigned long>(&v42, 1);
    v19 = 0;
    v20 = (30 * a7 + 7) & 0xFFFFFFF8;
    v42 = v20;
    if ( v18 )
    {
      v19 = 4 * a7;
      if ( (v17 & 0x2000) != 0 )
        v19 = 8 * a7;
    }
    v54 = v19 + 7;
    LODWORD(v51) = v19 + 7;
    v21 = v20 + 2 * a7 + (v54 & 0xFFFFFFF8);
    if ( (unsigned int)v21 <= 0xC0 )
    {
      v22 = 0LL;
      v50 = 0LL;
      v23 = v60;
      v48 = v60;
LABEL_28:
      if ( v18 )
      {
        v24 = (_QWORD *)MmUserProbeAddress;
        if ( v19 )
        {
          v25 = (ULONG64)v18 + v19;
          if ( v25 > MmUserProbeAddress || v25 < (unsigned __int64)v18 )
          {
            v24 = (_QWORD *)MmUserProbeAddress;
            v10 = v43;
          }
        }
        memmove(v23, v18, v19);
        v26 = (char *)v49;
        v47 = (__int64)v23;
        v23 += (unsigned int)v54 & 0xFFFFFFF8;
      }
      else
      {
        v24 = (_QWORD *)MmUserProbeAddress;
        v26 = (char *)v49;
      }
      v27 = v23;
      v51 = v23;
      v28 = &v23[v20];
      v48 = v28;
      v29 = 2LL * (int)v39;
      if ( v29 )
      {
        if ( ((unsigned __int8)v26 & 1) != 0 )
          ExRaiseDatatypeMisalignment();
        if ( (unsigned __int64)&v26[v29] > *v24 || &v26[v29] < v26 )
          v10 = v43;
      }
      memmove(v28, v26, v29);
      v30 = (ULONG *)v47;
      if ( v15 )
      {
        APIDCOBJ::APIDCOBJ((APIDCOBJ *)v58, v52);
        if ( v58[0] )
        {
          SessionState = W32GetSessionState(v32, v31);
          EUDCCountRegion::EUDCCountRegion(
            (EUDCCountRegion *)v57,
            (struct Gre::Font::GLOBALS *)(*(_QWORD *)(SessionState + 96) + 4872LL));
          if ( EUDCCountRegion::IsReady((EUDCCountRegion *)v57) )
            v34 = GrepExtTextOutW(
                    &v46,
                    v58,
                    v38,
                    v46,
                    v40,
                    (unsigned int *)v10,
                    (unsigned __int16 *)v28,
                    v39,
                    v30,
                    v27,
                    v45,
                    24);
          else
            v34 = ReturnValueTracer<unsigned long>::ReturnValueTracer<unsigned long>(&v45, 0);
          v15 = *v34;
          EUDCCountRegion::~EUDCCountRegion((EUDCCountRegion *)v57);
        }
        else
        {
          v15 = *ReturnValueTracer<unsigned long>::ReturnValueTracer<unsigned long>(&v38, 0);
        }
        APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v58);
      }
      if ( v22 )
        FreeTmpBuffer(v22);
      goto LABEL_51;
    }
    v22 = AllocFreeTmpBuffer(v21);
    v50 = v22;
    v23 = (_BYTE *)v22;
    v48 = (_BYTE *)v22;
    if ( v22 )
    {
      v18 = (const void *)v47;
      goto LABEL_28;
    }
LABEL_52:
    v35 = 0;
    v36 = &v38;
    return (unsigned int)*ReturnValueTracer<unsigned long>::ReturnValueTracer<unsigned long>(v36, v35);
  }
  if ( v10 && (a4 & 2) != 0 )
  {
    v12 = W32GetSessionState(v11, a2);
    EUDCCountRegion::EUDCCountRegion(
      (EUDCCountRegion *)v56,
      (struct Gre::Font::GLOBALS *)(*(_QWORD *)(v12 + 96) + 4872LL));
    if ( EUDCCountRegion::IsReady((EUDCCountRegion *)v56) )
      v14 = GreExtTextOutRect(&v38, a1, (__int64)v10, v13);
    else
      v14 = ReturnValueTracer<unsigned long>::ReturnValueTracer<unsigned long>(&v38, 0);
    v15 = *v14;
    EUDCCountRegion::~EUDCCountRegion((EUDCCountRegion *)v56);
    goto LABEL_51;
  }
  v16 = 1;
LABEL_20:
  v15 = *ReturnValueTracer<unsigned long>::ReturnValueTracer<unsigned long>(&v38, v16);
LABEL_51:
  v35 = v15;
  v36 = &v41;
  return (unsigned int)*ReturnValueTracer<unsigned long>::ReturnValueTracer<unsigned long>(v36, v35);
}
