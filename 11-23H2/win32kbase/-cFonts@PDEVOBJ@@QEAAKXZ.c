/*
 * XREFs of ?cFonts@PDEVOBJ@@QEAAKXZ @ 0x1C00199A0
 * Callers:
 *     ?vGetDeviceCaps@@YAXAEAVPDEVOBJ@@PEAU_DEVCAPS@@@Z @ 0x1C00197E8 (-vGetDeviceCaps@@YAXAEAVPDEVOBJ@@PEAU_DEVCAPS@@@Z.c)
 *     ?GreGetDeviceCapsInternal@@YAHAEAVPDEVOBJ@@H@Z @ 0x1C005D98C (-GreGetDeviceCapsInternal@@YAHAEAVPDEVOBJ@@H@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6930 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PDEVOBJ::cFonts(PDEVOBJ *this)
{
  __int64 v1; // rax
  unsigned __int32 v2; // edx
  __int64 result; // rax
  __int64 v5; // rcx
  __int64 (__fastcall *v6)(_QWORD, _QWORD, _QWORD, __int64 *); // rax
  __int64 v7; // [rsp+40h] [rbp+8h] BYREF

  v1 = *(_QWORD *)this;
  v2 = 0;
  v7 = 0LL;
  result = *(unsigned int *)(v1 + 2072);
  if ( (_DWORD)result == -1 )
  {
    v5 = *(_QWORD *)this;
    v6 = *(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64 *))(v5 + 2872);
    if ( v6 )
      v2 = v6(*(_QWORD *)(v5 + 1768), 0LL, 0LL, &v7);
    result = (unsigned int)_InterlockedCompareExchange((volatile signed __int32 *)(*(_QWORD *)this + 2072LL), v2, -1);
    if ( (_DWORD)result == -1 )
      return v2;
  }
  return result;
}
