/*
 * XREFs of ?Initialize@CAnimationEngine@@QEAAJXZ @ 0x180022BC0
 * Callers:
 *     ?InitializeComObjects@CDesktopManager@@AEAAJXZ @ 0x180022C9C (-InitializeComObjects@CDesktopManager@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180065FCC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CAnimationEngine::Initialize(LPVOID *this)
{
  _QWORD *v1; // r14
  HRESULT Instance; // eax
  _QWORD *v4; // rsi
  HRESULT v5; // ebx
  int v6; // r9d
  unsigned int v8; // eax
  LPVOID v9; // rcx

  v1 = this + 1;
  Instance = CoCreateInstance(&CLSID_UIAnimationManager2, 0LL, 1u, &GUID_d8b6f7d4_4109_4d3f_acee_879926968cb1, this + 1);
  v4 = this + 2;
  v5 = Instance;
  if ( Instance < 0 )
  {
    v6 = Instance;
    v8 = 89;
  }
  else
  {
    v5 = CoCreateInstance(
           &CLSID_UIAnimationTransitionLibrary2,
           0LL,
           1u,
           &GUID_03cfae53_9580_4ee3_b363_2ece51b4af6a,
           this + 2);
    v6 = v5;
    if ( v5 < 0 )
    {
      v8 = 90;
    }
    else
    {
      v5 = CoCreateInstance(
             &CLSID_UIAnimationTransitionFactory2,
             0LL,
             1u,
             &GUID_937d4916_c1a6_42d5_88d8_30344d6efe31,
             this + 3);
      v6 = v5;
      if ( v5 >= 0 )
      {
        *((_BYTE *)this + 120) = 1;
        return (unsigned int)v5;
      }
      v8 = 91;
    }
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, v8, 0LL);
  if ( *v1 )
  {
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v1 + 16LL))(*v1);
    *v1 = 0LL;
  }
  if ( *v4 )
  {
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v4 + 16LL))(*v4);
    *v4 = 0LL;
  }
  v9 = this[3];
  if ( v9 )
  {
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v9 + 16LL))(v9);
    this[3] = 0LL;
  }
  return (unsigned int)v5;
}
