/*
 * XREFs of NvmeMapStatus @ 0x1400FB1BC
 * Callers:
 *     NvmeNamespaceCompleteNvmRequest @ 0x1400FC810 (NvmeNamespaceCompleteNvmRequest.c)
 * Callees:
 *     SetSrbSenseData @ 0x140117490 (SetSrbSenseData.c)
 */

__int64 __fastcall NvmeMapStatus(__int64 a1)
{
  char v1; // bl
  unsigned int v3; // r8d
  unsigned int i; // edx
  __int64 v5; // rcx
  __int64 v6; // r10
  unsigned int v7; // r10d
  __int16 v8; // ax
  char v9; // r9
  unsigned int v10; // ecx
  unsigned int v11; // ecx
  unsigned int v12; // ecx
  unsigned int v13; // ecx
  unsigned int v14; // ecx
  unsigned int v15; // ecx
  char v16; // dl
  char v17; // r8
  unsigned int v18; // ecx
  unsigned int v19; // ecx
  unsigned int v20; // ecx
  unsigned int v21; // ecx
  unsigned int v22; // ecx
  unsigned int v23; // ecx
  unsigned int v24; // ecx
  unsigned int v25; // ecx
  unsigned int v26; // ecx
  unsigned int v27; // ecx
  unsigned int v28; // ecx
  unsigned int v29; // ecx
  unsigned int v30; // ecx
  unsigned int v31; // ecx
  unsigned int v32; // ecx
  unsigned int v33; // ecx
  unsigned int v34; // ecx
  unsigned int v35; // ecx
  unsigned int v36; // r10d
  int v37; // ecx
  char v38; // al
  unsigned int v39; // r10d
  char v40; // al

  v1 = 0;
  if ( *(_BYTE *)(a1 + 2) == 40 )
  {
    v3 = *(_DWORD *)(a1 + 56);
    if ( v3 )
    {
      for ( i = 0; i < v3; ++i )
      {
        v5 = *(unsigned int *)(a1 + 4LL * i + 120);
        if ( (unsigned int)v5 >= 0x80 && (unsigned int)v5 < *(_DWORD *)(a1 + 16) )
        {
          v6 = a1 + v5;
          if ( *(_DWORD *)(a1 + v5) == 67 )
            goto LABEL_10;
        }
      }
    }
  }
  v6 = 0LL;
LABEL_10:
  v7 = *(unsigned __int16 *)(v6 + 86);
  v8 = v7 & 0xE00;
  if ( (v7 & 0xE00) != 0 )
  {
    if ( v8 == 512 )
    {
      v36 = v7 >> 1;
      if ( (unsigned __int8)v36 > 0x80u )
      {
        if ( (unsigned __int8)v36 == 129 )
          goto LABEL_108;
        v37 = (unsigned __int8)v36 - 130;
        if ( (unsigned __int8)v36 == 130 )
        {
          SetSrbSenseData(a1, 4, 7, 36, 0);
          goto LABEL_116;
        }
      }
      else
      {
        if ( (unsigned __int8)v36 == 128 )
          goto LABEL_108;
        if ( (unsigned __int8)v36 <= 0x11u )
        {
          if ( (unsigned __int8)v36 == 17 )
            goto LABEL_90;
          if ( (unsigned __int8)v36 <= 9u )
          {
            if ( (unsigned __int8)v36 == 9 )
              goto LABEL_108;
            if ( !(_BYTE)v36 )
              goto LABEL_81;
            switch ( (unsigned __int8)v36 )
            {
              case 1u:
                v38 = 38;
                goto LABEL_109;
              case 2u:
              case 3u:
              case 5u:
LABEL_81:
                v38 = 0;
LABEL_109:
                v17 = 5;
                goto LABEL_110;
              case 6u:
                goto LABEL_108;
            }
            v37 = (unsigned __int8)v36 - 7;
            if ( (unsigned __int8)v36 == 7 )
              goto LABEL_81;
            goto LABEL_113;
          }
          switch ( (unsigned __int8)v36 )
          {
            case 0xAu:
              v38 = 49;
              v1 = 1;
              goto LABEL_109;
            case 0xBu:
              goto LABEL_90;
            case 0xCu:
            case 0xDu:
            case 0xEu:
            case 0xFu:
              goto LABEL_108;
            case 0x10u:
LABEL_90:
              v17 = 6;
LABEL_91:
              v38 = 0;
LABEL_110:
              v9 = v38;
              goto LABEL_138;
          }
LABEL_116:
          v17 = 0;
          goto LABEL_91;
        }
        if ( (unsigned __int8)v36 <= 0x1Au )
        {
          if ( (unsigned __int8)v36 != 26 && (unsigned __int8)v36 != 18 )
          {
            if ( (unsigned __int8)v36 != 19
              && (unsigned __int8)v36 != 20
              && (unsigned __int8)v36 != 21
              && (unsigned __int8)v36 != 22 )
            {
              if ( (unsigned int)(unsigned __int8)v36 - 24 <= 1 )
                goto LABEL_81;
              goto LABEL_116;
            }
            goto LABEL_108;
          }
          goto LABEL_90;
        }
        switch ( (unsigned __int8)v36 )
        {
          case 0x1Bu:
            goto LABEL_108;
          case 0x1Cu:
            goto LABEL_108;
          case 0x1Eu:
            goto LABEL_108;
          case 0x1Fu:
            goto LABEL_108;
          case 0x20u:
            goto LABEL_108;
        }
        v37 = (unsigned __int8)v36 - 33;
        if ( (unsigned __int8)v36 == 33 )
          goto LABEL_108;
      }
LABEL_113:
      if ( v37 != 1 )
        goto LABEL_116;
LABEL_108:
      v38 = 36;
      goto LABEL_109;
    }
    if ( v8 != 1024 )
      goto LABEL_136;
    v39 = v7 >> 1;
    switch ( (unsigned __int8)v39 )
    {
      case 0x80u:
        v9 = 3;
        break;
      case 0x81u:
        v40 = 3;
        v9 = 17;
        goto LABEL_135;
      case 0x82u:
        v40 = 3;
        v9 = 16;
        v1 = 1;
        goto LABEL_135;
      case 0x83u:
        v40 = 3;
        v9 = 16;
        goto LABEL_130;
      case 0x84u:
        v9 = 16;
        v1 = 3;
        break;
      case 0x85u:
        v40 = 14;
        v9 = 29;
        goto LABEL_135;
      case 0x86u:
        v40 = 7;
        v9 = 32;
LABEL_130:
        v1 = 2;
        goto LABEL_135;
      default:
        v40 = 0;
        v9 = 0;
LABEL_135:
        v17 = v40;
        goto LABEL_138;
    }
    v40 = 3;
    goto LABEL_135;
  }
  v9 = 35;
  v10 = (unsigned __int8)(v7 >> 1);
  if ( v10 > 0x23 )
  {
    v34 = v10 - 128;
    if ( !v34 )
    {
      v17 = 5;
      v9 = 33;
      goto LABEL_138;
    }
    v35 = v34 - 1;
    if ( v35 )
    {
      if ( v35 == 1 )
      {
        v16 = 4;
        v17 = 2;
        v1 = (v7 & 0x8000u) == 0;
        v9 = 4;
        return SetSrbSenseData(a1, v16, v17, v9, v1);
      }
      goto LABEL_136;
    }
LABEL_26:
    v17 = 3;
LABEL_137:
    v9 = 0;
    goto LABEL_138;
  }
  if ( (unsigned __int8)(v7 >> 1) == 35 )
  {
    v16 = 23;
    v17 = 5;
    v9 = 32;
    v1 = 2;
    return SetSrbSenseData(a1, v16, v17, v9, v1);
  }
  if ( v10 > 0xF )
  {
    v16 = 24;
    if ( v10 > 0x18 )
    {
      v29 = v10 - 25;
      if ( !v29 )
      {
        v17 = 5;
        v9 = 42;
        goto LABEL_138;
      }
      v30 = v29 - 1;
      if ( !v30 )
        goto LABEL_57;
      v31 = v30 - 1;
      if ( v31 )
      {
        v32 = v31 - 1;
        if ( v32 )
        {
          v33 = v32 - 1;
          if ( !v33 )
          {
            v9 = 4;
            v17 = 2;
            v1 = 4;
            return SetSrbSenseData(a1, v16, v17, v9, v1);
          }
          if ( v33 != 1 )
            goto LABEL_136;
          goto LABEL_57;
        }
        v16 = 4;
        v17 = 4;
LABEL_30:
        v9 = 0;
        return SetSrbSenseData(a1, v16, v17, v9, v1);
      }
LABEL_40:
      v17 = 11;
      goto LABEL_137;
    }
    if ( v10 == 24 )
      goto LABEL_57;
    v23 = v10 - 16;
    if ( v23 )
    {
      v24 = v23 - 1;
      if ( v24 )
      {
        v25 = v24 - 1;
        if ( v25 )
        {
          v26 = v25 - 1;
          if ( !v26 )
            goto LABEL_57;
          v27 = v26 - 1;
          if ( !v27 )
            goto LABEL_57;
          v28 = v27 - 1;
          if ( v28 )
          {
            if ( v28 != 1 )
              goto LABEL_136;
            goto LABEL_57;
          }
        }
LABEL_28:
        v17 = 5;
        v9 = 32;
        goto LABEL_138;
      }
    }
LABEL_37:
    v17 = 5;
    goto LABEL_137;
  }
  if ( v10 == 15 )
    goto LABEL_37;
  if ( v10 > 7 )
  {
    v18 = v10 - 8;
    if ( !v18 )
      goto LABEL_40;
    v19 = v18 - 1;
    if ( !v19 )
      goto LABEL_40;
    v20 = v19 - 1;
    if ( !v20 )
      goto LABEL_40;
    v21 = v20 - 1;
    if ( !v21 )
    {
      v17 = 5;
      v9 = 32;
      v1 = 9;
      goto LABEL_138;
    }
    v22 = v21 - 1;
    if ( !v22 )
    {
      v17 = 5;
      v9 = 44;
      goto LABEL_138;
    }
    if ( v22 - 1 > 1 )
      goto LABEL_136;
    goto LABEL_37;
  }
  if ( v10 == 7 )
    goto LABEL_40;
  if ( !(unsigned __int8)(v7 >> 1) )
  {
    v16 = 1;
    v17 = 0;
    goto LABEL_30;
  }
  v11 = v10 - 1;
  if ( !v11 )
    goto LABEL_28;
  v12 = v11 - 1;
  if ( !v12 )
  {
LABEL_57:
    v17 = 5;
    v9 = 36;
    goto LABEL_138;
  }
  v13 = v12 - 1;
  if ( !v13 )
  {
    v17 = 5;
    goto LABEL_138;
  }
  v14 = v13 - 1;
  if ( !v14 )
    goto LABEL_26;
  v15 = v14 - 1;
  if ( !v15 )
  {
    v17 = 11;
    v1 = 8;
    v9 = 11;
LABEL_138:
    v16 = 4;
    return SetSrbSenseData(a1, v16, v17, v9, v1);
  }
  if ( v15 != 1 )
  {
LABEL_136:
    v17 = 0;
    goto LABEL_137;
  }
  v16 = 4;
  v9 = 68;
  v17 = 4;
  return SetSrbSenseData(a1, v16, v17, v9, v1);
}
