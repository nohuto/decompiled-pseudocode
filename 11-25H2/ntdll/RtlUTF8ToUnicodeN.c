/*
 * XREFs of RtlUTF8ToUnicodeN @ 0x18004B290
 * Callers:
 *     LdrpLoadForwardedDll @ 0x18004A820 (LdrpLoadForwardedDll.c)
 *     LdrpAppendAnsiStringToFilenameBuffer @ 0x18004ADB0 (LdrpAppendAnsiStringToFilenameBuffer.c)
 *     RtlMultiByteToUnicodeN @ 0x18004AF70 (RtlMultiByteToUnicodeN.c)
 *     RtlCustomCPToUnicodeN @ 0x18004B120 (RtlCustomCPToUnicodeN.c)
 *     LdrpMapAndSnapDependency @ 0x18004B770 (LdrpMapAndSnapDependency.c)
 *     RtlAnsiStringToUnicodeString @ 0x18004BE00 (RtlAnsiStringToUnicodeString.c)
 *     LdrpSnapKernelBaseExtensions @ 0x180071520 (LdrpSnapKernelBaseExtensions.c)
 *     LdrpGenerateSnapsUnicodeStrings @ 0x18007B010 (LdrpGenerateSnapsUnicodeStrings.c)
 *     LdrpLogInternal @ 0x18007B390 (LdrpLogInternal.c)
 *     RtlMultiByteToUnicodeSize @ 0x1800AAA30 (RtlMultiByteToUnicodeSize.c)
 *     RtlAnsiCharToUnicodeChar @ 0x1800CA890 (RtlAnsiCharToUnicodeChar.c)
 *     RtlUTF8StringToUnicodeString @ 0x1800CEAB0 (RtlUTF8StringToUnicodeString.c)
 *     RtlxOemStringToUnicodeSize @ 0x1800D72C0 (RtlxOemStringToUnicodeSize.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlUTF8ToUnicodeN(_WORD *a1, unsigned int a2, _DWORD *a3, char *a4, unsigned int a5)
{
  _WORD *v5; // rax
  unsigned int v8; // r8d
  unsigned __int64 v9; // r14
  unsigned int v10; // edx
  char *v11; // r10
  char *v12; // rsi
  unsigned int v13; // edi
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // rcx
  _WORD *i; // rsi
  unsigned int v18; // edx
  unsigned int v19; // edi
  char v20; // di
  int v21; // edi
  char v22; // bp
  unsigned int v23; // edi
  __int16 v24; // di
  unsigned int v25; // edx
  unsigned int v26; // ecx
  unsigned int v27; // edx
  char v28; // dl
  int v29; // edi

  v5 = a1;
  v8 = 0;
  v9 = (unsigned __int64)&a1[(unsigned __int64)a2 >> 1];
  v10 = 0;
  v11 = &a4[a5];
  if ( !a4 )
    return 3221225714LL;
  if ( !a1 )
  {
    if ( a3 )
      return CountUTF8ToUnicode(a4, a5, a3);
    else
      return 3221225485LL;
  }
  while ( 1 )
  {
    while ( 1 )
    {
LABEL_3:
      v12 = a4;
      if ( a4 >= v11 )
      {
        if ( v10 )
        {
          v8 = 263;
          if ( (unsigned __int64)v5 >= v9 )
            v8 = -1073741789;
          else
            *v5++ = -3;
        }
LABEL_13:
        if ( a3 )
          *a3 = 2 * (v5 - a1);
        return v8;
      }
      v13 = *a4++;
      if ( v10 )
        break;
      LOWORD(v10) = v13;
      if ( v13 <= 0x7F )
        goto LABEL_6;
LABEL_56:
      if ( (v10 & 0x40) == 0 )
        goto LABEL_65;
      if ( (v10 & 0x20) != 0 )
      {
        v26 = v10 & 0xF;
        if ( (v10 & 0x10) != 0 )
        {
          if ( v26 > 4 )
            goto LABEL_65;
          v10 = v26 | 0x504D0C00;
        }
        else
        {
          v10 = v26 | 0x48228000;
        }
      }
      else
      {
        v27 = v10 & 0x1F;
        if ( v27 <= 1 )
          goto LABEL_65;
        v10 = v27 | 0x800000;
      }
    }
    if ( (v13 & 0xC0) != 0x80 )
    {
      a4 = v12;
      goto LABEL_65;
    }
    v10 = (v10 << 6) | v13 & 0x3F;
    if ( (v10 & 0x20000000) != 0 )
      break;
    if ( (v10 & 0x10000000) != 0 )
    {
      if ( (v10 & 0x800000) == 0 && (v10 & 0x1F0) - 16 > 0xF0 )
        goto LABEL_65;
    }
    else if ( (v10 & 0x3E0) != 0 )
    {
      if ( (v10 & 0x3E0) == 0x360 )
      {
        v8 = 263;
        LOWORD(v10) = -3;
        goto LABEL_6;
      }
    }
    else
    {
LABEL_65:
      v8 = 263;
      LOWORD(v10) = -3;
LABEL_6:
      if ( (unsigned __int64)v5 >= v9 )
        goto LABEL_77;
      *v5++ = v10;
      v14 = v11 - a4;
      v15 = (__int64)(v9 - (_QWORD)v5) >> 1;
      if ( (unsigned __int64)(v11 - a4) > 0xD )
      {
        if ( v14 < v15 )
          v15 = v11 - a4;
        for ( i = &v5[v15 - 7]; ; --i )
        {
          while ( 2 )
          {
            if ( v5 >= i )
            {
LABEL_33:
              v10 = 0;
              goto LABEL_3;
            }
            v18 = *a4++;
            if ( v18 <= 0x7F )
            {
              *v5++ = v18;
              if ( ((unsigned __int8)a4 & 1) != 0 )
              {
                v18 = *a4++;
                if ( v18 > 0x7F )
                  break;
                *v5++ = v18;
              }
              if ( ((unsigned __int8)a4 & 2) == 0 )
                goto LABEL_29;
              v18 = *(unsigned __int16 *)a4;
              if ( (v18 & 0x8080) == 0 )
              {
                a4 += 2;
                *v5 = v18 & 0x7F;
                v5[1] = (v18 >> 8) & 0x7F;
                v5 += 2;
LABEL_29:
                while ( v5 < i )
                {
                  v19 = *((_DWORD *)a4 + 1);
                  v18 = *(_DWORD *)a4;
                  if ( ((*(_DWORD *)a4 | v19) & 0x80808080) != 0 )
                    goto LABEL_45;
                  a4 += 8;
                  *v5 = v18 & 0x7F;
                  v5[1] = (v18 >> 8) & 0x7F;
                  v5[2] = BYTE2(v18) & 0x7F;
                  v5[3] = HIBYTE(v18) & 0x7F;
                  v5[4] = v19 & 0x7F;
                  v5[5] = (v19 >> 8) & 0x7F;
                  v5[6] = BYTE2(v19) & 0x7F;
                  v5[7] = HIBYTE(v19) & 0x7F;
                  v5 += 8;
                }
                goto LABEL_33;
              }
LABEL_45:
              ++a4;
              if ( (unsigned __int8)v18 <= 0x7Fu )
              {
                *v5++ = (unsigned __int8)v18;
                continue;
              }
            }
            break;
          }
          v20 = *a4++;
          if ( (v18 & 0x40) == 0 || (v20 & 0xC0) != 0x80 )
          {
LABEL_32:
            a4 -= 2;
            goto LABEL_33;
          }
          v21 = v20 & 0x3F;
          if ( (v18 & 0x20) != 0 )
          {
            v22 = *a4;
            v23 = ((v18 & 0xF) << 6) | v21;
            if ( (v18 & 0x10) != 0 )
            {
              if ( (v23 >> 4) - 1 > 0xF )
                goto LABEL_32;
              if ( (v22 & 0xC0) != 0x80 )
                goto LABEL_32;
              v28 = a4[1];
              v29 = v22 & 0x3F | (v23 << 6);
              if ( (v28 & 0xC0) != 0x80 )
                goto LABEL_32;
              a4 += 2;
              *v5++ = (((v28 & 0x3F | (unsigned int)(v29 << 6)) >> 10) & 0x7FF) - 10304;
              v24 = (v28 & 0x3F | ((_WORD)v29 << 6) & 0x3FF) - 9216;
            }
            else
            {
              if ( (v23 & 0x3E0) == 0 || (v23 & 0x3E0) == 0x360 || (v22 & 0xC0) != 0x80 )
                goto LABEL_32;
              ++a4;
              v24 = v22 & 0x3F | ((_WORD)v23 << 6);
            }
            --i;
          }
          else
          {
            v25 = v18 & 0x1F;
            if ( v25 <= 1 )
              goto LABEL_32;
            v24 = ((_WORD)v25 << 6) | v21;
          }
          *v5++ = v24;
        }
      }
      if ( v15 >= v14 )
      {
        while ( a4 < v11 )
        {
          v10 = *a4++;
          if ( v10 > 0x7F )
            goto LABEL_56;
          *v5++ = v10;
        }
        goto LABEL_13;
      }
      v10 = 0;
    }
  }
  if ( (v10 & 0x101F0000) <= 0x10000000 )
    goto LABEL_6;
  if ( (unsigned __int64)v5 < v9 )
  {
    *v5++ = ((v10 >> 10) & 0x7FF) - 10304;
    LOWORD(v10) = (v10 & 0x3FF) - 9216;
    goto LABEL_6;
  }
LABEL_77:
  if ( a3 )
    *a3 = 2 * (v5 - a1);
  return 3221225507LL;
}
