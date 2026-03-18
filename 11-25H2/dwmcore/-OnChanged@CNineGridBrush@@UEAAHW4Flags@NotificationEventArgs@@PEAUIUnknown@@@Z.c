/*
 * XREFs of ?OnChanged@CNineGridBrush@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1801FB2A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CNineGridBrush::OnChanged(__int64 a1, int a2)
{
  __int64 v2; // rdx
  bool v3; // al

  if ( a2 == 14 )
  {
    v2 = *(_QWORD *)(a1 + 104);
    v3 = 0;
    if ( v2 )
      v3 = *(_BYTE *)(v2 + 96) != 0;
    *(_BYTE *)(a1 + 96) = v3;
  }
  return 1LL;
}
