/*
 * XREFs of PerfSelectionPTStates @ 0x140001810
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x14000E3B0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall PerfSelectionPTStates(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5,
        int a6,
        int a7,
        char a8,
        _DWORD *a9,
        _QWORD *a10,
        _QWORD *a11)
{
  __int64 v11; // r10
  unsigned int v12; // ecx
  __int64 v13; // r11
  unsigned int v14; // esi
  __int64 i; // rbx
  __int64 (__fastcall *v17)(_QWORD); // rax
  __int64 v19; // [rsp+78h] [rbp+50h]

  v11 = *(_QWORD *)(a1 + 56);
  if ( (a8 & 1) != 0 )
  {
    v12 = *(_DWORD *)(v11 + 64);
  }
  else
  {
    v12 = *(_DWORD *)(v11 + 68);
    if ( !v12 )
      v12 = 1;
  }
  v13 = *(_QWORD *)(v11 + 56);
  if ( (a8 & 2) != 0 )
  {
    v14 = 0;
    for ( i = *(_QWORD *)(v11 + 56); v14 < v12; v13 += 32LL )
    {
      i = v13;
      if ( *(unsigned __int8 *)(v13 + 24) <= a2 )
        break;
      ++v14;
    }
    if ( v14 == v12 )
      v14 = v12 - 1;
  }
  else
  {
    v14 = v12;
    do
      i = v13 + 32LL * --v14;
    while ( *(unsigned __int8 *)(i + 24) < a2 && v14 );
  }
  for ( ; *(unsigned __int8 *)(i + 24) < a3; i = *(_QWORD *)(v11 + 56) + 32LL * --v14 )
  {
    if ( !v14 )
      break;
  }
  for ( ; *(unsigned __int8 *)(i + 24) > a4; i = *(_QWORD *)(v11 + 56) + 32LL * ++v14 )
  {
    if ( v14 == *(_DWORD *)(v11 + 64) - 1 )
      break;
  }
  if ( a10 )
  {
    v17 = *(__int64 (__fastcall **)(_QWORD))(v11 + 32);
    v19 = v14;
    if ( v17 )
      HIDWORD(v19) = v17(a5);
    *a10 = v19;
  }
  if ( a11 )
    *a11 = 0LL;
  if ( a9 )
    *a9 = *(_DWORD *)(i + 16);
  return *(unsigned __int8 *)(i + 24);
}
