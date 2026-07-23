/*
 * XREFs of MiMapSystemImage @ 0x140A87914
 * Callers:
 *     MmLoadSystemImageEx @ 0x1409B7B70 (MmLoadSystemImageEx.c)
 * Callees:
 *     MiAcquireNonPagedResources @ 0x14033A560 (MiAcquireNonPagedResources.c)
 *     MiSectionControlArea @ 0x140355A80 (MiSectionControlArea.c)
 *     MiAddMappedPtes @ 0x140391F90 (MiAddMappedPtes.c)
 *     MiGetPteAddress @ 0x140429FD0 (MiGetPteAddress.c)
 *     MiGetAnyMultiplexedVm @ 0x140439200 (MiGetAnyMultiplexedVm.c)
 *     MiChargeSystemImageCommitment @ 0x140A9984C (MiChargeSystemImageCommitment.c)
 */

__int64 __fastcall MiMapSystemImage(__int64 a1, unsigned __int64 a2)
{
  _DWORD *v4; // rsi
  __int64 v5; // rbx
  __int64 v6; // rcx
  unsigned __int64 v7; // rax
  char *AnyMultiplexedVm; // rax
  unsigned __int64 v9; // rdx
  int v10; // r8d
  int v11; // esi
  unsigned __int64 v13; // [rsp+60h] [rbp+18h] BYREF

  v13 = 0LL;
  v4 = (_DWORD *)MiSectionControlArea(a1);
  v5 = *(unsigned int *)(*(_QWORD *)v4 + 8LL);
  v7 = MiSectionControlArea(v6);
  if ( *(_DWORD *)(*(_QWORD *)v7 + 8LL)
    && (int)MiAcquireNonPagedResources(&MiSystemPartition, *(unsigned int *)(*(_QWORD *)v7 + 8LL), 0LL, 0LL) < 0 )
  {
    return 3221225626LL;
  }
  MiGetPteAddress(a2);
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
  v11 = MiAddMappedPtes((__int64)AnyMultiplexedVm, v9, v5, v4, &v13, 0xFFFFFFFF, v10);
  if ( v11 < 0 )
  {
    MiChargeSystemImageCommitment(a1, 0LL);
    return (unsigned int)v11;
  }
  else
  {
    _InterlockedAdd((_DWORD *)&xmmword_140E2D9A8 + 3, v5);
    _InterlockedAdd(&dword_140E37730, v5);
    return 0LL;
  }
}
