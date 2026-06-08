/*
 * XREFs of sub_14000A1EC @ 0x14000A1EC
 * Callers:
 *     sub_14002DC40 @ 0x14002DC40 (sub_14002DC40.c)
 *     sub_14002DD48 @ 0x14002DD48 (sub_14002DD48.c)
 *     sub_14002E0DC @ 0x14002E0DC (sub_14002E0DC.c)
 *     sub_14002EADC @ 0x14002EADC (sub_14002EADC.c)
 *     sub_14002F2B0 @ 0x14002F2B0 (sub_14002F2B0.c)
 *     sub_14002FE6C @ 0x14002FE6C (sub_14002FE6C.c)
 *     sub_140032E50 @ 0x140032E50 (sub_140032E50.c)
 *     sub_14003CB24 @ 0x14003CB24 (sub_14003CB24.c)
 *     sub_14003FC70 @ 0x14003FC70 (sub_14003FC70.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400102D0 (_guard_dispatch_icall.c)
 */

__int64 sub_14000A1EC(__int64 a1, __int64 a2, __int64 a3, unsigned __int16 a4, __int64 a5, const wchar_t *a6, ...)
{
  const wchar_t *v6; // rbx
  __int64 v7; // rdi
  __int64 v10; // rsi
  __int64 v11; // rax
  __int64 v12; // rdx
  const wchar_t *v13; // rcx
  bool v14; // zf
  int v16; // [rsp+20h] [rbp-48h]
  va_list va; // [rsp+A0h] [rbp+38h] BYREF

  va_start(va, a6);
  v6 = a6;
  v7 = -1LL;
  v10 = 10LL;
  if ( (HIDWORD(off_140018050->Timer) & 1) != 0 && BYTE1(off_140018050->Timer) >= 2u )
  {
    if ( a6 )
    {
      v11 = -1LL;
      do
        ++v11;
      while ( a6[v11] );
      v12 = 2 * v11 + 2;
    }
    else
    {
      v12 = 10LL;
    }
    v13 = a6;
    if ( !a6 )
      v13 = L"NULL";
    qword_140018EE0(off_140018050->AttachedDevice, 43LL, a5, a4, v13, v12, va);
  }
  v14 = a6 == 0LL;
  if ( a6 )
  {
    do
      ++v7;
    while ( a6[v7] );
    v10 = 2 * v7 + 2;
    v14 = a6 == 0LL;
  }
  if ( v14 )
    v6 = L"NULL";
  LOWORD(v16) = a4;
  return WppAutoLogTrace(a1, 2LL, 1LL, a5, v16, v6, v10, va);
}
