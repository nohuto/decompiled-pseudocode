/*
 * XREFs of sub_14091ED6C @ 0x14091ED6C
 * Callers:
 *     sub_1408FF83C @ 0x1408FF83C (sub_1408FF83C.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     sub_14091F5B0 @ 0x14091F5B0 (sub_14091F5B0.c)
 *     sub_14091F5E0 @ 0x14091F5E0 (sub_14091F5E0.c)
 *     sub_14091F610 @ 0x14091F610 (sub_14091F610.c)
 */

__int64 __fastcall sub_14091ED6C(__int64 a1, _QWORD *a2)
{
  int v2; // edi
  int v3; // r14d
  unsigned int v6; // ebx
  int v7; // esi
  __int64 v8; // rcx
  __int64 v9; // rax
  bool v10; // sf
  int v11; // eax
  __int64 v12; // rdx

  v2 = 0;
  v3 = HIDWORD(qword_140E3EA80) - 1;
  v6 = -1073741198;
  while ( v2 <= v3 )
  {
    v7 = (v3 + v2) / 2;
    v8 = *(_QWORD *)((unsigned int)(qword_140E3EA80 * v7) + qword_140E3EA90);
    if ( (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))qword_140E3EAA0 == sub_14091F5B0 )
    {
      v9 = sub_14091F5B0(v8, a1, 8LL);
    }
    else if ( (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))qword_140E3EAA0 == sub_14091F5E0 )
    {
      v9 = sub_14091F5E0(v8, a1, 8LL);
    }
    else if ( (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))qword_140E3EAA0 == sub_14091F610 )
    {
      v9 = sub_14091F610(v8, a1, 8LL);
    }
    else
    {
      v9 = guard_dispatch_icall_no_overrides(v8, a1);
    }
    v10 = v9 < 0;
    if ( !v9 )
    {
      v6 = 0;
      v12 = *(_QWORD *)((unsigned int)(qword_140E3EA80 * v7) + qword_140E3EA90);
      if ( a2 )
      {
        if ( v12 )
          _InterlockedIncrement64((volatile signed __int64 *)(v12 + 232));
        *a2 = v12;
      }
      return v6;
    }
    if ( v9 >= 0 )
      v2 = v7 + 1;
    v11 = v7 - 1;
    if ( !v10 )
      v11 = v3;
    v3 = v11;
  }
  return v6;
}
