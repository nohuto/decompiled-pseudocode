/*
 * XREFs of ?SendMITCursorShape@CursorApiRouter@@AEAA_NPEAU_CURSINFO@@W4_MIT_CURSOR_SHAPEINFO_TRAITS@@I@Z @ 0x1402DA830
 * Callers:
 *     ?DwmSetPointer@CursorApiRouter@@AEAA_NPEAU_CURSINFO@@@Z @ 0x1402D9E20 (-DwmSetPointer@CursorApiRouter@@AEAA_NPEAU_CURSINFO@@@Z.c)
 * Callees:
 *     GreExtGetObjectW @ 0x14001442C (GreExtGetObjectW.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14026C310 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?GetCursorColorPixels@CursorApiRouter@@CA_NPEAUHBITMAP__@@PEBUtagBITMAP@@IPEAK@Z @ 0x1402D9F3C (-GetCursorColorPixels@CursorApiRouter@@CA_NPEAUHBITMAP__@@PEBUtagBITMAP@@IPEAK@Z.c)
 *     ?GetCursorMaskAndXorBits@CursorApiRouter@@CA_NPEAUHBITMAP__@@PEBUtagBITMAP@@PEAPEAEPEAI@Z @ 0x1402DA044 (-GetCursorMaskAndXorBits@CursorApiRouter@@CA_NPEAUHBITMAP__@@PEBUtagBITMAP@@PEAPEAEPEAI@Z.c)
 *     ?PatchArgbCursorWithMask@CursorApiRouter@@CA_NPEAUHBITMAP__@@IPEAKUtagSIZE@@_N@Z @ 0x1402DA618 (-PatchArgbCursorWithMask@CursorApiRouter@@CA_NPEAUHBITMAP__@@IPEAKUtagSIZE@@_N@Z.c)
 *     ?StoreNewCursorShape@CursorApiRouter@@AEAAKPEAU_MIT_CURSOR_MANAGEMENT_SHAPEHEADER@@K@Z @ 0x1402DAF28 (-StoreNewCursorShape@CursorApiRouter@@AEAAKPEAU_MIT_CURSOR_MANAGEMENT_SHAPEHEADER@@K@Z.c)
 */

