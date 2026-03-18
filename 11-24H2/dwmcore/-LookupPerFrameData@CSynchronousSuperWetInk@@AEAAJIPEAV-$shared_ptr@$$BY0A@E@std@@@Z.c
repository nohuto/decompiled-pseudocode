/*
 * XREFs of ?LookupPerFrameData@CSynchronousSuperWetInk@@AEAAJIPEAV?$shared_ptr@$$BY0A@E@std@@@Z @ 0x1801A2620
 * Callers:
 *     ?CreateScribble@CSynchronousSuperWetInk@@UEAAJPEAVCD3DDevice@@AEBUDCompWetInkStrokeRenderState@@PEAPEAVCComputeScribble@@@Z @ 0x1801A1820 (-CreateScribble@CSynchronousSuperWetInk@@UEAAJPEAVCD3DDevice@@AEBUDCompWetInkStrokeRenderState@@.c)
 * Callees:
 *     McTemplateU0t_EventWriteTransfer @ 0x180043F80 (McTemplateU0t_EventWriteTransfer.c)
 *     ?PullNewPerFrameData@CSynchronousSuperWetInk@@AEAAXIPEA_N@Z @ 0x1801A2CAC (-PullNewPerFrameData@CSynchronousSuperWetInk@@AEAAXIPEA_N@Z.c)
 *     ?find@?$_Tree@V?$_Tmap_traits@_KV?$shared_ptr@$$BY0A@E@std@@U?$less@_K@2@V?$allocator@U?$pair@$$CB_KV?$shared_ptr@$$BY0A@E@std@@@std@@@2@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CB_KV?$shared_ptr@$$BY0A@E@std@@@std@@@std@@@std@@@2@AEB_K@Z @ 0x1801A32C8 (-find@-$_Tree@V-$_Tmap_traits@_KV-$shared_ptr@$$BY0A@E@std@@U-$less@_K@2@V-$allocator@U-$pair@$$.c)
 *     ??4?$shared_ptr@VCRegion@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1801A3420 (--4-$shared_ptr@VCRegion@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x1801A41EC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     McTemplateU0xx_EventWriteTransfer @ 0x1801A6D58 (McTemplateU0xx_EventWriteTransfer.c)
 *     ?CleanupOldPerFrameData@CSynchronousSuperWetInk@@AEAAXXZ @ 0x18022C518 (-CleanupOldPerFrameData@CSynchronousSuperWetInk@@AEAAXXZ.c)
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
  __int64 **v10; // rcx
  __int64 *v11; // rbx
  void *v13; // rdx
  __int64 *v14; // rax
  __int64 *v15; // rcx
  __int64 *i; // rdx
  __int64 *j; // rax
  unsigned __int64 v18; // [rsp+70h] [rbp+8h] BYREF
  __int64 *v19; // [rsp+80h] [rbp+18h] BYREF

  v4 = a2;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x100000) != 0 )
    McTemplateU0xx_EventWriteTransfer(this, &EVTDESC_SYNCHRONOUSSUPERWETINK_LOOKUPPERFRAMEDATA, this, a2);
  *a3 = 0LL;
  v6 = (std::_Ref_count_base *)a3[1];
  a3[1] = 0LL;
  if ( v6 )
    std::_Ref_count_base::_Decref(v6);
  v7 = (_QWORD *)*((_QWORD *)this + 31);
  if ( v7 && *v7 == v4 )
  {
    std::shared_ptr<CRegion>::operator=(a3, (char *)this + 248);
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x100000) != 0 )
      McTemplateU0xx_EventWriteTransfer(v8, &EVTDESC_SYNCHRONOUSSUPERWETINK_LOOKUPPERFRAMEDATA_FILLED_REUSE, this, v4);
    goto LABEL_48;
  }
  v9 = (__int64 **)((char *)this + 224);
  v18 = v4;
  std::_Tree<std::_Tmap_traits<unsigned __int64,std::shared_ptr<unsigned char [0]>,std::less<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const,std::shared_ptr<unsigned char [0]>>>,0>>::find(
    (char *)this + 224,
    &v19,
    &v18);
  v11 = v19;
  if ( v19 == *((__int64 **)this + 28) )
  {
    LOBYTE(v18) = 0;
    CSynchronousSuperWetInk::PullNewPerFrameData(this, v4, (bool *)&v18);
    if ( (_BYTE)v18 )
    {
      v18 = v4;
      v11 = *(__int64 **)std::_Tree<std::_Tmap_traits<unsigned __int64,std::shared_ptr<unsigned char [0]>,std::less<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const,std::shared_ptr<unsigned char [0]>>>,0>>::find(
                           (char *)this + 224,
                           &v19,
                           &v18);
    }
  }
  if ( *((_QWORD *)this + 29) )
  {
    v14 = *v9;
    if ( v11 != *v9 )
    {
      std::shared_ptr<CRegion>::operator=((char *)this + 248, v11 + 5);
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x100000) != 0 )
      {
        v13 = &EVTDESC_SYNCHRONOUSSUPERWETINK_LOOKUPPERFRAMEDATA_FILLED_FOUND_ON_NEW;
        goto LABEL_46;
      }
      goto LABEL_47;
    }
    v15 = (__int64 *)v14[1];
    while ( !*((_BYTE *)v15 + 25) )
    {
      if ( v4 >= v15[4] )
      {
        v15 = (__int64 *)v15[2];
      }
      else
      {
        v14 = v15;
        v15 = (__int64 *)*v15;
      }
    }
    v10 = (__int64 **)*((_QWORD *)this + 28);
    if ( v14 != *v10 )
    {
      if ( *((_BYTE *)v14 + 25) )
      {
        i = (__int64 *)v14[2];
      }
      else
      {
        i = (__int64 *)*v14;
        if ( *(_BYTE *)(*v14 + 25) )
        {
          for ( i = (__int64 *)v14[1]; !*((_BYTE *)i + 25) && v14 == (__int64 *)*i; i = (__int64 *)i[1] )
            v14 = i;
          if ( *((_BYTE *)v14 + 25) )
            i = v14;
        }
        else
        {
          for ( j = (__int64 *)i[2]; !*((_BYTE *)j + 25); j = (__int64 *)j[2] )
            i = j;
        }
      }
      std::shared_ptr<CRegion>::operator=((char *)this + 248, i + 5);
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x100000) == 0 )
        goto LABEL_47;
      v13 = &EVTDESC_SYNCHRONOUSSUPERWETINK_LOOKUPPERFRAMEDATA_FILLED_NON_EXACT;
      goto LABEL_46;
    }
    if ( !*((_QWORD *)this + 31) )
    {
      std::shared_ptr<CRegion>::operator=((char *)this + 248, *v10 + 5);
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x100000) != 0 )
      {
        v13 = &EVTDESC_SYNCHRONOUSSUPERWETINK_LOOKUPPERFRAMEDATA_FILLED_USE_FIRST;
        goto LABEL_46;
      }
LABEL_47:
      std::shared_ptr<CRegion>::operator=(a3, (char *)this + 248);
LABEL_48:
      CSynchronousSuperWetInk::CleanupOldPerFrameData(this);
      return 0LL;
    }
LABEL_17:
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x100000) != 0 )
    {
      v13 = &EVTDESC_SYNCHRONOUSSUPERWETINK_LOOKUPPERFRAMEDATA_FILLED_NOT_FOUND_REUSE;
LABEL_46:
      McTemplateU0xx_EventWriteTransfer(v10, v13, this, v4);
      goto LABEL_47;
    }
    goto LABEL_47;
  }
  if ( *((_QWORD *)this + 31) )
    goto LABEL_17;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x100000) != 0 )
    McTemplateU0t_EventWriteTransfer(
      &Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_COMPUTESCRIBBLE_INCOMPATIBLE,
      7LL);
  return 2147942487LL;
}
