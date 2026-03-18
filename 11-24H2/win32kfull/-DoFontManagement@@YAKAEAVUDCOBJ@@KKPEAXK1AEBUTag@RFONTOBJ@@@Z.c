/*
 * XREFs of ?DoFontManagement@@YAKAEAVUDCOBJ@@KKPEAXK1AEBUTag@RFONTOBJ@@@Z @ 0x140325F00
 * Callers:
 *     ?GrepExtEscape@@YAHAEAVXDCOBJ@@HHPEADH1AEBUTag@RFONTOBJ@@@Z @ 0x1400C2818 (-GrepExtEscape@@YAHAEAVXDCOBJ@@HHPEADH1AEBUTag@RFONTOBJ@@@Z.c)
 * Callees:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x14005CE04 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?vInit@RFONTOBJ@@QEAAXAEAVUDCOBJ@@HKAEBUTag@1@@Z @ 0x14005DB50 (-vInit@RFONTOBJ@@QEAAXAEAVUDCOBJ@@HKAEBUTag@1@@Z.c)
 *     ?vXlatGlyphArray@RFONTOBJ@@QEAAXPEBGIPEAKKH@Z @ 0x1400B1B20 (-vXlatGlyphArray@RFONTOBJ@@QEAAXPEBGIPEAKKH@Z.c)
 *     ??1SURFFAKEOBJ@@QEAA@XZ @ 0x1400C265C (--1SURFFAKEOBJ@@QEAA@XZ.c)
 *     ??0SURFFAKEOBJ@@QEAA@PEAUHDEV__@@PEAUDHPDEV__@@@Z @ 0x1400C26FC (--0SURFFAKEOBJ@@QEAA@PEAUHDEV__@@PEAUDHPDEV__@@@Z.c)
 *     ?vUnguard@CAutoTGO@@QEAAXXZ @ 0x1400D373C (-vUnguard@CAutoTGO@@QEAAXXZ.c)
 *     PALLOCMEM @ 0x1400FEC9C (PALLOCMEM.c)
 *     PALLOCNOZ @ 0x140125A4C (PALLOCNOZ.c)
 *     ?vGuard@CAutoTGO@@QEAAXPEAXP6AX0@Z@Z @ 0x1401679D8 (-vGuard@CAutoTGO@@QEAAXPEAXP6AX0@Z@Z.c)
 *     ?bUMPD@UDCOBJ@@QEBA@XZ @ 0x14018326C (-bUMPD@UDCOBJ@@QEBA@XZ.c)
 *     wil::scope_exit__NtGdiSetPUMPDOBJ_::_2_::_lambda_1___ @ 0x1401EB824 (wil--scope_exit__NtGdiSetPUMPDOBJ_--_2_--_lambda_1___.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140340330 (_guard_dispatch_icall.c)
 *     memmove @ 0x140340480 (memmove.c)
 */

