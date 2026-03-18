/*
 * XREFs of ?GetProperty@CRectangleGeometry@@UEAAJIPEAVCExpressionValue@@@Z @ 0x180195D00
 * Callers:
 *     <none>
 * Callees:
 *     ?GetProperty@CGeometry@@UEAAJIPEAVCExpressionValue@@@Z @ 0x1800E5FD0 (-GetProperty@CGeometry@@UEAAJIPEAVCExpressionValue@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ModuleFailFastForHRESULT @ 0x18024A244 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CRectangleGeometry::GetProperty(CRectangleGeometry *this, int a2, struct CExpressionValue *a3)
{
  void **v4; // r9
  unsigned int v5; // ebx
  _DWORD *v6; // rax
  int v7; // ecx
  __int64 v8; // rdx
  __int64 result; // rax
  int Property; // eax
  void *retaddr; // [rsp+38h] [rbp+0h]

  v4 = (void **)&CRectangleGeometry::k_rgAnimDef;
  v5 = 0;
  while ( v4 != &CSurfaceDrawListBrush::`vftable' )
  {
    v6 = *v4;
    if ( a2 == *(_DWORD *)*v4 )
    {
      if ( v6 )
      {
        v7 = v6[1];
        v8 = *((_QWORD *)v6 + 1);
        if ( v7 != 35 )
        {
          switch ( v7 )
          {
            case 17:
              *(_BYTE *)a3 = *((_BYTE *)this + v8);
              *((_DWORD *)a3 + 18) = 17;
              return v5;
            case 18:
              result = 0LL;
              *(_DWORD *)a3 = *(_DWORD *)((char *)this + v8);
              *((_DWORD *)a3 + 18) = 18;
              return result;
            case 42:
              *((_DWORD *)a3 + 18) = 42;
              *(_DWORD *)a3 = *(_DWORD *)((char *)this + v8);
              return v5;
            case 52:
              *((_DWORD *)a3 + 18) = 52;
              *(_QWORD *)a3 = *(_QWORD *)((char *)this + v8);
              *((_DWORD *)a3 + 2) = *(_DWORD *)((char *)this + v8 + 8);
              return 0LL;
            case 69:
              *((_DWORD *)a3 + 18) = 69;
              *(_OWORD *)a3 = *(_OWORD *)((char *)this + v8);
              return v5;
            case 70:
              *((_DWORD *)a3 + 18) = 70;
              result = 0LL;
              *(_OWORD *)a3 = *(_OWORD *)((char *)this + v8);
              return result;
            case 71:
              *((_DWORD *)a3 + 18) = 71;
              *(_OWORD *)a3 = *(_OWORD *)((char *)this + v8);
              return v5;
            case 104:
              *((_DWORD *)a3 + 18) = 104;
              result = 0LL;
              *(_OWORD *)a3 = *(_OWORD *)((char *)this + v8);
              *((_QWORD *)a3 + 2) = *(_QWORD *)((char *)this + v8 + 16);
              return result;
            case 265:
              *((_DWORD *)a3 + 18) = 265;
              result = 0LL;
              *(_OWORD *)a3 = *(_OWORD *)((char *)this + v8);
              *((_OWORD *)a3 + 1) = *(_OWORD *)((char *)this + v8 + 16);
              *((_OWORD *)a3 + 2) = *(_OWORD *)((char *)this + v8 + 32);
              *((_OWORD *)a3 + 3) = *(_OWORD *)((char *)this + v8 + 48);
              return result;
            default:
              ModuleFailFastForHRESULT(-2147024809, retaddr);
          }
        }
        *((_DWORD *)a3 + 18) = 35;
        *(_QWORD *)a3 = *(_QWORD *)((char *)this + v8);
        return v5;
      }
      break;
    }
    ++v4;
  }
  Property = CGeometry::GetProperty(this, a2, a3);
  v5 = Property;
  if ( Property < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, Property, 0xBBu, 0LL);
  return v5;
}
