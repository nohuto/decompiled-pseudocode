/*
 * XREFs of _anonymous_namespace_::SealCurrentFrameSequence @ 0x1801CD638
 * Callers:
 *     ?FrameEnded@CTelemetryFrames@@SAX_N0_K@Z @ 0x1800312A0 (-FrameEnded@CTelemetryFrames@@SAX_N0_K@Z.c)
 *     ?ProcessComposition@CComposition@@QEAAXXZ @ 0x1800E6E20 (-ProcessComposition@CComposition@@QEAAXXZ.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18006BBE0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     _anonymous_namespace_::FrameSequenceInfo::operator_ @ 0x1801CD894 (_anonymous_namespace_--FrameSequenceInfo--operator_.c)
 *     ??1?$_Tree@V?$_Tset_traits@_KU?$less@_K@std@@V?$allocator@_K@2@$0A@@std@@@std@@QEAA@XZ @ 0x1801CDD7C (--1-$_Tree@V-$_Tset_traits@_KU-$less@_K@std@@V-$allocator@_K@2@$0A@@std@@@std@@QEAA@XZ.c)
 *     std::_Tree_node_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int__void___::_Buyheadnode_std::allocator_std::_Tree_node_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int__void_______ @ 0x1801CDE6C (std--_Tree_node_std--pair__anonymous_namespace_--AnimationId_const__unsigned_int__void___--_Buyh.c)
 *     std::_Tree_std::_Tmap_traits__anonymous_namespace_::AnimationId_unsigned_int_A0x155a666c::AnimationId::LessThan_std::allocator_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int____0___::__Tree_std::_Tmap_traits__anonymous_namespace_::AnimationId_unsigned_int_A0x155a666c::AnimationId::LessThan_std::allocator_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int____0___ @ 0x1801CDE98 (std--_Tree_std--_Tmap_traits__anonymous_namespace_--AnimationId_unsigned_int_A0x155a666c--Animat.c)
 *     McTemplateU0xq_EventWriteTransfer @ 0x1801EEEDC (McTemplateU0xq_EventWriteTransfer.c)
 *     memset_0 @ 0x18025D108 (memset_0.c)
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

  if ( dword_1804067D8 )
  {
    memset_0(v8, 0, 0x58uLL);
    v0 = g_qpcFrequency;
    v1 = *((_QWORD *)&xmmword_180406920 + 1);
    v2 = xmmword_180406920;
    xmmword_180406EB0 = v8[0];
    xmmword_180406EC0 = v8[1];
    xmmword_180406ED0 = v8[2];
    xmmword_180406EE0 = v8[3];
    xmmword_180406EF0 = v8[4];
    qword_180406F00 = v9;
    dword_1804067F0 = 1000
                    * ((*((_QWORD *)&xmmword_180406920 + 1) - (_QWORD)xmmword_180406920)
                     / g_qpcFrequency.QuadPart)
                    + (unsigned __int64)(1000
                                       * ((*((_QWORD *)&xmmword_180406920 + 1) - (_QWORD)xmmword_180406920)
                                        % g_qpcFrequency.QuadPart))
                    / g_qpcFrequency.QuadPart;
    v3 = xmmword_180406E88 - *(_QWORD *)&GUID_NULL.Data1;
    if ( (_QWORD)xmmword_180406E88 == *(_QWORD *)&GUID_NULL.Data1 )
      v3 = *((_QWORD *)&xmmword_180406E88 + 1) - *(_QWORD *)GUID_NULL.Data4;
    if ( v3 )
    {
      dword_180406F20 = 0;
      qword_180406C58 = 0LL;
    }
    else
    {
      v6 = dword_1804067E0;
      if ( (unsigned int)dword_1804067E0 > 0x37
        && (dword_1804067D4 & 0x100000) != 0
        && (Microsoft_Windows_Dwm_CoreEnableBits & 0x800000) != 0 )
      {
        ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))McTemplateU0xq_EventWriteTransfer)(
          (LARGE_INTEGER)g_qpcFrequency.QuadPart,
          &EVTDESC_DIAGTRACK_TRIGGER,
          16525050LL,
          0LL);
        v1 = *((_QWORD *)&xmmword_180406920 + 1);
        v2 = xmmword_180406920;
        v6 = dword_1804067E0;
        v0 = g_qpcFrequency;
      }
      v7 = v6 + dword_180406F20;
      dword_180406F20 += v6;
      if ( qword_180406C58 )
      {
        if ( v7 >= 0x30570
          && (unsigned __int64)(v1 - qword_180406C58) / v0.QuadPart
           + (unsigned __int64)(v1 - qword_180406C58) % v0.QuadPart / v0.QuadPart < 0xE10
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
        qword_180406C58 = v2;
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
    anonymous_namespace_::FrameSequenceInfo::operator_(&unk_180406750, v10);
    std::_Tree_std::_Tmap_traits__anonymous_namespace_::AnimationId_unsigned_int_A0x155a666c::AnimationId::LessThan_std::allocator_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int____0___::__Tree_std::_Tmap_traits__anonymous_namespace_::AnimationId_unsigned_int_A0x155a666c::AnimationId::LessThan_std::allocator_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int____0___(v13);
    std::_Tree<std::_Tset_traits<unsigned __int64,std::less<unsigned __int64>,std::allocator<unsigned __int64>,0>>::~_Tree<std::_Tset_traits<unsigned __int64,std::less<unsigned __int64>,std::allocator<unsigned __int64>,0>>(v12);
    std::_Tree<std::_Tset_traits<unsigned __int64,std::less<unsigned __int64>,std::allocator<unsigned __int64>,0>>::~_Tree<std::_Tset_traits<unsigned __int64,std::less<unsigned __int64>,std::allocator<unsigned __int64>,0>>(v11);
  }
}
