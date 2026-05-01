/*
 * XREFs of ??$make_shared@UNexusPolicyManager@@$$V@std@@YA?AV?$shared_ptr@UNexusPolicyManager@@@0@XZ @ 0x1803459E0
 * Callers:
 *     ?Instance@?$singleton_with_factory@UNexusPolicyManager@@U?$singleton_initialize_factory@UNexusPolicyManager@@@xblib@@@xblib@@SA?AV?$shared_ptr@UNexusPolicyManager@@@std@@XZ @ 0x180351CFC (-Instance@-$singleton_with_factory@UNexusPolicyManager@@U-$singleton_initialize_factory@UNexusPo.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180048554 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x1802D2108 (--2@YAPEAX_K@Z.c)
 *     ??$?4UNexusPolicyManager@@$0A@@?$weak_ptr@UNexusPolicyManager@@@std@@QEAAAEAV01@AEBV?$shared_ptr@UNexusPolicyManager@@@1@@Z @ 0x1803408B0 (--$-4UNexusPolicyManager@@$0A@@-$weak_ptr@UNexusPolicyManager@@@std@@QEAAAEAV01@AEBV-$shared_ptr.c)
 */

__int64 __fastcall std::make_shared<NexusPolicyManager,>(__int64 a1)
{
  char *v2; // rax
  __int64 v3; // r8
  std::_Ref_count_base *v4; // rbx
  __int64 v6[4]; // [rsp+28h] [rbp-20h] BYREF

  v2 = (char *)operator new(0x48uLL);
  *(_OWORD *)v2 = 0LL;
  *(_QWORD *)v2 = &std::_Ref_count_obj2<NexusPolicyManager>::`vftable';
  *((_DWORD *)v2 + 2) = 1;
  *((_DWORD *)v2 + 3) = 1;
  *((_OWORD *)v2 + 1) = 0LL;
  *((_OWORD *)v2 + 2) = 0LL;
  *((_OWORD *)v2 + 3) = 0LL;
  *((_QWORD *)v2 + 8) = 0LL;
  *((_QWORD *)v2 + 3) = 0LL;
  *((_QWORD *)v2 + 4) = 0LL;
  *((_WORD *)v2 + 20) = 0;
  *((_QWORD *)v2 + 6) = 0LL;
  *((_QWORD *)v2 + 2) = &NexusPolicyManager::`vftable';
  *((_QWORD *)v2 + 8) = 0LL;
  *((_QWORD *)v2 + 7) = 0LL;
  *((_QWORD *)v2 + 8) = 0LL;
  *(_OWORD *)a1 = 0LL;
  *(_QWORD *)a1 = v2 + 16;
  *(_QWORD *)(a1 + 8) = v2;
  if ( v2 != (char *)-16LL )
  {
    v3 = *((_QWORD *)v2 + 4);
    if ( !v3 || !*(_DWORD *)(v3 + 8) )
    {
      _InterlockedAdd((volatile signed __int32 *)v2 + 2, 1u);
      v4 = *(std::_Ref_count_base **)(a1 + 8);
      v6[0] = (__int64)(v2 + 16);
      v6[1] = (__int64)v4;
      std::weak_ptr<NexusPolicyManager>::operator=<NexusPolicyManager,0>((_QWORD *)v2 + 3, v6);
      if ( v4 )
        std::_Ref_count_base::_Decref(v4);
    }
  }
  return a1;
}
