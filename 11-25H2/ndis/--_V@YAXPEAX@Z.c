/*
 * XREFs of ??_V@YAXPEAX@Z @ 0x140141060
 * Callers:
 *     ??$reset@PEAE@?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@wistd@@@wistd@@QEAAXPEAE@Z @ 0x140099380 (--$reset@PEAE@-$unique_ptr@$$BY0A@EU-$default_delete@$$BY0A@E@wistd@@@wistd@@QEAAXPEAE@Z.c)
 *     KRegKey::QueryValueBlob__lambda_4e383e8896c9b02b63d9444740c78be8___ @ 0x1401428A4 (KRegKey--QueryValueBlob__lambda_4e383e8896c9b02b63d9444740c78be8___.c)
 *     ?ndisAllocateNumaStripedPages@@YAPEAXXZ @ 0x14014C32C (-ndisAllocateNumaStripedPages@@YAPEAXXZ.c)
 *     KRegKey::QueryValueBlob__lambda_195928ecaabee91b0db244d6e7f18b31___ @ 0x14014D3D0 (KRegKey--QueryValueBlob__lambda_195928ecaabee91b0db244d6e7f18b31___.c)
 *     KRegKey::QueryValueBlob__lambda_4865fb945cd28a177f845da523c8204e___ @ 0x14014D548 (KRegKey--QueryValueBlob__lambda_4865fb945cd28a177f845da523c8204e___.c)
 *     KRegKey::QueryValueBlob__lambda_70cb5823003e089218b0c358f25a9137___ @ 0x14014D6C4 (KRegKey--QueryValueBlob__lambda_70cb5823003e089218b0c358f25a9137___.c)
 *     KRegKey::QueryValueBlob__lambda_bc7a44a56f15b2257a2340eb3a455b3d___ @ 0x14014D83C (KRegKey--QueryValueBlob__lambda_bc7a44a56f15b2257a2340eb3a455b3d___.c)
 *     KRegKey::QueryValueBlob__lambda_f1f475d4aaff1d18d6eae9fe5eca1b95___ @ 0x14014D9D4 (KRegKey--QueryValueBlob__lambda_f1f475d4aaff1d18d6eae9fe5eca1b95___.c)
 *     KRegKey::QueryValueMultisz__lambda_c8f07734eb94a31c9886b9ad420b8d4d___lambda_90693e01559ab5daa9d90de50bdb401e___ @ 0x14014DB90 (KRegKey--QueryValueMultisz__lambda_c8f07734eb94a31c9886b9ad420b8d4d___lambda_90693e01559ab5daa9d.c)
 *     KRegKey::QueryValueBlob__lambda_ccaa62be061b52f00216e46c9dac6cb5___ @ 0x14014E01C (KRegKey--QueryValueBlob__lambda_ccaa62be061b52f00216e46c9dac6cb5___.c)
 *     KRegKey::QueryValueBlob__lambda_7ae2c69980d7c12487bdb6204f64cd37___ @ 0x14014EB1C (KRegKey--QueryValueBlob__lambda_7ae2c69980d7c12487bdb6204f64cd37___.c)
 *     KRegKey::QueryValueMultisz__lambda_145828208f54867cbf19e2ec96475ca0___lambda_669a078cee999b45033530b9c5ed1c6f___ @ 0x14014F1B4 (KRegKey--QueryValueMultisz__lambda_145828208f54867cbf19e2ec96475ca0___lambda_669a078cee999b45033.c)
 *     KRegKey::QueryValueBlob__lambda_3d3ed660da3e95067e62aa13ddce3517___ @ 0x140169BE0 (KRegKey--QueryValueBlob__lambda_3d3ed660da3e95067e62aa13ddce3517___.c)
 *     KRegKey::QueryValueMultisz__lambda_e7cfcc3f3a6a3b9bada4f20c4517f5e3___lambda_d0aabbab13d03fe2b2b867a1fab03655___ @ 0x140169E80 (KRegKey--QueryValueMultisz__lambda_e7cfcc3f3a6a3b9bada4f20c4517f5e3___lambda_d0aabbab13d03fe2b2b.c)
 *     KRegKey::QueryValueBlob__lambda_cf61730e764cafb5fbe53142b0d3259b___ @ 0x14016A100 (KRegKey--QueryValueBlob__lambda_cf61730e764cafb5fbe53142b0d3259b___.c)
 *     ?QueryValueString@KRegKey@@QEAAJPEBU_UNICODE_STRING@@AEAV?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@@Z @ 0x140174B50 (-QueryValueString@KRegKey@@QEAAJPEBU_UNICODE_STRING@@AEAV-$unique_ptr@UKString@Rtl@@U-$default_d.c)
 *     ?ndisBindReadProtocolDriverFromV3Registry@@YA_NPEAUNDIS_BIND_PROTOCOL_DRIVER@@@Z @ 0x140174F20 (-ndisBindReadProtocolDriverFromV3Registry@@YA_NPEAUNDIS_BIND_PROTOCOL_DRIVER@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall operator delete[](void *a1)
{
  if ( a1 )
    ExFreePoolWithTag(a1, 0);
}
