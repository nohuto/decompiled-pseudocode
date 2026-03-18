/*
 * XREFs of DXGTHREAD_GetCurrent @ 0x14006C040
 * Callers:
 *     <none>
 * Callees:
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1402AC1C0 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 */

struct DXGTHREAD *DXGTHREAD_GetCurrent()
{
  return DXGTHREAD::GetCurrent();
}
