/*
 * XREFs of ?CopyAPOList@CProcessingData@@AEAAXAEAV?$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@AEBV23@@Z @ 0x14000B2DC
 * Callers:
 *     ??4CProcessingData@@QEAAXAEAV0@@Z @ 0x14003611C (--4CProcessingData@@QEAAXAEAV0@@Z.c)
 *     ?SwapRTPointer@?$CRealTimeSafeStruct@VCProcessingData@@$00@@IEAAJXZ @ 0x14003BD04 (-SwapRTPointer@-$CRealTimeSafeStruct@VCProcessingData@@$00@@IEAAJXZ.c)
 * Callees:
 *     ??2CAPONode@@SAPEAX_K@Z @ 0x14000B4B8 (--2CAPONode@@SAPEAX_K@Z.c)
 *     ??4CAPONode@@QEAAXAEAV0@@Z @ 0x14000B5AC (--4CAPONode@@QEAAXAEAV0@@Z.c)
 *     ?RemoveHead@?$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@QEAAPEAVCAPONode@@XZ @ 0x14000B828 (-RemoveHead@-$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@QEAAPEAVCAPONode@@XZ.c)
 *     ??_GCAPONode@@QEAAPEAXI@Z @ 0x14000B900 (--_GCAPONode@@QEAAPEAXI@Z.c)
 *     ?GetFreeNode@?$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@AEAAXXZ @ 0x14000B9F4 (-GetFreeNode@-$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@AEAAXXZ.c)
 *     memset_0 @ 0x14005A1D4 (memset_0.c)
 */

// Hidden C++ exception states: #wind=15
void __fastcall CProcessingData::CopyAPOList(__int64 *a1, __int64 **a2, __int64 a3)
{
  CAPONode *v5; // rax
  unsigned int v6; // edx
  __int64 v7; // rsi
  __int64 v8; // r14
  char *v9; // rax
  CAPONode *v10; // rbx
  __int64 *v11; // r14
  __int64 *v12; // rax
  __int64 v13; // [rsp+0h] [rbp-48h] BYREF
  int v14; // [rsp+20h] [rbp-28h] BYREF
  int v15; // [rsp+24h] [rbp-24h] BYREF

  while ( a2[2] )
  {
    v5 = (CAPONode *)ATL::CAtlList<CAPONode *,CAPONodeTraits>::RemoveHead(a2);
    if ( v5 )
      CAPONode::`scalar deleting destructor'(v5, v6);
  }
  v7 = *(_QWORD *)(a3 + 8);
  while ( v7 )
  {
    v8 = *(_QWORD *)(v7 + 16);
    v7 = *(_QWORD *)(v7 + 8);
    v9 = (char *)CAPONode::operator new((unsigned __int64)a1);
    v10 = (CAPONode *)v9;
    if ( v9 )
    {
      *(_QWORD *)v9 = 0LL;
      *((_QWORD *)v9 + 1) = 0LL;
      *((_QWORD *)v9 + 2) = 0LL;
      *((_QWORD *)v9 + 3) = 0LL;
      *((_QWORD *)v9 + 4) = 0LL;
      *((_QWORD *)v9 + 5) = 0LL;
      v9[48] = 0;
      *((_QWORD *)v9 + 7) = 0LL;
      *((_QWORD *)v9 + 8) = 0LL;
      *((_QWORD *)v9 + 9) = 0LL;
      *((_DWORD *)v9 + 20) = 0;
      *((_QWORD *)v9 + 11) = 0LL;
      *((_QWORD *)v9 + 12) = 0LL;
      *((_QWORD *)v9 + 13) = 0LL;
      *((_DWORD *)v9 + 28) = 0;
      *((_QWORD *)v9 + 15) = 0LL;
      *((_QWORD *)v9 + 16) = 0LL;
      *((_QWORD *)v9 + 17) = 0LL;
      *((_DWORD *)v9 + 36) = 0;
      *((_QWORD *)v9 + 19) = 0LL;
      *((_QWORD *)v9 + 20) = 0LL;
      *((_QWORD *)v9 + 21) = 0LL;
      *((_DWORD *)v9 + 44) = 0;
      *((_QWORD *)v9 + 23) = 0LL;
      *((_QWORD *)v9 + 24) = 0LL;
      *((_QWORD *)v9 + 25) = 0LL;
      *((_DWORD *)v9 + 52) = 0;
      *((_QWORD *)v9 + 27) = 0LL;
      *((_QWORD *)v9 + 28) = 0LL;
      *((_QWORD *)v9 + 29) = 0LL;
      *((_DWORD *)v9 + 60) = 0;
      *((_QWORD *)v9 + 31) = 0LL;
      *((_QWORD *)v9 + 32) = 0LL;
      *((_QWORD *)v9 + 33) = 0LL;
      *((_DWORD *)v9 + 68) = 0;
      *((_QWORD *)v9 + 35) = 0LL;
      *((_QWORD *)v9 + 36) = 0LL;
      *((_QWORD *)v9 + 37) = 0LL;
      *((_DWORD *)v9 + 76) = 0;
      memset_0(v9 + 328, 0, 0x70uLL);
      CAPONode::operator=(v10, v8);
    }
    else
    {
      v10 = 0LL;
    }
    if ( v10 )
    {
      try
      {
        v11 = *a2;
        ATL::CAtlList<CAPONode *,CAPONodeTraits>::GetFreeNode(a2);
        a1 = a2[4];
        v12 = (__int64 *)*a1;
        a1[2] = (__int64)v10;
        a2[4] = v12;
        a1[1] = 0LL;
        *a1 = (__int64)v11;
        a2[2] = (__int64 *)((char *)a2[2] + 1);
        if ( *a2 )
          (*a2)[1] = (__int64)a1;
        else
          a2[1] = a1;
        *a2 = a1;
      }
      catch ( ATL::CAtlException v15 )
      {
        CAPONode::`scalar deleting destructor'(v10, (unsigned int)&v13);
        v14 = v15;
        throw (ATL::CAtlException *)&v14;
      }
    }
  }
}
