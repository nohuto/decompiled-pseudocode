/*
 * XREFs of _anonymous_namespace_::SealCurrentFrameSequence @ 0x1801BBCC8
 * Callers:
 *     ?ProcessComposition@CComposition@@QEAAXXZ @ 0x1800817A0 (-ProcessComposition@CComposition@@QEAAXXZ.c)
 *     ?FrameEnded@CTelemetryFrames@@SAX_N0_K@Z @ 0x1800F2E10 (-FrameEnded@CTelemetryFrames@@SAX_N0_K@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180041DA0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     _anonymous_namespace_::FrameSequenceInfo::operator_ @ 0x1801BBF24 (_anonymous_namespace_--FrameSequenceInfo--operator_.c)
 *     ??1?$_Tree@V?$_Tset_traits@_KU?$less@_K@std@@V?$allocator@_K@2@$0A@@std@@@std@@QEAA@XZ @ 0x1801BC40C (--1-$_Tree@V-$_Tset_traits@_KU-$less@_K@std@@V-$allocator@_K@2@$0A@@std@@@std@@QEAA@XZ.c)
 *     std::_Tree_node_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int__void___::_Buyheadnode_std::allocator_std::_Tree_node_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int__void_______ @ 0x1801BC4FC (std--_Tree_node_std--pair__anonymous_namespace_--AnimationId_const__unsigned_int__void___--_Buyh.c)
 *     std::_Tree_std::_Tmap_traits__anonymous_namespace_::AnimationId_unsigned_int_A0x155a666c::AnimationId::LessThan_std::allocator_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int____0___::__Tree_std::_Tmap_traits__anonymous_namespace_::AnimationId_unsigned_int_A0x155a666c::AnimationId::LessThan_std::allocator_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int____0___ @ 0x1801BC528 (std--_Tree_std--_Tmap_traits__anonymous_namespace_--AnimationId_unsigned_int_A0x155a666c--Animat.c)
 *     McTemplateU0xq_EventWriteTransfer @ 0x1801C6A8C (McTemplateU0xq_EventWriteTransfer.c)
 *     memset_0 @ 0x180251AD8 (memset_0.c)
 */

