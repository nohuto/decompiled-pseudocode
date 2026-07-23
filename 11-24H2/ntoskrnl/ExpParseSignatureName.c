/*
 * XREFs of ExpParseSignatureName @ 0x1407BC480
 * Callers:
 *     ExpConvertSignatureName @ 0x1407BBB18 (ExpConvertSignatureName.c)
 * Callees:
 *     wcsncpy_s @ 0x140502240 (wcsncpy_s.c)
 *     ExpTranslateHexStringToGUID @ 0x1407BD684 (ExpTranslateHexStringToGUID.c)
 *     ExpTranslateHexStringToULONG @ 0x1407BD804 (ExpTranslateHexStringToULONG.c)
 *     ExpTranslateHexStringToULONGLONG @ 0x1407BD8A0 (ExpTranslateHexStringToULONGLONG.c)
 *     RtlGUIDFromString @ 0x1408C7C70 (RtlGUIDFromString.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

NTSTATUS __fastcall ExpParseSignatureName(
        wchar_t *Src,
        unsigned int a2,
        GUID *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        bool *a7,
        char *a8)
{
  wchar_t v10; // dx
  bool v12; // r12
  char v13; // r10
  char v14; // r15
  __int64 v15; // rdi
  wchar_t v16; // cx
  NTSTATUS result; // eax
  wchar_t *Pool2; // rax
  wchar_t *v19; // r14
  int v20; // eax
  int v21; // ebx
  __int64 v22; // rdi
  wchar_t *v23; // r14
  int v24; // eax
  const wchar_t *v25; // r8
  unsigned int v26; // ecx
  __int64 v27; // rbx
  __int64 v28; // rdi
  int v29; // edx
  const wchar_t *v30; // r8
  unsigned int v31; // ecx
  __int64 v32; // rbx
  int v33; // eax
  int v34; // r9d
  const wchar_t *v35; // r8
  unsigned int v36; // ecx
  __int64 v37; // rbx
  UNICODE_STRING GuidString; // [rsp+20h] [rbp-48h] BYREF

  v10 = *Src;
  GuidString = 0LL;
  v12 = v10 == 123;
  v13 = 0;
  v14 = 0;
  for ( LODWORD(v15) = 0; (unsigned int)v15 < a2; LODWORD(v15) = v15 + 1 )
  {
    v16 = Src[(unsigned int)v15];
    if ( v16 == 41 )
      break;
    if ( v10 == 123 )
    {
      if ( v16 == 125 )
      {
        v13 = 1;
        goto LABEL_10;
      }
    }
    else if ( v16 == 45 )
    {
      goto LABEL_10;
    }
  }
  if ( v10 == 123 )
    return -1073741811;
LABEL_10:
  if ( (unsigned int)v15 <= 8 )
  {
    if ( v10 != 123 )
      goto LABEL_16;
  }
  else
  {
    v12 = 1;
  }
  if ( v13 == 1 )
  {
    LODWORD(v15) = v15 + 1;
    GuidString.Buffer = Src;
    GuidString.Length = 2 * v15;
    GuidString.MaximumLength = 2 * v15;
    result = RtlGUIDFromString(&GuidString, a3);
    if ( result < 0 )
      return result;
    goto LABEL_23;
  }
LABEL_16:
  Pool2 = (wchar_t *)ExAllocatePool2(0x40uLL, 2LL * (unsigned int)(v15 + 1), 0x72766E45u);
  v19 = Pool2;
  if ( !Pool2 )
    return -1073741670;
  wcsncpy_s(Pool2, (unsigned int)(v15 + 1), Src, (unsigned int)v15);
  v19[(unsigned int)v15] = 0;
  if ( v12 )
    v20 = ExpTranslateHexStringToGUID(v19, a3);
  else
    v20 = ExpTranslateHexStringToULONG(v19, a3);
  v21 = v20;
  ExFreePoolWithTag(v19, 0);
  if ( v21 < 0 )
    return v21;
  v14 = 0;
LABEL_23:
  if ( (unsigned int)v15 < a2 )
  {
    if ( Src[(unsigned int)v15] != 45 )
      goto LABEL_46;
    v22 = (unsigned int)(v15 + 1);
    v14 = 1;
    if ( (unsigned int)v22 < a2 )
    {
      v23 = (wchar_t *)ExAllocatePool2(0x40uLL, 0x22uLL, 0x72766E45u);
      if ( v23 )
      {
        v24 = v22;
        v25 = &Src[v22];
        do
        {
          if ( Src[v22] == 45 )
            break;
          v22 = (unsigned int)(v22 + 1);
        }
        while ( (unsigned int)v22 < a2 );
        v26 = v22 - v24;
        if ( (unsigned int)(v22 - v24 - 1) > 7 )
          goto LABEL_50;
        v27 = v26;
        wcsncpy_s(v23, 0x11uLL, v25, v26);
        v23[v27] = 0;
        v21 = ExpTranslateHexStringToULONG(v23, a4);
        if ( v21 < 0 )
        {
LABEL_51:
          ExFreePoolWithTag(v23, 0);
          return v21;
        }
        v28 = (unsigned int)(v22 + 1);
        if ( (unsigned int)v28 >= a2 )
          goto LABEL_50;
        v29 = v28;
        v30 = &Src[v28];
        do
        {
          if ( Src[v28] == 45 )
            break;
          v28 = (unsigned int)(v28 + 1);
        }
        while ( (unsigned int)v28 < a2 );
        v31 = v28 - v29;
        if ( (unsigned int)(v28 - v29 - 1) > 0xF )
          goto LABEL_50;
        v32 = v31;
        wcsncpy_s(v23, 0x11uLL, v30, v31);
        v23[v32] = 0;
        v33 = ExpTranslateHexStringToULONGLONG(v23, a5);
        if ( v33 < 0 )
        {
          v21 = v33;
          goto LABEL_51;
        }
        v15 = (unsigned int)(v28 + 1);
        if ( (unsigned int)v15 >= a2 )
          goto LABEL_50;
        v34 = v15;
        v35 = &Src[v15];
        do
        {
          if ( Src[v15] == 41 )
            break;
          v15 = (unsigned int)(v15 + 1);
        }
        while ( (unsigned int)v15 < a2 );
        v36 = v15 - v34;
        if ( (unsigned int)(v15 - v34 - 1) > 0xF )
        {
LABEL_50:
          v21 = -1073741811;
          goto LABEL_51;
        }
        v37 = v36;
        wcsncpy_s(v23, 0x11uLL, v35, v36);
        v23[v37] = 0;
        v21 = ExpTranslateHexStringToULONGLONG(v23, a6);
        ExFreePoolWithTag(v23, 0);
        if ( v21 < 0 )
          return v21;
        if ( (unsigned int)v15 < a2 )
        {
LABEL_46:
          if ( Src[(unsigned int)v15] == 41 && (v12 || v14) )
          {
            *a7 = v12;
            *a8 = v14;
            return 0;
          }
          return -1073741811;
        }
        return -1073741811;
      }
      return -1073741670;
    }
  }
  return -1073741811;
}
