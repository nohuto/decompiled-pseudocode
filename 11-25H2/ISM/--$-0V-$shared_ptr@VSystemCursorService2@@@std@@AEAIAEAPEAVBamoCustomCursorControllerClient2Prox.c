/*
 * XREFs of ??$?0V?$shared_ptr@VSystemCursorService2@@@std@@AEAIAEAPEAVBamoCustomCursorControllerClient2Proxy@@@?$_Ref_count_obj2@VCustomCursorApplication2@@@std@@QEAA@$$QEAV?$shared_ptr@VSystemCursorService2@@@1@AEAIAEAPEAVBamoCustomCursorControllerClient2Proxy@@@Z @ 0x1800F4160
 * Callers:
 *     ?AttachApplication2@SystemCursorController2@@MEAAJPEAVBamoSystemCursorControllerStub@@PEAVBamoCustomCursorControllerClient2Proxy@@@Z @ 0x1800F49E0 (-AttachApplication2@SystemCursorController2@@MEAAJPEAVBamoSystemCursorControllerStub@@PEAVBamoCu.c)
 * Callees:
 *     ??0?$unordered_set@_KU?$hash@_K@std@@U?$equal_to@_K@2@V?$allocator@_K@2@@std@@QEAA@XZ @ 0x180027568 (--0-$unordered_set@_KU-$hash@_K@std@@U-$equal_to@_K@2@V-$allocator@_K@2@@std@@QEAA@XZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180058AF4 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??$?0VSystemCursorService2@@$0A@@?$weak_ptr@VSystemCursorService2@@@std@@QEAA@AEBV?$shared_ptr@VSystemCursorService2@@@1@@Z @ 0x1800F4210 (--$-0VSystemCursorService2@@$0A@@-$weak_ptr@VSystemCursorService2@@@std@@QEAA@AEBV-$shared_ptr@V.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall std::_Ref_count_obj2<CustomCursorApplication2>::_Ref_count_obj2<CustomCursorApplication2>(
        __int64 a1,
        __int64 *a2,
        int *a3,
        void (__fastcall ****a4)(_QWORD))
{
  __int64 v5; // rdi
  void (__fastcall ***v6)(_QWORD); // rsi
  int v7; // ebx
  __int64 v9; // [rsp+20h] [rbp-28h] BYREF
  std::_Ref_count_base *v10; // [rsp+28h] [rbp-20h]

  *(_DWORD *)(a1 + 8) = 1;
  *(_DWORD *)(a1 + 12) = 1;
  *(_QWORD *)a1 = &std::_Ref_count_obj2<CustomCursorApplication2>::`vftable';
  v5 = a1 + 16;
  v6 = *a4;
  v7 = *a3;
  v9 = *a2;
  v10 = (std::_Ref_count_base *)a2[1];
  *a2 = 0LL;
  a2[1] = 0LL;
  std::weak_ptr<SystemCursorService2>::weak_ptr<SystemCursorService2>(a1 + 16, &v9);
  std::unordered_set<unsigned __int64>::unordered_set<unsigned __int64>(v5 + 16);
  *(_DWORD *)(v5 + 80) = v7;
  *(_QWORD *)(v5 + 88) = v6;
  if ( v6 )
    (**v6)(v6);
  if ( v10 )
    std::_Ref_count_base::_Decref(v10);
  return a1;
}
