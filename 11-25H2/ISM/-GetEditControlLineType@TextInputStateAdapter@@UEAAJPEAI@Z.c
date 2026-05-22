/*
 * XREFs of ?GetEditControlLineType@TextInputStateAdapter@@UEAAJPEAI@Z @ 0x1801C6130
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall TextInputStateAdapter::GetEditControlLineType(TextInputStateAdapter *this, unsigned int *a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(**((_QWORD **)this + 4) + 112LL))(
           *((_QWORD *)this + 4),
           a2);
}
