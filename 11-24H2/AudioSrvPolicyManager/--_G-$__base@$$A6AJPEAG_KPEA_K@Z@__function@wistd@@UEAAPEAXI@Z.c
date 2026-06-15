/*
 * XREFs of ??_G?$__base@$$A6AJPEAG_KPEA_K@Z@__function@wistd@@UEAAPEAXI@Z @ 0x180047920
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180010AC0 (--3@YAXPEAX@Z.c)
 */

_QWORD *__fastcall wistd::__function::__base<long (unsigned short *,unsigned __int64,unsigned __int64 *)>::`scalar deleting destructor'(
        _QWORD *a1,
        char a2)
{
  *a1 = &Windows::Internal::AssignedAccess::AssignedAccessConfigStoreBase::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
