/*
 * XREFs of ?CreateTopologyList@CSpatialAudioTechnologies@@QEAAJPEAUHINSTANCE__@@@Z @ 0x18008D57C
 * Callers:
 *     ?InitializeGlobals@CSpatialProperties@@AEAAJPEBU_tlgProvider_t@@@Z @ 0x18013DC74 (-InitializeGlobals@CSpatialProperties@@AEAAJPEBU_tlgProvider_t@@@Z.c)
 * Callees:
 *     ?FreeTopologyList@CSpatialAudioTechnologies@@QEAAXXZ @ 0x180074B7C (-FreeTopologyList@CSpatialAudioTechnologies@@QEAAXXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800A42B8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0CSpatialAudioDolbyAtmosMAT@@QEAA@PEAUHINSTANCE__@@@Z @ 0x180140FA8 (--0CSpatialAudioDolbyAtmosMAT@@QEAA@PEAUHINSTANCE__@@@Z.c)
 *     ??0CSpatialAudioDolbyHeadphones@@QEAA@PEAUHINSTANCE__@@@Z @ 0x180141068 (--0CSpatialAudioDolbyHeadphones@@QEAA@PEAUHINSTANCE__@@@Z.c)
 *     ??0CSpatialAudioDolbySpeakers@@QEAA@PEAUHINSTANCE__@@@Z @ 0x180141170 (--0CSpatialAudioDolbySpeakers@@QEAA@PEAUHINSTANCE__@@@Z.c)
 *     ??0CSpatialAudioDtsxHdmi@@QEAA@PEAUHINSTANCE__@@@Z @ 0x180141230 (--0CSpatialAudioDtsxHdmi@@QEAA@PEAUHINSTANCE__@@@Z.c)
 *     ??0CSpatialAudioDtsxHeadphones@@QEAA@PEAUHINSTANCE__@@@Z @ 0x1801412F0 (--0CSpatialAudioDtsxHeadphones@@QEAA@PEAUHINSTANCE__@@@Z.c)
 *     ??0CSpatialAudioDtsxStereo@@QEAA@PEAUHINSTANCE__@@@Z @ 0x1801413F8 (--0CSpatialAudioDtsxStereo@@QEAA@PEAUHINSTANCE__@@@Z.c)
 *     ??0CSpatialAudioMSHRTF@@QEAA@PEAUHINSTANCE__@@@Z @ 0x1801414B8 (--0CSpatialAudioMSHRTF@@QEAA@PEAUHINSTANCE__@@@Z.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall CSpatialAudioTechnologies::CreateTopologyList(CSpatialAudioTechnologies *this, HINSTANCE a2)
{
  unsigned int v3; // edi
  CSpatialAudioMSHRTF *v4; // rax
  CSpatialAudioMSHRTF *v5; // rcx
  __int64 v6; // rcx
  CSpatialAudioDolbyHeadphones *v7; // rax
  CSpatialAudioDolbyHeadphones *v8; // rcx
  CSpatialAudioDolbySpeakers *v9; // rax
  CSpatialAudioDolbySpeakers *v10; // rcx
  CSpatialAudioDolbyAtmosMAT *v11; // rax
  CSpatialAudioDolbyAtmosMAT *v12; // rcx
  CSpatialAudioDtsxHeadphones *v13; // rax
  CSpatialAudioDtsxHeadphones *v14; // rcx
  CSpatialAudioDtsxStereo *v15; // rax
  CSpatialAudioDtsxStereo *v16; // rcx
  CSpatialAudioDtsxHdmi *v17; // rax
  CSpatialAudioDtsxHdmi *v18; // rcx
  char v19; // bl

  v3 = -2147024882;
  EnterCriticalSection(&CriticalSection);
  if ( ++dword_1801DB808 == 1 )
  {
    v4 = (CSpatialAudioMSHRTF *)operator new(0x320uLL, (const struct std::nothrow_t *)&std::nothrow);
    if ( v4 )
      v5 = CSpatialAudioMSHRTF::CSpatialAudioMSHRTF(v4, a2);
    else
      v5 = 0LL;
    *(_QWORD *)&g_ListOfSpatialTech[8 * (unsigned __int8)g_ListOfSpatialTech[0] + 8] = v5;
    if ( !*(_QWORD *)&g_ListOfSpatialTech[8 * (unsigned __int8)g_ListOfSpatialTech[0] + 8] )
      goto LABEL_6;
    ++g_ListOfSpatialTech[0];
    v7 = (CSpatialAudioDolbyHeadphones *)operator new(0x520uLL, (const struct std::nothrow_t *)&std::nothrow);
    v8 = v7 ? CSpatialAudioDolbyHeadphones::CSpatialAudioDolbyHeadphones(v7, a2) : 0LL;
    *(_QWORD *)&g_ListOfSpatialTech[8 * (unsigned __int8)g_ListOfSpatialTech[0] + 8] = v8;
    if ( !*(_QWORD *)&g_ListOfSpatialTech[8 * (unsigned __int8)g_ListOfSpatialTech[0] + 8] )
      goto LABEL_6;
    ++g_ListOfSpatialTech[0];
    v9 = (CSpatialAudioDolbySpeakers *)operator new(0x320uLL, (const struct std::nothrow_t *)&std::nothrow);
    v10 = v9 ? CSpatialAudioDolbySpeakers::CSpatialAudioDolbySpeakers(v9, a2) : 0LL;
    *(_QWORD *)&g_ListOfSpatialTech[8 * (unsigned __int8)g_ListOfSpatialTech[0] + 8] = v10;
    if ( !*(_QWORD *)&g_ListOfSpatialTech[8 * (unsigned __int8)g_ListOfSpatialTech[0] + 8] )
      goto LABEL_6;
    ++g_ListOfSpatialTech[0];
    v11 = (CSpatialAudioDolbyAtmosMAT *)operator new(0x320uLL, (const struct std::nothrow_t *)&std::nothrow);
    v12 = v11 ? CSpatialAudioDolbyAtmosMAT::CSpatialAudioDolbyAtmosMAT(v11, a2) : 0LL;
    *(_QWORD *)&g_ListOfSpatialTech[8 * (unsigned __int8)g_ListOfSpatialTech[0] + 8] = v12;
    if ( !*(_QWORD *)&g_ListOfSpatialTech[8 * (unsigned __int8)g_ListOfSpatialTech[0] + 8] )
      goto LABEL_6;
    ++g_ListOfSpatialTech[0];
    v13 = (CSpatialAudioDtsxHeadphones *)operator new(0x520uLL, (const struct std::nothrow_t *)&std::nothrow);
    v14 = v13 ? CSpatialAudioDtsxHeadphones::CSpatialAudioDtsxHeadphones(v13, a2) : 0LL;
    *(_QWORD *)&g_ListOfSpatialTech[8 * (unsigned __int8)g_ListOfSpatialTech[0] + 8] = v14;
    if ( !*(_QWORD *)&g_ListOfSpatialTech[8 * (unsigned __int8)g_ListOfSpatialTech[0] + 8] )
      goto LABEL_6;
    ++g_ListOfSpatialTech[0];
    v15 = (CSpatialAudioDtsxStereo *)operator new(0x320uLL, (const struct std::nothrow_t *)&std::nothrow);
    v16 = v15 ? CSpatialAudioDtsxStereo::CSpatialAudioDtsxStereo(v15, a2) : 0LL;
    *(_QWORD *)&g_ListOfSpatialTech[8 * (unsigned __int8)g_ListOfSpatialTech[0] + 8] = v16;
    if ( !*(_QWORD *)&g_ListOfSpatialTech[8 * (unsigned __int8)g_ListOfSpatialTech[0] + 8]
      || ((++g_ListOfSpatialTech[0],
           (v17 = (CSpatialAudioDtsxHdmi *)operator new(0x320uLL, (const struct std::nothrow_t *)&std::nothrow)) == 0LL)
        ? (v18 = 0LL)
        : (v18 = CSpatialAudioDtsxHdmi::CSpatialAudioDtsxHdmi(v17, a2)),
          (*(_QWORD *)&g_ListOfSpatialTech[8 * (unsigned __int8)g_ListOfSpatialTech[0] + 8] = v18) == 0LL) )
    {
LABEL_6:
      LeaveCriticalSection(&CriticalSection);
LABEL_36:
      CSpatialAudioTechnologies::FreeTopologyList((CSpatialAudioTechnologies *)v6);
      return v3;
    }
    v19 = ++g_ListOfSpatialTech[0];
  }
  else
  {
    v19 = g_ListOfSpatialTech[0];
  }
  LeaveCriticalSection(&CriticalSection);
  v6 = 0LL;
  if ( !v19 )
    v6 = 2147942414LL;
  v3 = v6;
  if ( !v19 )
    goto LABEL_36;
  return v3;
}
