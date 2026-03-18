/*
 * XREFs of ??$SetSimpleProperty@VCHandleProperty@DirectComposition@@@CGenericMarshaler@DirectComposition@@IEAAJIPEAXPEA_N@Z @ 0x1402247F0
 * Callers:
 *     ?SetHandleProperty@CGenericMarshaler@DirectComposition@@UEAAJIPEAXPEA_N@Z @ 0x1402250E0 (-SetHandleProperty@CGenericMarshaler@DirectComposition@@UEAAJIPEAXPEA_N@Z.c)
 * Callees:
 *     DirectComposition::Memory::AllocateAndClear @ 0x140017890 (DirectComposition--Memory--AllocateAndClear.c)
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 *     ?push_back@CGenericPropertyList@DirectComposition@@QEAA_NPEAVCGenericProperty@2@@Z @ 0x1402253C0 (-push_back@CGenericPropertyList@DirectComposition@@QEAA_NPEAVCGenericProperty@2@@Z.c)
 *     ?FindProperty@CGenericMarshaler@DirectComposition@@IEAA?AVCPropertyIterator@2@I@Z @ 0x140239C9C (-FindProperty@CGenericMarshaler@DirectComposition@@IEAA-AVCPropertyIterator@2@I@Z.c)
 */

__int64 __fastcall DirectComposition::CGenericMarshaler::SetSimpleProperty<DirectComposition::CHandleProperty>(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        _BYTE *a4)
{
  char *v8; // rax
  char *v9; // rbx
  __int64 result; // rax
  char **v11; // [rsp+40h] [rbp+8h] BYREF

  DirectComposition::CGenericMarshaler::FindProperty(a1, &v11, a2);
  if ( v11 == (char **)(*(_QWORD *)(a1 + 56) + 8LL * *(_QWORD *)(a1 + 64)) )
  {
    v8 = (char *)DirectComposition::Memory::AllocateAndClear(0x10uLL, 0x70674344u, 1);
    v9 = v8;
    if ( !v8 )
      return 3221225495LL;
    *(_DWORD *)v8 = a2;
    *((_WORD *)v8 + 2) = 3;
    if ( !DirectComposition::CGenericPropertyList::push_back(
            (DirectComposition::CGenericPropertyList *)(a1 + 56),
            (struct DirectComposition::CGenericProperty *)v8) )
    {
      GreDeleteFastMutex(v9);
      return 3221225495LL;
    }
  }
  else
  {
    v9 = *v11;
    if ( (*v11)[4] != 3 )
      v9 = 0LL;
    if ( !v9 )
      return 3221225485LL;
  }
  *((_QWORD *)v9 + 1) = a3;
  result = 0LL;
  v9[5] = 1;
  *a4 = 1;
  return result;
}
