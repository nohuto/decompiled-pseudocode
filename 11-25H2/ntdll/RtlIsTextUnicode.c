/*
 * XREFs of RtlIsTextUnicode @ 0x1800CE220
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOLEAN __cdecl RtlIsTextUnicode(PVOID Buffer, ULONG Size, PULONG Result)
{
  int v4; // eax
  ULONG v5; // edx
  int v6; // ebx
  int v8; // r8d
  signed __int32 v9; // edi
  int v10; // r13d
  int v11; // r12d
  int v12; // r15d
  int v13; // ebp
  int v14; // esi
  int v15; // r11d
  int v16; // r14d
  _WORD *v17; // rcx
  _WORD *v18; // r9
  unsigned int v19; // eax
  unsigned int v20; // edx
  unsigned int v21; // r8d
  unsigned int v22; // eax
  unsigned int v23; // ecx
  unsigned int v24; // eax
  unsigned int v25; // eax
  unsigned int v26; // ecx
  unsigned int v27; // eax
  bool v28; // zf
  unsigned int v29; // ecx
  int v30; // edi
  ULONG v31; // ecx
  ULONG v32; // r9d
  bool v33; // al
  unsigned int v34; // r10d
  int v35; // edx
  unsigned __int64 v36; // rax
  unsigned int v37; // ecx
  int v38; // r10d
  int v39; // ecx
  int v40; // edx
  int v41; // ecx
  int v42; // r8d
  int v43; // ecx
  int v44; // eax
  ULONG v45; // ecx
  unsigned int v47; // r8d
  unsigned int v48; // eax
  __int16 v49; // dx
  unsigned int v50; // eax
  signed __int32 v51; // [rsp+0h] [rbp-D8h] BYREF
  unsigned int v52; // [rsp+4h] [rbp-D4h]
  int v53; // [rsp+8h] [rbp-D0h]
  int v54; // [rsp+Ch] [rbp-CCh]
  int v55; // [rsp+10h] [rbp-C8h]
  unsigned int v56; // [rsp+14h] [rbp-C4h]
  unsigned int v57; // [rsp+18h] [rbp-C0h]
  signed __int32 v58; // [rsp+1Ch] [rbp-BCh]
  int v59; // [rsp+20h] [rbp-B8h]
  int v60; // [rsp+24h] [rbp-B4h]
  int v61; // [rsp+28h] [rbp-B0h]
  int v62; // [rsp+2Ch] [rbp-ACh]
  unsigned int v63; // [rsp+30h] [rbp-A8h]
  int v64; // [rsp+34h] [rbp-A4h]
  unsigned int v65; // [rsp+38h] [rbp-A0h]
  int v66; // [rsp+3Ch] [rbp-9Ch]
  int v67; // [rsp+40h] [rbp-98h]
  int v68; // [rsp+44h] [rbp-94h]
  int v69; // [rsp+48h] [rbp-90h]
  int v70; // [rsp+4Ch] [rbp-8Ch]
  int v71; // [rsp+50h] [rbp-88h]
  unsigned int v72; // [rsp+54h] [rbp-84h]
  unsigned int v73; // [rsp+58h] [rbp-80h]
  unsigned int v74; // [rsp+5Ch] [rbp-7Ch]
  unsigned int v75; // [rsp+60h] [rbp-78h]
  int v76; // [rsp+64h] [rbp-74h]
  unsigned int v77; // [rsp+68h] [rbp-70h]
  int v78; // [rsp+6Ch] [rbp-6Ch]
  int v79; // [rsp+70h] [rbp-68h]
  __int64 v80; // [rsp+78h] [rbp-60h]
  __int64 v81; // [rsp+80h] [rbp-58h]
  bool v85; // [rsp+F8h] [rbp+20h]

  v66 = 0;
  v4 = 0;
  v58 = 0;
  v67 = 0;
  v5 = Size >> 1;
  v6 = 0;
  v75 = v5;
  v59 = 0;
  if ( v5 > 0x100 )
    v5 = 256;
  v64 = 0;
  v8 = 0;
  v55 = 0;
  v9 = 0;
  v54 = 0;
  v10 = 0;
  v69 = 0;
  v11 = 0;
  v70 = 0;
  v12 = 0;
  v60 = 0;
  v13 = 0;
  v61 = 0;
  v14 = 0;
  v53 = 0;
  v62 = 0;
  v15 = 0;
  v68 = 0;
  v63 = 0;
  v56 = 0;
  v57 = 0;
  v65 = 0;
  v74 = 0;
  v52 = 0;
  v71 = 0;
  v85 = 0;
  v81 = 0LL;
  _InterlockedOr(&v51, 0);
  v16 = 0;
  if ( GlobalRtlNlsState.CodePage != 0xFDE9 )
  {
    v16 = 0;
    if ( CodePageTable.CodePage != 0xFDE9 )
    {
      _InterlockedOr(&v51, 0);
      v81 = qword_1801CF020;
      v12 = 0;
      v85 = GlobalRtlNlsState.DBCSCodePage != 0;
    }
  }
  if ( !v5 )
    goto LABEL_94;
  if ( Size != 2 )
  {
    if ( Size > 2 && v75 <= 0x100 && (Size & 1) == 0 )
    {
      v11 = 0;
      if ( (*((_WORD *)Buffer + v5 - 1) & 0xFF00) == 0 )
        --v5;
    }
    v17 = Buffer;
    goto LABEL_10;
  }
  v17 = Buffer;
  if ( *(_WORD *)Buffer )
  {
    if ( !HIBYTE(*(_WORD *)Buffer) )
    {
LABEL_94:
      if ( Result )
        *Result = 5;
      return 0;
    }
  }
  v4 = 0;
LABEL_10:
  if ( !v5 )
    goto LABEL_41;
  v18 = v17;
  v80 = v5;
  while ( 1 )
  {
    v19 = (unsigned __int16)*v18;
    if ( v19 > 0xD00 )
    {
      if ( v19 <= 0x3000 )
      {
        if ( v19 == 12288 )
        {
          v64 = ++v11;
        }
        else if ( v19 == 0x2000 )
        {
          ++v61;
        }
      }
      else if ( v19 != 65279 )
      {
        if ( v19 == 65534 )
        {
          v54 = ++v16;
        }
        else if ( v19 == 0xFFFF )
        {
          v55 = ++v12;
        }
      }
    }
    else if ( v19 == 3328 )
    {
      v69 = ++v13;
    }
    else if ( v19 > 0x20 )
    {
      switch ( v19 )
      {
        case 0x900u:
          ++v60;
          break;
        case 0xA00u:
          v70 = ++v14;
          break;
        case 0xA0Du:
          v68 = ++v15;
          break;
      }
    }
    else if ( v19 == 32 )
    {
      v67 = ++v10;
    }
    else if ( *v18 )
    {
      switch ( v19 )
      {
        case 9u:
          v58 = v9 + 1;
          break;
        case 0xAu:
          v66 = ++v8;
          break;
        case 0xDu:
          v59 = v6 + 1;
          break;
      }
    }
    else
    {
      ++v62;
    }
    v20 = *(unsigned __int8 *)v18;
    v79 = v8;
    v21 = v19 >> 8;
    v51 = v58;
    v78 = v59;
    if ( v20 == 13 )
    {
      if ( v56 != 10 )
        goto LABEL_29;
    }
    else if ( v20 != 10 || v56 != 13 )
    {
LABEL_29:
      v22 = v52;
      goto LABEL_30;
    }
    v22 = ++v52;
LABEL_30:
    v77 = v22;
    v23 = v56;
    v53 += (v20 == 0) + (v21 == 0);
    v76 = v53;
    v24 = v21;
    if ( v21 > v56 )
    {
      v24 = v56;
      v23 = v21;
    }
    v56 = v21;
    v8 = v66;
    v25 = v23 - v24 + v57;
    v26 = v63;
    v57 = v25;
    v72 = v25;
    if ( v20 > v63 )
      v26 = v20;
    v27 = v20;
    if ( v20 > v63 )
      v27 = v63;
    ++v18;
    v63 = v20;
    v28 = v80-- == 1;
    v65 += v26 - v27;
    v73 = v65;
    if ( v28 )
      break;
    v10 = v67;
    v15 = v68;
    v6 = v59;
    v9 = v58;
    v11 = v64;
    v12 = v55;
    v16 = v54;
    v13 = v69;
    v14 = v70;
  }
  v53 = v76;
  v57 = v72;
  v65 = v73;
  v52 = v77;
  v63 = v56;
  v59 = v78;
  v66 = v79;
  v58 = v51;
  v55 = v12;
  v54 = v16;
  if ( v20 == 13 )
  {
    v57 = v72;
    v65 = v73;
    v59 = v78;
    v66 = v79;
    v58 = v51;
    v55 = v12;
    v54 = v16;
    v53 = v76;
    if ( v56 == 10 )
    {
      v29 = v77;
      goto LABEL_104;
    }
    v58 = v51;
    v63 = v56;
    v66 = v79;
    v29 = v77;
    v57 = v72;
    v65 = v73;
    v59 = v78;
    v55 = v12;
    v54 = v16;
    v53 = v76;
    v52 = v77;
  }
  else
  {
    if ( v20 != 10 )
    {
      v29 = v52;
      goto LABEL_40;
    }
    v58 = v51;
    v66 = v79;
    v29 = v52;
    v59 = v78;
    v55 = v12;
    v54 = v16;
    v63 = v56;
    if ( v56 == 13 )
LABEL_104:
      v52 = ++v29;
  }
LABEL_40:
  v4 = v53;
  if ( v63 )
  {
    v30 = v53;
    if ( v63 == 26 )
      v52 = v29 + 1;
  }
  else
  {
LABEL_41:
    v30 = v4 - 1;
  }
  v31 = Size;
  v32 = 512;
  v33 = v85;
  if ( Size <= 0x200 )
    v32 = Size;
  if ( v85 )
  {
    v47 = 0;
    v34 = v74;
    if ( v32 )
    {
      do
      {
        v48 = v34 + 1;
        v49 = *(_WORD *)(v81 + 2LL * *((unsigned __int8 *)Buffer + v47));
        if ( !v49 )
          v48 = v34;
        v34 = v48;
        v50 = v47 + 1;
        if ( !v49 )
          v50 = v47;
        v47 = v50 + 1;
      }
      while ( v50 + 1 < v32 );
      v12 = v55;
      v16 = v54;
      v31 = Size;
      v33 = v85;
    }
  }
  else
  {
    v34 = v74;
  }
  if ( v65 < 0x7F )
  {
    if ( v57 )
    {
LABEL_48:
      if ( v65 )
        goto LABEL_105;
      v35 = 16;
      v71 = 16;
    }
    else
    {
      v35 = 1;
      v71 = 1;
    }
  }
  else
  {
    if ( v57 )
      goto LABEL_48;
LABEL_105:
    v35 = v71;
  }
  if ( v33 && v34 && Result && (*Result & 0x400) != 0 )
  {
    if ( v75 <= 0x100 )
      v36 = (unsigned __int64)v31 >> 1;
    else
      v36 = 256LL;
    v37 = (v36 >> 1) - 1;
    if ( v34 < v37 / 3 )
      v38 = 3;
    else
      v38 = (v34 < 2 * v37 / 3) + 1;
    v35 = v71 | 0x400;
  }
  else
  {
    v38 = 3;
  }
  v39 = v35 | 2;
  if ( v38 * v57 >= v65 )
    v39 = v35;
  v40 = v39 | 0x20;
  if ( v38 * v65 >= v57 )
    v40 = v39;
  v41 = v40 | 4;
  if ( !(v59 + v66 + v58 + v11 + v10) )
    v41 = v40;
  v42 = v41 | 0x40;
  if ( !(v13 + v14 + v61 + v60) )
    v42 = v41;
  if ( v12 + v16 + v15 + v62 || (v43 = v42, v52) && v52 >= v32 / 0x28 )
    v43 = v42 | 0x100;
  v44 = v43 | 0x200;
  if ( (Size & 1) == 0 )
    v44 = v43;
  v45 = v44 | 0x1000;
  if ( !v30 )
    v45 = v44;
  if ( *(_WORD *)Buffer == 0xFEFF )
  {
    v45 |= 8u;
  }
  else if ( *(_WORD *)Buffer == 0xFFFE )
  {
    v45 |= 0x80u;
  }
  if ( Result )
  {
    *Result &= v45;
    v45 = *Result;
  }
  return (v45 & 0xB08) == 8 || (v45 & 0xF0) == 0 && (v45 & 0xF00) == 0 && (v45 & 0xF00F) != 0;
}
