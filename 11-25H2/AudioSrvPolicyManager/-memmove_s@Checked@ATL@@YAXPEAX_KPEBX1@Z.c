/*
 * XREFs of ?memmove_s@Checked@ATL@@YAXPEAX_KPEBX1@Z @ 0x18001DA28
 * Callers:
 *     ?RemoveAt@?$CSimpleMap@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAIV?$CSimpleMapEqualHelper@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAI@ATL@@@ATL@@QEAAHH@Z @ 0x180036680 (-RemoveAt@-$CSimpleMap@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@PEAIV-$CSim.c)
 *     ?ReadEndpointDataFromKey@ApplicationSpecificEndpointInfo@@CAJPEBGPEAW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@PEAW4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@@Z @ 0x1800483DC (-ReadEndpointDataFromKey@ApplicationSpecificEndpointInfo@@CAJPEBGPEAW4__MIDL___MIDL_itf_mmdevice.c)
 *     ?RemoveAt@?$CAtlArray@V?$CAutoPtr@VCAccessAce@CDacl@ATL@@@ATL@@V?$CAutoPtrElementTraits@VCAccessAce@CDacl@ATL@@@2@@ATL@@QEAAX_K0@Z @ 0x180049A44 (-RemoveAt@-$CAtlArray@V-$CAutoPtr@VCAccessAce@CDacl@ATL@@@ATL@@V-$CAutoPtrElementTraits@VCAccess.c)
 * Callees:
 *     _invalid_parameter_noinfo @ 0x180021136 (_invalid_parameter_noinfo.c)
 *     memmove_0 @ 0x18004B3D8 (memmove_0.c)
 */

void __fastcall ATL::Checked::memmove_s(ATL::Checked *this, void *a2, const void *a3, void *a4)
{
  int v4; // ebx
  int *v5; // rax

  v4 = 0;
  if ( a4 )
  {
    if ( this && a3 )
    {
      if ( a2 >= a4 )
      {
        memmove_0(this, a3, (size_t)a4);
        goto LABEL_9;
      }
      v5 = (int *)_o__errno(this, a2, a3);
      v4 = 34;
    }
    else
    {
      v5 = (int *)_o__errno(this, a2, a3);
      v4 = 22;
    }
    *v5 = v4;
    invalid_parameter_noinfo();
  }
LABEL_9:
  ATL::AtlCrtErrorCheck(v4);
}
