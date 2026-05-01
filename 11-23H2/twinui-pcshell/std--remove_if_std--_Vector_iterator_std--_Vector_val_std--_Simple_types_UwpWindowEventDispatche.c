/*
 * XREFs of std::remove_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_UwpWindowEventDispatcher::PendingActivationResumeData_______lambda_f48cc153ad6d2c1ec159261e04c305aa___ @ 0x1801AC1C0
 * Callers:
 *     ?AddPendingActivationResumeWithLock@UwpWindowEventDispatcher@@AEAAXPEAUIUwpWindowWrapperInternal@@UWindowId@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x18009F53C (-AddPendingActivationResumeWithLock@UwpWindowEventDispatcher@@AEAAXPEAUIUwpWindowWrapperInternal.c)
 * Callees:
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x1800DF498 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ??4PendingActivationResumeData@UwpWindowEventDispatcher@@QEAAAEAU01@$$QEAU01@@Z @ 0x18017EC40 (--4PendingActivationResumeData@UwpWindowEventDispatcher@@QEAAAEAU01@$$QEAU01@@Z.c)
 */

struct IUnknown ***__fastcall std::remove_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_UwpWindowEventDispatcher::PendingActivationResumeData_______lambda_f48cc153ad6d2c1ec159261e04c305aa___(
        struct IUnknown ***a1,
        struct IUnknown **a2,
        struct IUnknown **a3,
        struct IUnknown **a4)
{
  struct IUnknown **i; // rsi
  struct IUnknown ***result; // rax
  __int64 *j; // r14

  for ( i = a2; i != a3; i += 4 )
  {
    if ( (unsigned int)SHIsSameObject(*a4, *i) )
      break;
  }
  if ( i != a3 )
  {
    for ( j = (__int64 *)(i + 4); j != (__int64 *)a3; j += 4 )
    {
      if ( !(unsigned int)SHIsSameObject(*a4, (struct IUnknown *)*j) )
      {
        UwpWindowEventDispatcher::PendingActivationResumeData::operator=((__int64 *)i, j);
        i += 4;
      }
    }
  }
  result = a1;
  *a1 = i;
  return result;
}
