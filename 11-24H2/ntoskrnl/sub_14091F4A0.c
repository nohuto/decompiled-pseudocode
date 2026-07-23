/*
 * XREFs of sub_14091F4A0 @ 0x14091F4A0
 * Callers:
 *     sub_14091BE04 @ 0x14091BE04 (sub_14091BE04.c)
 *     sub_14091C200 @ 0x14091C200 (sub_14091C200.c)
 *     sub_14091DBE4 @ 0x14091DBE4 (sub_14091DBE4.c)
 *     sub_14091F17C @ 0x14091F17C (sub_14091F17C.c)
 *     sub_1409D9BE8 @ 0x1409D9BE8 (sub_1409D9BE8.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     sub_14091F5B0 @ 0x14091F5B0 (sub_14091F5B0.c)
 *     sub_14091F5E0 @ 0x14091F5E0 (sub_14091F5E0.c)
 *     sub_14091F610 @ 0x14091F610 (sub_14091F610.c)
 */

__int64 __fastcall sub_14091F4A0(__int64 a1, __int64 a2, unsigned int a3, _QWORD *a4, int *a5)
{
  int v5; // ebp
  int v6; // edi
  int v8; // ebx
  int v12; // r14d
  __int64 (__fastcall *v13)(_QWORD, _QWORD, _QWORD); // r9
  __int64 v14; // rcx
  __int64 v15; // rax
  bool v16; // sf
  int v17; // eax
  __int64 result; // rax

  v5 = 0;
  v6 = *(_DWORD *)(a1 + 4) - 1;
  v8 = 0;
  v12 = -1073741198;
  while ( v5 <= v6 )
  {
    v13 = *(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(a1 + 32);
    v8 = (v6 + v5) / 2;
    v14 = *(_QWORD *)((unsigned int)(*(_DWORD *)a1 * v8) + *(_QWORD *)(a1 + 16));
    if ( v13 == sub_14091F5B0 )
    {
      v15 = sub_14091F5B0(v14, a2, a3);
    }
    else if ( v13 == sub_14091F5E0 )
    {
      v15 = sub_14091F5E0(v14, a2, a3);
    }
    else if ( v13 == sub_14091F610 )
    {
      v15 = sub_14091F610(v14, a2, a3);
    }
    else
    {
      v15 = guard_dispatch_icall_no_overrides(v14, a2);
    }
    v16 = v15 < 0;
    if ( !v15 )
    {
      v12 = 0;
      break;
    }
    v17 = v8 - 1;
    if ( !v16 )
      v17 = v6;
    v6 = v17;
    if ( !v16 )
      v5 = ++v8;
  }
  if ( a5 )
    *a5 = v8;
  result = (unsigned int)v12;
  if ( a4 && v12 >= 0 )
    *a4 = *(_QWORD *)((unsigned int)(*(_DWORD *)a1 * v8) + *(_QWORD *)(a1 + 16));
  return result;
}
