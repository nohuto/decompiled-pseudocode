/*
 * XREFs of ?LookupPerFrameData@CSynchronousSuperWetInk@@AEAAJIPEAV?$shared_ptr@$$BY0A@E@std@@@Z @ 0x1801A9990
 * Callers:
 *     ?CreateScribble@CSynchronousSuperWetInk@@UEAAJPEAVCD3DDevice@@AEBUDCompWetInkStrokeRenderState@@PEAPEAVCComputeScribble@@@Z @ 0x1801A9C70 (-CreateScribble@CSynchronousSuperWetInk@@UEAAJPEAVCD3DDevice@@AEBUDCompWetInkStrokeRenderState@@.c)
 * Callees:
 *     McTemplateU0t_EventWriteTransfer @ 0x18006DBC8 (McTemplateU0t_EventWriteTransfer.c)
 *     McTemplateU0xx_EventWriteTransfer @ 0x1801009B4 (McTemplateU0xx_EventWriteTransfer.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18010363C (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??4?$shared_ptr@VCRegion@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1801A8740 (--4-$shared_ptr@VCRegion@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?CleanupOldPerFrameData@CSynchronousSuperWetInk@@AEAAXXZ @ 0x1801A8784 (-CleanupOldPerFrameData@CSynchronousSuperWetInk@@AEAAXXZ.c)
 *     ?PullNewPerFrameData@CSynchronousSuperWetInk@@AEAAXIPEA_N@Z @ 0x1801A921C (-PullNewPerFrameData@CSynchronousSuperWetInk@@AEAAXIPEA_N@Z.c)
 *     ?find@?$_Tree@V?$_Tmap_traits@_KV?$shared_ptr@$$BY0A@E@std@@U?$less@_K@2@V?$allocator@U?$pair@$$CB_KV?$shared_ptr@$$BY0A@E@std@@@std@@@2@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CB_KV?$shared_ptr@$$BY0A@E@std@@@std@@@std@@@std@@@2@AEB_K@Z @ 0x1801A9838 (-find@-$_Tree@V-$_Tmap_traits@_KV-$shared_ptr@$$BY0A@E@std@@U-$less@_K@2@V-$allocator@U-$pair@$$.c)
 */