__int64 __fastcall DoFontManagement(
        struct UDCOBJ *a1,
        unsigned int a2,
        unsigned int a3,
        unsigned __int16 *a4,
        unsigned int a5,
        void *a6)
{
  size_t v7; // rdi
  void *v10; // rbx
  __int64 v11; // r8
  const struct RFONTOBJ::Tag *v12; // r9
  __int64 (__fastcall *v13)(__int64, _QWORD *, __int64, _QWORD, unsigned __int16 *, unsigned int, void *); // r13
  __int64 v14; // rcx
  unsigned int v15; // ebx
  void *v16; // rcx
  _QWORD *v17; // rdx
  unsigned __int64 v18; // r14
  bool v19; // zf
  unsigned __int16 *v20; // rax
  unsigned __int16 *v21; // rbx
  void *v22; // rax
  __int64 v23; // rcx
  _QWORD *v25; // [rsp+40h] [rbp-178h] BYREF
  void **v26; // [rsp+48h] [rbp-170h] BYREF
  char v27; // [rsp+50h] [rbp-168h]
  _QWORD v28[2]; // [rsp+58h] [rbp-160h] BYREF
  void *v29; // [rsp+68h] [rbp-150h]
  _BYTE v30[32]; // [rsp+70h] [rbp-148h] BYREF
  int v31; // [rsp+90h] [rbp-128h]
  _BYTE v32[32]; // [rsp+A0h] [rbp-118h] BYREF
  __int64 v33; // [rsp+C0h] [rbp-F8h]
  _BYTE v34[96]; // [rsp+110h] [rbp-A8h] BYREF

  v7 = a3;
  v10 = a6;
  v29 = a6;
  v28[0] = 0LL;
  v25 = v28;
  wil::scope_exit__NtGdiSetPUMPDOBJ_::_2_::_lambda_1___((__int64)&v26, &v25);
  v13 = *(__int64 (__fastcall **)(__int64, _QWORD *, __int64, _QWORD, unsigned __int16 *, unsigned int, void *))(v11 + 3056);
  if ( !v13 )
    goto LABEL_31;
  if ( a2 == 8 )
  {
    if ( (*(_DWORD *)(v11 + 40) & 0x8000) != 0 )
      v14 = *(_QWORD *)(v11 + 1784);
    else
      v14 = 0LL;
    v15 = v13(v14, 0LL, 8LL, (unsigned int)v7, a4, 0, 0LL);
    if ( !v27 )
      return v15;
    v16 = *v26;
    goto LABEL_40;
  }
  v25 = 0LL;
  RFONTOBJ::vInit((RFONTOBJ *)&v25, a1, 0, 2u, v12);
  v17 = v25;
  if ( v25 )
  {
    v31 = 0;
    if ( a2 == 514 )
    {
      v18 = (unsigned __int64)(int)v7 >> 1;
      if ( (unsigned int)UDCOBJ::bUMPD(a1) )
      {
        if ( (unsigned int)v7 > 0x2710000
          || (v20 = (unsigned __int16 *)PALLOCNOZ(v7, 1886221383LL), v21 = v20, (v28[1] = v20) == 0LL) )
        {
LABEL_12:
          CAutoTGO::vUnguard((CAutoTGO *)v30);
          RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v25);
          v19 = v27 == 0;
          goto LABEL_32;
        }
        memmove(v20, a4, v7);
      }
      else
      {
        v21 = a4;
      }
      LODWORD(v7) = 4 * v18;
      if ( (unsigned int)v18 > 0x9C4000 )
        v22 = 0LL;
      else
        v22 = (void *)PALLOCMEM(v7, 1835426887LL);
      v28[0] = v22;
      if ( !v22 )
      {
        if ( v21 != a4 )
          Win32FreePool(v21);
        goto LABEL_12;
      }
      CAutoTGO::vGuard((CAutoTGO *)v30, v22, Win32FreePool);
      if ( (int)v18 > 1 )
        RFONTOBJ::vXlatGlyphArray((RFONTOBJ *)&v25, v21 + 1, v18 - 1, (unsigned int *)(v28[0] + 4LL), 0, 0);
      *(_DWORD *)v28[0] = *v21;
      if ( v21 != a4 )
        Win32FreePool(v21);
      a4 = (unsigned __int16 *)v28[0];
      v17 = v25;
      v10 = v29;
    }
    v23 = (*(_QWORD *)(*(_QWORD *)a1 + 496LL) + 24LL) & -(__int64)(*(_QWORD *)(*(_QWORD *)a1 + 496LL) != 0LL);
    if ( v23 )
    {
      v15 = v13(v23, v17, a2, (unsigned int)v7, a4, a5, v10);
    }
    else
    {
      ThreadRestrictNewHandlesRegion::ThreadRestrictNewHandlesRegion((ThreadRestrictNewHandlesRegion *)v34);
      SURFFAKEOBJ::SURFFAKEOBJ(
        (SURFFAKEOBJ *)v32,
        *(HDEV *)(*(_QWORD *)a1 + 48LL),
        *(struct DHPDEV__ **)(*(_QWORD *)a1 + 24LL));
      if ( !v33 )
      {
        SURFFAKEOBJ::~SURFFAKEOBJ((SURFFAKEOBJ *)v32);
        ThreadRestrictNewHandlesRegion::~ThreadRestrictNewHandlesRegion((ThreadRestrictNewHandlesRegion *)v34);
        CAutoTGO::vUnguard((CAutoTGO *)v30);
        goto LABEL_30;
      }
      v15 = v13((v33 + 24) & -(__int64)(v33 != 0), v25, a2, (unsigned int)v7, a4, a5, v10);
      SURFFAKEOBJ::~SURFFAKEOBJ((SURFFAKEOBJ *)v32);
      ThreadRestrictNewHandlesRegion::~ThreadRestrictNewHandlesRegion((ThreadRestrictNewHandlesRegion *)v34);
    }
    CAutoTGO::vUnguard((CAutoTGO *)v30);
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v25);
    if ( !v27 )
      return v15;
    v16 = *v26;
LABEL_40:
    if ( v16 )
      Win32FreePool(v16);
    return v15;
  }
LABEL_30:
  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v25);
LABEL_31:
  v19 = v27 == 0;
LABEL_32:
  if ( !v19 && *v26 )
    Win32FreePool(*v26);
  return 0LL;
}
