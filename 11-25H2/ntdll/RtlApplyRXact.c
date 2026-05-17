/*
 * XREFs of RtlApplyRXact @ 0x180109070
 * Callers:
 *     <none>
 * Callees:
 *     RXactpCommit @ 0x180109178 (RXactpCommit.c)
 *     RtlAbortRXact @ 0x180109340 (RtlAbortRXact.c)
 *     wcslen @ 0x1801292B0 (wcslen.c)
 *     ZwSetValueKey @ 0x180163E10 (ZwSetValueKey.c)
 *     ZwDeleteValueKey @ 0x180164DF0 (ZwDeleteValueKey.c)
 *     ZwFlushKey @ 0x180165050 (ZwFlushKey.c)
 */

__int64 __fastcall RtlApplyRXact(__int64 a1)
{
  __int64 v1; // rbx
  size_t v3; // rax
  __int64 v4; // rcx
  __int64 result; // rax
  int v6; // edi
  __int64 v7; // rcx
  _WORD v8[2]; // [rsp+30h] [rbp-18h] BYREF
  int v9; // [rsp+34h] [rbp-14h]
  const wchar_t *v10; // [rsp+38h] [rbp-10h]

  v1 = *(_QWORD *)(a1 + 8);
  v9 = 0;
  v10 = L"Log";
  v3 = 2 * wcslen(L"Log");
  if ( v3 >= 0xFFFE )
    LOWORD(v3) = -4;
  v4 = *(_QWORD *)(a1 + 24);
  v8[0] = v3;
  v8[1] = v3 + 2;
  result = ZwSetValueKey(v1, v8, 0LL, 3LL, v4, *(_DWORD *)(v4 + 8));
  if ( (int)result >= 0 )
  {
    v6 = ZwFlushKey(v1);
    if ( v6 < 0 )
    {
      v7 = v1;
    }
    else
    {
      v6 = RXactpCommit(a1);
      v7 = v1;
      if ( v6 >= 0 )
      {
        ZwDeleteValueKey(v1, v8);
        RtlAbortRXact(a1);
        return 0LL;
      }
    }
    ZwDeleteValueKey(v7, v8);
    return (unsigned int)v6;
  }
  return result;
}
