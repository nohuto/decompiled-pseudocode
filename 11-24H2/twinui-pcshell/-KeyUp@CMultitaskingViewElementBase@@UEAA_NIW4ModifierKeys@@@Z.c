/*
 * XREFs of ?KeyUp@CMultitaskingViewElementBase@@UEAA_NIW4ModifierKeys@@@Z @ 0x1804C44C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall CMultitaskingViewElementBase::KeyUp(__int64 a1)
{
  __int64 v1; // rcx

  v1 = *(_QWORD *)(a1 + 168);
  if ( v1 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 248LL))(v1);
  else
    return 0;
}
