/*
 * XREFs of ?SetBufferProperty@CGenericMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x140239D00
 * Callers:
 *     <none>
 * Callees:
 *     DirectComposition::Memory::AllocateAndClear @ 0x140017890 (DirectComposition--Memory--AllocateAndClear.c)
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 *     ?push_back@CGenericPropertyList@DirectComposition@@QEAA_NPEAVCGenericProperty@2@@Z @ 0x1402253C0 (-push_back@CGenericPropertyList@DirectComposition@@QEAA_NPEAVCGenericProperty@2@@Z.c)
 *     ?FindProperty@CGenericMarshaler@DirectComposition@@IEAA?AVCPropertyIterator@2@I@Z @ 0x140239C9C (-FindProperty@CGenericMarshaler@DirectComposition@@IEAA-AVCPropertyIterator@2@I@Z.c)
 *     memmove @ 0x14023FA40 (memmove.c)
 */

__int64 __fastcall DirectComposition::CGenericMarshaler::SetBufferProperty(
        DirectComposition::CGenericMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        const void *a4,
        size_t Size,
        bool *a6)
{
  char **v9; // rbx
  size_t v10; // rsi
  char *v11; // rdi
  char *v13; // rax
  __int64 v14; // r8
  char v15; // r9
  bool *v16; // rax
  char **v17; // [rsp+50h] [rbp+8h] BYREF

  DirectComposition::CGenericMarshaler::FindProperty((__int64)this, &v17, a3);
  v9 = v17;
  v10 = Size;
  if ( v17 != (char **)(*((_QWORD *)this + 7) + 8LL * *((_QWORD *)this + 8)) )
  {
    v11 = *v17;
    if ( (*v17)[4] != 5 )
      v11 = 0LL;
    if ( !v11 )
      return 3221225485LL;
    if ( *((_QWORD *)v11 + 1) >= Size )
      goto LABEL_12;
  }
  if ( Size + 24 < Size )
    return 3221225506LL;
  v13 = (char *)DirectComposition::Memory::AllocateAndClear(Size + 24, 0x70674344u, 1);
  v11 = v13;
  if ( v13 )
  {
    *(_DWORD *)v13 = a3;
    *((_WORD *)v13 + 2) = 5;
    *((_QWORD *)v13 + 1) = v10;
    *((_QWORD *)v13 + 2) = 0LL;
    if ( v9 != (char **)(*((_QWORD *)this + 7) + 8LL * *((_QWORD *)this + 8)) )
    {
      GreDeleteFastMutex(*v9);
      *v9 = v11;
LABEL_12:
      memmove(v11 + 24, a4, v10);
      v16 = a6;
      *((_QWORD *)v11 + 2) = v10;
      v11[5] = 1;
      *v16 = 1;
      return 0LL;
    }
    if ( DirectComposition::CGenericPropertyList::push_back(
           (DirectComposition::CGenericMarshaler *)((char *)this + 56),
           (struct DirectComposition::CGenericProperty *)v13,
           v14,
           v15) )
    {
      goto LABEL_12;
    }
    GreDeleteFastMutex(v11);
  }
  return 3221225495LL;
}
