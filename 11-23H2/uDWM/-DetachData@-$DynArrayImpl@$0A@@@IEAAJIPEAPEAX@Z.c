/*
 * XREFs of ?DetachData@?$DynArrayImpl@$0A@@@IEAAJIPEAPEAX@Z @ 0x18010E1B8
 * Callers:
 *     ??1CDesktopManager@@EEAA@XZ @ 0x1800B36AC (--1CDesktopManager@@EEAA@XZ.c)
 * Callees:
 *     memcpy_0 @ 0x180066218 (memcpy_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall DynArrayImpl<0>::DetachData(__int64 a1, __int64 a2, _QWORD *a3)
{
  void *v3; // rdi
  unsigned __int64 v6; // r9
  __int64 result; // rax
  int v8; // eax

  v3 = *(void **)a1;
  if ( *(_QWORD *)a1 != *(_QWORD *)(a1 + 8) )
    goto LABEL_8;
  v6 = *(unsigned int *)(a1 + 20);
  if ( !*(_DWORD *)(a1 + 20) || 0xFFFFFFFFFFFFFFFFuLL / v6 <= 8 )
  {
    result = 2147942487LL;
    goto LABEL_10;
  }
  v3 = (void *)(*(__int64 (__fastcall **)(WPF::HeapBase *, unsigned __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                 WPF::g_pProcessHeap,
                 8 * v6);
  if ( v3 )
  {
    v8 = *(_DWORD *)(a1 + 24);
    if ( v8 )
      memcpy_0(v3, *(const void **)a1, (unsigned int)(8 * v8));
LABEL_8:
    *(_QWORD *)a1 = 0LL;
    result = 0LL;
    *(_DWORD *)(a1 + 20) = 0;
    *(_DWORD *)(a1 + 24) = 0;
    *a3 = v3;
    return result;
  }
  result = 2147942414LL;
LABEL_10:
  *a3 = 0LL;
  return result;
}
