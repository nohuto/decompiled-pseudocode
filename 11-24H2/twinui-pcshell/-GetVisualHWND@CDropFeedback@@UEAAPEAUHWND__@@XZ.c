/*
 * XREFs of ?GetVisualHWND@CDropFeedback@@UEAAPEAUHWND__@@XZ @ 0x1804B56F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

HWND __fastcall CDropFeedback::GetVisualHWND(CDropFeedback *this)
{
  return (HWND)*((_QWORD *)this + 4);
}
