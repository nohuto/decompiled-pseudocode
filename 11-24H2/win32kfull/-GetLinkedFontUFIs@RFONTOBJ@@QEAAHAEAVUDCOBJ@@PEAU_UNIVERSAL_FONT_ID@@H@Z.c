/*
 * XREFs of ?GetLinkedFontUFIs@RFONTOBJ@@QEAAHAEAVUDCOBJ@@PEAU_UNIVERSAL_FONT_ID@@H@Z @ 0x1401865C0
 * Callers:
 *     NtGdiGetLinkedUFIs @ 0x14025CFA0 (NtGdiGetLinkedUFIs.c)
 * Callees:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x14005CE04 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ??$GreReleasePushLockShared2@$0BA@$0A@@@YAXAEAUGLOBALS@Font@Gre@@@Z @ 0x1400A3DC0 (--$GreReleasePushLockShared2@$0BA@$0A@@@YAXAEAUGLOBALS@Font@Gre@@@Z.c)
 *     ??$GreAcquirePushLockShared2@$0BA@$0A@@@YAXAEAUGLOBALS@Font@Gre@@@Z @ 0x1400A3EA8 (--$GreAcquirePushLockShared2@$0BA@$0A@@@YAXAEAUGLOBALS@Font@Gre@@@Z.c)
 *     ?GetEUDCDefaultFontPFE@RFONTOBJ@@AEAAPEAVPFE@@I@Z @ 0x140186A10 (-GetEUDCDefaultFontPFE@RFONTOBJ@@AEAAPEAVPFE@@I@Z.c)
 *     ?AddUFIToBuffer@RFONTOBJ@@AEAAXPEAVPFE@@AEAPEAU_UNIVERSAL_FONT_ID@@AEAHH@Z @ 0x140186ADC (-AddUFIToBuffer@RFONTOBJ@@AEAAXPEAVPFE@@AEAPEAU_UNIVERSAL_FONT_ID@@AEAHH@Z.c)
 *     ?bCheckEudcFontCaps@RFONTOBJ@@QEBAHAEAVIFIOBJ@@@Z @ 0x140186B44 (-bCheckEudcFontCaps@RFONTOBJ@@QEBAHAEAVIFIOBJ@@@Z.c)
 *     ?bInitSystemTT@RFONTOBJ@@QEAAHAEAVUDCOBJ@@@Z @ 0x1401DCED4 (-bInitSystemTT@RFONTOBJ@@QEAAHAEAVUDCOBJ@@@Z.c)
 */

__int64 __fastcall RFONTOBJ::GetLinkedFontUFIs(
        RFONTOBJ *this,
        struct UDCOBJ *a2,
        struct _UNIVERSAL_FONT_ID *a3,
        int a4)
{
  __int64 v7; // rax
  BOOL v8; // esi
  __int64 v9; // r13
  struct PFE *v10; // rdx
  int v11; // ecx
  __int64 v12; // rdi
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rbx
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rbx
  int v20; // esi
  struct _UNIVERSAL_FONT_ID *v21; // rbx
  __int64 v22; // r15
  _QWORD *v23; // r15
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // r13
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rbx
  __int64 v30; // rcx
  struct PFE *EUDCDefaultFontPFE; // rax
  struct PFE *v32; // rbx
  int v33; // edi
  unsigned int v34; // edi
  int v36; // eax
  __int64 v37; // rax
  struct _UNIVERSAL_FONT_ID *v38; // rbx
  int v39; // ecx
  __int64 v40; // rax
  int v41; // eax
  __int64 v42; // rax
  __int64 v43; // rax
  unsigned int v44; // [rsp+30h] [rbp-50h]
  __int64 v45; // [rsp+38h] [rbp-48h]
  _QWORD v46[2]; // [rsp+40h] [rbp-40h] BYREF
  __int64 v47; // [rsp+50h] [rbp-30h] BYREF
  __int64 v48; // [rsp+58h] [rbp-28h]
  __int64 v49; // [rsp+60h] [rbp-20h] BYREF
  __int64 v50; // [rsp+70h] [rbp-10h] BYREF
  struct _UNIVERSAL_FONT_ID *v51; // [rsp+D0h] [rbp+50h] BYREF
  int v52; // [rsp+D8h] [rbp+58h] BYREF

  v51 = a3;
  v52 = 0;
  if ( a4 && !a3 )
    return 0LL;
  if ( *(_DWORD *)(*(_QWORD *)this + 716LL) )
  {
    if ( !*(_QWORD *)(*(_QWORD *)this + 728LL) && !RFONTOBJ::bInitSystemTT(this, a2) )
      return 0LL;
    *(_DWORD *)(*(_QWORD *)this + 720LL) |= 0x100u;
  }
  v7 = *(_QWORD *)(*(_QWORD *)this + 728LL);
  if ( v7 )
  {
    v52 = 1;
    if ( a4 > 0 )
    {
      v40 = *(_QWORD *)(v7 + 120);
      v46[0] = 0LL;
      *(_QWORD *)a3 = *(_QWORD *)(v40 + 84);
      v51 = (struct _UNIVERSAL_FONT_ID *)((char *)a3 + 8);
      RFONTOBJ::~RFONTOBJ((RFONTOBJ *)v46);
    }
  }
  v8 = *(_DWORD *)(*(_QWORD *)this + 852LL) != 0;
  v44 = v8;
  v48 = *(_QWORD *)(W32GetSessionState((_DWORD)this, a2) + 96) + 4872LL;
  v9 = v48;
  GreAcquirePushLockShared2<16,0>(v48);
  _InterlockedIncrement((volatile signed __int32 *)(v9 + 8636));
  GreReleasePushLockShared2<16,0>(v9);
  v12 = *(_QWORD *)(*(_QWORD *)this + 120LL);
  v13 = *(_QWORD *)(v12 + 120);
  if ( v13 )
    v14 = v13 + 16;
  else
    v14 = *(_QWORD *)(W32GetSessionState(v11, v10) + 96) + 14136LL;
  v15 = *(_QWORD *)(v14 + 8);
  v16 = *(_QWORD *)(v12 + 120);
  if ( v16 )
    v17 = v16 + 16;
  else
    v17 = *(_QWORD *)(W32GetSessionState(v11, v10) + 96) + 14136LL;
  v45 = 0LL;
  if ( v15 != v17 )
  {
    v10 = *(struct PFE **)(v15 + 8LL * v8 + 32);
    if ( !v10 )
      v10 = *(struct PFE **)(v15 + 32);
    v39 = *(_DWORD *)(*(_QWORD *)v10 + 52LL);
    if ( (v39 & 8) == 0 || (v39 & 2) != 0 )
    {
      v45 = 0LL;
    }
    else
    {
      RFONTOBJ::AddUFIToBuffer(this, v10, &v51, &v52, a4);
      v45 = 1LL;
    }
  }
  v18 = *(_QWORD *)(*(_QWORD *)this + 736LL);
  if ( v18 )
  {
    v41 = v52;
    v21 = v51;
    v20 = ++v52;
    if ( v41 < a4 )
    {
      v42 = *(_QWORD *)(v18 + 120);
      v47 = 0LL;
      *(_QWORD *)v51 = *(_QWORD *)(v42 + 84);
      v21 = (struct _UNIVERSAL_FONT_ID *)((char *)v21 + 8);
      v51 = v21;
      RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v47);
    }
    goto LABEL_13;
  }
  v19 = *(_QWORD *)(v9 + 8LL * v8 + 8656);
  if ( !v19 )
  {
    v20 = v52;
LABEL_12:
    v21 = v51;
    goto LABEL_13;
  }
  v49 = *(_QWORD *)(v19 + 32);
  v36 = RFONTOBJ::bCheckEudcFontCaps(this, (struct IFIOBJ *)&v49);
  v20 = v52;
  if ( !v36 )
    goto LABEL_12;
  if ( v52 >= a4 )
  {
    v21 = v51;
  }
  else
  {
    v37 = *(_QWORD *)(v19 + 84);
    v38 = v51;
    *(_QWORD *)v51 = v37;
    v21 = (struct _UNIVERSAL_FONT_ID *)((char *)v38 + 8);
    v51 = v21;
  }
  v52 = ++v20;
