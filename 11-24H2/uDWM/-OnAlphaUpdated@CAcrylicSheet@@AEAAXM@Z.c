/*
 * XREFs of ?OnAlphaUpdated@CAcrylicSheet@@AEAAXM@Z @ 0x1800A2248
 * Callers:
 *     ?UpdateTransition@CAcrylicSheet@@AEAAJXZ @ 0x18006821C (-UpdateTransition@CAcrylicSheet@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CAcrylicSheet::OnAlphaUpdated(CAcrylicSheet *this, float a2)
{
  CVisual::SetOpacity(this, a2);
}