char __fastcall CursorApiRouter::SendMITCursorShape(__int64 a1, __int64 a2, int a3, int a4)
{
  __int64 v4; // rsi
  char v6; // r14
  Gre::Base *v7; // rcx
  int v8; // eax
  __int128 v9; // xmm0
  struct tagSIZE v10; // rbx
  HBITMAP v11; // rcx
  unsigned __int8 *v12; // rcx
  unsigned __int64 v13; // r13
  unsigned __int64 v14; // r12
  __int64 v15; // rax
  char v16; // r11
  __int64 v17; // r15
  unsigned __int8 *v18; // rdi
  HBITMAP v19; // rcx
  bool CursorColorPixels; // al
  bool v21; // r13
  unsigned __int8 *v22; // r12
  char v23; // r8
  unsigned __int8 *v24; // r10
  char v25; // r9
  int v26; // eax
  unsigned int v27; // eax
  Gre::Base *v28; // rax
  unsigned __int8 *v29; // rsi
  unsigned int v30; // eax
  Gre::Base *v31; // rcx
  unsigned __int8 *v32; // r9
  int v33; // r8d
  int v34; // ecx
  unsigned int v35; // kr00_4
  int v36; // ecx
  LONG cy; // r9d
  unsigned __int8 *v38; // r8
  LONG v39; // r13d
  unsigned int v40; // ecx
  char *v41; // rdx
  char v42; // r14
  int *v43; // r12
  unsigned __int64 v44; // rax
  char v45; // cl
  char *v46; // rsi
  char *v47; // r15
  char v48; // r10
  char v49; // al
  int v50; // eax
  bool v51; // zf
  unsigned __int8 *i; // rax
  unsigned int v53; // eax
  __int128 v54; // xmm1
  char v56; // [rsp+38h] [rbp-D0h]
  char v57; // [rsp+39h] [rbp-CFh]
  unsigned int v58; // [rsp+3Ch] [rbp-CCh] BYREF
  __int64 v59; // [rsp+40h] [rbp-C8h]
  unsigned __int8 *v60; // [rsp+48h] [rbp-C0h] BYREF
  struct tagSIZE v61; // [rsp+50h] [rbp-B8h]
  unsigned __int8 *v62; // [rsp+58h] [rbp-B0h]
  Gre::Base *v63; // [rsp+60h] [rbp-A8h]
  unsigned int v64[2]; // [rsp+68h] [rbp-A0h]
  unsigned __int64 v65; // [rsp+70h] [rbp-98h]
  _BYTE v66[48]; // [rsp+78h] [rbp-90h] BYREF
  unsigned __int8 v67; // [rsp+A8h] [rbp-60h]
  __int16 v68; // [rsp+A9h] [rbp-5Fh]
  char v69; // [rsp+ABh] [rbp-5Dh]
  struct tagBITMAP v70; // [rsp+B0h] [rbp-58h] BYREF
  HBITMAP v71; // [rsp+D0h] [rbp-38h]
  __int64 v72; // [rsp+D8h] [rbp-30h]
  unsigned __int64 v73; // [rsp+E0h] [rbp-28h]
  _OWORD v74[6]; // [rsp+E8h] [rbp-20h] BYREF
  char v77; // [rsp+160h] [rbp+58h]

  v4 = a1;
  memset(v66, 0, 40);
  v67 = 0;
  v62 = 0LL;
  v60 = 0LL;
  v6 = 1;
  v7 = *(Gre::Base **)(a2 + 16);
  v63 = *(Gre::Base **)(a2 + 48);
  *(_OWORD *)&v70.bmType = 0LL;
  if ( v63 )
    v7 = v63;
  LOBYTE(v59) = 1;
  v58 = 0;
  *(_QWORD *)&v66[40] = 0LL;
  v68 = 0;
  v69 = 0;
  v8 = v67;
  *(_OWORD *)&v70.bmPlanes = 0LL;
  v71 = (HBITMAP)v7;
  v74[0] = 0LL;
  *(_OWORD *)(v4 + 72) = *(_OWORD *)v66;
  v9 = *(_OWORD *)&v66[32];
  v74[1] = 0LL;
  *(_OWORD *)(v4 + 88) = *(_OWORD *)&v66[16];
  *(_OWORD *)(v4 + 104) = v9;
  *(_DWORD *)(v4 + 120) = v8;
  *(_BYTE *)(v4 + 72) = v7 != 0LL;
  *(_BYTE *)(v4 + 73) = *(_QWORD *)(a2 + 8) != 0LL;
  if ( v7 )
  {
    *(_BYTE *)(v4 + 74) = 0;
    if ( !(unsigned int)GreExtGetObjectW(v7, 32LL, &v70) )
    {
LABEL_5:
      v6 = 0;
      goto LABEL_77;
    }
    v61 = *(struct tagSIZE *)&v70.bmWidth;
    v10 = *(struct tagSIZE *)&v70.bmWidth;
  }
  else
  {
    *(_BYTE *)(v4 + 74) = 1;
    if ( !(unsigned int)GreExtGetObjectW(*(Gre::Base **)(a2 + 8), 32LL, &v70) )
      goto LABEL_5;
    v11 = *(HBITMAP *)(a2 + 8);
    v61.cx = v70.bmWidth;
    v61.cy = v70.bmHeight / 2;
    v10 = v61;
    if ( !CursorApiRouter::GetCursorMaskAndXorBits(v11, &v70, &v60, &v58) )
    {
      v12 = v60;
      v6 = 0;
      goto LABEL_75;
    }
    v62 = v60;
  }
  v13 = (unsigned int)v61.cy * (unsigned __int64)(unsigned int)v10.cx;
  v65 = v13;
  if ( v13 > 0xFFFFFFFF )
    goto LABEL_73;
  v14 = 4LL * (unsigned int)v13;
  v73 = v14;
  if ( v14 > 0xFFFFFFFF )
    goto LABEL_73;
  v64[0] = v14 + 32;
  if ( (int)v14 + 32 < (unsigned int)v14 )
    goto LABEL_73;
  v15 = Win32AllocPoolZInit((unsigned int)(v14 + 32), 1129607282LL);
  v16 = 0;
  v72 = v15;
  v17 = v15;
  if ( !v15 )
  {
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 794);
LABEL_73:
    v6 = 0;
    goto LABEL_74;
  }
  v18 = (unsigned __int8 *)(v15 + 32);
  *(struct tagSIZE *)v15 = v10;
  v60 = (unsigned __int8 *)(v15 + 32);
  LOBYTE(v58) = 0;
  *(_DWORD *)(v15 + 8) = *(__int16 *)(a2 + 4);
  v19 = v71;
  *(_DWORD *)(v15 + 12) = *(__int16 *)(a2 + 6);
  *(_DWORD *)(v15 + 24) = a3;
  *(_DWORD *)(v15 + 28) = a4;
  *(_DWORD *)(v15 + 16) = 100;
  if ( v19 )
  {
    *(_BYTE *)(v4 + 75) = 1;
    CursorColorPixels = CursorApiRouter::GetCursorColorPixels((HSURF)v19, &v70, v13, (unsigned int *)v18);
    v21 = 0;
    if ( !CursorColorPixels )
      goto LABEL_73;
    v22 = &v18[v14];
    v56 = 0;
    v60 = v22;
    v57 = 1;
    v23 = 1;
    v24 = v18;
    if ( v18 >= v22 )
    {
LABEL_46:
      v28 = v63;
LABEL_47:
      v31 = *(Gre::Base **)(a2 + 8);
      if ( v31 )
      {
        if ( !v28 )
        {
          v6 = CursorApiRouter::PatchArgbCursorWithMask(v31, v65, (unsigned int *)v18, v10, v21);
          if ( !v6 )
            goto LABEL_74;
        }
      }
      *(_DWORD *)(v17 + 20) = 0;
      if ( v56 && v18 < v22 )
      {
        v32 = (unsigned __int8 *)(v17 + 34);
        do
        {
          v33 = v32[1];
          v34 = *(v32 - 1);
          *v32 = v33 * (unsigned int)*v32 / 0xFF;
          v32 += 4;
          v35 = v33 * v34;
          v36 = *(v32 - 6);
          *(v32 - 5) = v35 / 0xFF;
          *(v32 - 6) = v33 * v36 / 0xFFu;
        }
        while ( v32 - 2 < v22 );
      }
      *(_BYTE *)(v4 + 76) = v58;
      *(_BYTE *)(v4 + 77) = v57;
      *(_BYTE *)(v4 + 78) = v56;
      *(_BYTE *)(v4 + 79) = v21;
    }
    else
    {
      v25 = v58;
      do
      {
        v26 = *(_DWORD *)v24;
        if ( *(_DWORD *)v24 == 0xFFFFFF )
        {
          LOBYTE(v58) = 1;
          v25 = 1;
        }
        else if ( v26 == -16777216 || v26 == -1 )
        {
          v21 = 1;
        }
        else if ( v26 )
        {
          v57 = 0;
          v23 = 0;
          v27 = v26 & 0xFF000000;
          if ( v27 )
          {
            v21 = 1;
            if ( v27 != -16777216 )
            {
              v28 = v63;
              v22 = v60;
              if ( !v63 )
                v56 = 1;
              goto LABEL_47;
            }
          }
        }
        v24 += 4;
      }
      while ( v24 < v60 );
      LOBYTE(v58) = v25;
      v57 = v23;
      v56 = 0;
      if ( !v23 || (LOBYTE(v58) = v25, v57 = v23, v56 = 0, !v25) )
      {
        v22 = v60;
        goto LABEL_46;
      }
      v29 = v60;
      *(_DWORD *)(v17 + 20) = 1;
      do
      {
        v30 = *(_DWORD *)v18;
        if ( *(_DWORD *)v18 )
        {
          switch ( v30 )
          {
            case 0xFFFFFFu:
              *(_DWORD *)v18 = -1;
              break;
            case 0xFF000000:
              *(_DWORD *)v18 = 0;
              break;
            case 0xFFFFFFFF:
              *(_DWORD *)v18 = 0xFFFFFF;
              break;
            default:
              MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 904);
              break;
          }
        }
        else
        {
          *(_DWORD *)v18 = -16777216;
        }
        v18 += 4;
      }
      while ( v18 < v29 );
      v4 = a1;
      v6 = v59;
    }
  }
  else
  {
    cy = v61.cy;
    v38 = v62;
    v39 = 0;
    v40 = ((v10.cx + 15) >> 3) & 0xFFFFFFFE;
    *(_BYTE *)(v4 + 75) = 0;
    *(_DWORD *)(v15 + 20) = 1;
    v41 = (char *)&v38[cy * v40];
    if ( cy <= 0 )
      goto LABEL_69;
    v42 = v58;
    v43 = (int *)(v15 + 32);
    v44 = v40;
    v65 = v40;
    do
    {
      v58 = 0;
      v45 = 0;
      v46 = (char *)v38;
      v47 = v41;
      v48 = 0;
      if ( v10.cx > 0 )
      {
        do
        {
          if ( !v45 )
          {
            v48 = *v46;
            v45 = 8;
            v16 = *v47;
            ++v46;
            ++v47;
          }
          v49 = v48;
          v77 = v16;
          v48 *= 2;
          v16 *= 2;
          --v45;
          if ( v49 >= 0 )
          {
            v50 = (v77 >> 31) & 0xFFFFFF;
          }
          else
          {
            if ( v77 < 0 )
              v42 = 1;
            v50 = ((v77 >> 31) & 0xFFFFFF) - 0x1000000;
          }
          *v43++ = v50;
          ++v58;
        }
        while ( (int)v58 < v10.cx );
        v18 = v60;
        v44 = v65;
      }
      v38 += v44;
      v41 += v44;
      ++v39;
      v16 = 0;
    }
    while ( v39 < cy );
    v4 = a1;
    v17 = v72;
    v51 = v42 == 0;
    v6 = v59;
    v14 = v73;
    if ( v51 )
    {
LABEL_69:
      for ( i = &v18[v14]; v18 < i; v18 += 4 )
        *(_DWORD *)v18 ^= 0xFF000000;
      *(_DWORD *)(v17 + 20) = 0;
      *(_BYTE *)(v4 + 76) = 0;
    }
  }
  v53 = CursorApiRouter::StoreNewCursorShape(
          (CursorApiRouter *)v4,
          (struct _MIT_CURSOR_MANAGEMENT_SHAPEHEADER *)v17,
          v64[0]);
  *(_OWORD *)(v4 + 80) = *(_OWORD *)v17;
  v54 = *(_OWORD *)(v17 + 16);
  HIDWORD(v74[0]) = v53;
  DWORD2(v74[0]) = 1;
  *(_OWORD *)(v4 + 96) = v54;
  SendShape(v74);
  *(_QWORD *)(v4 + 112) = *((_QWORD *)&v74[0] + 1);
LABEL_74:
  v12 = v62;
LABEL_75:
  if ( v12 )
    Win32FreePool(v12);
LABEL_77:
  *(_BYTE *)(v4 + 120) = v6;
  return v6;
}
