/*
 * XREFs of ?BltMe4Times@@YAXIHHPEAUHDC__@@PEAUtagCURSOR@@I@Z @ 0x140204794
 * Callers:
 *     ?DrawCaptionIcon@@YAXPEAUHDC__@@PEAUtagRECT@@PEAUtagCURSOR@@PEAUHBRUSH__@@I@Z @ 0x1401FFBD8 (-DrawCaptionIcon@@YAXPEAUHDC__@@PEAUtagRECT@@PEAUtagCURSOR@@PEAUHBRUSH__@@I@Z.c)
 * Callees:
 *     FillRect @ 0x140038250 (FillRect.c)
 *     BltIcon @ 0x140079FFC (BltIcon.c)
 *     GetOemBitmapInfo @ 0x14007B520 (GetOemBitmapInfo.c)
 *     ?PrepareHDCBITSBitmap@@YAPEAUHDC__@@PEAU1@@Z @ 0x140204AAC (-PrepareHDCBITSBitmap@@YAPEAUHDC__@@PEAU1@@Z.c)
 */

void __fastcall BltMe4Times(unsigned int a1, int a2, int a3, HDC a4, struct tagCURSOR *a5, char a6)
{
  unsigned int v6; // r15d
  int v9; // r14d
  __int64 v10; // rdx
  __int64 v11; // rcx
  HDC v12; // r13
  HBRUSH v13; // rsi
  __int16 *OemBitmapInfo; // rax
  int v15; // r12d
  LONG v16; // edi
  LONG v17; // ebx
  LONG v18; // ecx
  int v19; // edi
  unsigned int v20; // esi
  __int64 v21; // rbx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rcx
  int v25; // [rsp+50h] [rbp-58h]
  __int64 v26; // [rsp+58h] [rbp-50h]
  RECT v27; // [rsp+60h] [rbp-48h] BYREF
  unsigned int v28; // [rsp+B0h] [rbp+8h]
  unsigned int v31; // [rsp+D8h] [rbp+30h]

  v28 = a1;
  v6 = a1;
  v9 = 1;
  v12 = PrepareHDCBITSBitmap(0LL);
  if ( v12 )
  {
    v31 = a6 & 0x10;
    if ( v31 )
      v13 = *(HBRUSH *)(*(_QWORD *)(W32GetUserSessionState(v11, v10) + 19928) + 4856LL);
    else
      v13 = *(HBRUSH *)(*(_QWORD *)(W32GetUserSessionState(v11, v10) + 19928) + 4712LL);
    v26 = 2LL;
    v25 = (a2 - a3) / 2;
    do
    {
      OemBitmapInfo = (__int16 *)GetOemBitmapInfo(v6);
      v15 = 8913094;
      v16 = *OemBitmapInfo;
      v17 = OemBitmapInfo[1];
      v18 = v16 + OemBitmapInfo[2];
      LODWORD(OemBitmapInfo) = OemBitmapInfo[3];
      v27.right = v18;
      v27.left = v16;
      v27.top = v17;
      v27.bottom = v17 + (_DWORD)OemBitmapInfo;
      FillRect(v12, &v27, v13);
      v19 = v25 + v16;
      v20 = v25 + v17;
      v21 = 2LL;
      do
      {
        BltIcon(v12, v19 + 1, v20, a3, a3, a4, (__int64)a5, (v9 ^ 1) + 1, v15);
        v9 ^= 1u;
        v15 = 6684742;
        --v21;
      }
      while ( v21 );
      v6 = ++v28;
      v24 = *(_QWORD *)(W32GetUserSessionState(v23, v22) + 19928);
      if ( v31 )
        v13 = *(HBRUSH *)(v24 + 4816);
      else
        v13 = *(HBRUSH *)(v24 + 4720);
      --v26;
    }
    while ( v26 );
  }
}
