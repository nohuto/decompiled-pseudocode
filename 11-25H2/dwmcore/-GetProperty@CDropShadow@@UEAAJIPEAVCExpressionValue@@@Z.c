/*
 * XREFs of ?GetProperty@CDropShadow@@UEAAJIPEAVCExpressionValue@@@Z @ 0x1801DEB50
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ModuleFailFastForHRESULT @ 0x18024A244 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CDropShadow::GetProperty(CDropShadow *this, int a2, struct CExpressionValue *a3)
{
  void **v4; // rax
  unsigned int v5; // ebx
  void *v7; // rcx
  __int64 v8; // rdx
  int v9; // ecx
  int v10; // ecx
  int v11; // ecx
  int v12; // ecx
  int v13; // ecx
  int v14; // ecx
  int v15; // ecx
  int v16; // ecx
  void *retaddr; // [rsp+38h] [rbp+0h]

  v4 = (void **)&CDropShadow::k_rgAnimDef;
  v5 = 0;
  while ( 1 )
  {
    if ( v4 == &CD2DSharedBuffer::`vftable' )
      goto LABEL_3;
    v7 = *v4;
    if ( a2 == *(_DWORD *)*v4 )
      break;
    ++v4;
  }
  if ( v7 )
  {
    v8 = *((_QWORD *)v7 + 1);
    v9 = *((_DWORD *)v7 + 1);
    if ( v9 > 69 )
    {
      v13 = v9 - 70;
      if ( v13 )
      {
        v15 = v13 - 1;
        if ( v15 )
        {
          v16 = v15 - 33;
          if ( !v16 )
          {
            *((_DWORD *)a3 + 18) = 104;
            *(_OWORD *)a3 = *(_OWORD *)((char *)this + v8);
            *((_QWORD *)a3 + 2) = *(_QWORD *)((char *)this + v8 + 16);
            return v5;
          }
          if ( v16 == 161 )
          {
            *((_DWORD *)a3 + 18) = 265;
            *(_OWORD *)a3 = *(_OWORD *)((char *)this + v8);
            *((_OWORD *)a3 + 1) = *(_OWORD *)((char *)this + v8 + 16);
            *((_OWORD *)a3 + 2) = *(_OWORD *)((char *)this + v8 + 32);
            *((_OWORD *)a3 + 3) = *(_OWORD *)((char *)this + v8 + 48);
            return v5;
          }
          goto LABEL_29;
        }
        *((_DWORD *)a3 + 18) = 71;
      }
      else
      {
        *((_DWORD *)a3 + 18) = 70;
      }
    }
    else
    {
      if ( v9 != 69 )
      {
        v10 = v9 - 17;
        if ( !v10 )
        {
          *(_BYTE *)a3 = *((_BYTE *)this + v8);
          *((_DWORD *)a3 + 18) = 17;
          return v5;
        }
        v11 = v10 - 1;
        if ( !v11 )
        {
          *(_DWORD *)a3 = *(_DWORD *)((char *)this + v8);
          *((_DWORD *)a3 + 18) = 18;
          return v5;
        }
        v12 = v11 - 17;
        if ( !v12 )
        {
          *((_DWORD *)a3 + 18) = 35;
          *(_QWORD *)a3 = *(_QWORD *)((char *)this + v8);
          return v5;
        }
        v14 = v12 - 7;
        if ( !v14 )
        {
          *((_DWORD *)a3 + 18) = 42;
          *(_DWORD *)a3 = *(_DWORD *)((char *)this + v8);
          return v5;
        }
        if ( v14 == 10 )
        {
          *((_DWORD *)a3 + 18) = 52;
          *(_QWORD *)a3 = *(_QWORD *)((char *)this + v8);
          *((_DWORD *)a3 + 2) = *(_DWORD *)((char *)this + v8 + 8);
          return v5;
        }
LABEL_29:
        ModuleFailFastForHRESULT(-2147024809, retaddr);
      }
      *((_DWORD *)a3 + 18) = 69;
    }
    *(_OWORD *)a3 = *(_OWORD *)((char *)this + v8);
    return v5;
  }
LABEL_3:
  v5 = -2147024809;
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024809, 0x5Du, 0LL);
  return v5;
}
