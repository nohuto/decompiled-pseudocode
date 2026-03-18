/*
 * XREFs of PsQueryProcessSignatureMitigationPolicy @ 0x1409FFC90
 * Callers:
 *     NtQueryInformationProcess @ 0x1409AB830 (NtQueryInformationProcess.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

void __fastcall PsQueryProcessSignatureMitigationPolicy(__int64 a1, _DWORD *a2, __int64 a3, __int64 a4)
{
  _BYTE *v4; // rsi
  int v5; // edi
  _DWORD *v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9

  *a2 = 0;
  v4 = (_BYTE *)(a1 + 1529);
  v5 = *(_DWORD *)(a1 + 1872);
  v6 = a2;
  LOBYTE(a3) = *(_BYTE *)(a1 + 1528);
  if ( (unsigned __int8)a3 < 8u || *v4 < 8u )
  {
    if ( qword_140F048C0
      && (LOBYTE(a2) = 6,
          LOBYTE(a1) = *(_BYTE *)(a1 + 1528),
          (unsigned int)guard_dispatch_icall_no_overrides(a1, a2, a3, a4))
      && qword_140F048C0
      && (LOBYTE(v8) = *v4, LOBYTE(v7) = 6, (unsigned int)guard_dispatch_icall_no_overrides(v8, v7, v9, v10)) )
    {
      *v6 |= 2u;
    }
    else if ( (v5 & 0x1000000) != 0 )
    {
      *v6 |= 8u;
    }
    else if ( (v5 & 0x2000000) != 0 )
    {
      *v6 |= 0x10u;
    }
  }
  else
  {
    *a2 |= 1u;
  }
  if ( (v5 & 0x800000) != 0 )
    *v6 |= 4u;
}
