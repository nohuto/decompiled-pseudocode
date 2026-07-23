/*
 * XREFs of LdrCaptureDynamicRelocationTableHeader @ 0x14093E62C
 * Callers:
 *     MiCaptureBootDriverRetpolineInfo @ 0x1407F0CBC (MiCaptureBootDriverRetpolineInfo.c)
 *     MiParseImageLoadConfig @ 0x14093D160 (MiParseImageLoadConfig.c)
 *     MiApplyDynamicRelocations @ 0x140C5ADDC (MiApplyDynamicRelocations.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x140414520 (RtlImageNtHeaderEx.c)
 */

__int64 __fastcall LdrCaptureDynamicRelocationTableHeader(
        char *BaseOfImage,
        ULONG64 Size,
        __int64 a3,
        unsigned int a4,
        __int64 a5,
        __int16 a6,
        _DWORD *a7,
        _QWORD *a8)
{
  unsigned __int64 v8; // r15
  NTSTATUS v10; // r10d
  unsigned __int16 v11; // bx
  int v12; // esi
  __int64 v13; // r11
  __int64 v14; // r11
  __int64 v15; // rax
  int v16; // edx
  char *v18; // rdi
  char *v19; // rax
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+28h] [rbp-20h] BYREF

  v8 = (unsigned int)Size;
  OutHeaders = 0LL;
  v10 = 0;
  v11 = 0;
  v12 = 0;
  v13 = 0LL;
  *a7 = 0;
  if ( a6 == 523 )
  {
    if ( a4 >= 0xE6 )
    {
      v11 = *(_WORD *)(a3 + 228);
      v12 = *(_DWORD *)(a3 + 224);
    }
    if ( a4 >= 0xC8 )
      v13 = *(_QWORD *)(a3 + 192);
  }
  else
  {
    if ( a4 >= 0x8E )
    {
      v11 = *(_WORD *)(a3 + 140);
      v12 = *(_DWORD *)(a3 + 136);
    }
    if ( a4 >= 0x7C )
      v13 = *(unsigned int *)(a3 + 120);
  }
  if ( v11 )
  {
    v18 = &BaseOfImage[(unsigned int)Size];
    v10 = RtlImageNtHeaderEx(0, BaseOfImage, (unsigned int)Size, &OutHeaders);
    if ( v10 < 0 )
      return (unsigned int)v10;
    if ( v11 > OutHeaders->FileHeader.NumberOfSections )
      return (unsigned int)-1073741701;
    v19 = (char *)OutHeaders + 40 * v11 + OutHeaders->FileHeader.SizeOfOptionalHeader - 16;
    if ( v18 <= v19 || v18 < v19 + 40 )
      return (unsigned int)-1073741701;
    _mm_lfence();
    v14 = (unsigned int)(v12 + *((_DWORD *)v19 + 3));
  }
  else
  {
    if ( !v13 )
      return (unsigned int)-1073741637;
    if ( a5 )
      v14 = (unsigned int)(v13 - a5);
    else
      v14 = (unsigned int)(v13 - (_DWORD)BaseOfImage);
  }
  if ( v14 + 8 < (unsigned __int64)(unsigned int)v14 )
    return (unsigned int)-1073741701;
  if ( v14 + 8 > v8 )
    return (unsigned int)-1073741701;
  v15 = *(_QWORD *)&BaseOfImage[v14];
  v16 = HIDWORD(v15) + 8;
  if ( (unsigned int)(HIDWORD(v15) + 8) < HIDWORD(v15)
    || v16 + (int)v14 < (unsigned int)v14
    || v16 + (int)v14 > (unsigned int)v8 )
  {
    return (unsigned int)-1073741701;
  }
  else
  {
    *a7 = v14;
    if ( a8 )
      *a8 = v15;
  }
  return (unsigned int)v10;
}
