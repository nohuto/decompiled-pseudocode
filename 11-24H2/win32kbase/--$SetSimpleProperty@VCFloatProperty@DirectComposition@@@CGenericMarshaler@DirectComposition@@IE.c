/*
 * XREFs of ??$SetSimpleProperty@VCFloatProperty@DirectComposition@@@CGenericMarshaler@DirectComposition@@IEAAJIMPEA_N@Z @ 0x140224724
 * Callers:
 *     ?SetFloatProperty@CGenericMarshaler@DirectComposition@@UEAAJIMPEA_N@Z @ 0x1402250C0 (-SetFloatProperty@CGenericMarshaler@DirectComposition@@UEAAJIMPEA_N@Z.c)
 * Callees:
 *     DirectComposition::Memory::AllocateAndClear @ 0x140017890 (DirectComposition--Memory--AllocateAndClear.c)
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 *     ?push_back@CGenericPropertyList@DirectComposition@@QEAA_NPEAVCGenericProperty@2@@Z @ 0x1402253C0 (-push_back@CGenericPropertyList@DirectComposition@@QEAA_NPEAVCGenericProperty@2@@Z.c)
 *     ?FindProperty@CGenericMarshaler@DirectComposition@@IEAA?AVCPropertyIterator@2@I@Z @ 0x140239C9C (-FindProperty@CGenericMarshaler@DirectComposition@@IEAA-AVCPropertyIterator@2@I@Z.c)
 */

__int64 __fastcall DirectComposition::CGenericMarshaler::SetSimpleProperty<DirectComposition::CFloatProperty>(
        __int64 a1,
        unsigned int a2,
        float a3,
        _BYTE *a4)
{
  char *v7; // rax
  char *v8; // rbx
  __int64 result; // rax
  char **v10; // [rsp+50h] [rbp+8h] BYREF

  DirectComposition::CGenericMarshaler::FindProperty(a1, &v10, a2);
  if ( v10 == (char **)(*(_QWORD *)(a1 + 56) + 8LL * *(_QWORD *)(a1 + 64)) )
  {
    v7 = (char *)DirectComposition::Memory::AllocateAndClear(0xCuLL, 0x70674344u, 1);
    v8 = v7;
    if ( !v7 )
      return 3221225495LL;
    *(_DWORD *)v7 = a2;
    *((_WORD *)v7 + 2) = 2;
    if ( !DirectComposition::CGenericPropertyList::push_back(
            (DirectComposition::CGenericPropertyList *)(a1 + 56),
            (struct DirectComposition::CGenericProperty *)v7) )
    {
      GreDeleteFastMutex(v8);
      return 3221225495LL;
    }
  }
  else
  {
    v8 = *v10;
    if ( (*v10)[4] != 2 )
      v8 = 0LL;
    if ( !v8 )
      return 3221225485LL;
  }
  *((float *)v8 + 2) = a3;
  result = 0LL;
  v8[5] = 1;
  *a4 = 1;
  return result;
}
