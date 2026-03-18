/*
 * XREFs of ?pfsubAlternateFacename@@YAPEAUFONTSUB@@PEBG@Z @ 0x1400B8934
 * Callers:
 *     ?EnumEngineOnly@@YA_NPEBGKKPEAU_EFFILTER_INFO@@AEAVPUBLIC_PFTOBJ@@2PEAVXDCOBJ@@PEAKPEAX@Z @ 0x1400BA5EC (-EnumEngineOnly@@YA_NPEBGKKPEAU_EFFILTER_INFO@@AEAVPUBLIC_PFTOBJ@@2PEAVXDCOBJ@@PEAKPEAX@Z.c)
 *     ?EnumDeviceAndEngine@@YA_NPEBGKKPEAU_EFFILTER_INFO@@AEAVPUBLIC_PFTOBJ@@2AEAVPFFOBJ@@AEAVPDEVOBJ@@PEAVXDCOBJ@@PEAKPEAX@Z @ 0x1400F8978 (-EnumDeviceAndEngine@@YA_NPEBGKKPEAU_EFFILTER_INFO@@AEAVPUBLIC_PFTOBJ@@2AEAVPFFOBJ@@AEAVPDEVOBJ@.c)
 *     ?bFindBitmapFont@MAPPER@@QEAAHPEBG@Z @ 0x140146984 (-bFindBitmapFont@MAPPER@@QEAAHPEBG@Z.c)
 * Callees:
 *     GetAppCompatFlags2 @ 0x140049EF0 (GetAppCompatFlags2.c)
 *     ?cCapString@@YAJPEAGPEBGH@Z @ 0x1400B94E0 (-cCapString@@YAJPEAGPEBGH@Z.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

struct FONTSUB *__fastcall pfsubAlternateFacename(const unsigned __int16 *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rsi
  _BYTE *v5; // rdi
  _BYTE *v6; // rbp
  unsigned __int16 *v7; // rax
  __int64 v8; // rdx
  int v9; // r8d
  int v10; // ecx
  unsigned __int16 v12[32]; // [rsp+20h] [rbp-58h] BYREF

  v4 = *(_QWORD *)(W32GetSessionState(a1, a2, a3) + 96);
  v5 = *(_BYTE **)(v4 + 19680);
  v6 = &v5[196 * *(unsigned int *)(v4 + 19696)];
  cCapString(v12, a1, 32);
  while ( 1 )
  {
    if ( v5 >= v6 )
      return 0LL;
    v7 = v12;
    v8 = v5 + 64 - (_BYTE *)v12;
    do
    {
      v9 = *(unsigned __int16 *)((char *)v7 + v8);
      v10 = *v7 - v9;
      if ( v10 )
        break;
      ++v7;
    }
    while ( v9 );
    if ( !v10
      && ((v5[129] & 1) != 0 || v5[128] == v5[194])
      && (v5 != *(_BYTE **)(v4 + 19680) || (GetAppCompatFlags2(1024LL, v8) & 0x400) != 0) )
    {
      break;
    }
    v5 += 196;
  }
  return (struct FONTSUB *)v5;
}
