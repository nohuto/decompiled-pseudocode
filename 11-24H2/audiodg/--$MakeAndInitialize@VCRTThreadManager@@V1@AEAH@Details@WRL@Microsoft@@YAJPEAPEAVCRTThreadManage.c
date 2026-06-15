/*
 * XREFs of ??$MakeAndInitialize@VCRTThreadManager@@V1@AEAH@Details@WRL@Microsoft@@YAJPEAPEAVCRTThreadManager@@AEAH@Z @ 0x1400552C8
 * Callers:
 *     _lambda_171c398c6aabaca0f0574d3dc33ce85c_::operator() @ 0x14005525C (_lambda_171c398c6aabaca0f0574d3dc33ce85c_--operator().c)
 * Callees:
 *     ??0CRTThreadManager@@QEAA@XZ @ 0x140049DB0 (--0CRTThreadManager@@QEAA@XZ.c)
 *     ??1?$MakeAllocator@VGraphStreamingResourceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x14005555C (--1-$MakeAllocator@VGraphStreamingResourceManager@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@CRTThreadManager@@QEAAJH@Z @ 0x140056288 (-RuntimeClassInitialize@CRTThreadManager@@QEAAJH@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x140058D58 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CRTThreadManager,CRTThreadManager,int &>(
        CRTThreadManager **a1,
        int *a2)
{
  CRTThreadManager *v4; // rax
  CRTThreadManager *v6; // rbx
  int v7; // edi
  CRTThreadManager *v8; // [rsp+40h] [rbp+8h] BYREF
  CRTThreadManager *v9; // [rsp+50h] [rbp+18h]
  CRTThreadManager *v10; // [rsp+58h] [rbp+20h]

  *a1 = 0LL;
  v4 = (CRTThreadManager *)operator new(0x70uLL, (const struct std::nothrow_t *)&std::nothrow);
  v8 = v4;
  v9 = v4;
  if ( !v4 )
    return 2147942414LL;
  v10 = v4;
  v6 = CRTThreadManager::CRTThreadManager(v4);
  v8 = 0LL;
  v7 = CRTThreadManager::RuntimeClassInitialize(v6, *a2);
  if ( v7 >= 0 )
  {
    if ( v6 )
      (*(void (__fastcall **)(CRTThreadManager *))(*(_QWORD *)v6 + 8LL))(v6);
    *a1 = v6;
    if ( v6 )
      (*(void (__fastcall **)(CRTThreadManager *))(*(_QWORD *)v6 + 16LL))(v6);
    v7 = 0;
  }
  else if ( v6 )
  {
    (*(void (__fastcall **)(CRTThreadManager *))(*(_QWORD *)v6 + 16LL))(v6);
  }
  Microsoft::WRL::Details::MakeAllocator<GraphStreamingResourceManager>::~MakeAllocator<GraphStreamingResourceManager>(&v8);
  return (unsigned int)v7;
}
