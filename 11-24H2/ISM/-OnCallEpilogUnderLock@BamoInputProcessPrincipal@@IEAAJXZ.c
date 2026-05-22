/*
 * XREFs of ?OnCallEpilogUnderLock@BamoInputProcessPrincipal@@IEAAJXZ @ 0x1800CC55C
 * Callers:
 *     ?AllocateStubUnderLockThunk@BamoInputProcessPrincipalImpl@BamoImpl@@UEAAJPEAVBaseBamoPeerImpl@2Microsoft@@PEAPEAVBamoStub@Bamo@4@@Z @ 0x1800CC2E0 (-AllocateStubUnderLockThunk@BamoInputProcessPrincipalImpl@BamoImpl@@UEAAJPEAVBaseBamoPeerImpl@2M.c)
 *     ?InitializeProxyUnderLockThunk@BamoInputProcessStubImpl@BamoImpl@@UEAAJXZ @ 0x1800CC410 (-InitializeProxyUnderLockThunk@BamoInputProcessStubImpl@BamoImpl@@UEAAJXZ.c)
 *     ?OnConnectedUnderLockThunk@BamoInputProcessStubImpl@BamoImpl@@UEAAJXZ @ 0x1800CC5B0 (-OnConnectedUnderLockThunk@BamoInputProcessStubImpl@BamoImpl@@UEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall BamoInputProcessPrincipal::OnCallEpilogUnderLock(BamoInputProcessPrincipal *this)
{
  __int64 v2; // rcx

  v2 = *((_QWORD *)this + 7);
  if ( v2 )
    return (*(__int64 (__fastcall **)(__int64, BamoInputProcessPrincipal *))(*(_QWORD *)v2 + 80LL))(v2, this);
  else
    return 0LL;
}
