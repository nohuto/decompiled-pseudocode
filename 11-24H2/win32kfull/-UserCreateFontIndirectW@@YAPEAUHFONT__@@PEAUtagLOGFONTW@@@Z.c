/*
 * XREFs of ?UserCreateFontIndirectW@@YAPEAUHFONT__@@PEAUtagLOGFONTW@@@Z @ 0x140037A20
 * Callers:
 *     DrawFrameControl @ 0x1400373A4 (DrawFrameControl.c)
 * Callees:
 *     GreCreateFontIndirectW @ 0x140037A84 (GreCreateFontIndirectW.c)
 */

__int64 __fastcall UserCreateFontIndirectW(struct tagLOGFONTW *a1)
{
  __int128 v1; // xmm1
  __int128 v2; // xmm0
  __int128 v3; // xmm1
  __int128 v4; // xmm0
  int v5; // eax
  _OWORD v7[5]; // [rsp+20h] [rbp-68h] BYREF
  __int64 v8; // [rsp+70h] [rbp-18h]
  int v9; // [rsp+78h] [rbp-10h]
  __int16 v10; // [rsp+7Ch] [rbp-Ch]

  v1 = *(_OWORD *)&a1->lfWeight;
  v7[0] = *(_OWORD *)&a1->lfHeight;
  v2 = *(_OWORD *)&a1->lfFaceName[2];
  v7[1] = v1;
  v3 = *(_OWORD *)&a1->lfFaceName[10];
  v7[2] = v2;
  v4 = *(_OWORD *)&a1->lfFaceName[18];
  v7[3] = v3;
  *(_QWORD *)&v3 = *(_QWORD *)&a1->lfFaceName[26];
  v7[4] = v4;
  v8 = v3;
  v5 = *(_DWORD *)&a1->lfFaceName[30];
  v10 = 0;
  v9 = v5;
  return GreCreateFontIndirectW(v7);
}
