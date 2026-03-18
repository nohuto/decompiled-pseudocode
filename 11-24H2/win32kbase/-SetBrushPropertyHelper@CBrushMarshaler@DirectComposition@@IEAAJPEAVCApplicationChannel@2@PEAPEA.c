/*
 * XREFs of ?SetBrushPropertyHelper@CBrushMarshaler@DirectComposition@@IEAAJPEAVCApplicationChannel@2@PEAPEAV12@PEAVCResourceMarshaler@2@W4MIL_RESOURCE_TYPE@@KPEA_N@Z @ 0x14008188C
 * Callers:
 *     ?SetReferenceProperty@CEffectBrushMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x140071C70 (-SetReferenceProperty@CEffectBrushMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IP.c)
 *     ?SetReferenceProperty@CMaskBrushMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x1400E3D80 (-SetReferenceProperty@CMaskBrushMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEA.c)
 *     ?SetReferenceProperty@CNineGridBrushMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x14010E7F0 (-SetReferenceProperty@CNineGridBrushMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@.c)
 * Callees:
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAA_KPEAVCResourceMarshaler@2@@Z @ 0x1400803E0 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAA_KPEAVCResourceMarshaler@2@@Z.c)
 *     ?AddRef@CResourceMarshaler@DirectComposition@@QEAA_KXZ @ 0x1400807E8 (-AddRef@CResourceMarshaler@DirectComposition@@QEAA_KXZ.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DirectComposition::CBrushMarshaler::SetBrushPropertyHelper(
        unsigned int *a1,
        DirectComposition::CApplicationChannel *a2,
        struct DirectComposition::CResourceMarshaler **a3,
        unsigned int *a4,
        __int64 a5,
        int a6,
        _BYTE *a7)
{
  unsigned int v7; // ebx
  __int64 i; // rax
  __int64 v13; // rax
  unsigned int *v14; // rdi
  char v15; // bp
  DirectComposition::CResourceMarshaler *v16; // rsi
  __int64 v17; // rdx
  unsigned int **v18; // rax
  int v19; // ecx
  __int64 v20; // [rsp+68h] [rbp+20h] BYREF

  v7 = 0;
  if ( a4 )
  {
    for ( i = a4[9]; (unsigned int)i < 0xC2; LODWORD(i) = dword_140270F80[i] )
    {
      if ( (_DWORD)i == 17 )
        goto LABEL_8;
    }
    return (unsigned int)-1073741811;
  }
LABEL_8:
  if ( a4 == (unsigned int *)*a3 )
    return v7;
  if ( !a4 )
  {
    v16 = 0LL;
    goto LABEL_19;
  }
  v13 = (*(__int64 (__fastcall **)(unsigned int *))(*(_QWORD *)a4 + 112LL))(a4);
  v14 = (unsigned int *)v13;
  if ( v13 )
  {
    *(_QWORD *)(v13 + 56) = 0LL;
    v15 = 0;
    *(_DWORD *)(v13 + 64) = 0;
    v16 = (DirectComposition::CResourceMarshaler *)v13;
    while ( 1 )
    {
      while ( 1 )
      {
        v17 = v14[16];
        if ( v14 == a1 )
          v15 = 1;
        v20 = 0LL;
        if ( v15
          || !(*(unsigned __int8 (__fastcall **)(unsigned int *, __int64, __int64 *))(*(_QWORD *)v14 + 328LL))(
                v14,
                v17,
                &v20) )
        {
          break;
        }
        ++v14[16];
        if ( v20 )
        {
          if ( *(_QWORD *)(v20 + 56) )
          {
            v15 = 1;
          }
          else
          {
            *(_QWORD *)(v20 + 56) = v14;
            *(_DWORD *)(v20 + 64) = 0;
            v14 = (unsigned int *)v20;
          }
        }
      }
      v14[16] = 0;
      v18 = (unsigned int **)(v14 + 14);
      if ( v14 == (unsigned int *)v16 )
        break;
      v14 = *v18;
      *v18 = 0LL;
    }
    *v18 = 0LL;
    if ( !v15 )
    {
      DirectComposition::CResourceMarshaler::AddRef(v16);
LABEL_19:
      DirectComposition::CApplicationChannel::ReleaseResource(a2, *a3);
      v19 = a6;
      *a3 = v16;
      a1[4] |= v19;
      *a7 = 1;
      return v7;
    }
  }
  return (unsigned int)-1073741811;
}
