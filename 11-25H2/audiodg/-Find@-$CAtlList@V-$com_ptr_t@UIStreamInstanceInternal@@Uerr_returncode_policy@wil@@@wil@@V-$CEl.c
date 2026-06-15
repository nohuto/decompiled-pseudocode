/*
 * XREFs of ?Find@?$CAtlList@V?$com_ptr_t@UIStreamInstanceInternal@@Uerr_returncode_policy@wil@@@wil@@V?$CElementTraits@V?$com_ptr_t@UIStreamInstanceInternal@@Uerr_returncode_policy@wil@@@wil@@@ATL@@@ATL@@QEBAPEAU__POSITION@@AEBV?$com_ptr_t@UIStreamInstanceInternal@@Uerr_returncode_policy@wil@@@wil@@PEAU3@@Z @ 0x1400454A4
 * Callers:
 *     ?DestroyExclusiveModeStream@CStreamGroup@@UEAAJ_K@Z @ 0x14006E220 (-DestroyExclusiveModeStream@CStreamGroup@@UEAAJ_K@Z.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall ATL::CAtlList<wil::com_ptr_t<IStreamInstanceInternal,wil::err_returncode_policy>,ATL::CElementTraits<wil::com_ptr_t<IStreamInstanceInternal,wil::err_returncode_policy>>>::Find(
        _QWORD *a1,
        _QWORD *a2)
{
  _QWORD *i; // r8

  for ( i = (_QWORD *)*a1; i; i = (_QWORD *)*i )
  {
    if ( i[2] == *a2 )
      return i;
  }
  return 0LL;
}
