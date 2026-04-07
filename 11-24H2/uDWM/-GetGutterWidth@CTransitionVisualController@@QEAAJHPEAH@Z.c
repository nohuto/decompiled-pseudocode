/*
 * XREFs of ?GetGutterWidth@CTransitionVisualController@@QEAAJHPEAH@Z @ 0x1800DD7F8
 * Callers:
 *     ?_WindowEnumCallback@CAppArrangementImmediate@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800D6600 (-_WindowEnumCallback@CAppArrangementImmediate@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStorybo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CTransitionVisualController::GetGutterWidth(CTransitionVisualController *this, int a2, int *a3)
{
  __int64 v3; // rcx
  __int64 result; // rax

  *a3 = 0;
  v3 = *((_QWORD *)this + 23);
  result = 2147500035LL;
  if ( v3 )
  {
    *a3 = MulDiv(*(_DWORD *)(v3 + 24), a2, *(_DWORD *)(v3 + 28));
    return 0LL;
  }
  return result;
}
