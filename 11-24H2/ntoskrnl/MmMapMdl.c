/*
 * XREFs of MmMapMdl @ 0x140676C90
 * Callers:
 *     <none>
 * Callees:
 *     MiGetUltraMapping @ 0x14020CE50 (MiGetUltraMapping.c)
 *     MiMappingHasIoReferences @ 0x14026347C (MiMappingHasIoReferences.c)
 *     MiReleasePtes @ 0x14028DDA0 (MiReleasePtes.c)
 *     MiClearMappingAndDereferenceIoSpace @ 0x14028E960 (MiClearMappingAndDereferenceIoSpace.c)
 *     MiReservePtes @ 0x14028FF10 (MiReservePtes.c)
 *     MiFillSystemPtes @ 0x140290A30 (MiFillSystemPtes.c)
 *     MiMakeProtectionMask @ 0x1402EAF70 (MiMakeProtectionMask.c)
 *     MiFreeUltraMdlContext @ 0x140497FC0 (MiFreeUltraMdlContext.c)
 *     MiGetUltraMdlContext @ 0x14049878C (MiGetUltraMdlContext.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall MmMapMdl(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  struct _SLIST_ENTRY *v5; // r14
  unsigned int ProtectionMask; // esi
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned __int64 v10; // r12
  unsigned int v11; // edi
  PSLIST_ENTRY UltraMdlContext; // rax
  unsigned __int8 CurrentIrql; // cl
  char v14; // r9
  unsigned __int64 UltraMapping; // rax
  ULONG_PTR v16; // rbx
  __int64 *v17; // rcx
  unsigned __int64 v18; // r15
  __int64 v19; // r8
  __int64 v20; // r9
  int v21; // r13d
  int v22; // ebp
  __int64 v23; // rcx
  __int64 *v24; // rcx
  __int64 v25[9]; // [rsp+30h] [rbp-48h] BYREF

  LODWORD(v25[0]) = 0;
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
    guard_dispatch_icall_no_overrides(v8, *(_QWORD *)(a1 + 24), v7, v8);
    return 0LL;
  }
  else
  {
    v10 = (((*(_DWORD *)(a1 + 44) + *(_DWORD *)(a1 + 32)) & 0xFFF) + (unsigned __int64)*(unsigned int *)(a1 + 40) + 4095) >> 12;
    v11 = v10;
    if ( MmProtectFreedNonPagedPool )
      v11 = v10 + 1;
    if ( v11 <= 0x200 )
    {
      UltraMdlContext = MiGetUltraMdlContext();
      v5 = UltraMdlContext;
      if ( UltraMdlContext )
      {
        CurrentIrql = KeGetCurrentIrql();
        v14 = 4;
        if ( CurrentIrql != 2 )
          v14 = 0;
        UltraMapping = MiGetUltraMapping((__int64)(&UltraMdlContext->Next + 1), 3uLL, v11, v14);
        v16 = ((UltraMapping >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        if ( ((UltraMapping >> 9) & 0x7FFFFFFFF8LL) != 0x98000000000LL )
          goto LABEL_19;
      }
    }
    v17 = (__int64 *)&unk_140E35D80;
    if ( (ProtectionMask & 0x18) == 0 )
      v17 = &qword_140E37568;
    v16 = MiReservePtes((__int64)v17, v11);
    if ( v16 )
    {
LABEL_19:
      v18 = *(unsigned int *)(a1 + 44) + ((__int64)(v16 << 25) >> 16);
      v21 = MiFillSystemPtes(v16, v10, a1 + 48, ProtectionMask, 0, v25);
      if ( v21 >= 0 )
      {
        v22 = v25[0] & 1;
        if ( (v25[0] & 1) != 0 )
          MiMappingHasIoReferences(v18);
        v21 = 0;
        guard_dispatch_icall_no_overrides(a4, v18, v19, v20);
        if ( v22 )
          MiClearMappingAndDereferenceIoSpace(v18, v10);
      }
      if ( v5 )
      {
        if ( v11 )
        {
          v23 = v11;
          do
          {
            *(_QWORD *)v16 = CLFS_LSN_NULL_EXT;
            v16 += 8LL;
            --v23;
          }
          while ( v23 );
        }
        MiFreeUltraMdlContext(v5);
      }
      else if ( v16 )
      {
        v24 = (__int64 *)&unk_140E35D80;
        if ( (ProtectionMask & 0x18) == 0 )
          v24 = &qword_140E37568;
        MiReleasePtes((__int64)v24, (_QWORD *)v16, v11);
      }
      return (unsigned int)v21;
    }
    else
    {
      return 3221225626LL;
    }
  }
}
