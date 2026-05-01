/*
 * XREFs of ?_FindTaskWindow@CImmersiveWindowCollection@CImmersiveApp@@AEBAJAEBVCTaskWindowFinder@@PEA_K@Z @ 0x180035A40
 * Callers:
 *     ?OnViewReadinessChanged@CImmersiveWindowCollection@CImmersiveApp@@QEAAXPEAUHWND__@@_N@Z @ 0x1800358C8 (-OnViewReadinessChanged@CImmersiveWindowCollection@CImmersiveApp@@QEAAXPEAUHWND__@@_N@Z.c)
 *     ?_FindWindow@CImmersiveWindowCollection@CImmersiveApp@@AEBAJPEAUHWND__@@PEA_K@Z @ 0x1800365D4 (-_FindWindow@CImmersiveWindowCollection@CImmersiveApp@@AEBAJPEAUHWND__@@PEA_K@Z.c)
 *     ?OnTitleUpdated@CImmersiveWindowCollection@CImmersiveApp@@QEAAXPEAUHWND__@@@Z @ 0x180036668 (-OnTitleUpdated@CImmersiveWindowCollection@CImmersiveApp@@QEAAXPEAUHWND__@@@Z.c)
 *     ?DeleteWindow@CImmersiveWindowCollection@CImmersiveApp@@QEAAJAEBVCTaskWindowFinder@@PEA_NPEAPEAUITaskWindow@@@Z @ 0x1800A0A34 (-DeleteWindow@CImmersiveWindowCollection@CImmersiveApp@@QEAAJAEBVCTaskWindowFinder@@PEA_NPEAPEAU.c)
 *     ?_GetWindow@CImmersiveWindowCollection@CImmersiveApp@@AEBAJAEBVCTaskWindowFinder@@PEAPEAUITaskWindow@@PEA_K@Z @ 0x1802C55F8 (-_GetWindow@CImmersiveWindowCollection@CImmersiveApp@@AEBAJAEBVCTaskWindowFinder@@PEAPEAUITaskWi.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CImmersiveApp::CImmersiveWindowCollection::_FindTaskWindow(
        CImmersiveApp::CImmersiveWindowCollection *this,
        const struct CTaskWindowFinder *a2,
        unsigned __int64 *a3)
{
  int v6; // edi
  unsigned __int64 v7; // r15
  unsigned __int64 i; // rbx
  __int64 *v9; // rcx
  __int64 v10; // rax
  __int64 result; // rax

  v6 = 0;
  *a3 = 0LL;
  v7 = 0LL;
  for ( i = 0LL; ; ++i )
  {
    if ( i >= *((_QWORD *)this + 21) )
    {
      v6 = -2147319765;
      goto LABEL_8;
    }
    if ( *((_BYTE *)a2 + 16) )
      break;
    v9 = *(__int64 **)(*((_QWORD *)this + 20) + 8 * i);
    v10 = *v9;
    if ( *(_QWORD *)a2 )
    {
      if ( (*(__int64 (**)(void))(v10 + 32))() == *(_QWORD *)a2 )
        break;
    }
    else if ( (*(unsigned __int8 (__fastcall **)(__int64 *, _QWORD))(v10 + 48))(v9, *((_QWORD *)a2 + 1)) )
    {
      break;
    }
  }
  v7 = i;
LABEL_8:
  result = (unsigned int)v6;
  if ( v6 >= 0 )
    *a3 = v7;
  return result;
}
