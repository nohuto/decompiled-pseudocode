/*
 * XREFs of XmEvaluateAddressSpecifier @ 0x140461774
 * Callers:
 *     XmGroup2ByByte @ 0x140460B70 (XmGroup2ByByte.c)
 *     XmGroup45General @ 0x140460FD0 (XmGroup45General.c)
 *     XmGroup1Immediate @ 0x140461070 (XmGroup1Immediate.c)
 *     XmMoveGeneral @ 0x140461640 (XmMoveGeneral.c)
 *     XmGroup1General @ 0x1404616B0 (XmGroup1General.c)
 *     XmBitScanGeneral @ 0x140572290 (XmBitScanGeneral.c)
 *     XmEffectiveOffset @ 0x140572320 (XmEffectiveOffset.c)
 *     XmGeneralBitOffset @ 0x1405723A0 (XmGeneralBitOffset.c)
 *     XmGeneralRegister @ 0x140572450 (XmGeneralRegister.c)
 *     XmGroup2By1 @ 0x1405724D0 (XmGroup2By1.c)
 *     XmGroup2ByCL @ 0x140572530 (XmGroup2ByCL.c)
 *     XmGroup3General @ 0x140572590 (XmGroup3General.c)
 *     XmGroup7General @ 0x140572630 (XmGroup7General.c)
 *     XmGroup8BitOffset @ 0x140572690 (XmGroup8BitOffset.c)
 *     XmImulImmediate @ 0x1405727E0 (XmImulImmediate.c)
 *     XmLoadSegment @ 0x140572860 (XmLoadSegment.c)
 *     XmMoveImmediate @ 0x140572980 (XmMoveImmediate.c)
 *     XmMoveSegment @ 0x1405729D0 (XmMoveSegment.c)
 *     XmMoveXxGeneral @ 0x140572A40 (XmMoveXxGeneral.c)
 *     XmPopGeneral @ 0x140572AF0 (XmPopGeneral.c)
 *     XmSetccByte @ 0x140572C70 (XmSetccByte.c)
 *     XmShiftDouble @ 0x140572CB0 (XmShiftDouble.c)
 * Callees:
 *     XmGetWordImmediate @ 0x14046172C (XmGetWordImmediate.c)
 *     XmGetCodeByte @ 0x140461BC8 (XmGetCodeByte.c)
 *     x86BiosTranslateAddress @ 0x140461C10 (x86BiosTranslateAddress.c)
 *     XmGetRegisterAddress @ 0x140461CC8 (XmGetRegisterAddress.c)
 *     longjmp @ 0x1404F91E0 (longjmp.c)
 *     XmGetLongImmediate @ 0x140569D80 (XmGetLongImmediate.c)
 *     XmEvaluateIndexSpecifier @ 0x140574AC8 (XmEvaluateIndexSpecifier.c)
 */

