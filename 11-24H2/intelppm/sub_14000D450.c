/*
 * XREFs of sub_14000D450 @ 0x14000D450
 * Callers:
 *     sub_14003F9A0 @ 0x14003F9A0 (sub_14003F9A0.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400102D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall sub_14000D450(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        const char *a6,
        const char *a7,
        __int64 a8)
{
  const char *v8; // rbp
  __int64 v9; // rbx
  const char *v10; // rsi
  __int64 v12; // r9
  __int64 v13; // r8
  __int64 v14; // rdx
  const char *v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rbx
  int v20; // [rsp+20h] [rbp-58h]

  v8 = a6;
  v9 = -1LL;
  v10 = a7;
  if ( (HIDWORD(off_140018050->Timer) & 1) != 0 && BYTE1(off_140018050->Timer) >= 2u )
  {
    if ( a8 )
    {
      v12 = -1LL;
      do
        ++v12;
      while ( *(_BYTE *)(a8 + v12) );
    }
    if ( a7 )
    {
      v13 = -1LL;
      do
        ++v13;
      while ( a7[v13] );
    }
    if ( a6 )
    {
      v14 = -1LL;
      do
        ++v14;
      while ( a6[v14] );
    }
    WORD1(v15) = WORD1(a6);
    if ( !a6 )
      v15 = "NULL";
    HIWORD(v20) = WORD1(v15);
    ((void (__fastcall *)(struct _DEVICE_OBJECT *, __int64, void *))qword_140018EE0)(
      off_140018050->AttachedDevice,
      43LL,
      &unk_140012FE8);
  }
  if ( a8 )
  {
    v16 = -1LL;
    do
      ++v16;
    while ( *(_BYTE *)(a8 + v16) );
  }
  if ( a7 )
  {
    v17 = -1LL;
    do
      ++v17;
    while ( a7[v17] );
  }
  if ( !a7 )
    v10 = "NULL";
  if ( a6 )
  {
    do
      ++v9;
    while ( a6[v9] );
    v18 = v9 + 1;
  }
  else
  {
    v18 = 5LL;
  }
  if ( !a6 )
    v8 = "NULL";
  LOWORD(v20) = 71;
  return WppAutoLogTrace(a1, 2LL, 1LL, &unk_140012FE8, v20, v8, v18, v10);
}
