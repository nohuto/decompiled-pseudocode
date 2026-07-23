/*
 * XREFs of sub_14091E9C0 @ 0x14091E9C0
 * Callers:
 *     sub_14091D164 @ 0x14091D164 (sub_14091D164.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     sub_14091F5B0 @ 0x14091F5B0 (sub_14091F5B0.c)
 *     sub_14091F5E0 @ 0x14091F5E0 (sub_14091F5E0.c)
 *     sub_14091F610 @ 0x14091F610 (sub_14091F610.c)
 */

__int64 __fastcall sub_14091E9C0(__int64 a1, __int64 a2, _QWORD *a3, int *a4)
{
  _QWORD *v4; // rsi
  int v5; // r14d
  int v6; // r12d
  int v7; // edi
  int v11; // ebx
  __int64 (__fastcall *v12)(_QWORD, _QWORD, _QWORD); // rax
  __int64 v13; // rcx
  __int64 v14; // rax
  bool v15; // sf
  int v16; // eax
  __int64 v17; // rdx

  v4 = (_QWORD *)(a1 + 24);
  v5 = *(_DWORD *)(a1 + 12) - 1;
  v6 = 0;
  v7 = 0;
  v11 = -1073741198;
  while ( v6 <= v5 )
  {
    v4 = (_QWORD *)(a1 + 24);
    v7 = (v5 + v6) / 2;
    v12 = *(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(a1 + 40);
    v13 = *(_QWORD *)((unsigned int)(*(_DWORD *)(a1 + 8) * v7) + *(_QWORD *)(a1 + 24));
    if ( v12 == sub_14091F5B0 )
    {
      v14 = sub_14091F5B0(v13, a2, 8LL);
    }
    else if ( v12 == sub_14091F5E0 )
    {
      v14 = sub_14091F5E0(v13, a2, 8LL);
    }
    else if ( v12 == sub_14091F610 )
    {
      v14 = sub_14091F610(v13, a2, 8LL);
    }
    else
    {
      v14 = guard_dispatch_icall_no_overrides(v13, a2);
    }
    v15 = v14 < 0;
    if ( !v14 )
    {
      v11 = 0;
      break;
    }
    v16 = v7 - 1;
    if ( !v15 )
      v16 = v5;
    v5 = v16;
    if ( !v15 )
      v6 = ++v7;
  }
  if ( a4 )
  {
    *a4 = v7;
    v4 = (_QWORD *)(a1 + 24);
  }
  if ( v11 >= 0 )
  {
    v17 = *(_QWORD *)((unsigned int)(*(_DWORD *)(a1 + 8) * v7) + *v4);
    if ( a3 )
    {
      v11 = 0;
      if ( v17 && !_InterlockedIncrement64((volatile signed __int64 *)(v17 + 80)) )
        return (unsigned int)-1073741595;
      else
        *a3 = v17;
    }
  }
  return (unsigned int)v11;
}