__int64 __fastcall XmEvaluateAddressSpecifier(__int64 a1, int *a2)
{
  unsigned int v3; // esi
  unsigned __int8 CodeByte; // al
  unsigned int v6; // ecx
  unsigned int v7; // edx
  unsigned int v8; // edx
  unsigned int v9; // edx
  unsigned int v10; // edx
  unsigned int v11; // edx
  unsigned int v12; // edx
  __int64 result; // rax
  unsigned int v14; // edx
  unsigned int v15; // edx
  unsigned int v16; // edx
  unsigned int v17; // edx
  unsigned int v18; // edx
  unsigned int v19; // edx
  unsigned int v20; // edx
  unsigned int v21; // edx
  unsigned int v22; // edx
  unsigned int v23; // edx
  unsigned int v24; // edx
  unsigned int v25; // edx
  __int16 v26; // ax
  unsigned int v27; // edx
  unsigned int v28; // edx
  unsigned int v29; // edx
  unsigned int v30; // edx
  unsigned int v31; // edx
  unsigned int v32; // edx
  unsigned int v33; // eax
  int v34; // esi
  unsigned int v35; // edx
  unsigned int v36; // edx
  unsigned int v37; // edx
  unsigned int v38; // edx
  unsigned int v39; // edx
  unsigned int v40; // edx
  int LongImmediate; // esi
  int v42; // esi
  int v43; // esi
  int v44; // esi
  int v45; // esi
  int v46; // esi
  unsigned int v47; // edx
  unsigned int v48; // edx
  unsigned int v49; // edx
  unsigned int v50; // edx
  unsigned int v51; // edx
  unsigned int v52; // edx
  unsigned __int16 WordImmediate; // ax
  __int16 v54; // cx
  unsigned __int16 v55; // cx
  char v56; // al
  __int16 v57; // cx
  __int16 v58; // ax
  __int16 v59; // cx
  unsigned __int16 v60; // cx
  char v61; // al
  __int16 v62; // cx
  unsigned int v63; // edx
  unsigned int v64; // edx
  unsigned int v65; // edx
  unsigned int v66; // edx
  unsigned int v67; // edx
  unsigned int v68; // edx
  __int64 v69; // r8
  unsigned int v70; // edx

  v3 = 0;
  CodeByte = XmGetCodeByte(a1);
  *(_BYTE *)(a1 + 142) = 0;
  v6 = CodeByte >> 6;
  *a2 = (CodeByte >> 3) & 7;
  v7 = CodeByte & 7 | (8 * v6);
  if ( *(_BYTE *)(a1 + 137) )
  {
    if ( v7 > 0x10 )
    {
      if ( v7 > 0x18 )
        goto LABEL_4;
      if ( v7 == 24 )
        goto LABEL_10;
      v14 = v7 - 17;
      if ( v14 )
      {
        v15 = v14 - 1;
        if ( v15 )
        {
          v16 = v15 - 1;
          if ( v16 )
          {
            v17 = v16 - 1;
            if ( v17 )
            {
              v18 = v17 - 1;
              if ( v18 )
              {
                v19 = v18 - 1;
                if ( v19 )
                {
                  if ( v19 != 1 )
                    goto LABEL_21;
                  LongImmediate = XmGetLongImmediate(a1);
LABEL_66:
                  v3 = *(_DWORD *)(a1 + 52) + LongImmediate;
                  goto LABEL_21;
                }
                v42 = XmGetLongImmediate(a1);
                goto LABEL_69;
              }
              v43 = XmGetLongImmediate(a1);
              goto LABEL_72;
            }
            goto LABEL_48;
          }
          v44 = XmGetLongImmediate(a1);
LABEL_75:
          v3 = *(_DWORD *)(a1 + 36) + v44;
          goto LABEL_21;
        }
        v45 = XmGetLongImmediate(a1);
        goto LABEL_78;
      }
      v46 = XmGetLongImmediate(a1);
      goto LABEL_81;
    }
    if ( v7 == 16 )
    {
      v34 = XmGetLongImmediate(a1);
    }
    else
    {
      if ( v7 > 8 )
      {
        v35 = v7 - 9;
        if ( v35 )
        {
          v36 = v35 - 1;
          if ( v36 )
          {
            v37 = v36 - 1;
            if ( v37 )
            {
              v38 = v37 - 1;
              if ( v38 )
              {
                v39 = v38 - 1;
                if ( v39 )
                {
                  v40 = v39 - 1;
                  if ( v40 )
                  {
                    if ( v40 != 1 )
                      goto LABEL_21;
                    LongImmediate = (char)XmGetCodeByte(a1);
                    goto LABEL_66;
                  }
                  v42 = (char)XmGetCodeByte(a1);
LABEL_69:
                  v3 = *(_DWORD *)(a1 + 48) + v42;
                  goto LABEL_21;
                }
                v43 = (char)XmGetCodeByte(a1);
LABEL_72:
                v3 = *(_DWORD *)(a1 + 44) + v43;
                goto LABEL_106;
              }
              goto LABEL_48;
            }
            v44 = (char)XmGetCodeByte(a1);
            goto LABEL_75;
          }
          v45 = (char)XmGetCodeByte(a1);
LABEL_78:
          v3 = *(_DWORD *)(a1 + 32) + v45;
          goto LABEL_21;
        }
        v46 = (char)XmGetCodeByte(a1);
LABEL_81:
        v3 = *(_DWORD *)(a1 + 28) + v46;
        goto LABEL_21;
      }
      if ( v7 != 8 )
      {
        if ( !v7 )
        {
          v3 = *(_DWORD *)(a1 + 24);
          goto LABEL_21;
        }
        v27 = v7 - 1;
        if ( !v27 )
        {
          v3 = *(_DWORD *)(a1 + 28);
          goto LABEL_21;
        }
        v28 = v27 - 1;
        if ( !v28 )
        {
          v3 = *(_DWORD *)(a1 + 32);
          goto LABEL_21;
        }
        v29 = v28 - 1;
        if ( !v29 )
        {
          v3 = *(_DWORD *)(a1 + 36);
          goto LABEL_21;
        }
        v30 = v29 - 1;
        if ( v30 )
        {
          v31 = v30 - 1;
          if ( v31 )
          {
            v32 = v31 - 1;
            if ( v32 )
            {
              if ( v32 == 1 )
                v3 = *(_DWORD *)(a1 + 52);
            }
            else
            {
              v3 = *(_DWORD *)(a1 + 48);
            }
            goto LABEL_21;
          }
          v33 = XmGetLongImmediate(a1);
          goto LABEL_49;
        }
LABEL_48:
        v33 = XmEvaluateIndexSpecifier(a1, v6);
LABEL_49:
        v3 = v33;
        goto LABEL_21;
      }
      v34 = (char)XmGetCodeByte(a1);
    }
    v3 = *(_DWORD *)(a1 + 24) + v34;
    goto LABEL_21;
  }
  if ( v7 <= 0x10 )
  {
    if ( v7 == 16 )
    {
      v26 = *(_WORD *)(a1 + 48) + XmGetWordImmediate(a1);
      goto LABEL_132;
    }
    if ( v7 > 8 )
    {
      v63 = v7 - 9;
      if ( v63 )
      {
        v64 = v63 - 1;
        if ( v64 )
        {
          v65 = v64 - 1;
          if ( v65 )
          {
            v66 = v65 - 1;
            if ( !v66 )
            {
              v60 = *(_WORD *)(a1 + 48) + (char)XmGetCodeByte(a1);
              goto LABEL_112;
            }
            v67 = v66 - 1;
            if ( !v67 )
            {
              v60 = *(_WORD *)(a1 + 52) + (char)XmGetCodeByte(a1);
              goto LABEL_112;
            }
            v68 = v67 - 1;
            if ( !v68 )
            {
              v54 = (char)XmGetCodeByte(a1);
LABEL_100:
              v55 = *(_WORD *)(a1 + 44) + v54;
LABEL_103:
              v3 = v55;
              goto LABEL_106;
            }
            if ( v68 != 1 )
              goto LABEL_21;
            v59 = (char)XmGetCodeByte(a1);
LABEL_110:
            v60 = *(_WORD *)(a1 + 36) + v59;
LABEL_112:
            v3 = v60;
            goto LABEL_21;
          }
          v56 = XmGetCodeByte(a1);
          v57 = *(_WORD *)(a1 + 52);
        }
        else
        {
          v56 = XmGetCodeByte(a1);
          v57 = *(_WORD *)(a1 + 48);
        }
        v55 = v56 + *(_WORD *)(a1 + 44) + v57;
        goto LABEL_103;
      }
      v61 = XmGetCodeByte(a1);
      v62 = *(_WORD *)(a1 + 52);
    }
    else
    {
      if ( v7 != 8 )
      {
        if ( v7 )
        {
          v47 = v7 - 1;
          if ( v47 )
          {
            v48 = v47 - 1;
            if ( v48 )
            {
              v49 = v48 - 1;
              if ( v49 )
              {
                v50 = v49 - 1;
                if ( !v50 )
                {
                  v3 = *(unsigned __int16 *)(a1 + 48);
                  goto LABEL_21;
                }
                v51 = v50 - 1;
                if ( !v51 )
                {
                  v3 = *(unsigned __int16 *)(a1 + 52);
                  goto LABEL_21;
                }
                v52 = v51 - 1;
                if ( v52 )
                {
                  if ( v52 == 1 )
                    v3 = *(unsigned __int16 *)(a1 + 36);
                  goto LABEL_21;
                }
                WordImmediate = XmGetWordImmediate(a1);
                goto LABEL_133;
              }
              v54 = *(_WORD *)(a1 + 52);
            }
            else
            {
              v54 = *(_WORD *)(a1 + 48);
            }
            goto LABEL_100;
          }
          v59 = *(_WORD *)(a1 + 52);
        }
        else
        {
          v59 = *(_WORD *)(a1 + 48);
        }
        goto LABEL_110;
      }
      v61 = XmGetCodeByte(a1);
      v62 = *(_WORD *)(a1 + 48);
    }
    v60 = v61 + *(_WORD *)(a1 + 36) + v62;
    goto LABEL_112;
  }
  if ( v7 <= 0x18 )
  {
    if ( v7 != 24 )
    {
      v20 = v7 - 17;
      if ( v20 )
      {
        v21 = v20 - 1;
        if ( v21 )
        {
          v22 = v21 - 1;
          if ( v22 )
          {
            v23 = v22 - 1;
            if ( v23 )
            {
              v24 = v23 - 1;
              if ( v24 )
              {
                v25 = v24 - 1;
                if ( v25 )
                {
                  if ( v25 != 1 )
                    goto LABEL_21;
                  v26 = XmGetWordImmediate(a1);
                  goto LABEL_132;
                }
                v58 = XmGetWordImmediate(a1);
                goto LABEL_105;
              }
              WordImmediate = *(_WORD *)(a1 + 52) + XmGetWordImmediate(a1);
            }
            else
            {
              WordImmediate = *(_WORD *)(a1 + 48) + XmGetWordImmediate(a1);
            }
LABEL_133:
            v3 = WordImmediate;
            goto LABEL_21;
          }
          v58 = *(_WORD *)(a1 + 52) + XmGetWordImmediate(a1);
        }
        else
        {
          v58 = *(_WORD *)(a1 + 48) + XmGetWordImmediate(a1);
        }
LABEL_105:
        v3 = (unsigned __int16)(*(_WORD *)(a1 + 44) + v58);
LABEL_106:
        if ( !*(_BYTE *)(a1 + 140) )
          *(_DWORD *)(a1 + 116) = 2;
        goto LABEL_21;
      }
      v26 = *(_WORD *)(a1 + 52) + XmGetWordImmediate(a1);
LABEL_132:
      WordImmediate = *(_WORD *)(a1 + 36) + v26;
      goto LABEL_133;
    }
LABEL_10:
    *(_BYTE *)(a1 + 142) = 1;
    return XmGetRegisterAddress(a1, CodeByte & 7);
  }
LABEL_4:
  v8 = v7 - 25;
  if ( !v8 )
    goto LABEL_10;
  v9 = v8 - 1;
  if ( !v9 )
    goto LABEL_10;
  v10 = v9 - 1;
  if ( !v10 )
    goto LABEL_10;
  v11 = v10 - 1;
  if ( !v11 )
    goto LABEL_10;
  v12 = v11 - 1;
  if ( !v12 || v12 - 1 <= 1 )
    goto LABEL_10;
LABEL_21:
  if ( *(_BYTE *)(a1 + 143) )
  {
    result = (unsigned __int16)v3;
    if ( *(_DWORD *)(a1 + 120) != 1 )
      result = v3;
    *(_DWORD *)(a1 + 128) = result;
  }
  else
  {
    v69 = *(unsigned int *)(a1 + 116);
    v70 = *(unsigned __int16 *)(a1 + 2 * v69 + 68);
    if ( v3 > v70 || v3 + *(_DWORD *)(a1 + 120) > v70 )
      longjmp((_JBTYPE *)(a1 + 160), 14);
    *(_DWORD *)(a1 + 128) = v3;
    return x86BiosTranslateAddress(*(unsigned __int16 *)(a1 + 2 * v69 + 56), (unsigned __int16)v3);
  }
  return result;
}
