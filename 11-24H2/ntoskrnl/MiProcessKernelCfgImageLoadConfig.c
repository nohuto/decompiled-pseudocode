/*
 * XREFs of MiProcessKernelCfgImageLoadConfig @ 0x140A5E1C0
 * Callers:
 *     MiProcessLoadConfigForDriver @ 0x140A5E04C (MiProcessLoadConfigForDriver.c)
 *     MiInitializeKernelCfgImages @ 0x140C5BBA0 (MiInitializeKernelCfgImages.c)
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x1402EEB70 (RtlImageDirectoryEntryToData.c)
 *     MiSectionControlArea @ 0x140355A80 (MiSectionControlArea.c)
 *     MiSetImageProtection @ 0x14042896C (MiSetImageProtection.c)
 *     MiCheckForDiscardableLongJumpTable @ 0x140689FA8 (MiCheckForDiscardableLongJumpTable.c)
 *     MiLogStrongCodeDriverLoadFailure @ 0x140AA650C (MiLogStrongCodeDriverLoadFailure.c)
 */

__int64 __fastcall MiProcessKernelCfgImageLoadConfig(__int64 a1)
{
  __int64 v2; // rcx
  unsigned __int64 v3; // rsi
  _QWORD *v4; // rax
  __int64 v5; // rbx
  void (__fastcall **v6)(ULONG_PTR); // r14
  _QWORD *v8; // r14
  __int64 (__fastcall *v9)(); // rax
  ULONG Size; // [rsp+38h] [rbp+10h] BYREF

  Size = 0;
  if ( (MiFlags & 0x40000) != 0 )
  {
    v2 = *(_QWORD *)(a1 + 112);
    v3 = v2 ? MiSectionControlArea(v2) + 128 : 0LL;
    v4 = RtlImageDirectoryEntryToData(*(PVOID *)(a1 + 48), 1u, 0xAu, &Size);
    v5 = (__int64)v4;
    if ( v4 )
    {
      if ( *(_DWORD *)v4 >= 0x78u )
      {
        v6 = (void (__fastcall **)(ULONG_PTR))v4[14];
        if ( v6 )
        {
          if ( v3 )
          {
            if ( !(unsigned int)MiSetImageProtection(a1, v4[14], 8) )
            {
              MiLogStrongCodeDriverLoadFailure("CfgUnwritableLoadConfig");
              dword_140E2D838 = 103;
              return 3221225595LL;
            }
            *v6 = guard_check_icall_no_overrides;
            if ( *(_QWORD *)(v3 + 16) )
              MiSetImageProtection(a1, (unsigned __int64)v6, 8);
          }
          else
          {
            *v6 = guard_check_icall_no_overrides;
          }
        }
      }
      if ( *(_DWORD *)v5 >= 0x80u )
      {
        v8 = *(_QWORD **)(v5 + 120);
        if ( v8 )
        {
          if ( v3 && !(unsigned int)MiSetImageProtection(a1, *(_QWORD *)(v5 + 120), 8) )
          {
            MiLogStrongCodeDriverLoadFailure("CfgUnwritableLoadConfig");
            dword_140E2D838 = 104;
            return 3221225595LL;
          }
          *v8 = guard_dispatch_icall_no_overrides;
          v9 = KscpCfgDispatchUserCallTargetEsSmep;
          if ( (KeFeatureBits & 1) == 0 )
            v9 = KscpCfgDispatchUserCallTargetEsNoSmep;
          *v8 = v9;
          if ( v3 && *(_QWORD *)(v3 + 16) )
            MiSetImageProtection(a1, (unsigned __int64)v8, 8);
        }
      }
      if ( *(_DWORD *)v5 >= 0xC0u && (*(_DWORD *)(v5 + 144) & 0x10000) != 0 )
      {
        if ( *(_QWORD *)(v5 + 184) )
          MiCheckForDiscardableLongJumpTable(a1, v5);
      }
    }
  }
  return 0LL;
}