LABEL_13:
  v22 = *(_QWORD *)(v12 + 120);
  if ( v22 )
    v23 = (_QWORD *)(v22 + 16);
  else
    v23 = (_QWORD *)(*(_QWORD *)(W32GetSessionState(v18, v10) + 96) + 14136LL);
  while ( 1 )
  {
    v24 = *(_QWORD *)(v12 + 120);
    v23 = (_QWORD *)*v23;
    v25 = v24 ? v24 + 16 : *(_QWORD *)(W32GetSessionState(v18, v10) + 96) + 14136LL;
    if ( v23 == (_QWORD *)v25 )
      break;
    v26 = v23[v44 + 4];
    if ( !v26 )
      v26 = v23[4];
    v27 = *(_QWORD *)(v12 + 120);
    if ( v27 )
      v28 = v27 + 16;
    else
      v28 = *(_QWORD *)(W32GetSessionState(v18, v10) + 96) + 14136LL;
    if ( v23 != *(_QWORD **)(v28 + 8) || !v45 )
    {
      if ( v26 )
      {
        v50 = *(_QWORD *)(v26 + 32);
        if ( (unsigned int)RFONTOBJ::bCheckEudcFontCaps(this, (struct IFIOBJ *)&v50) )
        {
          if ( v20 < a4 )
          {
            *(_QWORD *)v21 = *(_QWORD *)(v26 + 84);
            v21 = (struct _UNIVERSAL_FONT_ID *)((char *)v21 + 8);
          }
          ++v20;
        }
      }
    }
  }
  v51 = v21;
  v29 = v48;
  v52 = v20;
  GreAcquirePushLockShared2<16,0>(v48);
  _InterlockedDecrement((volatile signed __int32 *)(v29 + 8636));
  GreReleasePushLockShared2<16,0>(v29);
  v30 = *(_QWORD *)(*(_QWORD *)this + 744LL);
  if ( v30 )
  {
    v34 = v52 + 1;
    if ( v52 < a4 )
    {
      v43 = *(_QWORD *)(v30 + 120);
      v46[0] = 0LL;
      *(_QWORD *)v51 = *(_QWORD *)(v43 + 84);
      RFONTOBJ::~RFONTOBJ((RFONTOBJ *)v46);
    }
  }
  else
  {
    EUDCDefaultFontPFE = RFONTOBJ::GetEUDCDefaultFontPFE(this, v44);
    v32 = EUDCDefaultFontPFE;
    if ( EUDCDefaultFontPFE
      && (v46[0] = *((_QWORD *)EUDCDefaultFontPFE + 4),
          (unsigned int)RFONTOBJ::bCheckEudcFontCaps(this, (struct IFIOBJ *)v46)) )
    {
      v33 = v52;
      if ( v52 < a4 )
        *(_QWORD *)v51 = *(_QWORD *)((char *)v32 + 84);
      return (unsigned int)(v33 + 1);
    }
    else
    {
      return (unsigned int)v52;
    }
  }
  return v34;
}
