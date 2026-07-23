/*
 * XREFs of MiLockAndMapEntireDriver @ 0x1407F0F08
 * Callers:
 *     MiReapplyImportOptimizationForDriverVerifier @ 0x14067D2F8 (MiReapplyImportOptimizationForDriverVerifier.c)
 * Callees:
 *     IoFreeMdl @ 0x14025ED30 (IoFreeMdl.c)
 *     IoAllocateMdl @ 0x14025F1D0 (IoAllocateMdl.c)
 *     MiReservePtes @ 0x14029FB10 (MiReservePtes.c)
 *     MiFillSystemPtes @ 0x1402A0630 (MiFillSystemPtes.c)
 *     MiGetAnyMultiplexedVm @ 0x140439200 (MiGetAnyMultiplexedVm.c)
 *     MiLockDriverPageRange @ 0x14066C080 (MiLockDriverPageRange.c)
 *     MiPrepareDriverPatchState @ 0x1407E83FC (MiPrepareDriverPatchState.c)
 */

__int64 __fastcall MiLockAndMapEntireDriver(__int64 a1, __int64 *a2, struct _MDL **a3)
{
  struct _MDL *v4; // rbx
  __int64 *v7; // r14
  char *AnyMultiplexedVm; // rax
  int v9; // edi
  ULONG v10; // edx
  unsigned int v11; // esi
  PMDL Mdl; // rax
  __int64 v13; // rdx
  unsigned __int64 v14; // rcx
  __int64 *v15; // rcx
  __int64 v16; // rdx
  ULONG_PTR v17; // rbp
  __int64 v19; // [rsp+78h] [rbp+20h] BYREF

  LODWORD(v19) = 0;
  v4 = 0LL;
  v7 = 0LL;
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
  v9 = MiPrepareDriverPatchState(a2, (__int64)AnyMultiplexedVm);
  if ( v9 >= 0 )
  {
    v10 = *(_DWORD *)(a1 + 64);
    v11 = ((v10 & 0xFFF) != 0) + (v10 >> 12);
    if ( a3 )
    {
      Mdl = IoAllocateMdl(*(PVOID *)(a1 + 48), v10, 0, 0, 0LL);
      v4 = Mdl;
      if ( !Mdl )
        return (unsigned int)-1073741670;
      v13 = 0LL;
      v7 = (__int64 *)&Mdl[1];
      if ( v11 )
      {
        if ( v11 < 2 || v7 <= &qword_140E37478 && &v7[v11 - 1] >= &qword_140E37478 )
          goto LABEL_12;
        v14 = v11 & 0xFFFFFFFE;
        do
          v13 = (unsigned int)(v13 + 2);
        while ( (unsigned int)v13 < (unsigned int)v14 );
        memset64(v7, qword_140E37478, (2 * (v14 >> 1)) & 0x1FFFFFFFFFFFFFFFLL);
        if ( (unsigned int)v13 < v11 )
        {
LABEL_12:
          v15 = &v7[v13];
          v16 = v11 - (unsigned int)v13;
          do
          {
            *v15++ = qword_140E37478;
            --v16;
          }
          while ( v16 );
        }
      }
    }
    v9 = MiLockDriverPageRange((__int64)a2, 0, v11 - 1, 2, (__int64)v4);
    if ( v9 >= 0 && a3 )
    {
      v17 = MiReservePtes((__int64)&qword_140E376A8, v11);
      if ( v17 )
      {
        v9 = MiFillSystemPtes(v17, v11, (__int64)v7, 4u, 2, &v19);
        v4->MdlFlags |= 1u;
        v4->MappedSystemVa = (PVOID)((__int64)(v17 << 25) >> 16);
        *a3 = v4;
        return (unsigned int)v9;
      }
      v9 = -1073741670;
    }
    if ( v4 )
      IoFreeMdl(v4);
  }
  return (unsigned int)v9;
}
