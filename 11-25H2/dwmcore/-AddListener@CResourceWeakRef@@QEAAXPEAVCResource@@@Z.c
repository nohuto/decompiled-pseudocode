/*
 * XREFs of ?AddListener@CResourceWeakRef@@QEAAXPEAVCResource@@@Z @ 0x18013B104
 * Callers:
 *     ?RegisterNotifiers@CVisualReferenceController@@QEAAJPEAVCResourceTable@@@Z @ 0x18013B00C (-RegisterNotifiers@CVisualReferenceController@@QEAAJPEAVCResourceTable@@@Z.c)
 * Callees:
 *     ??$_Emplace_reallocate@AEBQEAVBamoPrincipalImpl@BamoImpl@Microsoft@@@?$vector@PEAVBamoPrincipalImpl@BamoImpl@Microsoft@@V?$allocator@PEAVBamoPrincipalImpl@BamoImpl@Microsoft@@@std@@@std@@AEAAPEAPEAVBamoPrincipalImpl@BamoImpl@Microsoft@@QEAPEAV234@AEBQEAV234@@Z @ 0x18013C654 (--$_Emplace_reallocate@AEBQEAVBamoPrincipalImpl@BamoImpl@Microsoft@@@-$vector@PEAVBamoPrincipalI.c)
 *     __std_find_trivial_8 @ 0x18025BDA0 (__std_find_trivial_8.c)
 */

void __fastcall CResourceWeakRef::AddListener(CResourceWeakRef *this, struct CResource *a2)
{
  _QWORD *v4; // rdx
  struct CResource *v5; // [rsp+38h] [rbp+10h] BYREF

  v5 = a2;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
  if ( _std_find_trivial_8(*((_QWORD *)this + 9), *((_QWORD *)this + 10), a2) == *((_QWORD *)this + 10) )
  {
    v4 = (_QWORD *)*((_QWORD *)this + 10);
    if ( v4 == *((_QWORD **)this + 11) )
    {
      std::vector<Microsoft::BamoImpl::BamoPrincipalImpl *>::_Emplace_reallocate<Microsoft::BamoImpl::BamoPrincipalImpl * const &>(
        (char *)this + 72,
        v4,
        &v5);
    }
    else
    {
      *v4 = a2;
      *((_QWORD *)this + 10) += 8LL;
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
}
