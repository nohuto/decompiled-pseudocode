/*
 * XREFs of ?BlendColors@@YAKKKM@Z @ 0x180033554
 * Callers:
 *     ?UpdateText@CTopLevelWindow@@AEAAJPEAUWindowFrame@1@@Z @ 0x180031890 (-UpdateText@CTopLevelWindow@@AEAAJPEAUWindowFrame@1@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall BlendColors(int a1, int a2, float a3)
{
  return (unsigned __int8)(int)(float)((float)((float)(unsigned __int8)a1 * (float)(1.0 - a3))
                                     + (float)((float)(unsigned __int8)a2 * a3)) | ((unsigned __int8)(int)(float)((float)((float)BYTE2(a1) * (float)(1.0 - a3)) + (float)((float)BYTE2(a2) * a3)) << 16) | ((unsigned __int8)(int)(float)((float)((float)BYTE1(a1) * (float)(1.0 - a3)) + (float)((float)BYTE1(a2) * a3)) << 8);
}
