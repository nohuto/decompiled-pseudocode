/*
 * XREFs of CountUnicodeToUTF8 @ 0x140445FBC
 * Callers:
 *     RtlUnicodeStringToUTF8String @ 0x140787370 (RtlUnicodeStringToUTF8String.c)
 *     RtlUnicodeToUTF8N @ 0x140905BE0 (RtlUnicodeToUTF8N.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CountUnicodeToUTF8(unsigned int *a1, unsigned int a2, unsigned int *a3)
{
  unsigned int v3; // r10d
  unsigned __int64 v4; // rax
  unsigned int *v6; // r9
  unsigned int v7; // edx
  unsigned __int64 v8; // rbx
  unsigned int v9; // ecx
  unsigned __int64 v10; // rax
  unsigned int *v11; // r11
  unsigned int v12; // ecx
  unsigned int v13; // r8d
  int v14; // eax
  unsigned int v15; // r8d
  int v16; // eax
  __int64 result; // rax
  char v18; // r8
  unsigned int v19; // eax
  unsigned int v20; // eax
  unsigned int v21; // ecx
  unsigned int v22; // eax
  unsigned int v23; // ecx
  unsigned int *v24; // rax

  v3 = 0;
  v4 = (unsigned __int64)a2 >> 1;
  v6 = a1;
  v7 = a2 >> 1;
  v8 = (unsigned __int64)a1 + 2 * v4;
LABEL_2:
  while ( 2 )
  {
    v9 = 0;
    while ( (unsigned __int64)v6 < v8 )
    {
      if ( v9 )
      {
        ++v7;
        if ( (unsigned int)*(unsigned __int16 *)v6 - 56320 > 0x3FF )
        {
          v18 = 0;
        }
        else
        {
          v18 = 1;
          v9 = 65533;
        }
        v24 = (unsigned int *)((char *)v6 + 2);
        if ( !v18 )
          v24 = v6;
        v6 = v24;
        goto LABEL_7;
      }
      v9 = *(unsigned __int16 *)v6;
      v6 = (unsigned int *)((char *)v6 + 2);
LABEL_6:
      if ( v9 - 55296 > 0x3FF )
        goto LABEL_7;
      --v7;
    }
    if ( !v9 )
      goto LABEL_22;
    ++v7;
LABEL_7:
    if ( v9 - 55296 <= 0x7FF )
    {
      v9 = 65533;
      v3 = 263;
    }
    else if ( v9 <= 0x7F )
    {
      goto LABEL_9;
    }
    v19 = v7 + 1;
    if ( v9 <= 0x7FF )
      v19 = v7;
    v7 = v19 + 1;
LABEL_9:
    v10 = (__int64)(v8 - (_QWORD)v6) >> 1;
    if ( v10 > 0xD )
    {
      v11 = (unsigned int *)((char *)v6 + 2 * v10 - 14);
LABEL_11:
      if ( v6 >= v11 )
        continue;
      v12 = *(unsigned __int16 *)v6;
      v6 = (unsigned int *)((char *)v6 + 2);
      if ( v12 > 0x7F )
      {
        if ( v12 > 0x7FF )
        {
          if ( (v12 & 0xF800) == 0xD800 )
            goto LABEL_65;
          ++v7;
        }
        ++v7;
      }
      if ( ((unsigned __int8)v6 & 2) != 0 )
      {
        v12 = *(unsigned __int16 *)v6;
        v6 = (unsigned int *)((char *)v6 + 2);
        if ( v12 > 0x7F )
        {
          if ( v12 <= 0x7FF )
          {
LABEL_64:
            ++v7;
            goto LABEL_14;
          }
          if ( (v12 & 0xF800) != 0xD800 )
          {
            ++v7;
            goto LABEL_64;
          }
LABEL_65:
          if ( v12 - 55296 > 0x7FF )
          {
LABEL_69:
            ++v7;
            goto LABEL_70;
          }
          if ( v12 <= 0xDBFF && (unsigned int)*(unsigned __int16 *)v6 - 56320 <= 0x3FF )
          {
            v6 = (unsigned int *)((char *)v6 + 2);
            goto LABEL_69;
          }
          v6 = (unsigned int *)((char *)v6 - 2);
          continue;
        }
      }
      while ( 1 )
      {
LABEL_14:
        if ( v6 >= v11 )
          goto LABEL_2;
        v13 = v6[1];
        v12 = *v6;
        v14 = *v6 | v13;
        if ( (v14 & 0xFF80FF80) != 0 )
        {
          if ( (v14 & 0xF800F800) != 0 )
          {
LABEL_30:
            v12 = (unsigned __int16)v12;
            v6 = (unsigned int *)((char *)v6 + 2);
            if ( (unsigned __int16)v12 > 0x7Fu )
            {
              if ( (unsigned __int16)v12 > 0x7FFu )
                goto LABEL_65;
LABEL_70:
              ++v7;
            }
            goto LABEL_11;
          }
          v20 = v7 + 1;
          if ( (v12 & 0xFF800000) == 0 )
            v20 = v7;
          v21 = v20 + 1;
          if ( (*v6 & 0xFF80) == 0 )
            v21 = v20;
          v7 = v21 + 1;
          if ( (v13 & 0xFF800000) == 0 )
            v7 = v21;
          if ( (v13 & 0xFF80) != 0 )
            ++v7;
        }
        v15 = v6[3];
        v6 += 2;
        v12 = *v6;
        v16 = *v6 | v15;
        if ( (v16 & 0xFF80FF80) != 0 )
        {
          if ( (v16 & 0xF800F800) != 0 )
            goto LABEL_30;
          v22 = v7 + 1;
          if ( (v12 & 0xFF800000) == 0 )
            v22 = v7;
          v23 = v22 + 1;
          if ( (*v6 & 0xFF80) == 0 )
            v23 = v22;
          v7 = v23 + 1;
          if ( (v15 & 0xFF800000) == 0 )
            v7 = v23;
          if ( (v15 & 0xFF80) != 0 )
            ++v7;
        }
        v6 += 2;
      }
    }
    break;
  }
  while ( (unsigned __int64)v6 < v8 )
  {
    v9 = *(unsigned __int16 *)v6;
    v6 = (unsigned int *)((char *)v6 + 2);
    if ( v9 > 0x7F )
      goto LABEL_6;
  }
LABEL_22:
  result = v3;
  *a3 = v7;
  return result;
}
