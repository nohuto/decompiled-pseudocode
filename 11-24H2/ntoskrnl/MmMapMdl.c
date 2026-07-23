/*
 * XREFs of MmMapMdl @ 0x140677E60
 * Callers:
 *     <none>
 * Callees:
 *     MiMappingHasIoReferences @ 0x140292CEC (MiMappingHasIoReferences.c)
 *     MiReleasePtes @ 0x14029D9A0 (MiReleasePtes.c)
 *     MiClearMappingAndDereferenceIoSpace @ 0x14029E560 (MiClearMappingAndDereferenceIoSpace.c)
 *     MiReservePtes @ 0x14029FB10 (MiReservePtes.c)
 *     MiFillSystemPtes @ 0x1402A0630 (MiFillSystemPtes.c)
 *     MiGetUltraMapping @ 0x1403361B0 (MiGetUltraMapping.c)
 *     MiMakeProtectionMask @ 0x14034C5B0 (MiMakeProtectionMask.c)
 *     MiFreeUltraMdlContext @ 0x14049299C (MiFreeUltraMdlContext.c)
 *     MiGetUltraMdlContext @ 0x1404930EC (MiGetUltraMdlContext.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall MmMapMdl(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  _SLIST_ENTRY *v5; // r14
  unsigned int ProtectionMask; // esi
  __int64 v7; // r9
  unsigned __int64 v9; // r12
  unsigned int v10; // edi
  PSLIST_ENTRY UltraMdlContext; // rax
  unsigned __int8 CurrentIrql; // cl
  char v13; // r9
  unsigned __int64 UltraMapping; // rax
  ULONG_PTR v15; // rbx
  __int64 *v16; // rcx
  unsigned __int64 v17; // r15
  int v18; // r13d
  int v19; // ebp
  __int64 v20; // rcx
  __int64 *v21; // rcx
  __int64 v22[9]; // [rsp+30h] [rbp-48h] BYREF

  LODWORD(v22[0]) = 0;
  v5 = 0LL;
  ProtectionMask = MiMakeProtectionMask(a2);
  if ( ProtectionMask == -1
    || ProtectionMask == 24
    || (ProtectionMask & 7) == 5
    || (ProtectionMask & 2) != 0
    || (ProtectionMask & 0xFFFFFFF8) == 0x10 )
  {
    return 3221225541LL;
  }
  if ( (*(_BYTE *)(a1 + 10) & 5) != 0 )
  {
    guard_dispatch_icall_no_overrides(v7, *(_QWORD *)(a1 + 24));
    return 0LL;
  }
  else
  {
    v9 = (((*(_DWORD *)(a1 + 44) + *(_DWORD *)(a1 + 32)) & 0xFFF) + (unsigned __int64)*(unsigned int *)(a1 + 40) + 4095) >> 12;
    v10 = v9;
    if ( MmProtectFreedNonPagedPool )
      v10 = v9 + 1;
    if ( v10 <= 0x200 )
    {
      UltraMdlContext = MiGetUltraMdlContext();
      v5 = UltraMdlContext;
      if ( UltraMdlContext )
      {
        CurrentIrql = KeGetCurrentIrql();
        v13 = 4;
        if ( CurrentIrql != 2 )
          v13 = 0;
        UltraMapping = MiGetUltraMapping((__int64)(&UltraMdlContext->Next + 1), 3uLL, v10, v13);
        v15 = ((UltraMapping >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        if ( ((UltraMapping >> 9) & 0x7FFFFFFFF8LL) != 0x98000000000LL )
          goto LABEL_19;
      }
    }
    v16 = (__int64 *)&unk_140E35EC0;
    if ( (ProtectionMask & 0x18) == 0 )
      v16 = &qword_140E376A8;
    v15 = MiReservePtes((__int64)v16, v10);
    if ( v15 )
    {
LABEL_19:
      v17 = *(unsigned int *)(a1 + 44) + ((__int64)(v15 << 25) >> 16);
      v18 = MiFillSystemPtes(v15, v9, a1 + 48, ProtectionMask, 0, v22);
      if ( v18 >= 0 )
      {
        v19 = v22[0] & 1;
        if ( (v22[0] & 1) != 0 )
          MiMappingHasIoReferences(v17);
        v18 = 0;
        guard_dispatch_icall_no_overrides(a4, v17);
        if ( v19 )
          MiClearMappingAndDereferenceIoSpace(v17, v9);
      }
      if ( v5 )
      {
        if ( v10 )
        {
          v20 = v10;
          do
          {
            *(_QWORD *)v15 = CLFS_LSN_NULL_EXT;
            v15 += 8LL;
            --v20;
          }
          while ( v20 );
        }
        MiFreeUltraMdlContext(v5);
      }
      else if ( v15 )
      {
        v21 = (__int64 *)&unk_140E35EC0;
        if ( (ProtectionMask & 0x18) == 0 )
          v21 = &qword_140E376A8;
        MiReleasePtes((__int64)v21, (_QWORD *)v15, v10);
      }
      return (unsigned int)v18;
    }
    else
    {
      return 3221225626LL;
    }
  }
}
