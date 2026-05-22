/*
 * XREFs of ?Create@InputStateManager@@SAJPEAUISystemInputRouter@@PEAPEAUIRawInputClient@@@Z @ 0x180051BE0
 * Callers:
 *     ?Initialize@OneCoreUAPInputHost@@IEAAJPEAX@Z @ 0x18005C55C (-Initialize@OneCoreUAPInputHost@@IEAAJPEAX@Z.c)
 *     ??0DeviceInputHost@@AEAA@XZ @ 0x18008D3FC (--0DeviceInputHost@@AEAA@XZ.c)
 * Callees:
 *     ??2RefCountedObject@@SAPEAX_K@Z @ 0x18001C070 (--2RefCountedObject@@SAPEAX_K@Z.c)
 *     ?Initialize@InputStateManager@@IEAAJXZ @ 0x180051CD8 (-Initialize@InputStateManager@@IEAAJXZ.c)
 *     ??0InputStateManager@@IEAA@PEAUISystemInputRouter@@@Z @ 0x180051F98 (--0InputStateManager@@IEAA@PEAUISystemInputRouter@@@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18008DFDC (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008EFF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall InputStateManager::Create(
        struct ISystemInputRouter *a1,
        struct IRawInputClient **a2,
        __int64 a3,
        const char *a4)
{
  __int64 v6; // rdx
  unsigned int v7; // ebx
  InputStateManager *v9; // rax
  InputStateManager *v10; // rbx
  int v11; // eax
  unsigned int v12; // esi
  int v13; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !ISMScenarios::s_instance )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x1C,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\ismstatics\\system\\ismscenarios.cpp",
      a4);
  if ( *(_DWORD *)ISMScenarios::s_instance )
  {
    if ( *(_DWORD *)ISMScenarios::s_instance == 1 && !a2 )
    {
      v6 = 220LL;
      goto LABEL_7;
    }
  }
  else if ( !a1 || !a2 )
  {
    v6 = 216LL;
LABEL_7:
    v7 = -2147024809;
LABEL_8:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputstatemanager\\lib\\inputstatemanager.cpp",
      (const char *)v7,
      v13);
    return v7;
  }
  v9 = (InputStateManager *)RefCountedObject::operator new(0xD0uLL);
  if ( v9 )
    v10 = InputStateManager::InputStateManager(v9, a1);
  else
    v10 = 0LL;
  if ( !v10 )
  {
    v7 = -2147024882;
    v6 = 227LL;
    goto LABEL_8;
  }
  v11 = InputStateManager::Initialize(v10);
  v12 = v11;
  if ( v11 >= 0 )
  {
    *a2 = v10;
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xE6,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputstatemanager\\lib\\inputstatemanager.cpp",
      (const char *)(unsigned int)v11,
      v13);
    return v12;
  }
}
