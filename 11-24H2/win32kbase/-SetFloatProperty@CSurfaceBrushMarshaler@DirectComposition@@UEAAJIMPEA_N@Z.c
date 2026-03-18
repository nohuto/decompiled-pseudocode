/*
 * XREFs of ?SetFloatProperty@CSurfaceBrushMarshaler@DirectComposition@@UEAAJIMPEA_N@Z @ 0x140100290
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CSurfaceBrushMarshaler::SetFloatProperty(
        DirectComposition::CSurfaceBrushMarshaler *this,
        int a2,
        float a3,
        bool *a4)
{
  __int64 result; // rax
  int v5; // edx

  result = 0LL;
  *a4 = 0;
  v5 = a2 - 3;
  if ( !v5 )
  {
    *((_DWORD *)this + 4) |= 0x80u;
    *((float *)this + 30) = a3;
LABEL_3:
    *a4 = 1;
    return result;
  }
  if ( v5 == 1 )
  {
    *((_DWORD *)this + 4) |= 0x100u;
    *((float *)this + 31) = a3;
    goto LABEL_3;
  }
  return 3221225485LL;
}
