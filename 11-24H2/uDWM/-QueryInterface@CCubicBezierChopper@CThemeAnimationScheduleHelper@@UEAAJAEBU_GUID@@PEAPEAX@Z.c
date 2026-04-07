/*
 * XREFs of ?QueryInterface@CCubicBezierChopper@CThemeAnimationScheduleHelper@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800A7C40
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800FA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CThemeAnimationScheduleHelper::CCubicBezierChopper::QueryInterface(
        CThemeAnimationScheduleHelper::CCubicBezierChopper *this,
        const struct _GUID *a2,
        void **a3)
{
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 result; // rax

  *a3 = 0LL;
  v5 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_cbfd91d9_51b2_45e4_b3de_d19ccfb863c5.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_cbfd91d9_51b2_45e4_b3de_d19ccfb863c5.Data1 )
    v5 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_cbfd91d9_51b2_45e4_b3de_d19ccfb863c5.Data4;
  if ( v5 )
  {
    v6 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1 )
      v6 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4;
    if ( v6 )
      return 2147500034LL;
  }
  (*(void (__fastcall **)(CThemeAnimationScheduleHelper::CCubicBezierChopper *))(*(_QWORD *)this + 8LL))(this);
  result = 0LL;
  *a3 = this;
  return result;
}
