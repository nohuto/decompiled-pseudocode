/*
 * XREFs of RtlWow64PushCrossProcessWorkOntoFreeList @ 0x180146EE0
 * Callers:
 *     <none>
 * Callees:
 *     RtlRaiseStatus @ 0x1800417E0 (RtlRaiseStatus.c)
 */

char __fastcall RtlWow64PushCrossProcessWorkOntoFreeList(volatile signed __int64 *a1, _DWORD *a2)
{
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rdx
  _DWORD *v6; // rcx
  signed __int64 v7; // r11
  bool v8; // zf
  signed __int64 v9; // rax
  signed __int64 v11; // [rsp+28h] [rbp-20h]

  v4 = (unsigned __int64)a1 & 0xFFFFFFFFFFFFF000uLL;
  v5 = ((unsigned __int64)a1 & 0xFFFFFFFFFFFFF000uLL) + 0x4000;
  v6 = a2 + 10;
  if ( v5 <= v4 || v6 <= a2 || (unsigned __int64)a2 < v4 || (unsigned __int64)v6 > v5 )
    RtlRaiseStatus(-1073741811);
  v7 = *a1;
  do
  {
    HIDWORD(v11) = HIDWORD(v7) + 1;
    *a2 = v7 & 0x7FFFFFFF;
    LODWORD(v11) = ((_DWORD)a2 - (_DWORD)a1) & 0x7FFFFFFF | v7 & 0x80000000;
    v9 = _InterlockedCompareExchange64(a1, v11, v7);
    v8 = v7 == v9;
    v7 = v9;
  }
  while ( !v8 );
  return 1;
}
