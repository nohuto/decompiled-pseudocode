/*
 * XREFs of ?RemoveAllAtlasImages@CAtlasedRectsVisual@@QEAAXXZ @ 0x180035DFC
 * Callers:
 *     ??1CAtlasedRectsVisual@@MEAA@XZ @ 0x18003406C (--1CAtlasedRectsVisual@@MEAA@XZ.c)
 *     ??1CButton@@MEAA@XZ @ 0x180035EB0 (--1CButton@@MEAA@XZ.c)
 * Callees:
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180016EF0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CAtlasedRectsVisual::RemoveAllAtlasImages(CAtlasedRectsVisual *this)
{
  __int64 v1; // rdi
  char *i; // rsi
  __int64 v4; // rcx

  v1 = 0LL;
  for ( i = (char *)this + 248; (unsigned int)v1 < *((_DWORD *)this + 68); v1 = (unsigned int)(v1 + 1) )
  {
    v4 = *(_QWORD *)(*(_QWORD *)i + 8 * v1);
    *(_QWORD *)(v4 + 80) = 0LL;
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v4 + 8), 0xFFFFFFFF) == 1 )
      (**(void (__fastcall ***)(__int64, __int64))v4)(v4, 1LL);
  }
  *((_DWORD *)i + 6) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)i, 8u);
  (*(void (__fastcall **)(CAtlasedRectsVisual *, __int64))(*(_QWORD *)this + 24LL))(this, 0x2000LL);
}
