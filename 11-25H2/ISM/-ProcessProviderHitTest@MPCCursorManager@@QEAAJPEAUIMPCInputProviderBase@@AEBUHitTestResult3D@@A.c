/*
 * XREFs of ?ProcessProviderHitTest@MPCCursorManager@@QEAAJPEAUIMPCInputProviderBase@@AEBUHitTestResult3D@@AEA_N@Z @ 0x18007530C
 * Callers:
 *     ?ProcessCursorData@MPCHolographicInputManager@@AEAAXPEAUIMPCInputProviderBase@@AEBUHitTestResult3D@@W4MPCCursorId@@AEAUCursor3DHitData@@@Z @ 0x180013E84 (-ProcessCursorData@MPCHolographicInputManager@@AEAAXPEAUIMPCInputProviderBase@@AEBUHitTestResult.c)
 * Callees:
 *     _lambda_2c96748461f4900de3746577f815c647_::operator() @ 0x180075554 (_lambda_2c96748461f4900de3746577f815c647_--operator().c)
 *     ?Is3DCursorVisible@MPCCursorManager@@AEAA_NXZ @ 0x1800755D4 (-Is3DCursorVisible@MPCCursorManager@@AEAA_NXZ.c)
 *     ?UpdateCursorVisibility@MPCCursorManager@@AEAAX_N00@Z @ 0x1800755FC (-UpdateCursorVisibility@MPCCursorManager@@AEAAX_N00@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18008DFDC (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Is2DCursorVisible@MPCCursorManager@@AEAA_NXZ @ 0x18009BD10 (-Is2DCursorVisible@MPCCursorManager@@AEAA_NXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall MPCCursorManager::ProcessProviderHitTest(
        MPCCursorManager *this,
        struct IMPCInputProviderBase *a2,
        const struct HitTestResult3D *a3,
        bool *a4)
{
  int v8; // ebx
  const char *v9; // r9
  char v10; // dl
  char v11; // cl
  bool v13; // [rsp+20h] [rbp-40h] BYREF
  char v14; // [rsp+21h] [rbp-3Fh] BYREF
  _QWORD v15[6]; // [rsp+28h] [rbp-38h] BYREF
  char v16; // [rsp+58h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]
  bool v18; // [rsp+80h] [rbp+20h] BYREF

  v8 = 0;
  if ( *((_BYTE *)this + 64) )
  {
    v14 = 0;
    v13 = MPCCursorManager::Is2DCursorVisible(this);
    v18 = MPCCursorManager::Is3DCursorVisible(this);
    v15[0] = this;
    v15[1] = a4;
    v15[2] = &v13;
    v15[3] = &v18;
    v15[4] = &v14;
    v15[5] = a3;
    v16 = 1;
    if ( !*((_BYTE *)this + 56) || !*((_BYTE *)this + 65) )
    {
      *(_OWORD *)this = 0LL;
      *((_OWORD *)this + 1) = 0LL;
      *((_DWORD *)this + 8) = 0;
      MPCCursorManager::UpdateCursorVisibility(this, v13, v18, 0);
      *a4 = !MPCCursorManager::Is3DCursorVisible(this);
      return 0LL;
    }
    if ( !a2 )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x79,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpccursormanager.cpp",
        v9);
    if ( !(*(unsigned __int8 (__fastcall **)(struct IMPCInputProviderBase *))(*(_QWORD *)a2 + 256LL))(a2) )
    {
      v13 = 0;
      v18 = 1;
      if ( v14 )
      {
        *(_OWORD *)this = *(_OWORD *)((char *)a3 + 380);
        *((_OWORD *)this + 1) = *(_OWORD *)((char *)a3 + 12);
        v8 = *((_DWORD *)a3 + 94);
      }
      else
      {
        *(_OWORD *)this = 0LL;
        *((_OWORD *)this + 1) = 0LL;
      }
LABEL_11:
      *((_DWORD *)this + 8) = v8;
      MPCCursorManager::UpdateCursorVisibility(this, v13, v18, 0);
      *a4 = !MPCCursorManager::Is3DCursorVisible(this);
      return 0LL;
    }
    if ( ((*(__int64 (__fastcall **)(struct IMPCInputProviderBase *))(*(_QWORD *)a2 + 48LL))(a2) & 2) == 0 )
    {
      v13 = 0;
      v18 = 1;
      v16 = 0;
      lambda_2c96748461f4900de3746577f815c647_::operator()(v15);
      return 0LL;
    }
    if ( *(_DWORD *)this >= *((_DWORD *)this + 2) || (v10 = 1, *((_DWORD *)this + 1) >= *((_DWORD *)this + 3)) )
      v10 = 0;
    if ( *((_DWORD *)a3 + 95) >= *((_DWORD *)a3 + 97) || (v11 = 1, *((_DWORD *)a3 + 96) >= *((_DWORD *)a3 + 98)) )
      v11 = 0;
    v14 = v11;
    if ( v10 )
    {
      if ( v11 )
      {
        if ( *((_DWORD *)this + 8) == *((_DWORD *)a3 + 94) )
        {
LABEL_27:
          if ( v11 )
          {
            *(_OWORD *)this = *(_OWORD *)((char *)a3 + 380);
            *((_OWORD *)this + 1) = *(_OWORD *)((char *)a3 + 12);
            v8 = *((_DWORD *)a3 + 94);
          }
          else
          {
            *(_OWORD *)this = 0LL;
            *((_OWORD *)this + 1) = 0LL;
          }
          goto LABEL_11;
        }
LABEL_25:
        v18 = 0;
        v13 = 1;
        goto LABEL_27;
      }
    }
    else if ( v11 )
    {
      goto LABEL_25;
    }
    v18 = 1;
    v13 = 0;
    goto LABEL_27;
  }
  *a4 = 0;
  return 0LL;
}
