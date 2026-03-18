/*
 * XREFs of ?OnPropertyValueChanged@CEffectBrush@@EEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1801E46F0
 * Callers:
 *     ?PropertyUpdated@CPropertySet@@AEAAJIIPEBX@Z @ 0x1801844F4 (-PropertyUpdated@CPropertySet@@AEAAJIIPEBX@Z.c)
 * Callees:
 *     ?NotifyOnChanged@CBrush@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18007F680 (-NotifyOnChanged@CBrush@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0CEffectPropertyChangeNotification@@QEAA@PEAUIEffectInstance@Composition@UI@Windows@@I@Z @ 0x1801E4868 (--0CEffectPropertyChangeNotification@@QEAA@PEAUIEffectInstance@Composition@UI@Windows@@I@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CEffectBrush::OnPropertyValueChanged(__int64 a1, unsigned int a2, unsigned int a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 v9; // rsi
  __int64 v10; // rcx
  int v11; // eax
  unsigned int v12; // ebx
  unsigned int v13; // ebx
  int v14; // eax
  unsigned int v15; // r8d
  void (__fastcall *v16)(__int64, unsigned int, __int64); // rax
  __int64 v17; // rcx
  unsigned int v19; // [rsp+40h] [rbp-38h] BYREF
  _BYTE v20[24]; // [rsp+48h] [rbp-30h] BYREF
  char v21; // [rsp+80h] [rbp+8h] BYREF

  v4 = *(_QWORD *)(a1 + 8);
  if ( !v4 || !*(_QWORD *)(v4 + 80) )
  {
    v12 = -2147483634;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147483634, 0x354u, 0LL);
    return v12;
  }
  v9 = *(_QWORD *)(*(_QWORD *)(v4 + 80) + 56LL);
  if ( a2 >= (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9) )
    return 0;
  v10 = *(_QWORD *)(a1 + 24);
  v19 = 0;
  v21 = 0;
  v11 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64, char *, unsigned int *))(*(_QWORD *)v10 + 32LL))(
          v10,
          a2,
          a3,
          a4,
          &v21,
          &v19);
  v12 = v11;
  if ( v11 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v11, 0x363u, 0LL);
    return v12;
  }
  v13 = 1;
  if ( v21 )
  {
    v15 = v19;
  }
  else
  {
    v14 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 32LL))(v9);
    v15 = v19;
    if ( v19 == v14 - 1 )
      goto LABEL_7;
  }
  v13 = 6;
LABEL_7:
  CEffectPropertyChangeNotification::CEffectPropertyChangeNotification(
    (CEffectPropertyChangeNotification *)v20,
    *(struct Windows::UI::Composition::IEffectInstance **)(a1 + 24),
    v15);
  v16 = *(void (__fastcall **)(__int64, unsigned int, __int64))(*(_QWORD *)(a1 - 104) + 80LL);
  v17 = a1 - 104;
  if ( v16 == CBrush::NotifyOnChanged )
    CBrush::NotifyOnChanged(v17, v13, (__int64)v20);
  else
    v16(v17, v13, (__int64)v20);
  return 0;
}
