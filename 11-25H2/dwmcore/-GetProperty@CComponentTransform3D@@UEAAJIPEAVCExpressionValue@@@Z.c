/*
 * XREFs of ?GetProperty@CComponentTransform3D@@UEAAJIPEAVCExpressionValue@@@Z @ 0x1800E67D0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ModuleFailFastForHRESULT @ 0x18024A244 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CComponentTransform3D::GetProperty(CComponentTransform3D *this, int a2, struct CExpressionValue *a3)
{
  unsigned int v3; // ebx
  void **i; // rcx
  __int64 result; // rax
  float v7; // xmm0_4
  _DWORD *v8; // rax
  int v9; // ecx
  __int64 v10; // rdx
  void *retaddr; // [rsp+38h] [rbp+0h]

  v3 = 0;
  if ( a2 == 6 )
  {
    v7 = *((float *)this + 58) * 57.295776;
    *((_DWORD *)a3 + 18) = 18;
    *(float *)a3 = v7;
    return v3;
  }
  else
  {
    for ( i = (void **)&CComponentTransform3D::k_rgAnimDef; ; ++i )
    {
      if ( i == &CCaptureRenderTarget::`vftable'{for `CNotificationResource'} )
        goto LABEL_4;
      v8 = *i;
      if ( a2 == *(_DWORD *)*i )
        break;
    }
    if ( !v8 )
    {
LABEL_4:
      v3 = -2147024809;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0x78u, 0LL);
      return v3;
    }
    v9 = v8[1];
    v10 = *((_QWORD *)v8 + 1);
    if ( v9 != 35 )
    {
      switch ( v9 )
      {
        case 17:
          *(_BYTE *)a3 = *((_BYTE *)this + v10);
          *((_DWORD *)a3 + 18) = 17;
          return v3;
        case 18:
          *(_DWORD *)a3 = *(_DWORD *)((char *)this + v10);
          *((_DWORD *)a3 + 18) = 18;
          return v3;
        case 42:
          *((_DWORD *)a3 + 18) = 42;
          *(_DWORD *)a3 = *(_DWORD *)((char *)this + v10);
          return v3;
        case 52:
          *((_DWORD *)a3 + 18) = 52;
          *(_QWORD *)a3 = *(_QWORD *)((char *)this + v10);
          *((_DWORD *)a3 + 2) = *(_DWORD *)((char *)this + v10 + 8);
          return 0LL;
        case 69:
          *((_DWORD *)a3 + 18) = 69;
          *(_OWORD *)a3 = *(_OWORD *)((char *)this + v10);
          return v3;
        case 70:
          *((_DWORD *)a3 + 18) = 70;
          result = 0LL;
          *(_OWORD *)a3 = *(_OWORD *)((char *)this + v10);
          return result;
        case 71:
          *((_DWORD *)a3 + 18) = 71;
          *(_OWORD *)a3 = *(_OWORD *)((char *)this + v10);
          return v3;
        case 104:
          *((_DWORD *)a3 + 18) = 104;
          result = 0LL;
          *(_OWORD *)a3 = *(_OWORD *)((char *)this + v10);
          *((_QWORD *)a3 + 2) = *(_QWORD *)((char *)this + v10 + 16);
          return result;
        case 265:
          *((_DWORD *)a3 + 18) = 265;
          result = 0LL;
          *(_OWORD *)a3 = *(_OWORD *)((char *)this + v10);
          *((_OWORD *)a3 + 1) = *(_OWORD *)((char *)this + v10 + 16);
          *((_OWORD *)a3 + 2) = *(_OWORD *)((char *)this + v10 + 32);
          *((_OWORD *)a3 + 3) = *(_OWORD *)((char *)this + v10 + 48);
          return result;
        default:
          ModuleFailFastForHRESULT(-2147024809, retaddr);
      }
    }
    *((_DWORD *)a3 + 18) = 35;
    result = 0LL;
    *(_QWORD *)a3 = *(_QWORD *)((char *)this + v10);
  }
  return result;
}
