/*
 * XREFs of ?RegisterInputAttemptedClient@InputDeliveryServer@@MEAAJPEAVBamoInputDeliveryServerStub@@PEAVBamoInputAttemptedDeliveryClientProxy@@@Z @ 0x18015CBB0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@VBamoDragSourceClientProxy@@@WRL@Microsoft@@IEBAXXZ @ 0x1800284CC (-InternalAddRef@-$ComPtr@VBamoDragSourceClientProxy@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??$_Emplace_reallocate@AEBV?$ComPtr@VBamoInputAttemptedDeliveryClientProxy@@@WRL@Microsoft@@@?$vector@V?$ComPtr@VBamoInputAttemptedDeliveryClientProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VBamoInputAttemptedDeliveryClientProxy@@@WRL@Microsoft@@@std@@@std@@AEAAPEAV?$ComPtr@VBamoInputAttemptedDeliveryClientProxy@@@WRL@Microsoft@@QEAV234@AEBV234@@Z @ 0x18015D418 (--$_Emplace_reallocate@AEBV-$ComPtr@VBamoInputAttemptedDeliveryClientProxy@@@WRL@Microsoft@@@-$v.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall InputDeliveryServer::RegisterInputAttemptedClient(
        InputDeliveryServer *this,
        struct BamoInputDeliveryServerStub *a2,
        struct BamoInputAttemptedDeliveryClientProxy *a3)
{
  __int64 (__fastcall ****v4)(_QWORD); // rdx
  __int64 (__fastcall ***v5)(_QWORD); // rcx
  __int64 (__fastcall ***v7)(_QWORD); // [rsp+30h] [rbp+8h] BYREF
  __int64 (__fastcall ****v8)(_QWORD); // [rsp+40h] [rbp+18h]

  v7 = (__int64 (__fastcall ***)(_QWORD))a3;
  Microsoft::WRL::ComPtr<BamoDragSourceClientProxy>::InternalAddRef(&v7);
  v8 = &v7;
  v4 = (__int64 (__fastcall ****)(_QWORD))*((_QWORD *)this + 11);
  if ( v4 == *((__int64 (__fastcall *****)(_QWORD))this + 12) )
  {
    std::vector<Microsoft::WRL::ComPtr<BamoInputAttemptedDeliveryClientProxy>>::_Emplace_reallocate<Microsoft::WRL::ComPtr<BamoInputAttemptedDeliveryClientProxy> const &>(
      (char *)this + 80,
      v4,
      &v7);
  }
  else
  {
    *v4 = v7;
    Microsoft::WRL::ComPtr<BamoDragSourceClientProxy>::InternalAddRef(v4);
    *((_QWORD *)this + 11) += 8LL;
  }
  v5 = v7;
  if ( v7 )
  {
    v7 = 0LL;
    (*v5)[1](v5);
  }
  return 0LL;
}
