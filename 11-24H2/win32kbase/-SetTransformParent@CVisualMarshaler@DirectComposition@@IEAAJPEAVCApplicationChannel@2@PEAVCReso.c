/*
 * XREFs of ?SetTransformParent@CVisualMarshaler@DirectComposition@@IEAAJPEAVCApplicationChannel@2@PEAVCResourceMarshaler@2@_NPEA_N@Z @ 0x140072938
 * Callers:
 *     ?SetReferenceProperty@CVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x1400725A0 (-SetReferenceProperty@CVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCR.c)
 * Callees:
 *     ?SetResourceReferenceProperty@CApplicationChannel@DirectComposition@@QEAAJPEAVCResourceMarshaler@2@I0@Z @ 0x140072ACC (-SetResourceReferenceProperty@CApplicationChannel@DirectComposition@@QEAAJPEAVCResourceMarshaler.c)
 *     ?CreateInternalPrivateResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1400768D8 (-CreateInternalPrivateResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMars.c)
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAA_KPEAVCResourceMarshaler@2@@Z @ 0x1400803E0 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAA_KPEAVCResourceMarshaler@2@@Z.c)
 *     ?AddRef@CResourceMarshaler@DirectComposition@@QEAA_KXZ @ 0x1400807E8 (-AddRef@CResourceMarshaler@DirectComposition@@QEAA_KXZ.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DirectComposition::CVisualMarshaler::SetTransformParent(
        DirectComposition::CVisualMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        struct DirectComposition::CResourceMarshaler *a3,
        char a4,
        bool *a5)
{
  bool *v5; // r13
  struct DirectComposition::CResourceMarshaler *v7; // rcx
  unsigned int v8; // esi
  __int64 i; // rax
  struct DirectComposition::CResourceMarshaler *v13; // rax
  char v14; // r12
  struct DirectComposition::CResourceMarshaler *v15; // rdi
  int v16; // eax
  int v17; // eax
  struct DirectComposition::CResourceMarshaler *v19; // [rsp+50h] [rbp+8h] BYREF

  v5 = a5;
  v7 = (struct DirectComposition::CResourceMarshaler *)*((_QWORD *)this + 18);
  v8 = 0;
  if ( a3 != v7 )
  {
    if ( !a3 )
    {
LABEL_17:
      DirectComposition::CApplicationChannel::ReleaseResource(
        a2,
        *((struct DirectComposition::CResourceMarshaler **)this + 18));
      *((_QWORD *)this + 18) = a3;
LABEL_18:
      *((_DWORD *)this + 4) |= 0x200u;
      *v5 = 1;
      goto LABEL_14;
    }
    for ( i = *((unsigned int *)a3 + 9); (unsigned int)i < 0xC2; LODWORD(i) = dword_140270F80[i] )
    {
      if ( (_DWORD)i == 188 )
      {
        DirectComposition::CResourceMarshaler::AddRef(a3);
        goto LABEL_17;
      }
    }
    if ( v7 )
    {
      v13 = (struct DirectComposition::CResourceMarshaler *)(*(__int64 (__fastcall **)(struct DirectComposition::CResourceMarshaler *))(*(_QWORD *)v7 + 200LL))(v7);
      v14 = 0;
      v19 = v13;
      v15 = v13;
      if ( !v13 )
        goto LABEL_11;
      if ( *((_QWORD *)v13 + 3) == 1LL )
      {
LABEL_12:
        v17 = DirectComposition::CApplicationChannel::SetResourceReferenceProperty(a2, v15, 0, a3);
        v8 = v17;
        if ( !v14 )
        {
          if ( v17 < 0 )
            return v8;
          goto LABEL_14;
        }
        if ( v17 >= 0 )
        {
          DirectComposition::CApplicationChannel::ReleaseResource(
            a2,
            *((struct DirectComposition::CResourceMarshaler **)this + 18));
          *((_QWORD *)this + 18) = v15;
          goto LABEL_18;
        }
LABEL_24:
        DirectComposition::CApplicationChannel::ReleaseResource(a2, v15);
        return v8;
      }
    }
    v19 = 0LL;
LABEL_11:
    v14 = 1;
    v16 = DirectComposition::CApplicationChannel::CreateInternalPrivateResource(a2, 0xBDu, &v19);
    v15 = v19;
    v8 = v16;
    if ( v16 < 0 )
      goto LABEL_24;
    goto LABEL_12;
  }
LABEL_14:
  if ( *((_BYTE *)this + 308) >> 7 != a4 )
  {
    if ( *((_QWORD *)this + 18) )
    {
      *((_DWORD *)this + 4) |= 0x200u;
      *v5 = 1;
    }
    *((_BYTE *)this + 308) = (a4 << 7) | *((_BYTE *)this + 308) & 0x7F;
  }
  return v8;
}
