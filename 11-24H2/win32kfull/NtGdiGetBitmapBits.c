/*
 * XREFs of NtGdiGetBitmapBits @ 0x14018AF20
 * Callers:
 *     <none>
 * Callees:
 *     ?GreGetBitmapBitsInternal@@YAJPEAUHBITMAP__@@AEAV?$umptr_w@E@@PEAJ@Z @ 0x140029E58 (-GreGetBitmapBitsInternal@@YAJPEAUHBITMAP__@@AEAV-$umptr_w@E@@PEAJ@Z.c)
 *     ?init_probe@?$umptr_w@E@@SA?AV1@PEAE_K1@Z @ 0x14018AFDC (-init_probe@-$umptr_w@E@@SA-AV1@PEAE_K1@Z.c)
 */

__int64 __fastcall NtGdiGetBitmapBits(Gre::Base *a1, unsigned int a2, __int64 a3)
{
  unsigned int v3; // ebx
  unsigned int BitmapBitsInternal; // eax
  __int64 inited; // rax
  __int64 v9; // rdx
  __int64 v11; // [rsp+20h] [rbp-40h] BYREF
  __int64 v12; // [rsp+28h] [rbp-38h]
  __int64 v13; // [rsp+30h] [rbp-30h]
  __int16 v14; // [rsp+38h] [rbp-28h]
  _BYTE v15[32]; // [rsp+40h] [rbp-20h] BYREF
  unsigned int v16; // [rsp+88h] [rbp+28h] BYREF

  v3 = 0;
  v11 = 0LL;
  v14 = 0;
  v12 = 0LL;
  v13 = 0LL;
  v16 = 0;
  BitmapBitsInternal = GreGetBitmapBitsInternal(a1, (__int64)&v11, &v16);
  if ( a2 > BitmapBitsInternal )
    a2 = BitmapBitsInternal;
  if ( !a3 )
    return (unsigned int)GreGetBitmapBitsInternal(a1, (__int64)&v11, &v16);
  inited = umptr_w<unsigned char>::init_probe(v15, a3, a2, 1LL);
  v9 = *(_QWORD *)inited;
  v12 = *(_QWORD *)(inited + 8);
  v13 = *(_QWORD *)(inited + 16);
  v14 = *(_WORD *)(inited + 24);
  v11 = v9;
  if ( v9 )
    return (unsigned int)GreGetBitmapBitsInternal(a1, (__int64)&v11, &v16);
  return v3;
}
