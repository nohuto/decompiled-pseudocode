/*
 * XREFs of ?GetProperty@CManipulationTransform@@UEAAJIPEAVCExpressionValue@@@Z @ 0x180209340
 * Callers:
 *     <none>
 * Callees:
 *     ?CalculateMatrixFromDelta@CManipulationTransform@@SAXAEBUD2DVector3@@00PEAUD2DMatrix@@@Z @ 0x1801BACC4 (-CalculateMatrixFromDelta@CManipulationTransform@@SAXAEBUD2DVector3@@00PEAUD2DMatrix@@@Z.c)
 */

__int64 __fastcall CManipulationTransform::GetProperty(
        CManipulationTransform *this,
        int a2,
        struct CExpressionValue *a3)
{
  unsigned int v3; // esi
  int v6; // edx
  int v7; // edx
  int v8; // edx
  int v9; // edx
  struct D2DMatrix *v10; // r9
  int v12; // eax

  v3 = 0;
  if ( a3 )
  {
    v6 = a2 - 1;
    if ( v6 )
    {
      v7 = v6 - 1;
      if ( v7 )
      {
        v8 = v7 - 1;
        if ( v8 )
        {
          v9 = v8 - 1;
          if ( v9 )
          {
            if ( v9 == 1 )
            {
              v10 = (CManipulationTransform *)((char *)this + 208);
              if ( *((_BYTE *)this + 272) )
              {
                CManipulationTransform::CalculateMatrixFromDelta(
                  (CManipulationTransform *)((char *)this + 160),
                  (CManipulationTransform *)((char *)this + 184),
                  (CManipulationTransform *)((char *)this + 196),
                  v10);
                *((_BYTE *)this + 272) = 0;
              }
              *((_DWORD *)a3 + 18) = 265;
              *(_OWORD *)a3 = *(_OWORD *)v10;
              *((_OWORD *)a3 + 1) = *((_OWORD *)v10 + 1);
              *((_OWORD *)a3 + 2) = *((_OWORD *)v10 + 2);
              *((_OWORD *)a3 + 3) = *((_OWORD *)v10 + 3);
            }
            else
            {
              return (unsigned int)-2147024809;
            }
            return v3;
          }
          *((_DWORD *)a3 + 18) = 52;
          *(_QWORD *)a3 = *(_QWORD *)((char *)this + 196);
          v12 = *((_DWORD *)this + 51);
        }
        else
        {
          *((_DWORD *)a3 + 18) = 52;
          *(_QWORD *)a3 = *((_QWORD *)this + 23);
          v12 = *((_DWORD *)this + 48);
        }
      }
      else
      {
        *((_DWORD *)a3 + 18) = 52;
        *(_QWORD *)a3 = *(_QWORD *)((char *)this + 172);
        v12 = *((_DWORD *)this + 45);
      }
      *((_DWORD *)a3 + 2) = v12;
    }
    else
    {
      *((_DWORD *)a3 + 18) = 52;
      *(_QWORD *)a3 = *((_QWORD *)this + 20);
      *((_DWORD *)a3 + 2) = *((_DWORD *)this + 42);
    }
    return v3;
  }
  return 2147942487LL;
}
