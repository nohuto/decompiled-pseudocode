/*
 * XREFs of EtwpValidateTraceControlFilterDescriptors @ 0x1407B3E44
 * Callers:
 *     EtwpNotifyGuid @ 0x140834644 (EtwpNotifyGuid.c)
 * Callees:
 *     EtwpAllocateFilter @ 0x1409E773C (EtwpAllocateFilter.c)
 */

__int64 __fastcall EtwpValidateTraceControlFilterDescriptors(unsigned int a1, __int64 a2, unsigned int a3, __int64 a4)
{
  unsigned __int64 v4; // rsi
  int v8; // r15d
  unsigned int v9; // ebx
  unsigned int i; // edi
  unsigned __int64 v11; // r8
  __int64 v12; // rcx
  __int64 v13; // r9
  __int64 result; // rax
  __int64 v15; // [rsp+20h] [rbp-28h] BYREF
  int v16; // [rsp+28h] [rbp-20h]
  int v17; // [rsp+2Ch] [rbp-1Ch]

  v4 = a3;
  if ( a1 > 0xD )
    return 3221225485LL;
  v8 = 0;
  v9 = 16 * a1;
  if ( 16 * a1 > a3 )
    return 3221225485LL;
  for ( i = 0; i < a1; ++i )
  {
    v11 = *(_QWORD *)(a2 + 16LL * i);
    if ( v11 < v9 )
      return 3221225485LL;
    if ( v11 >= v4 )
      return 3221225485LL;
    v12 = *(unsigned int *)(a2 + 16LL * i + 12);
    switch ( (_DWORD)v12 )
    {
      case 0x80001000:
        return 3221225485LL;
      case 0x80000200:
        return 3221225485LL;
      case 0x80000400:
        return 3221225485LL;
      case 0x80000100:
        return 3221225485LL;
      case 0x80000000:
        return 3221225485LL;
      case 0x80000002:
        return 3221225485LL;
    }
    v13 = *(unsigned int *)(a2 + 16LL * i + 8);
    if ( v11 + v13 > v4 )
      return 3221225485LL;
    v16 = *(_DWORD *)(a2 + 16LL * i + 8);
    v8 += v13;
    v15 = v11 + a2;
    v17 = v12;
    result = ((__int64 (__fastcall *)(__int64, __int64 *, __int64, _QWORD))EtwpAllocateFilter)(v12, &v15, a4, 0LL);
    if ( (int)result < 0 )
      return result;
  }
  return (unsigned int)v4 < v9 + v8 ? 0xC000000D : 0;
}
