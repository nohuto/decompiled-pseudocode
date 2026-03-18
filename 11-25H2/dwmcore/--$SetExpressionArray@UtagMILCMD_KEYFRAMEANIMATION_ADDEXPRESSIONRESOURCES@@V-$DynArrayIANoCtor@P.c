/*
 * XREFs of ??$SetExpressionArray@UtagMILCMD_KEYFRAMEANIMATION_ADDEXPRESSIONRESOURCES@@V?$DynArrayIANoCtor@PEAVCBaseExpression@@$01$0A@@@@CBaseExpression@@IEAAJPEAVCResourceTable@@PEBUtagMILCMD_KEYFRAMEANIMATION_ADDEXPRESSIONRESOURCES@@PEBXIPEAV?$DynArrayIANoCtor@PEAVCBaseExpression@@$01$0A@@@@Z @ 0x1801B7FD4
 * Callers:
 *     ?ProcessAddExpressionResources@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_KEYFRAMEANIMATION_ADDEXPRESSIONRESOURCES@@PEBXI@Z @ 0x1801B7FB0 (-ProcessAddExpressionResources@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_KEYFRA.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?IsOfType@CExpression@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1801B8190 (-IsOfType@CExpression@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?AddMultipleAndSet@?$DynArray@PEAVCBaseExpression@@$0A@@@QEAAJPEFBQEAVCBaseExpression@@I@Z @ 0x1801B81B0 (-AddMultipleAndSet@-$DynArray@PEAVCBaseExpression@@$0A@@@QEAAJPEFBQEAVCBaseExpression@@I@Z.c)
 *     ?SetOwner@CExpression@@UEAAXPEAVCBaseExpression@@@Z @ 0x1801B8280 (-SetOwner@CExpression@@UEAAXPEAVCBaseExpression@@@Z.c)
 *     ?RegisterSourcesForOwner@CExpression@@UEAAJXZ @ 0x1801B8370 (-RegisterSourcesForOwner@CExpression@@UEAAJXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CBaseExpression::SetExpressionArray<tagMILCMD_KEYFRAMEANIMATION_ADDEXPRESSIONRESOURCES,DynArrayIANoCtor<CBaseExpression *,2,0>>(
        struct CBaseExpression *a1,
        __int64 a2,
        __int64 a3,
        unsigned int *a4,
        __int64 a5,
        __int64 a6)
{
  unsigned int i; // esi
  unsigned int v11; // edx
  __int64 v12; // rax
  unsigned int v13; // ebx
  CExpression *v15; // rdi
  __int64 (__fastcall *v16)(CExpression *, __int64); // rax
  char v17; // al
  int v18; // eax
  void (__fastcall *v19)(CExpression *__hidden, struct CBaseExpression *); // rax
  __int64 (__fastcall *v20)(CExpression *__hidden); // rax
  int v21; // eax
  unsigned int v22; // [rsp+20h] [rbp-38h]
  CExpression *v23; // [rsp+70h] [rbp+18h] BYREF

  for ( i = 0; ; ++i )
  {
    if ( i >= *(_DWORD *)(a3 + 8) )
      return 0;
    v11 = *a4;
    if ( !*a4
      || v11 >= *(_DWORD *)(a2 + 28)
      || (v12 = *(_QWORD *)(a2 + 40), !*(_DWORD *)(*(_DWORD *)(a2 + 24) * v11 + v12))
      || (v15 = *(CExpression **)(*(_DWORD *)(a2 + 24) * v11 + v12 + 8)) == 0LL
      || ((v16 = *(__int64 (__fastcall **)(CExpression *, __int64))(*(_QWORD *)v15 + 64LL),
           (char *)v16 != (char *)CExpression::IsOfType)
        ? (v17 = v16(v15, 59LL))
        : (v17 = CExpression::IsOfType(v15, 59LL)),
          !v17) )
    {
      v22 = 335;
LABEL_7:
      v13 = -2003303421;
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2003303421, v22, 0LL);
      return v13;
    }
    if ( (*(__int64 (__fastcall **)(CExpression *))(*(_QWORD *)v15 + 216LL))(v15) )
    {
      v22 = 343;
      goto LABEL_7;
    }
    v23 = v15;
    v18 = DynArray<CBaseExpression *,0>::AddMultipleAndSet(a6, &v23);
    v13 = v18;
    if ( v18 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v18, 0x15Au, 0LL);
      return v13;
    }
    (*(void (__fastcall **)(CExpression *))(*(_QWORD *)v15 + 8LL))(v15);
    v19 = *(void (__fastcall **)(CExpression *__hidden, struct CBaseExpression *))(*(_QWORD *)v15 + 208LL);
    if ( v19 == CExpression::SetOwner )
      CExpression::SetOwner(v15, a1);
    else
      v19(v15, a1);
    v20 = *(__int64 (__fastcall **)(CExpression *__hidden))(*(_QWORD *)v15 + 224LL);
    v21 = v20 == CExpression::RegisterSourcesForOwner ? CExpression::RegisterSourcesForOwner(v15) : v20(v15);
    v13 = v21;
    if ( v21 < 0 )
      break;
    ++a4;
  }
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v21, 0x162u, 0LL);
  return v13;
}
