/*
 * XREFs of ?CheckClientCapability@@YAJPEBVBamoInputObserverClientProxy@@PEBG@Z @ 0x180137364
 * Callers:
 *     ?RegisterObserverClient@?$CBaseInputObserverServer@$0L@@@UEAAJPEAVBamoInputObserverManagerStub@@PEAVBamoInputObserverClientProxy@@@Z @ 0x1801376B0 (-RegisterObserverClient@-$CBaseInputObserverServer@$0L@@@UEAAJPEAVBamoInputObserverManagerStub@@.c)
 * Callees:
 *     ?ImpersonateCaller@BaseBamoConnection@Bamo@Microsoft@@QEAA?AVImpersonationReverter@123@XZ @ 0x18002E90C (-ImpersonateCaller@BaseBamoConnection@Bamo@Microsoft@@QEAA-AVImpersonationReverter@123@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008EFF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CheckCallerCapabilityWithShellFallback@@YAJPEBG@Z @ 0x1801372AC (-CheckCallerCapabilityWithShellFallback@@YAJPEBG@Z.c)
 */

__int64 __fastcall CheckClientCapability(const struct BamoInputObserverClientProxy *a1, char *a2)
{
  __int64 v2; // rcx
  Microsoft::Bamo::BaseBamoConnection *v3; // rcx
  const unsigned __int16 *v4; // rcx
  int v6; // eax
  unsigned int v7; // edi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  char *v9; // [rsp+38h] [rbp+10h] BYREF

  v9 = a2;
  v2 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 4) + 24LL) + 32LL);
  if ( *(int *)(v2 + 8) <= 0 )
    v3 = 0LL;
  else
    v3 = *(Microsoft::Bamo::BaseBamoConnection **)(v2 + 16);
  Microsoft::Bamo::BaseBamoConnection::ImpersonateCaller(v3, &v9);
  if ( (int)v9 >= 0 )
  {
    v6 = CheckCallerCapabilityWithShellFallback(v4);
    v7 = v6;
    if ( v6 >= 0 )
    {
      if ( !(_DWORD)v9 )
        RevertToSelf();
      return 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2D,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\components\\inputobservers\\server\\BaseInputObserverServer.cpp",
        (const char *)(unsigned int)v6);
      if ( !(_DWORD)v9 )
        RevertToSelf();
      return v7;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2C,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\components\\inputobservers\\server\\BaseInputObserverServer.cpp",
      (const char *)(unsigned int)v9);
    return (unsigned int)v9;
  }
}
