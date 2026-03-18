/*
 * XREFs of PsQueryProcessSignatureMitigationPolicy @ 0x140A046B0
 * Callers:
 *     NtQueryInformationProcess @ 0x1409D2880 (NtQueryInformationProcess.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

void __fastcall PsQueryProcessSignatureMitigationPolicy(__int64 a1, _DWORD *a2)
{
  _BYTE *v2; // rsi
  int v3; // edi
  __int64 v5; // rcx

  *a2 = 0;
  v2 = (_BYTE *)(a1 + 1529);
  v3 = *(_DWORD *)(a1 + 1872);
  if ( *(_BYTE *)(a1 + 1528) < 8u || *v2 < 8u )
  {
    if ( qword_140F044E0
      && (LOBYTE(a1) = *(_BYTE *)(a1 + 1528), (unsigned int)guard_dispatch_icall_no_overrides(a1))
      && qword_140F044E0
      && (LOBYTE(v5) = *v2, (unsigned int)guard_dispatch_icall_no_overrides(v5)) )
    {
      *a2 |= 2u;
    }
    else if ( (v3 & 0x1000000) != 0 )
    {
      *a2 |= 8u;
    }
    else if ( (v3 & 0x2000000) != 0 )
    {
      *a2 |= 0x10u;
    }
  }
  else
  {
    *a2 |= 1u;
  }
  if ( (v3 & 0x800000) != 0 )
    *a2 |= 4u;
}
