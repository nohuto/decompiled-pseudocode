/*
 * XREFs of ?GetProperty@CManipulation@@UEAAJIPEAVCExpressionValue@@@Z @ 0x180210570
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?_EnqueueDeferredDeltaReset@CManipulation@@AEAAJI@Z @ 0x18021061C (-_EnqueueDeferredDeltaReset@CManipulation@@AEAAJI@Z.c)
 */

__int64 __fastcall CManipulation::GetProperty(CManipulation *this, int a2, struct CExpressionValue *a3)
{
  unsigned int v3; // ebx
  int v4; // edx
  int v5; // edx
  int v6; // edx
  unsigned int v7; // edx
  int v9; // xmm0_4
  int v10; // edx
  int v11; // edx
  int v12; // edx
  int v13; // edx
  int v14; // eax

  v3 = 0;
  if ( a3 )
  {
    if ( !a2 )
    {
      *((_DWORD *)a3 + 18) = 52;
      *(_QWORD *)a3 = *((_QWORD *)this + 34);
      *((_DWORD *)a3 + 2) = *((_DWORD *)this + 70);
      return v3;
    }
    v4 = a2 - 1;
    if ( !v4 )
    {
      *((_DWORD *)a3 + 18) = 52;
      v7 = 1;
      *(_QWORD *)a3 = *(_QWORD *)((char *)this + 284);
      *((_DWORD *)a3 + 2) = *((_DWORD *)this + 73);
      goto LABEL_7;
    }
    v5 = v4 - 1;
    if ( v5 )
    {
      v6 = v5 - 1;
      if ( !v6 )
      {
        v7 = 3;
        *(_DWORD *)a3 = *((_DWORD *)this + 77);
        *((_DWORD *)a3 + 18) = 18;
LABEL_7:
        CManipulation::_EnqueueDeferredDeltaReset(this, v7);
        return v3;
      }
      v10 = v6 - 1;
      if ( v10 )
      {
        v11 = v10 - 1;
        if ( !v11 )
        {
          *((_DWORD *)a3 + 18) = 265;
          *(_OWORD *)a3 = *((_OWORD *)this + 21);
          *((_OWORD *)a3 + 1) = *((_OWORD *)this + 22);
          *((_OWORD *)a3 + 2) = *((_OWORD *)this + 23);
          *((_OWORD *)a3 + 3) = *((_OWORD *)this + 24);
          return v3;
        }
        v12 = v11 - 1;
        if ( v12 )
        {
          v13 = v12 - 1;
          if ( v13 )
          {
            if ( v13 == 2 )
            {
              *((_DWORD *)a3 + 18) = 17;
              *(_BYTE *)a3 = 1;
            }
            else
            {
              v3 = -2147024809;
              MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024809, 0x1F6u, 0LL);
            }
            return v3;
          }
          v9 = *((_DWORD *)this + 103);
          goto LABEL_21;
        }
        *((_DWORD *)a3 + 18) = 52;
        *(_QWORD *)a3 = *((_QWORD *)this + 50);
        v14 = *((_DWORD *)this + 102);
      }
      else
      {
        *((_DWORD *)a3 + 18) = 52;
        *(_QWORD *)a3 = *(_QWORD *)((char *)this + 324);
        v14 = *((_DWORD *)this + 83);
      }
      *((_DWORD *)a3 + 2) = v14;
      return v3;
    }
    v9 = *((_DWORD *)this + 74);
LABEL_21:
    *(_DWORD *)a3 = v9;
    *((_DWORD *)a3 + 18) = 18;
    return v3;
  }
  return 2147942487LL;
}
