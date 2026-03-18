/*
 * XREFs of ?SetReferencePropertyHelper@CResourceMarshaler@DirectComposition@@KAJPEAVCApplicationChannel@2@PEAPEAV?$CWeakReference@VCResourceMarshaler@DirectComposition@@@2@PEAV12@W4Optionality@12@W4MIL_RESOURCE_TYPE@@PEAKKW4MarshalingFlagSemantic@12@PEA_N@Z @ 0x140016F08
 * Callers:
 *     ?SetReferenceProperty@CVisualReferenceControllerMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x140015EE0 (-SetReferenceProperty@CVisualReferenceControllerMarshaler@DirectComposition@@UEAAJPEAVCApplicati.c)
 *     ?SetReferenceProperty@CInteractionTrackerMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x1401273F0 (-SetReferenceProperty@CInteractionTrackerMarshaler@DirectComposition@@UEAAJPEAVCApplicationChann.c)
 * Callees:
 *     ?ReleaseWeakReference@CApplicationChannel@DirectComposition@@QEAAXPEAVCWeakReferenceBase@2@@Z @ 0x140015E64 (-ReleaseWeakReference@CApplicationChannel@DirectComposition@@QEAAXPEAVCWeakReferenceBase@2@@Z.c)
 *     DirectComposition::Memory::AllocateAndClear @ 0x140017890 (DirectComposition--Memory--AllocateAndClear.c)
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 */

__int64 __fastcall DirectComposition::CResourceMarshaler::SetReferencePropertyHelper(
        struct _RTL_GENERIC_TABLE *this,
        struct DirectComposition::CWeakReferenceBase **a2,
        __int64 a3,
        __int64 a4,
        int a5,
        int *a6,
        int a7,
        int a8,
        _BYTE *a9)
{
  unsigned int v9; // edi
  __int64 i; // rax
  struct DirectComposition::CWeakReferenceBase *v15; // rdx
  __int64 v16; // rax
  struct DirectComposition::CWeakReferenceBase *v17; // rbx
  _QWORD *v18; // rax
  int v19; // ecx
  __int64 v20; // rax
  int v21; // edx
  int v22; // eax
  int v23; // ecx
  int v24; // eax
  _QWORD Buffer[2]; // [rsp+20h] [rbp-38h] BYREF
  _QWORD v26[5]; // [rsp+30h] [rbp-28h] BYREF

  v9 = 0;
  if ( !a3 )
  {
LABEL_8:
    v15 = *a2;
    if ( v15 )
      v16 = *((_QWORD *)v15 + 2);
    else
      v16 = 0LL;
    if ( a3 == v16 )
    {
      if ( v15 && !v16 )
      {
        DirectComposition::CApplicationChannel::ReleaseWeakReference(this, v15);
        *a2 = 0LL;
        v23 = *a6;
        if ( a8 == 1 )
          v24 = v23 & ~a7;
        else
          v24 = a7 | v23;
        *a6 = v24;
        *a9 = 1;
      }
      return v9;
    }
    v17 = 0LL;
    if ( !a3 )
    {
LABEL_23:
      if ( *a2 )
        DirectComposition::CApplicationChannel::ReleaseWeakReference(this, *a2);
      *a2 = v17;
      v21 = *a6;
      if ( a8 == 1 )
        v22 = v21 & ~a7;
      else
        v22 = a7 | v21;
      *a6 = v22;
      *a9 = 1;
      return v9;
    }
    if ( (*(_DWORD *)(a3 + 16) & 4) != 0 )
    {
      Buffer[0] = a3;
      Buffer[1] = 0LL;
      v18 = RtlLookupElementGenericTable(this + 4, Buffer);
      if ( v18 )
        v17 = (struct DirectComposition::CWeakReferenceBase *)v18[1];
      if ( v17 )
      {
        v19 = *((_DWORD *)v17 + 2);
        *((_DWORD *)v17 + 2) = v19 + 1;
        if ( v19 == -1 )
        {
          *((_DWORD *)v17 + 2) = -1;
          return (unsigned int)-1071775485;
        }
        goto LABEL_22;
      }
    }
    v20 = DirectComposition::Memory::AllocateAndClear(0x18uLL, 0x72774344u);
    v17 = (struct DirectComposition::CWeakReferenceBase *)v20;
    if ( v20 )
    {
      *(_QWORD *)(v20 + 16) = a3;
      *(_DWORD *)(v20 + 8) = 1;
      v26[0] = a3;
      v26[1] = v20;
      if ( RtlInsertElementGenericTable(this + 4, v26, 0x10u, 0LL) )
      {
        *(_DWORD *)(a3 + 16) |= 4u;
LABEL_22:
        if ( (v9 & 0x80000000) != 0 )
          return v9;
        goto LABEL_23;
      }
      v9 = -1073741801;
      GreDeleteFastMutex(v17);
    }
    else
    {
      v9 = -1073741801;
    }
    v17 = 0LL;
    goto LABEL_22;
  }
  for ( i = *(unsigned int *)(a3 + 36); (unsigned int)i < 0xC2; LODWORD(i) = dword_140270F80[i] )
  {
    if ( (_DWORD)i == a5 )
      goto LABEL_8;
  }
  return (unsigned int)-1073741811;
}
