/*
 * XREFs of ?_EnqueueDeferredDeltaReset@CManipulation@@AEAAJI@Z @ 0x18021061C
 * Callers:
 *     ?GetProperty@CManipulation@@UEAAJIPEAVCExpressionValue@@@Z @ 0x180210570 (-GetProperty@CManipulation@@UEAAJIPEAVCExpressionValue@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18007BD44 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetManipulationManager@CComposition@@QEAAJPEAPEAVCManipulationManager@@@Z @ 0x180138AD0 (-GetManipulationManager@CComposition@@QEAAJPEAPEAVCManipulationManager@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CManipulation::_EnqueueDeferredDeltaReset(CManipulation *this, int a2)
{
  struct CManipulationManager *v2; // rbx
  int v4; // edx
  char v5; // cl
  char v6; // al
  CComposition *v7; // rbx
  int ManipulationManager; // eax
  int v9; // edi
  unsigned __int8 v11; // cl
  struct CManipulationManager *v12; // [rsp+50h] [rbp+18h] BYREF

  v2 = 0LL;
  v12 = 0LL;
  v4 = a2 - 1;
  if ( v4 )
  {
    if ( v4 != 2 )
    {
      v9 = -2147024809;
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024809, 0x3A2u, 0LL);
      goto LABEL_7;
    }
    v11 = *((_BYTE *)this + 456);
    v6 = v11 | 2;
    v5 = v11 >> 1;
  }
  else
  {
    v5 = *((_BYTE *)this + 456);
    v6 = v5 | 1;
  }
  *((_BYTE *)this + 456) = v6;
  if ( (v5 & 1) != 0 )
  {
LABEL_6:
    v9 = 0;
    goto LABEL_7;
  }
  v7 = (CComposition *)*((_QWORD *)this + 3);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v12);
  ManipulationManager = CComposition::GetManipulationManager(v7, &v12);
  v9 = ManipulationManager;
  if ( ManipulationManager < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, ManipulationManager, 0x3A7u, 0LL);
    v2 = v12;
  }
  else
  {
    (*(void (__fastcall **)(CManipulation *))(*(_QWORD *)this + 8LL))(this);
    v2 = v12;
    v9 = (*(__int64 (__fastcall **)(_QWORD, __int64 (__fastcall *)(void *), CManipulation *, __int64))(**(_QWORD **)(*((_QWORD *)v12 + 2) + 5688LL) + 152LL))(
           *(_QWORD *)(*((_QWORD *)v12 + 2) + 5688LL),
           CManipulation::s_ResetDeltaProperties,
           this,
           4LL);
    if ( v9 >= 0 )
      goto LABEL_6;
    (*(void (__fastcall **)(CManipulation *))(*(_QWORD *)this + 16LL))(this);
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v9, 0x3B5u, 0LL);
  }
LABEL_7:
  if ( v2 )
    (*(void (__fastcall **)(struct CManipulationManager *))(*(_QWORD *)v2 + 16LL))(v2);
  return (unsigned int)v9;
}