void anonymous_namespace_::SealCurrentFrameSequence()
{
  LARGE_INTEGER v0; // rcx
  __int64 v1; // r10
  __int64 v2; // r11
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // rax
  int v6; // edx
  unsigned int v7; // r8d
  _OWORD v8[5]; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v9; // [rsp+70h] [rbp-90h]
  _BYTE v10[408]; // [rsp+80h] [rbp-80h] BYREF
  _QWORD v11[2]; // [rsp+218h] [rbp+118h] BYREF
  _QWORD v12[2]; // [rsp+228h] [rbp+128h] BYREF
  _BYTE v13[8]; // [rsp+238h] [rbp+138h] BYREF
  __int64 v14; // [rsp+240h] [rbp+140h]
  __int64 v15; // [rsp+248h] [rbp+148h]
  __int128 v16; // [rsp+250h] [rbp+150h]

  if ( dword_1803FA778 )
  {
    memset_0(v8, 0, 0x58uLL);
    v0 = g_qpcFrequency;
    v1 = *((_QWORD *)&xmmword_1803FA8C0 + 1);
    v2 = xmmword_1803FA8C0;
    xmmword_1803FAEA0 = v8[0];
    xmmword_1803FAEB0 = v8[1];
    xmmword_1803FAEC0 = v8[2];
    xmmword_1803FAED0 = v8[3];
    xmmword_1803FAEE0 = v8[4];
    qword_1803FAEF0 = v9;
    dword_1803FA790 = 1000
                    * ((*((_QWORD *)&xmmword_1803FA8C0 + 1) - (_QWORD)xmmword_1803FA8C0)
                     / g_qpcFrequency.QuadPart)
                    + (unsigned __int64)(1000
                                       * ((*((_QWORD *)&xmmword_1803FA8C0 + 1) - (_QWORD)xmmword_1803FA8C0)
                                        % g_qpcFrequency.QuadPart))
                    / g_qpcFrequency.QuadPart;
    v3 = xmmword_1803FAE88 - *(_QWORD *)&GUID_NULL.Data1;
    if ( (_QWORD)xmmword_1803FAE88 == *(_QWORD *)&GUID_NULL.Data1 )
      v3 = *((_QWORD *)&xmmword_1803FAE88 + 1) - *(_QWORD *)GUID_NULL.Data4;
    if ( v3 )
    {
      dword_1803FAF08 = 0;
      qword_1803FAC18 = 0LL;
    }
    else
    {
      v6 = dword_1803FA780;
      if ( (unsigned int)dword_1803FA780 > 0x37
        && (dword_1803FA774 & 0x100000) != 0
        && (Microsoft_Windows_Dwm_CoreEnableBits & 0x800000) != 0 )
      {
        ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))McTemplateU0xq_EventWriteTransfer)(
          (LARGE_INTEGER)g_qpcFrequency.QuadPart,
          &EVTDESC_DIAGTRACK_TRIGGER,
          16525050LL,
          0LL);
        v1 = *((_QWORD *)&xmmword_1803FA8C0 + 1);
        v2 = xmmword_1803FA8C0;
        v6 = dword_1803FA780;
        v0 = g_qpcFrequency;
      }
      v7 = v6 + dword_1803FAF08;
      dword_1803FAF08 += v6;
      if ( qword_1803FAC18 )
      {
        if ( v7 >= 0x30570
          && (unsigned __int64)(v1 - qword_1803FAC18) / v0.QuadPart
           + (unsigned __int64)(v1 - qword_1803FAC18) % v0.QuadPart / v0.QuadPart < 0xE10
          && (Microsoft_Windows_Dwm_CoreEnableBits & 0x800000) != 0 )
        {
          ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))McTemplateU0xq_EventWriteTransfer)(
            (LARGE_INTEGER)v0.QuadPart,
            &EVTDESC_DIAGTRACK_TRIGGER,
            16525050LL,
            1LL);
        }
      }
      else
      {
        qword_1803FAC18 = v2;
      }
    }
    v16 = 0LL;
    memset_0(v10, 0, sizeof(v10));
    v11[1] = 0LL;
    v4 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x28uLL);
    *(_QWORD *)v4 = v4;
    *(_QWORD *)(v4 + 8) = v4;
    *(_QWORD *)(v4 + 16) = v4;
    *(_WORD *)(v4 + 24) = 257;
    v12[1] = 0LL;
    v11[0] = v4;
    v5 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x28uLL);
    *(_QWORD *)v5 = v5;
    *(_QWORD *)(v5 + 8) = v5;
    *(_QWORD *)(v5 + 16) = v5;
    *(_WORD *)(v5 + 24) = 257;
    v15 = 0LL;
    v12[0] = v5;
    v14 = std::_Tree_node_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int__void___::_Buyheadnode_std::allocator_std::_Tree_node_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int__void_______();
    anonymous_namespace_::FrameSequenceInfo::operator_(&unk_1803FA6F0, v10);
    std::_Tree_std::_Tmap_traits__anonymous_namespace_::AnimationId_unsigned_int_A0x155a666c::AnimationId::LessThan_std::allocator_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int____0___::__Tree_std::_Tmap_traits__anonymous_namespace_::AnimationId_unsigned_int_A0x155a666c::AnimationId::LessThan_std::allocator_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int____0___(v13);
    std::_Tree<std::_Tset_traits<unsigned __int64,std::less<unsigned __int64>,std::allocator<unsigned __int64>,0>>::~_Tree<std::_Tset_traits<unsigned __int64,std::less<unsigned __int64>,std::allocator<unsigned __int64>,0>>(v12);
    std::_Tree<std::_Tset_traits<unsigned __int64,std::less<unsigned __int64>,std::allocator<unsigned __int64>,0>>::~_Tree<std::_Tset_traits<unsigned __int64,std::less<unsigned __int64>,std::allocator<unsigned __int64>,0>>(v11);
  }
}