__int64 __fastcall CSynchronousSuperWetInk::LookupPerFrameData(
        CSynchronousSuperWetInk *this,
        unsigned int a2,
        _QWORD *a3)
{
  unsigned __int64 v4; // rbp
  std::_Ref_count_base *v6; // rcx
  _QWORD *v7; // rax
  __int64 v8; // rcx
  __int64 **v9; // r14
  __int64 v10; // rcx
  __int64 *v11; // rbx
  __int64 *v13; // rax
  __int64 *v14; // rcx
  __int64 *i; // rdx
  __int64 *j; // rax
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rcx
  unsigned __int64 v20; // [rsp+70h] [rbp+8h] BYREF
  __int64 *v21; // [rsp+80h] [rbp+18h] BYREF

  v4 = a2;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x100000) != 0 )
    McTemplateU0xx_EventWriteTransfer((__int64)this, &EVTDESC_SYNCHRONOUSSUPERWETINK_LOOKUPPERFRAMEDATA, this, a2);
  *a3 = 0LL;
  v6 = (std::_Ref_count_base *)a3[1];
  a3[1] = 0LL;
  if ( v6 )
    std::_Ref_count_base::_Decref(v6);
  v7 = (_QWORD *)*((_QWORD *)this + 31);
  if ( v7 && *v7 == v4 )
  {
    std::shared_ptr<CRegion>::operator=(a3, (_QWORD *)this + 31);
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x100000) != 0 )
      McTemplateU0xx_EventWriteTransfer(v8, &EVTDESC_SYNCHRONOUSSUPERWETINK_LOOKUPPERFRAMEDATA_FILLED_REUSE, this, v4);
    goto LABEL_47;
  }
  v9 = (__int64 **)((char *)this + 224);
  v20 = v4;
  std::_Tree<std::_Tmap_traits<unsigned __int64,std::shared_ptr<unsigned char [0]>,std::less<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const,std::shared_ptr<unsigned char [0]>>>,0>>::find(
    (__int64 *)this + 28,
    (__int64)&v21,
    (__int64)&v20);
  v11 = v21;
  if ( v21 == *((__int64 **)this + 28) )
  {
    LOBYTE(v20) = 0;
    CSynchronousSuperWetInk::PullNewPerFrameData(this, v4, (bool *)&v20);
    if ( (_BYTE)v20 )
    {
      v20 = v4;
      v11 = (__int64 *)*std::_Tree<std::_Tmap_traits<unsigned __int64,std::shared_ptr<unsigned char [0]>,std::less<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const,std::shared_ptr<unsigned char [0]>>>,0>>::find(
                          (__int64 *)this + 28,
                          (__int64)&v21,
                          (__int64)&v20);
    }
  }
  if ( *((_QWORD *)this + 29) )
  {
    v13 = *v9;
    if ( v11 != *v9 )
    {
      std::shared_ptr<CRegion>::operator=((_QWORD *)this + 31, v11 + 5);
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x100000) != 0 )
        McTemplateU0xx_EventWriteTransfer(
          v19,
          &EVTDESC_SYNCHRONOUSSUPERWETINK_LOOKUPPERFRAMEDATA_FILLED_FOUND_ON_NEW,
          this,
          v4);
      goto LABEL_46;
    }
    v14 = (__int64 *)v13[1];
    while ( !*((_BYTE *)v14 + 25) )
    {
      if ( v4 >= v14[4] )
      {
        v14 = (__int64 *)v14[2];
      }
      else
      {
        v13 = v14;
        v14 = (__int64 *)*v14;
      }
    }
    v10 = *((_QWORD *)this + 28);
    if ( v13 != *(__int64 **)v10 )
    {
      if ( *((_BYTE *)v13 + 25) )
      {
        i = (__int64 *)v13[2];
      }
      else
      {
        i = (__int64 *)*v13;
        if ( *(_BYTE *)(*v13 + 25) )
        {
          for ( i = (__int64 *)v13[1]; !*((_BYTE *)i + 25) && v13 == (__int64 *)*i; i = (__int64 *)i[1] )
            v13 = i;
          if ( *((_BYTE *)v13 + 25) )
            i = v13;
        }
        else
        {
          for ( j = (__int64 *)i[2]; !*((_BYTE *)j + 25); j = (__int64 *)j[2] )
            i = j;
        }
      }
      std::shared_ptr<CRegion>::operator=((_QWORD *)this + 31, i + 5);
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x100000) != 0 )
        McTemplateU0xx_EventWriteTransfer(
          v17,
          &EVTDESC_SYNCHRONOUSSUPERWETINK_LOOKUPPERFRAMEDATA_FILLED_NON_EXACT,
          this,
          v4);
      goto LABEL_46;
    }
    if ( !*((_QWORD *)this + 31) )
    {
      std::shared_ptr<CRegion>::operator=((_QWORD *)this + 31, (_QWORD *)(*(_QWORD *)v10 + 40LL));
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x100000) != 0 )
        McTemplateU0xx_EventWriteTransfer(
          v18,
          &EVTDESC_SYNCHRONOUSSUPERWETINK_LOOKUPPERFRAMEDATA_FILLED_USE_FIRST,
          this,
          v4);
      goto LABEL_46;
    }
LABEL_17:
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x100000) != 0 )
      McTemplateU0xx_EventWriteTransfer(
        v10,
        &EVTDESC_SYNCHRONOUSSUPERWETINK_LOOKUPPERFRAMEDATA_FILLED_NOT_FOUND_REUSE,
        this,
        v4);
LABEL_46:
    std::shared_ptr<CRegion>::operator=(a3, (_QWORD *)this + 31);
LABEL_47:
    CSynchronousSuperWetInk::CleanupOldPerFrameData(this);
    return 0LL;
  }
  if ( *((_QWORD *)this + 31) )
    goto LABEL_17;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x100000) != 0 )
    McTemplateU0t_EventWriteTransfer(
      (__int64)&Microsoft_Windows_Dwm_Core_Provider_Context,
      (__int64)&EVTDESC_COMPUTESCRIBBLE_INCOMPATIBLE,
      7LL);
  return 2147942487LL;
}
