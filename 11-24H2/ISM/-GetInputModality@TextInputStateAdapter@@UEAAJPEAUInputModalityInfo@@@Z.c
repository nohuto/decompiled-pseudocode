/*
 * XREFs of ?GetInputModality@TextInputStateAdapter@@UEAAJPEAUInputModalityInfo@@@Z @ 0x1801CD9F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall TextInputStateAdapter::GetInputModality(TextInputStateAdapter *this, struct InputModalityInfo *a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, struct InputModalityInfo *))(**((_QWORD **)this + 4) + 160LL))(
           *((_QWORD *)this + 4),
           a2);
}
