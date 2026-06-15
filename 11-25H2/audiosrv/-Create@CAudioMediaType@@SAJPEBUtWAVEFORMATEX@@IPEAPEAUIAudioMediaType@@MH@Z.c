/*
 * XREFs of ?Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@MH@Z @ 0x1800AA284
 * Callers:
 *     CreateAudioMediaType @ 0x1800AAA84 (CreateAudioMediaType.c)
 *     CreateAudioMediaTypeFromUncompressedAudioFormat @ 0x1800AAAA0 (CreateAudioMediaTypeFromUncompressedAudioFormat.c)
 *     CreateAudioMediaType_Unsafe @ 0x1800AABE8 (CreateAudioMediaType_Unsafe.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18000A850 (--3@YAXPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18001C1A0 (--2@YAPEAX_K@Z.c)
 *     ??1CAudioMediaType@@MEAA@XZ @ 0x1800AA200 (--1CAudioMediaType@@MEAA@XZ.c)
 *     ?QueryInterface@CAudioMediaType@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800AA820 (-QueryInterface@CAudioMediaType@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?SetAudioFormat@CAudioMediaType@@IEAAJPEBUtWAVEFORMATEX@@IH@Z @ 0x1800AA8D0 (-SetAudioFormat@CAudioMediaType@@IEAAJPEBUtWAVEFORMATEX@@IH@Z.c)
 */

__int64 __fastcall CAudioMediaType::Create(
        const struct tWAVEFORMATEX *a1,
        unsigned int a2,
        struct IAudioMediaType **a3,
        float a4,
        int a5)
{
  float *v9; // rax
  float *v10; // rbx
  int Interface; // edi

  if ( !a3 )
    return 2147942487LL;
  *a3 = 0LL;
  v9 = (float *)operator new(0x20uLL);
  v10 = v9;
  if ( v9 )
  {
    v9[2] = 0.0;
    *((_QWORD *)v9 + 2) = 0LL;
    v9[3] = 0.0;
    v9[6] = 0.0;
    *(_QWORD *)v9 = &CAudioMediaType::`vftable';
    if ( !a1 || (Interface = CAudioMediaType::SetAudioFormat((CAudioMediaType *)v9, a1, a2, a5), Interface >= 0) )
    {
      v10[6] = a4;
      Interface = CAudioMediaType::QueryInterface(
                    (CAudioMediaType *)v10,
                    &GUID_4e997f73_b71f_4798_873b_ed7dfcf15b4d,
                    (void **)a3);
      if ( Interface >= 0 )
        return (unsigned int)Interface;
    }
    CAudioMediaType::~CAudioMediaType((void **)v10);
    operator delete(v10);
  }
  else
  {
    Interface = -2147024882;
  }
  *a3 = 0LL;
  return (unsigned int)Interface;
}
