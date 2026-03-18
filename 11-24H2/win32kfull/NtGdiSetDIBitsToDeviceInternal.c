/*
 * XREFs of NtGdiSetDIBitsToDeviceInternal @ 0x140177AC0
 * Callers:
 *     <none>
 * Callees:
 *     ?init_probe@?$umptr_r@E@@SA?AV1@PEAE_K1@Z @ 0x14002851C (-init_probe@-$umptr_r@E@@SA-AV1@PEAE_K1@Z.c)
 *     ?GreSetDIBitsToDeviceInternalImpl@@YAHPEAUHDC__@@HHKKHHKKAEAV?$umptr_r@E@@PEAUtagBITMAPINFO@@KIHPEAX@Z @ 0x1400C5A94 (-GreSetDIBitsToDeviceInternalImpl@@YAHPEAUHDC__@@HHKKHHKKAEAV-$umptr_r@E@@PEAUtagBITMAPINFO@@KIH.c)
 *     ?GreGetBitmapSizeInternal@@YAKPEBUtagBITMAPINFO@@KI@Z @ 0x14015A480 (-GreGetBitmapSizeInternal@@YAKPEBUtagBITMAPINFO@@KI@Z.c)
 *     memmove @ 0x140340480 (memmove.c)
 */

__int64 __fastcall NtGdiSetDIBitsToDeviceInternal(
        HDC a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        __int64 a10,
        char *Src,
        char a12,
        unsigned int a13,
        size_t Size,
        int a15,
        __int64 a16)
{
  struct tagBITMAPINFO *v18; // rdi
  int v19; // r15d
  unsigned int biSize; // r8d
  int v21; // eax
  unsigned int v22; // esi
  __int64 inited; // rax
  __int64 v25; // [rsp+90h] [rbp-78h] BYREF
  __int64 v26; // [rsp+98h] [rbp-70h]
  __int64 v27; // [rsp+A0h] [rbp-68h]
  __int16 v28; // [rsp+A8h] [rbp-60h]
  _BYTE v29[24]; // [rsp+B0h] [rbp-58h] BYREF
  __int16 v30; // [rsp+C8h] [rbp-40h]

  v18 = 0LL;
  memset(v29, 0, sizeof(v29));
  v30 = 0;
  v25 = 0LL;
  v26 = 0LL;
  v27 = 0LL;
  v28 = 0;
  v19 = a12 & 3;
  if ( (unsigned int)Size >= 4 )
  {
    if ( Src )
    {
      if ( (unsigned int)Size <= 0x2710000 )
      {
        v18 = (struct tagBITMAPINFO *)AllocThreadBufferWithTag((unsigned int)Size, 1886221383LL, 0LL);
        if ( v18 )
        {
          if ( &Src[(unsigned int)Size] < Src || (unsigned __int64)&Src[(unsigned int)Size] > MmUserProbeAddress )
            *(_BYTE *)MmUserProbeAddress = 0;
          memmove(v18, Src, (unsigned int)Size);
          biSize = v18->bmiHeader.biSize;
          if ( v18->bmiHeader.biSize >= 0x28
            && (unsigned int)Size >= biSize
            && (_DWORD)Size == (unsigned int)GreGetBitmapSizeInternal(v18, v19, biSize) )
          {
            v21 = 1;
            goto LABEL_14;
          }
          FreeThreadBufferWithTag(v18);
          v18 = 0LL;
        }
      }
    }
  }
  v21 = 0;
LABEL_14:
  v22 = v21 != 0;
  if ( v22 == 1 )
  {
    if ( a10 )
    {
      inited = umptr_r<unsigned char>::init_probe((__int64)v29, a10, a13, 4);
      v25 = *(_QWORD *)inited;
      v26 = *(_QWORD *)(inited + 8);
      v27 = *(_QWORD *)(inited + 16);
      v28 = *(_WORD *)(inited + 24);
      v22 = v25 != 0;
    }
    if ( v22 == 1 )
      v22 = GreSetDIBitsToDeviceInternalImpl(
              a1,
              a2,
              a3,
              a4,
              a5,
              a6,
              a7,
              a8,
              a9,
              (__int64)&v25,
              (__int64)v18,
              v19,
              Size,
              a15,
              a16);
  }
  if ( v18 )
    FreeThreadBufferWithTag(v18);
  return v22;
}
