/*
 * XREFs of RaisePower @ 0x14013E960
 * Callers:
 *     HT_CreateDeviceHalftoneInfo @ 0x140127DF4 (HT_CreateDeviceHalftoneInfo.c)
 *     pDCIAdjClr @ 0x14013CA6C (pDCIAdjClr.c)
 *     AdjustSrcDevGamma @ 0x14013DA50 (AdjustSrcDevGamma.c)
 *     ComputeRGBLUTAA @ 0x14013DE44 (ComputeRGBLUTAA.c)
 *     BuildExpandAAInfo @ 0x1401400A0 (BuildExpandAAInfo.c)
 *     HT_ComputeRGBGammaTable @ 0x1402F30F0 (HT_ComputeRGBGammaTable.c)
 *     ComputeBGRMappingTable @ 0x1402F3914 (ComputeBGRMappingTable.c)
 * Callees:
 *     MulFD6 @ 0x14013E82C (MulFD6.c)
 *     AntiLog @ 0x14013EA9C (AntiLog.c)
 *     DivFD6 @ 0x14013ED98 (DivFD6.c)
 *     Log @ 0x14013F0BC (Log.c)
 *     FD6DivL @ 0x1401B1D98 (FD6DivL.c)
 */

__int64 __fastcall RaisePower(int a1, __int64 a2, __int64 a3)
{
  char v3; // si
  unsigned int v4; // ebx
  unsigned int v5; // r10d
  unsigned int v6; // r9d
  int v7; // edi
  int v8; // ebp
  unsigned int v9; // eax
  unsigned int v10; // r9d
  __int64 result; // rax

  v3 = a3;
  v4 = a2;
  v5 = a1;
  v6 = 1000000;
  if ( (a3 & 2) != 0 )
  {
    if ( (_DWORD)a2 != 1 )
      goto LABEL_5;
    return (unsigned int)a1;
  }
  if ( (_DWORD)a2 == 1000000 )
    return (unsigned int)a1;
  a2 = (unsigned int)((int)a2 / 1000000);
  if ( v4 == 1000000 * (_DWORD)a2 )
  {
    v4 = a2;
    v3 = a3 | 2;
  }
LABEL_5:
  if ( a1 <= 0 )
  {
    v5 = -a1;
    v7 = 1;
    v8 = 1;
    if ( !a1 )
      return 0LL;
  }
  else
  {
    v7 = 0;
    v8 = 0;
  }
  if ( !v4 )
    return v7 != 0 ? -1000000 : 1000000;
  if ( v5 != 10000000 )
    v6 = Log(v5, a2, a3);
  if ( (v3 & 2) == 0 )
  {
    if ( (v3 & 1) != 0 )
      v9 = DivFD6(v6, v4);
    else
      v9 = MulFD6(v6, v4);
    goto LABEL_13;
  }
  v7 = (v4 & 1) != 0 ? v8 : 0;
  if ( (v3 & 1) != 0 )
  {
    v9 = FD6DivL(v6, v4);
LABEL_13:
    v10 = v9;
    goto LABEL_14;
  }
  v10 = v4 * v6;
LABEL_14:
  result = AntiLog(v10);
  if ( v7 )
    return (unsigned int)-(int)result;
  return result;
}
