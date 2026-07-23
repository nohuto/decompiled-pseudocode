/*
 * XREFs of HalAllocateAdapterChannelEx @ 0x14038CB30
 * Callers:
 *     <none>
 * Callees:
 *     HalpAllocateAdapterChannel @ 0x14038C740 (HalpAllocateAdapterChannel.c)
 */

__int64 __fastcall HalAllocateAdapterChannelEx(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        char a5,
        __int64 a6,
        __int64 a7,
        _QWORD *a8)
{
  _QWORD *v9; // rbx
  __int64 v10; // rax
  __int64 result; // rax

  if ( !a3 || *(_DWORD *)a3 != 1 )
    return 3221225485LL;
  if ( (a5 & 1) != 0 )
  {
    v9 = a8;
    if ( a6 )
    {
      if ( !a8 )
        goto LABEL_6;
      goto LABEL_14;
    }
    if ( a8 )
    {
LABEL_14:
      *a8 = 0LL;
      goto LABEL_6;
    }
    return 3221225485LL;
  }
  if ( !a6 )
    return 3221225485LL;
  v9 = a8;
  if ( a8 )
    return 3221225485LL;
LABEL_6:
  *(_DWORD *)(a3 + 8) = 0;
  *(_QWORD *)(a3 + 88) = 0LL;
  *(_QWORD *)(a3 + 64) = a2;
  v10 = *(_QWORD *)(a2 + 32);
  *(_DWORD *)(a3 + 36) |= 2u;
  *(_QWORD *)(a3 + 72) = v10;
  *(_QWORD *)(a3 + 48) = a7;
  result = HalpAllocateAdapterChannel(a1, a3 + 16, a4, *(_DWORD *)(a1 + 252) >> 12, a5, a6);
  if ( !(_DWORD)result )
  {
    if ( v9 )
      *v9 = *(_QWORD *)(a1 + 240);
  }
  return result;
}
