/*
 * XREFs of ?CopyEndpointList@CProcessingData@@AEAAXAEAV?$CAtlList@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATLRT@@AEBV23@@Z @ 0x14000CB18
 * Callers:
 *     ??4CProcessingData@@QEAAXAEAV0@@Z @ 0x140035E1C (--4CProcessingData@@QEAAXAEAV0@@Z.c)
 *     ?SwapRTPointer@?$CRealTimeSafeStruct@VCProcessingData@@$00@@IEAAJXZ @ 0x14003BA04 (-SwapRTPointer@-$CRealTimeSafeStruct@VCProcessingData@@$00@@IEAAJXZ.c)
 * Callees:
 *     ?GetFreeNode@?$CAtlList@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATLRT@@AEAAXXZ @ 0x14000C7F4 (-GetFreeNode@-$CAtlList@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATLRT@@AEAAXXZ.c)
 *     ??2CConnectionNode@@SAPEAX_K@Z @ 0x14000CCD0 (--2CConnectionNode@@SAPEAX_K@Z.c)
 *     ??4CConnectionNode@@QEAAXAEAV0@@Z @ 0x14000CE40 (--4CConnectionNode@@QEAAXAEAV0@@Z.c)
 *     ?RemoveHead@?$CAtlList@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATLRT@@QEAAPEAVCConnectionNode@@XZ @ 0x14000CF74 (-RemoveHead@-$CAtlList@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATLRT@@QEAAPEAVCConnectionN.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall CProcessingData::CopyEndpointList(__int64 *a1, __int64 **a2, __int64 a3)
{
  void (__fastcall ***v5)(_QWORD, __int64); // rax
  __int64 v6; // rsi
  __int64 v7; // r14
  _QWORD *v8; // rdi
  __int64 *v9; // r14
  __int64 *v10; // rax
  int v11; // [rsp+20h] [rbp-28h] BYREF
  int v12; // [rsp+24h] [rbp-24h] BYREF

  while ( a2[2] )
  {
    v5 = (void (__fastcall ***)(_QWORD, __int64))ATLRT::CAtlList<CConnectionNode *,CConnectionNodeTraits>::RemoveHead(a2);
    if ( v5 )
      (**v5)(v5, 1LL);
  }
  v6 = *(_QWORD *)(a3 + 8);
  while ( v6 )
  {
    v7 = *(_QWORD *)(v6 + 16);
    v6 = *(_QWORD *)(v6 + 8);
    v8 = CConnectionNode::operator new((unsigned __int64)a1);
    if ( v8 )
    {
      *v8 = &CConnectionNode::`vftable';
      v8[2] = *(_QWORD *)(v7 + 16);
      v8[14] = 0LL;
      v8[17] = 0LL;
      v8[18] = 0LL;
      v8[20] = 0LL;
      CConnectionNode::operator=(v8, v7);
    }
    else
    {
      v8 = 0LL;
    }
    if ( v8 )
    {
      try
      {
        v9 = *a2;
        ATLRT::CAtlList<CConnectionNode *,CConnectionNodeTraits>::GetFreeNode((__int64)a2);
        a1 = a2[4];
        v10 = (__int64 *)*a1;
        a1[2] = (__int64)v8;
        a2[4] = v10;
        a1[1] = 0LL;
        *a1 = (__int64)v9;
        a2[2] = (__int64 *)((char *)a2[2] + 1);
        if ( *a2 )
          (*a2)[1] = (__int64)a1;
        else
          a2[1] = a1;
        *a2 = a1;
      }
      catch ( ATL::CAtlException v12 )
      {
        (*(void (__fastcall **)(_QWORD *, __int64))*v8)(v8, 1LL);
        v11 = v12;
        throw (ATL::CAtlException *)&v11;
      }
    }
  }
}
