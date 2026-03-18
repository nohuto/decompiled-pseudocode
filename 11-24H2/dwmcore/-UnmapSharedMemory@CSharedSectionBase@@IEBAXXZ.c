/*
 * XREFs of ?UnmapSharedMemory@CSharedSectionBase@@IEBAXXZ @ 0x180155848
 * Callers:
 *     ?OnChanged@CSharedSectionBase@@MEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1801557E0 (-OnChanged@CSharedSectionBase@@MEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ??1CSharedSectionBase@@MEAA@XZ @ 0x180155B18 (--1CSharedSectionBase@@MEAA@XZ.c)
 * Callees:
 *     ?IsCompositionThread@CComposition@@QEBA_NXZ @ 0x180154F30 (-IsCompositionThread@CComposition@@QEBA_NXZ.c)
 *     ?UnmapSharedSectionView@CComposition@@QEAAXPEAX@Z @ 0x1801558A4 (-UnmapSharedSectionView@CComposition@@QEAAXPEAX@Z.c)
 */

void __fastcall CSharedSectionBase::UnmapSharedMemory(CSharedSectionBase *this)
{
  void *v2; // rcx
  CComposition *v3; // rcx

  v2 = (void *)*((_QWORD *)this + 12);
  if ( v2 )
  {
    CloseHandle(v2);
    if ( *((_QWORD *)this + 11) )
    {
      if ( CComposition::IsCompositionThread(v3) )
        CComposition::UnmapSharedSectionView(*((CComposition **)this + 3), *((void **)this + 11));
      else
        UnmapViewOfFile(*((LPCVOID *)this + 11));
    }
  }
}
