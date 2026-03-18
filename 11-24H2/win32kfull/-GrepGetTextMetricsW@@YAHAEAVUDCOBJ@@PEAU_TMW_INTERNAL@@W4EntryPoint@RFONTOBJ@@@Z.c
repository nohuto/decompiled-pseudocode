/*
 * XREFs of ?GrepGetTextMetricsW@@YAHAEAVUDCOBJ@@PEAU_TMW_INTERNAL@@W4EntryPoint@RFONTOBJ@@@Z @ 0x14005CC5C
 * Callers:
 *     GreGetTextMetricsW @ 0x14007CF54 (GreGetTextMetricsW.c)
 *     NtGdiGetTextMetricsW @ 0x140260F20 (NtGdiGetTextMetricsW.c)
 * Callees:
 *     ??$GreAcquireSemaphore@$04PEAVRFONT@@@@YAXPEAVRFONT@@@Z @ 0x14005CB24 (--$GreAcquireSemaphore@$04PEAVRFONT@@@@YAXPEAVRFONT@@@Z.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x14005CE04 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVUDCOBJ@@HKAEBUTag@1@@Z @ 0x14005DC90 (-bInit@RFONTOBJ@@QEAAHAEAVUDCOBJ@@HKAEBUTag@1@@Z.c)
 *     ?vIFIMetricsToTextMetricWStrict@@YAXAEAVRFONTOBJ@@AEAVUDCOBJ@@PEAUtagTEXTMETRICW@@PEAU_IFIMETRICS@@@Z @ 0x1400BF214 (-vIFIMetricsToTextMetricWStrict@@YAXAEAVRFONTOBJ@@AEAVUDCOBJ@@PEAUtagTEXTMETRICW@@PEAU_IFIMETRIC.c)
 */

__int64 __fastcall GrepGetTextMetricsW(struct UDCOBJ *a1, __int64 a2, int a3)
{
  __int64 v3; // rax
  unsigned int v4; // esi
  __int64 v7; // rcx
  int v8; // edx
  struct _IFIMETRICS *v10; // rbx
  __int64 v11; // rax
  __int64 v12; // [rsp+50h] [rbp+8h] BYREF
  int v13; // [rsp+68h] [rbp+20h] BYREF
  int v14; // [rsp+6Ch] [rbp+24h]

  v3 = *(_QWORD *)a1;
  v4 = 0;
  v13 = a3;
  v14 = *(unsigned __int16 *)(v3 + 12);
  v12 = 0LL;
  if ( (unsigned int)RFONTOBJ::bInit((RFONTOBJ *)&v12, a1, 0, 2u, (const struct RFONTOBJ::Tag *)&v13) )
    GreAcquireSemaphore<5,RFONT *>(v12);
  if ( v12 )
  {
    v7 = *(_QWORD *)(v12 + 696);
    if ( v7 )
    {
      *(_OWORD *)a2 = *(_OWORD *)v7;
      *(_OWORD *)(a2 + 16) = *(_OWORD *)(v7 + 16);
      *(_OWORD *)(a2 + 32) = *(_OWORD *)(v7 + 32);
      *(_OWORD *)(a2 + 48) = *(_OWORD *)(v7 + 48);
      *(_DWORD *)(a2 + 64) = *(_DWORD *)(v7 + 64);
      v8 = *(_DWORD *)(*(_QWORD *)a1 + 1752LL);
      *(_BYTE *)(a2 + 53) = -((v8 & 0x20) != 0);
      *(_BYTE *)(a2 + 54) = -((v8 & 0x80u) != 0);
      *(_BYTE *)(a2 + 56) = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)a1 + 976LL) + 6LL);
    }
    else
    {
      v10 = *(struct _IFIMETRICS **)(*(_QWORD *)(v12 + 120) + 32LL);
      vIFIMetricsToTextMetricWStrict((struct RFONTOBJ *)&v12, a1, (struct tagTEXTMETRICW *)a2, v10);
      *(_BYTE *)(a2 + 64) = v10->chFirstChar;
      *(_BYTE *)(a2 + 65) = v10->chLastChar;
      *(_BYTE *)(a2 + 66) = v10->chDefaultChar;
      *(_BYTE *)(a2 + 67) = v10->chBreakChar;
      v11 = Win32AllocPoolZInit(68LL, 2003661895LL);
      if ( v11 )
      {
        *(_QWORD *)(v12 + 696) = v11;
        *(_OWORD *)v11 = *(_OWORD *)a2;
        *(_OWORD *)(v11 + 16) = *(_OWORD *)(a2 + 16);
        *(_OWORD *)(v11 + 32) = *(_OWORD *)(a2 + 32);
        *(_OWORD *)(v11 + 48) = *(_OWORD *)(a2 + 48);
        *(_DWORD *)(v11 + 64) = *(_DWORD *)(a2 + 64);
      }
    }
    v4 = 1;
  }
  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v12);
  return v4;
}
