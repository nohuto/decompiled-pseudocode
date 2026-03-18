/*
 * XREFs of NtGdiFONTOBJ_pifi @ 0x1400D9EE0
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
 *     FONTOBJ_pifi @ 0x1400DB680 (FONTOBJ_pifi.c)
 *     ??0PUBLIC_PFTOBJ@@QEAA@PEAVPFT@@@Z @ 0x1400DB6B8 (--0PUBLIC_PFTOBJ@@QEAA@PEAVPFT@@@Z.c)
 *     memmove @ 0x140340480 (memmove.c)
 */

IFIMETRICS *__fastcall NtGdiFONTOBJ_pifi(__int64 a1, __int64 a2)
{
  IFIMETRICS *v3; // rbx
  struct _GRETHREAD *CurrentThread; // rax
  struct UMPDOBJ *v5; // rdi
  struct PFT *v6; // rax
  FONTOBJ *v7; // rsi
  IFIMETRICS *v8; // rsi
  char *v9; // rax
  struct W32_PUSH_LOCK *v11[4]; // [rsp+30h] [rbp-78h] BYREF
  struct UMPDOBJ *v12; // [rsp+50h] [rbp-58h]
  char v13; // [rsp+B8h] [rbp+10h] BYREF
  struct UMPDOBJ *v14; // [rsp+C0h] [rbp+18h]

  v3 = 0LL;
  CurrentThread = GreGetCurrentThread(a1, a2);
  UMPDOBJ::UMPDENGCALL::UMPDENGCALL((UMPDOBJ::UMPDENGCALL *)v11, CurrentThread);
  v5 = v12;
  v14 = v12;
  if ( v12 )
  {
    v6 = (struct PFT *)UMPDOBJ::GetDDIOBJ<_FONTOBJ>(v12, a1);
    v7 = (FONTOBJ *)v6;
    if ( v6 )
    {
      v3 = (IFIMETRICS *)*((_QWORD *)v5 + 42);
      if ( !v3 )
      {
        PUBLIC_PFTOBJ::PUBLIC_PFTOBJ((PUBLIC_PFTOBJ *)&v13, v6);
        UMPDAcquireRFONTSem((struct RFONTOBJ *)&v13, v5, 0, 0, 0LL);
        v3 = FONTOBJ_pifi(v7);
        if ( v3 && v3 >= MmSystemRangeStart )
        {
          v8 = v3;
          v9 = UMPDOBJ::_AllocUserMem(v5, v3->cjThis, 0);
          v3 = (IFIMETRICS *)v9;
          if ( v9 )
          {
            memmove(v9, v8, v8->cjThis);
            *((_QWORD *)v5 + 42) = v3;
          }
        }
        UMPDReleaseRFONTSem((struct RFONTOBJ *)&v13, v5, 0LL, 0LL, 0LL);
        RFONTTMPOBJ::~RFONTTMPOBJ((RFONTTMPOBJ *)&v13);
      }
    }
    UMPDOBJ::UMPDENGCALL::~UMPDENGCALL(v11);
    return v3;
  }
  else
  {
    UMPDOBJ::UMPDENGCALL::~UMPDENGCALL(v11);
    return 0LL;
  }
}
