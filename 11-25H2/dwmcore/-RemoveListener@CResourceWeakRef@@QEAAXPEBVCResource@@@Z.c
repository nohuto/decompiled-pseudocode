/*
 * XREFs of ?RemoveListener@CResourceWeakRef@@QEAAXPEBVCResource@@@Z @ 0x18013B090
 * Callers:
 *     ?UnRegisterNotifiers@CVisualReferenceController@@UEAAXXZ @ 0x18013B060 (-UnRegisterNotifiers@CVisualReferenceController@@UEAAXXZ.c)
 * Callees:
 *     __std_find_trivial_8 @ 0x18025BDA0 (__std_find_trivial_8.c)
 *     memmove_0 @ 0x1802E8980 (memmove_0.c)
 */

void __fastcall CResourceWeakRef::RemoveListener(CResourceWeakRef *this, const struct CResource *a2)
{
  __int64 trivial_8; // rax

  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
  trivial_8 = _std_find_trivial_8(*((_QWORD *)this + 9), *((_QWORD *)this + 10), a2);
  memmove_0((void *)trivial_8, (const void *)(trivial_8 + 8), *((_QWORD *)this + 10) - (trivial_8 + 8));
  *((_QWORD *)this + 10) -= 8LL;
  LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
}
