/*
 * XREFs of ?SetReferenceProperty@CGenericMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x140239E20
 * Callers:
 *     <none>
 * Callees:
 *     DirectComposition::Memory::AllocateAndClear @ 0x140017890 (DirectComposition--Memory--AllocateAndClear.c)
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 *     ?AddRef@CResourceMarshaler@DirectComposition@@QEAA_KXZ @ 0x1400807E8 (-AddRef@CResourceMarshaler@DirectComposition@@QEAA_KXZ.c)
 *     ?push_back@CGenericPropertyList@DirectComposition@@QEAA_NPEAVCGenericProperty@2@@Z @ 0x1402253C0 (-push_back@CGenericPropertyList@DirectComposition@@QEAA_NPEAVCGenericProperty@2@@Z.c)
 *     ?FindProperty@CGenericMarshaler@DirectComposition@@IEAA?AVCPropertyIterator@2@I@Z @ 0x140239C9C (-FindProperty@CGenericMarshaler@DirectComposition@@IEAA-AVCPropertyIterator@2@I@Z.c)
 *     ?FreeValue@CReferenceProperty@DirectComposition@@QEAAXPEAVCApplicationChannel@2@@Z @ 0x140239CCC (-FreeValue@CReferenceProperty@DirectComposition@@QEAAXPEAVCApplicationChannel@2@@Z.c)
 */

__int64 __fastcall DirectComposition::CGenericMarshaler::SetReferenceProperty(
        DirectComposition::CGenericMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        struct DirectComposition::CResourceMarshaler *a4,
        bool *a5)
{
  char *v9; // rax
  __int64 v10; // r8
  char v11; // r9
  char *v12; // rbx
  bool *v14; // rax
  char **v15; // [rsp+40h] [rbp+8h] BYREF

  DirectComposition::CGenericMarshaler::FindProperty((__int64)this, &v15, a3);
  if ( v15 == (char **)(*((_QWORD *)this + 7) + 8LL * *((_QWORD *)this + 8)) )
  {
    v9 = (char *)DirectComposition::Memory::AllocateAndClear(0x10uLL, 0x70674344u, 1);
    v12 = v9;
    if ( !v9 )
      return 3221225495LL;
    *(_DWORD *)v9 = a3;
    *((_WORD *)v9 + 2) = 4;
    *((_QWORD *)v9 + 1) = 0LL;
    if ( !DirectComposition::CGenericPropertyList::push_back(
            (DirectComposition::CGenericMarshaler *)((char *)this + 56),
            (struct DirectComposition::CGenericProperty *)v9,
            v10,
            v11) )
    {
      GreDeleteFastMutex(v12);
      return 3221225495LL;
    }
  }
  else
  {
    v12 = *v15;
    if ( (*v15)[4] != 4 )
      v12 = 0LL;
    if ( !v12 )
      return 3221225485LL;
  }
  if ( a4 )
    DirectComposition::CResourceMarshaler::AddRef(a4);
  DirectComposition::CReferenceProperty::FreeValue((DirectComposition::CReferenceProperty *)v12, a2);
  v14 = a5;
  *((_QWORD *)v12 + 1) = a4;
  v12[5] = 1;
  *v14 = 1;
  return 0LL;
}
