/*
 * XREFs of ?GetProperty@CPropertySet@@UEAAJIPEAVCExpressionValue@@@Z @ 0x18000DA20
 * Callers:
 *     ?SetOutputValueOnTarget@CBaseExpression@@IEAAJPEAVCResource@@@Z @ 0x18000ED10 (-SetOutputValueOnTarget@CBaseExpression@@IEAAJPEAVCResource@@@Z.c)
 *     ?CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1800129B0 (-CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?NotifyAnimationStateChanged@CBaseExpression@@AEAAJW4AnimationEventType@@@Z @ 0x180014D94 (-NotifyAnimationStateChanged@CBaseExpression@@AEAAJW4AnimationEventType@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$GetPropertyValue@UD2DMatrix@@@?$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAAPEAUD2DMatrix@@I@Z @ 0x180182A2C (--$GetPropertyValue@UD2DMatrix@@@-$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAlloc.c)
 *     ??$GetPropertyValue@_N@?$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAAPEA_NI@Z @ 0x1801A8750 (--$GetPropertyValue@_N@-$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QE.c)
 *     ModuleFailFastForHRESULT @ 0x18024634C (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CPropertySet::GetProperty(CPropertySet *this, unsigned int a2, struct CExpressionValue *a3)
{
  char *v5; // rcx
  __int64 v6; // r11
  int v7; // eax
  unsigned int v8; // ebx
  __int64 result; // rax
  __int64 v10; // rax
  __int64 v11; // xmm1_8
  __int64 v12; // rax
  _QWORD *Property; // rax
  _OWORD *v14; // rax
  _OWORD *v15; // rax
  _OWORD *v16; // rax
  _OWORD *v17; // rax
  void *retaddr; // [rsp+38h] [rbp+0h]

  if ( a2 >= *((_DWORD *)this + 28) )
  {
    v8 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0xB5u, 0LL);
  }
  else
  {
    v5 = (char *)this + 88;
    if ( a2 >= *((_DWORD *)v5 + 6) )
      ModuleFailFastForHRESULT(-2147024809, retaddr);
    v6 = *(_QWORD *)v5;
    v7 = *(_DWORD *)(*(_QWORD *)v5 + 8LL * a2);
    if ( v7 != 18 )
    {
      switch ( v7 )
      {
        case 17:
          *(_BYTE *)a3 = *(_BYTE *)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::GetPropertyValue<bool>(
                                     v5,
                                     a2,
                                     a3,
                                     this);
          *((_DWORD *)a3 + 18) = 17;
          return 0;
        case 35:
          Property = (_QWORD *)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::GetPropertyValue<D2DMatrix>(
                                 v5,
                                 a2,
                                 a3,
                                 this);
          *((_DWORD *)a3 + 18) = 35;
          *(_QWORD *)a3 = *Property;
          return 0LL;
        case 52:
          v12 = *((_QWORD *)this + 15) + (*(_DWORD *)(v6 + 8LL * a2 + 4) & 0x1FFFFFFF);
          *((_DWORD *)a3 + 18) = 52;
          *(_QWORD *)a3 = *(_QWORD *)v12;
          *((_DWORD *)a3 + 2) = *(_DWORD *)(v12 + 8);
          return 0LL;
        case 69:
          v16 = (_OWORD *)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::GetPropertyValue<D2DMatrix>(
                            v5,
                            a2,
                            a3,
                            this);
          *((_DWORD *)a3 + 18) = 69;
          *(_OWORD *)a3 = *v16;
          return 0LL;
        case 70:
          v15 = (_OWORD *)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::GetPropertyValue<D2DMatrix>(
                            v5,
                            a2,
                            a3,
                            this);
          *((_DWORD *)a3 + 18) = 70;
          *(_OWORD *)a3 = *v15;
          return 0LL;
        case 71:
          v17 = (_OWORD *)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::GetPropertyValue<D2DMatrix>(
                            v5,
                            a2,
                            a3,
                            this);
          *((_DWORD *)a3 + 18) = 71;
          *(_OWORD *)a3 = *v17;
          return 0;
        case 104:
          v10 = *((_QWORD *)this + 15) + (*(_DWORD *)(v6 + 8LL * a2 + 4) & 0x1FFFFFFF);
          *((_DWORD *)a3 + 18) = 104;
          *(_OWORD *)a3 = *(_OWORD *)v10;
          v11 = *(_QWORD *)(v10 + 16);
          result = 0LL;
          *((_QWORD *)a3 + 2) = v11;
          return result;
        case 265:
          v14 = (_OWORD *)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::GetPropertyValue<D2DMatrix>(
                            v5,
                            a2,
                            a3,
                            this);
          *((_DWORD *)a3 + 18) = 265;
          *(_OWORD *)a3 = *v14;
          *((_OWORD *)a3 + 1) = v14[1];
          *((_OWORD *)a3 + 2) = v14[2];
          *((_OWORD *)a3 + 3) = v14[3];
          return 0LL;
        default:
          ModuleFailFastForHRESULT(-2147418113, retaddr);
      }
    }
    *(_DWORD *)a3 = *(_DWORD *)((*(_DWORD *)(v6 + 8LL * a2 + 4) & 0x1FFFFFFF) + *((_QWORD *)this + 15));
    *((_DWORD *)a3 + 18) = 18;
    return 0;
  }
  return v8;
}
