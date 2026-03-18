/*
 * XREFs of ??_G?$__base@$$A6AXXZ@__function@wistd@@UEAAPEAXI@Z @ 0x18025E7B0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18025C2F4 (--3@YAXPEAX_K@Z.c)
 */

_QWORD *__fastcall wistd::__function::__base<void (void)>::`scalar deleting destructor'(_QWORD *a1, char a2)
{
  *a1 = &wistd::__function::__base<void (void)>::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
