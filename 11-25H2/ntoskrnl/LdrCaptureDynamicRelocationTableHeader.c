/*
 * XREFs of LdrCaptureDynamicRelocationTableHeader @ 0x1409442DC
 * Callers:
 *     MiCaptureBootDriverRetpolineInfo @ 0x1407E084C (MiCaptureBootDriverRetpolineInfo.c)
 *     MiParseImageLoadConfig @ 0x140942E10 (MiParseImageLoadConfig.c)
 *     MiApplyDynamicRelocations @ 0x140C4796C (MiApplyDynamicRelocations.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x140420FB0 (RtlImageNtHeaderEx.c)
 */

__int64 __fastcall LdrCaptureDynamicRelocationTableHeader(
        unsigned __int64 a1,
        unsigned int a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5,
        __int16 a6,
        _DWORD *a7,
        _QWORD *a8)
{
  unsigned __int64 v8; // r15
  int v10; // r10d
  unsigned __int16 v11; // bx
  int v12; // esi
  __int64 v13; // r11
  __int64 v14; // r11
  __int64 v15; // rax
  int v16; // edx
  unsigned __int64 v18; // rdi
  unsigned __int64 v19; // rax
  _QWORD v20[4]; // [rsp+28h] [rbp-20h] BYREF

  v8 = a2;
  v20[0] = 0LL;
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
    v18 = a2 + a1;
    v10 = RtlImageNtHeaderEx(0, a1, a2, v20);
    if ( v10 < 0 )
      return (unsigned int)v10;
    if ( v11 > *(_WORD *)(v20[0] + 6LL) )
      return (unsigned int)-1073741701;
    v19 = v20[0] + *(unsigned __int16 *)(v20[0] + 20LL) - 16LL + 40LL * v11;
    if ( v18 <= v19 || v18 < v19 + 40 )
      return (unsigned int)-1073741701;
    _mm_lfence();
    v14 = (unsigned int)(v12 + *(_DWORD *)(v19 + 12));
  }
  else
  {
    if ( !v13 )
      return (unsigned int)-1073741637;
    if ( a5 )
      v14 = (unsigned int)(v13 - a5);
    else
      v14 = (unsigned int)(v13 - a1);
  }
  if ( v14 + 8 < (unsigned __int64)(unsigned int)v14 )
    return (unsigned int)-1073741701;
  if ( v14 + 8 > v8 )
    return (unsigned int)-1073741701;
  v15 = *(_QWORD *)(v14 + a1);
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
