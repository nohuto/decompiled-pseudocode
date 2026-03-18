/*
 * XREFs of NtGdiFONTOBJ_pQueryGlyphAttrs @ 0x14033A780
 * Callers:
 *     <none>
 * Callees:
 *     ??1RFONTTMPOBJ@@QEAA@XZ @ 0x14005CC40 (--1RFONTTMPOBJ@@QEAA@XZ.c)
 *     ?GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ @ 0x140060BD4 (-GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ.c)
 *     ?UMPDReleaseRFONTSem@@YAHAEAVRFONTOBJ@@PEAVUMPDOBJ@@PEAK2PEAPEAH@Z @ 0x1400D6BD4 (-UMPDReleaseRFONTSem@@YAHAEAVRFONTOBJ@@PEAVUMPDOBJ@@PEAK2PEAPEAH@Z.c)
 *     ?UMPDAcquireRFONTSem@@YAXAEAVRFONTOBJ@@PEAVUMPDOBJ@@KKPEBH@Z @ 0x1400D7450 (-UMPDAcquireRFONTSem@@YAXAEAVRFONTOBJ@@PEAVUMPDOBJ@@KKPEBH@Z.c)
 *     ??0UMPDENGCALL@UMPDOBJ@@QEAA@PEAU_GRETHREAD@@@Z @ 0x1400D8F54 (--0UMPDENGCALL@UMPDOBJ@@QEAA@PEAU_GRETHREAD@@@Z.c)
 *     ?_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z @ 0x1400D91A8 (-_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z.c)
 *     ??1UMPDENGCALL@UMPDOBJ@@QEAA@XZ @ 0x1400D93B4 (--1UMPDENGCALL@UMPDOBJ@@QEAA@XZ.c)
 *     ??$GetDDIOBJ@U_FONTOBJ@@@UMPDOBJ@@QEAAPEAU_FONTOBJ@@PEAU1@@Z @ 0x1400DA304 (--$GetDDIOBJ@U_FONTOBJ@@@UMPDOBJ@@QEAAPEAU_FONTOBJ@@PEAU1@@Z.c)
 *     ??0PUBLIC_PFTOBJ@@QEAA@PEAVPFT@@@Z @ 0x1400DB6B8 (--0PUBLIC_PFTOBJ@@QEAA@PEAVPFT@@@Z.c)
 *     FONTOBJ_pQueryGlyphAttrs @ 0x140308AD0 (FONTOBJ_pQueryGlyphAttrs.c)
 *     memmove @ 0x140340480 (memmove.c)
 */

char *__fastcall NtGdiFONTOBJ_pQueryGlyphAttrs(__int64 a1, __int64 a2)
{
  ULONG v2; // r14d
  struct _GRETHREAD *CurrentThread; // rax
  struct UMPDOBJ *v5; // rdi
  struct PFT *v6; // rax
  FONTOBJ *v7; // rsi
  char *v8; // rbx
  PFD_GLYPHATTR GlyphAttrs; // rax
  PFD_GLYPHATTR v10; // r14
  unsigned int cjThis; // esi
  char *v12; // rax
  struct W32_PUSH_LOCK *v14[4]; // [rsp+30h] [rbp-88h] BYREF
  struct UMPDOBJ *v15; // [rsp+50h] [rbp-68h]
  char v16; // [rsp+D0h] [rbp+18h] BYREF
  struct UMPDOBJ *v17; // [rsp+D8h] [rbp+20h]

  v2 = a2;
  CurrentThread = GreGetCurrentThread(a1, a2);
  UMPDOBJ::UMPDENGCALL::UMPDENGCALL((UMPDOBJ::UMPDENGCALL *)v14, CurrentThread);
  v5 = v15;
  v17 = v15;
  if ( v15 && (v6 = (struct PFT *)UMPDOBJ::GetDDIOBJ<_FONTOBJ>((__int64)v15, a1), (v7 = (FONTOBJ *)v6) != 0LL) )
  {
    v8 = 0LL;
    if ( *((_QWORD *)v5 + 44) )
    {
      v8 = (char *)*((_QWORD *)v5 + 44);
    }
    else
    {
      PUBLIC_PFTOBJ::PUBLIC_PFTOBJ((PUBLIC_PFTOBJ *)&v16, v6);
      UMPDAcquireRFONTSem((struct RFONTOBJ *)&v16, v5, 0, 0, 0LL);
      GlyphAttrs = FONTOBJ_pQueryGlyphAttrs(v7, v2);
      v10 = GlyphAttrs;
      if ( GlyphAttrs )
      {
        cjThis = GlyphAttrs->cjThis;
        v12 = UMPDOBJ::_AllocUserMem(v5, GlyphAttrs->cjThis, 0);
        v8 = v12;
        if ( v12 )
        {
          memmove(v12, v10, cjThis);
          *((_QWORD *)v5 + 44) = v8;
        }
      }
      UMPDReleaseRFONTSem((struct RFONTOBJ *)&v16, v5, 0LL, 0LL, 0LL);
      RFONTTMPOBJ::~RFONTTMPOBJ((RFONTTMPOBJ *)&v16);
    }
    UMPDOBJ::UMPDENGCALL::~UMPDENGCALL(v14);
    return v8;
  }
  else
  {
    UMPDOBJ::UMPDENGCALL::~UMPDENGCALL(v14);
    return 0LL;
  }
}
