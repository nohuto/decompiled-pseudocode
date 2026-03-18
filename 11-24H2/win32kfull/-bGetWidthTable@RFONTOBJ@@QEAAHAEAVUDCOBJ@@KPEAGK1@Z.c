/*
 * XREFs of ?bGetWidthTable@RFONTOBJ@@QEAAHAEAVUDCOBJ@@KPEAGK1@Z @ 0x14025998C
 * Callers:
 *     NtGdiGetWidthTable @ 0x14025B180 (NtGdiGetWidthTable.c)
 * Callees:
 *     ?bIsLinkedGlyph@RFONTOBJ@@QEAAHG@Z @ 0x14002B4D0 (-bIsLinkedGlyph@RFONTOBJ@@QEAAHG@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1400A5B18 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?bGetGlyphMetrics@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGAEAVUDCOBJ@@_NPEAVESTROBJ@@@Z @ 0x1400AF42C (-bGetGlyphMetrics@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGAEAVUDCOBJ@@_NPEAVESTROBJ@@@Z.c)
 *     ?vXlatGlyphArray@RFONTOBJ@@QEAAXPEBGIPEAKKH@Z @ 0x1400B1B20 (-vXlatGlyphArray@RFONTOBJ@@QEAAXPEBGIPEAKKH@Z.c)
 *     ?QueryAdvanceWidths@PFFOBJ@@QEAAHPEAUDHPDEV__@@PEAU_FONTOBJ@@KPEAKPEAXK@Z @ 0x1400B252C (-QueryAdvanceWidths@PFFOBJ@@QEAAHPEAUDHPDEV__@@PEAU_FONTOBJ@@KPEAKPEAXK@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x140189210 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     ?bIsSystemTTGlyph@RFONTOBJ@@QEBAHG@Z @ 0x1401972BC (-bIsSystemTTGlyph@RFONTOBJ@@QEBAHG@Z.c)
 *     Feature_Servicing_AddWppToGre__private_IsEnabledDeviceUsageNoInline @ 0x14030E7E4 (Feature_Servicing_AddWppToGre__private_IsEnabledDeviceUsageNoInline.c)
 *     WPP_RECORDER_AND_TRACE_SF_DdD @ 0x14030E870 (WPP_RECORDER_AND_TRACE_SF_DdD.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

__int64 __fastcall RFONTOBJ::bGetWidthTable(
        RFONTOBJ *this,
        struct UDCOBJ *a2,
        unsigned int a3,
        unsigned __int16 *a4,
        unsigned int a5,
        unsigned __int16 *a6)
{
  unsigned __int16 *v6; // r12
  char v7; // bl
  unsigned int v8; // r15d
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // r8
  unsigned __int64 v14; // r9
  RFONTOBJ *v15; // r11
  __int64 v16; // rcx
  __int64 v17; // rcx
  unsigned int v18; // r12d
  unsigned __int16 *v19; // r14
  unsigned int v20; // esi
  unsigned int v21; // edi
  unsigned int v22; // eax
  struct _FONTOBJ *v23; // r8
  struct DHPDEV__ *v24; // rdx
  __int64 v25; // r9
  unsigned int AdvanceWidths; // eax
  int v27; // ecx
  __int16 v28; // r10
  unsigned int *v29; // r9
  __int64 v30; // rcx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  int v34; // r8d
  __int64 v35; // rax
  int v36; // edx
  int v37; // r8d
  __int64 v38; // rcx
  __int64 v39; // rcx
  unsigned __int16 *v40; // rdi
  unsigned int v41; // edi
  unsigned int v42; // r14d
  __int64 v43; // rcx
  __int64 result; // rax
  int v45; // edx
  int v46; // r8d
  int v47; // [rsp+20h] [rbp-E0h]
  int v48; // [rsp+28h] [rbp-D8h]
  int v49; // [rsp+30h] [rbp-D0h]
  __int16 v50; // [rsp+30h] [rbp-D0h]
  int v51; // [rsp+38h] [rbp-C8h]
  int v52; // [rsp+60h] [rbp-A0h]
  __int16 v53; // [rsp+64h] [rbp-9Ch]
  unsigned int v54; // [rsp+68h] [rbp-98h]
  unsigned int v57; // [rsp+7Ch] [rbp-84h]
  unsigned __int16 *v58; // [rsp+80h] [rbp-80h]
  unsigned __int16 *v59; // [rsp+88h] [rbp-78h]
  signed __int64 v60; // [rsp+90h] [rbp-70h]
  unsigned int *v61; // [rsp+98h] [rbp-68h]
  struct _GLYPHPOS v64; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v65; // [rsp+D0h] [rbp-30h] BYREF
  unsigned int v66[72]; // [rsp+E0h] [rbp-20h] BYREF

  v6 = a6;
  v7 = 1;
  v8 = 1;
  *(_OWORD *)&v64.hg = 0LL;
  v11 = ((__int64 (*)(void))Feature_Servicing_AddWppToGre__private_IsEnabledDeviceUsageNoInline)();
  v12 = (__int64)&WPP_GLOBAL_Control;
  v13 = (__int64)&WPP_RECORDER_INITIALIZED;
  v14 = (unsigned __int64)&WPP_52461a3f25fd3dd377e6cb1560123594_Traceguids;
  if ( v11 )
  {
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 124LL) & 1) == 0
      || (LOBYTE(v12) = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 121LL) < 5u) )
    {
      LOBYTE(v12) = 0;
    }
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
      || (LOBYTE(v13) = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 152LL)) )
    {
      LOBYTE(v13) = 0;
    }
    if ( (_BYTE)v12 || (_BYTE)v13 )
      WPP_RECORDER_AND_TRACE_SF_(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 104LL),
        v12,
        v13,
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 144LL),
        5,
        65537,
        10,
        (__int64)&WPP_52461a3f25fd3dd377e6cb1560123594_Traceguids);
  }
  v15 = this;
  v16 = *(_QWORD *)(*(_QWORD *)this + 96LL);
  if ( !*(_QWORD *)(v16 + 3104) )
  {
    if ( a5 )
    {
      v16 = a5;
      v40 = a6;
      while ( v16 )
      {
        *v40++ = -1;
        --v16;
      }
    }
    v8 = 0;
    if ( (unsigned int)Feature_Servicing_AddWppToGre__private_IsEnabledDeviceUsageNoInline(v16, v12, v13, v14) )
    {
      v17 = *(_QWORD *)&WPP_GLOBAL_Control;
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (LOBYTE(v12) = 1, (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 124LL) & 1) == 0) )
      {
        LOBYTE(v12) = 0;
      }
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
        || (LOBYTE(v13) = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 152LL)) )
      {
        LOBYTE(v13) = 0;
      }
      if ( (_BYTE)v12 || (_BYTE)v13 )
        WPP_RECORDER_AND_TRACE_SF_(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 104LL),
          v12,
          v13,
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 144LL),
          0,
          65537,
          14,
          (__int64)&WPP_52461a3f25fd3dd377e6cb1560123594_Traceguids);
    }
    goto LABEL_88;
  }
  v17 = 0LL;
  v58 = a6;
  v18 = a5;
  v59 = a4;
  v19 = a4;
  if ( !a5 )
  {
LABEL_50:
    if ( v8 )
    {
LABEL_108:
      if ( (unsigned int)Feature_Servicing_AddWppToGre__private_IsEnabledDeviceUsageNoInline(v17, v12, v13, v14) )
      {
        if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
          || (LOBYTE(v45) = 1, (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 124LL) & 1) == 0) )
        {
          LOBYTE(v45) = 0;
        }
        if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
          || (LOBYTE(v46) = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 152LL)) )
        {
          LOBYTE(v46) = 0;
        }
        if ( (_BYTE)v45 || (_BYTE)v46 )
          WPP_RECORDER_AND_TRACE_SF_d(
            *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 104LL),
            v45,
            v46,
            *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 144LL),
            0,
            65537,
            16,
            (__int64)&WPP_52461a3f25fd3dd377e6cb1560123594_Traceguids,
            v8);
        if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
          || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 124LL) & 1) == 0
          || (LOBYTE(v45) = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 121LL) < 5u) )
        {
          LOBYTE(v45) = 0;
        }
        if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
          || (LOBYTE(v46) = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 152LL)) )
        {
          LOBYTE(v46) = 0;
        }
        if ( (_BYTE)v45 || (_BYTE)v46 )
          WPP_RECORDER_AND_TRACE_SF_(
            *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 104LL),
            v45,
            v46,
            *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 144LL),
            5,
            65537,
            17,
            (__int64)&WPP_52461a3f25fd3dd377e6cb1560123594_Traceguids);
      }
      if ( a5 != a3 )
        return v8;
      result = 0xFFFFFFFFLL;
      if ( v8 != -1 )
        return 1LL;
      return result;
    }
    v6 = a6;
LABEL_88:
    v41 = 0;
    v42 = a3;
    if ( a3 >= a5 )
      v42 = a5;
    while ( v41 < v42 )
    {
      if ( v6[v41] == 0xFFFF )
      {
        if ( !(unsigned int)RFONTOBJ::bGetGlyphMetrics(this, (struct RFONTOBJ *)1, &v64, (char *)&a4[v41], a2, 0, 0LL) )
        {
          if ( (unsigned int)Feature_Servicing_AddWppToGre__private_IsEnabledDeviceUsageNoInline(v43, v12, v13, v14) )
          {
            v38 = *(_QWORD *)&WPP_GLOBAL_Control;
            if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
              || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 124LL) & 1) == 0
              || (LOBYTE(v36) = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 121LL) < 5u) )
            {
              LOBYTE(v36) = 0;
            }
            if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
              || !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 152LL) )
            {
              v7 = 0;
            }
            if ( (_BYTE)v36 || v7 )
            {
              v50 = 15;
              goto LABEL_106;
            }
          }
          return 0xFFFFFFFFLL;
        }
        v17 = WORD2(v64.pgdf[1].ppo);
        v6[v41] = v17;
      }
      ++v41;
    }
    goto LABEL_108;
  }
  v20 = a3;
  if ( a3 >= a5 )
    v20 = a5;
  while ( 1 )
  {
    v21 = 70;
    if ( v20 )
    {
      v22 = 0;
      if ( v20 < 0x46 )
        v21 = v20;
    }
    else
    {
      v22 = 2;
      if ( v18 < 0x46 )
        v21 = v18;
    }
    v54 = v22;
    RFONTOBJ::vXlatGlyphArray(v15, v19, v21, v66, v22, 0);
    v23 = *(struct _FONTOBJ **)this;
    v24 = *(struct DHPDEV__ **)(*(_QWORD *)this + 112LL);
    v65 = *(_QWORD *)(*(_QWORD *)this + 128LL);
    AdvanceWidths = PFFOBJ::QueryAdvanceWidths((PFFOBJ *)&v65, v24, v23, v25, v66, v58, v21);
    v15 = this;
    v14 = AdvanceWidths;
    v57 = AdvanceWidths;
    v12 = *(_QWORD *)this;
    v27 = *(_DWORD *)(*(_QWORD *)this + 720LL);
    if ( AdvanceWidths == -1 )
      break;
    if ( (v27 & 0x40) != 0 )
    {
      *(_DWORD *)(v12 + 720) = v27 & 0xFFFFFFBF;
      v17 = 0LL;
      v52 = 0;
      v13 = 0LL;
      v28 = *(_WORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)this + 120LL) + 32LL) + 116LL);
      v53 = v28;
      if ( v21 )
      {
        v29 = v66;
        v60 = (char *)v58 - (char *)v59;
        v61 = v66;
        while ( 1 )
        {
          v30 = *(unsigned int *)(*(_QWORD *)v15 + 456LL);
          if ( *v29 == (_DWORD)v30 )
          {
            v12 = *v19;
            if ( (_WORD)v12 != v28 )
            {
              if ( v54 != 2
                && ((unsigned int)RFONTOBJ::bIsLinkedGlyph(v15, v12, v13)
                 || (unsigned int)RFONTOBJ::bIsSystemTTGlyph(this, *v19)) )
              {
                if ( !(unsigned int)RFONTOBJ::bGetGlyphMetrics(
                                      this,
                                      (struct RFONTOBJ *)1,
                                      &v64,
                                      (char *)&v59[v52],
                                      a2,
                                      0,
                                      0LL) )
                {
                  if ( (unsigned int)Feature_Servicing_AddWppToGre__private_IsEnabledDeviceUsageNoInline(
                                       v31,
                                       v12,
                                       v32,
                                       v33) )
                  {
                    v38 = *(_QWORD *)&WPP_GLOBAL_Control;
                    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
                      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 124LL) & 1) == 0
                      || (LOBYTE(v36) = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 121LL) < 5u) )
                    {
                      LOBYTE(v36) = 0;
                    }
                    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
                      || !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 152LL) )
                    {
                      v7 = 0;
                    }
                    if ( (_BYTE)v36 || v7 )
                    {
                      v50 = 12;
                      goto LABEL_106;
                    }
                  }
                  return 0xFFFFFFFFLL;
                }
                *(unsigned __int16 *)((char *)v19 + v60) = WORD2(v64.pgdf[1].ppo);
              }
              else
              {
                *(unsigned __int16 *)((char *)v19 + v60) = -1;
                v8 = 0;
                if ( (unsigned int)Feature_Servicing_AddWppToGre__private_IsEnabledDeviceUsageNoInline(
                                     v30,
                                     v12,
                                     v13,
                                     v29) )
                {
                  if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
                    || (LOBYTE(v12) = 1, (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 124LL) & 1) == 0) )
                  {
                    LOBYTE(v12) = 0;
                  }
                  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
                    || (LOBYTE(v34) = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 152LL)) )
                  {
                    LOBYTE(v34) = 0;
                  }
                  if ( (_BYTE)v12 || (_BYTE)v34 )
                    WPP_RECORDER_AND_TRACE_SF_DdD(
                      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 104LL),
                      v12,
                      v34,
                      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 144LL),
                      v47,
                      v48,
                      v49,
                      v51,
                      v54,
                      v52,
                      *v19);
                }
              }
              LODWORD(v13) = v52;
              v29 = v61;
              v28 = v53;
              v15 = this;
            }
          }
          v13 = (unsigned int)(v13 + 1);
          ++v29;
          ++v19;
          v52 = v13;
          v61 = v29;
          if ( (unsigned int)v13 >= v21 )
          {
            v19 = v59;
            v14 = v57;
            goto LABEL_46;
          }
        }
      }
    }
    else
    {
LABEL_46:
      v17 = 0LL;
    }
    v8 &= v14;
    v35 = 2LL * v21;
    v18 -= v21;
    v58 = (unsigned __int16 *)((char *)v58 + v35);
    v19 = (unsigned __int16 *)((char *)v19 + v35);
    v59 = v19;
    if ( v20 )
      v20 -= v21;
    if ( !v18 )
      goto LABEL_50;
  }
  v39 = v27 & 0xFFFFFFBF;
  *(_DWORD *)(v12 + 720) = v39;
  if ( (unsigned int)Feature_Servicing_AddWppToGre__private_IsEnabledDeviceUsageNoInline(v39, v12, v13, 0xFFFFFFFFLL) )
  {
    v38 = *(_QWORD *)&WPP_GLOBAL_Control;
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 124LL) & 1) == 0
      || (LOBYTE(v36) = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 121LL) < 5u) )
    {
      LOBYTE(v36) = 0;
    }
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
      || !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 152LL) )
    {
      v7 = 0;
    }
    if ( (_BYTE)v36 || v7 )
    {
      v50 = 11;
LABEL_106:
      LOBYTE(v37) = v7;
      WPP_RECORDER_AND_TRACE_SF_(
        *(_QWORD *)(v38 + 104),
        v36,
        v37,
        *(_QWORD *)(v38 + 144),
        5,
        65537,
        v50,
        (__int64)&WPP_52461a3f25fd3dd377e6cb1560123594_Traceguids);
    }
  }
  return 0xFFFFFFFFLL;
}
