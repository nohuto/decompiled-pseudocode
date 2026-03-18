/*
 * XREFs of ?OnChanged@CSurfaceBrush@@MEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1801D7640
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_BOOL8 __fastcall CSurfaceBrush::OnChanged(_QWORD *a1, int a2)
{
  __int64 v2; // rax
  __int64 v3; // r8
  char v4; // al
  char v5; // cl

  if ( !a2 )
    return 1LL;
  v2 = a1[16];
  if ( !v2 || a1[11] != v2 )
    return 1LL;
  v3 = a1[17];
  if ( *(bool (__fastcall **)(CBitmapRenderStrategy *__hidden, const struct CResource *))(*(_QWORD *)v3 + 48LL) == CBitmapRenderStrategy::ListenForSurfaceNotifications )
  {
    if ( *(bool (__fastcall **)(__int64, int))(*(_QWORD *)v2 + 64LL) == CCompositionSurfaceBitmap::IsOfType )
      v4 = 1;
    else
      v4 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v2 + 64LL))(v2, 41LL);
    v5 = v4 == 0;
  }
  else
  {
    v5 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v3 + 48LL))(v3, v2);
  }
  return v5 != 0;
}
