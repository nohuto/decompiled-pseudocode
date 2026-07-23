/*
 * XREFs of PsQueryProcessSignatureMitigationPolicy @ 0x1409F8BE0
 * Callers:
 *     NtQueryInformationProcess @ 0x140995530 (NtQueryInformationProcess.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

void __fastcall PsQueryProcessSignatureMitigationPolicy(__int64 a1, _DWORD *a2)
{
  _BYTE *v2; // rsi
  int v3; // edi
  _DWORD *v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx

  *a2 = 0;
  v2 = (_BYTE *)(a1 + 1529);
  v3 = *(_DWORD *)(a1 + 1872);
  v4 = a2;
  if ( *(_BYTE *)(a1 + 1528) < 8u || *v2 < 8u )
  {
    if ( qword_140F04B60
      && (LOBYTE(a2) = 6, LOBYTE(a1) = *(_BYTE *)(a1 + 1528), (unsigned int)guard_dispatch_icall_no_overrides(a1, a2))
      && qword_140F04B60
      && (LOBYTE(v6) = *v2, LOBYTE(v5) = 6, (unsigned int)guard_dispatch_icall_no_overrides(v6, v5)) )
    {
      *v4 |= 2u;
    }
    else if ( (v3 & 0x1000000) != 0 )
    {
      *v4 |= 8u;
    }
    else if ( (v3 & 0x2000000) != 0 )
    {
      *v4 |= 0x10u;
    }
  }
  else
  {
    *a2 |= 1u;
  }
  if ( (v3 & 0x800000) != 0 )
    *v4 |= 4u;
}
