/*
 * XREFs of ?GetSize@CCompoundBitmapLock@@UEAAJPEAI0@Z @ 0x18005BD10
 * Callers:
 *     ?GetSize@CCompoundBitmapLock@@W7EAAJPEAI0@Z @ 0x1800669C0 (-GetSize@CCompoundBitmapLock@@W7EAAJPEAI0@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CCompoundBitmapLock::GetSize(CCompoundBitmapLock *this, unsigned int *a2, unsigned int *a3)
{
  return (*(__int64 (__fastcall **)(__int64, unsigned int *, unsigned int *))(*(_QWORD *)(*((_QWORD *)this + 2) + 72LL)
                                                                            + 32LL))(
           *((_QWORD *)this + 2) + 72LL,
           a2,
           a3);
}
