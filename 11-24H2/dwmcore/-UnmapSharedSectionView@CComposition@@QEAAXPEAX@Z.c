/*
 * XREFs of ?UnmapSharedSectionView@CComposition@@QEAAXPEAX@Z @ 0x1801558A4
 * Callers:
 *     ?UnmapSharedMemory@CSharedSectionBase@@IEBAXXZ @ 0x180155848 (-UnmapSharedMemory@CSharedSectionBase@@IEBAXXZ.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18001C330 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

void __fastcall CComposition::UnmapSharedSectionView(CComposition *this, void *a2)
{
  unsigned int v2; // eax
  unsigned int v3; // r8d
  int v4; // r9d
  unsigned int v5; // r10d
  LPCVOID lpBaseAddress; // [rsp+48h] [rbp+10h] BYREF

  lpBaseAddress = a2;
  v2 = *((_DWORD *)this + 1500);
  v3 = v2 + 1;
  if ( v2 + 1 < v2 )
  {
    v4 = -2147024362;
    v5 = 181;
LABEL_6:
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v4, v5, 0LL);
    UnmapViewOfFile(lpBaseAddress);
    return;
  }
  if ( v3 <= *((_DWORD *)this + 1499) )
  {
    *(_QWORD *)(*((_QWORD *)this + 747) + 8LL * v2) = a2;
    *((_DWORD *)this + 1500) = v3;
    return;
  }
  v4 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 5976, 8, 1, &lpBaseAddress);
  if ( v4 < 0 )
  {
    v5 = 192;
    goto LABEL_6;
  }
}
