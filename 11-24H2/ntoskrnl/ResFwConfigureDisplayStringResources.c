/*
 * XREFs of ResFwConfigureDisplayStringResources @ 0x140BB38C4
 * Callers:
 *     BgpFwLibraryInitialize @ 0x140BB7400 (BgpFwLibraryInitialize.c)
 * Callees:
 *     BgpTxtRegionSize @ 0x14069987C (BgpTxtRegionSize.c)
 *     BgpTxtCreateRegion @ 0x140BB4908 (BgpTxtCreateRegion.c)
 *     BgpFoGetFontHandle @ 0x140BB72B0 (BgpFoGetFontHandle.c)
 */

__int64 __fastcall ResFwConfigureDisplayStringResources(__int64 a1)
{
  int v2; // eax
  int v4; // [rsp+40h] [rbp-20h] BYREF
  int v5; // [rsp+44h] [rbp-1Ch]
  __int64 v6; // [rsp+48h] [rbp-18h]
  int v7; // [rsp+50h] [rbp-10h]
  int v8; // [rsp+54h] [rbp-Ch]
  __int64 v9; // [rsp+70h] [rbp+10h] BYREF

  v9 = 0LL;
  v6 = 0LL;
  if ( !a1 || (*(_DWORD *)(a1 + 24) & 1) == 0 || (int)BgpFoGetFontHandle(0LL) < 0 )
    return 0LL;
  if ( (_BYTE)qword_140EF03F0 )
  {
    v4 = HIDWORD(qword_140EF03F0);
    v5 = dword_140EF03F8;
  }
  else
  {
    v4 = 0;
    v5 = -1;
  }
  v2 = *(_DWORD *)(a1 + 20);
  v8 = 0;
  v7 = v2;
  if ( (int)BgpTxtCreateRegion(a1, (int)a1 + 8, (unsigned int)&v4, (int)a1 + 28, (__int64)&v9, 0) < 0 )
    return 0LL;
  dword_140EF029C = BgpTxtRegionSize(v9);
  return v9;
}
