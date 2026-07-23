/*
 * XREFs of RtlWow64PopCrossProcessWorkFromFreeList @ 0x180146E20
 * Callers:
 *     <none>
 * Callees:
 *     RtlRaiseStatus @ 0x1800417E0 (RtlRaiseStatus.c)
 */

_DWORD *__fastcall RtlWow64PopCrossProcessWorkFromFreeList(volatile signed __int64 *a1)
{
  signed __int64 v1; // rax
  _DWORD *result; // rax
  _DWORD *v3; // rdx
  unsigned __int64 v4; // r10
  _DWORD *v5; // r9
  signed __int64 v6; // rtt
  signed __int64 v7; // [rsp+50h] [rbp+18h]
  signed __int64 i; // [rsp+58h] [rbp+20h]

  v1 = *a1;
  for ( i = *a1; ; HIDWORD(i) = HIDWORD(v1) )
  {
    if ( (v1 & 0x7FFFFFFF) == 0 )
      return 0LL;
    v3 = (_DWORD *)((char *)a1 + (v1 & 0x7FFFFFFF));
    v4 = ((unsigned __int64)a1 & 0xFFFFFFFFFFFFF000uLL) + 0x4000;
    v5 = v3 + 10;
    if ( v4 <= ((unsigned __int64)a1 & 0xFFFFFFFFFFFFF000uLL)
      || v5 <= v3
      || (unsigned __int64)v3 < ((unsigned __int64)a1 & 0xFFFFFFFFFFFFF000uLL)
      || (unsigned __int64)v5 > v4 )
    {
      RtlRaiseStatus(-1073741811);
    }
    HIDWORD(v7) = HIDWORD(i) + 1;
    LODWORD(v7) = *v3 & 0x7FFFFFFF | v1 & 0x80000000;
    v6 = v1;
    v1 = _InterlockedCompareExchange64(a1, v7, v1);
    if ( v6 == v1 )
      break;
  }
  result = v3;
  *v3 = 0;
  return result;
}
