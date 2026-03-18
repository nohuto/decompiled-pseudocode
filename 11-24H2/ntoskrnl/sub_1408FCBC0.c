/*
 * XREFs of sub_1408FCBC0 @ 0x1408FCBC0
 * Callers:
 *     sub_1408F9528 @ 0x1408F9528 (sub_1408F9528.c)
 *     sub_1408F9924 @ 0x1408F9924 (sub_1408F9924.c)
 *     sub_1408FB304 @ 0x1408FB304 (sub_1408FB304.c)
 *     sub_1408FC89C @ 0x1408FC89C (sub_1408FC89C.c)
 *     sub_1409DFE38 @ 0x1409DFE38 (sub_1409DFE38.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     sub_1408FCCD0 @ 0x1408FCCD0 (sub_1408FCCD0.c)
 *     sub_1408FCD00 @ 0x1408FCD00 (sub_1408FCD00.c)
 *     sub_1408FCD30 @ 0x1408FCD30 (sub_1408FCD30.c)
 */

__int64 __fastcall sub_1408FCBC0(__int64 a1, __int64 a2, unsigned int a3, _QWORD *a4, int *a5)
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
    if ( v13 == sub_1408FCCD0 )
    {
      v15 = sub_1408FCCD0(v14, a2, a3);
    }
    else if ( v13 == sub_1408FCD00 )
    {
      v15 = sub_1408FCD00(v14, a2, a3);
    }
    else if ( v13 == sub_1408FCD30 )
    {
      v15 = sub_1408FCD30(v14, a2, a3);
    }
    else
    {
      v15 = guard_dispatch_icall_no_overrides(v14, a2, a3, v13);
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
