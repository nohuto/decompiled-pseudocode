/*
 * XREFs of ??_E?$__func@V_lambda_31b3df4ed62273d0b76844db81061272_@@$$A6AJPEAG_KPEA_K@Z@__function@wistd@@UEAAPEAXI@Z @ 0x18044EE50
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1802D2320 (--3@YAXPEAX@Z.c)
 */

_QWORD *__fastcall wistd::__function::__func<_lambda_31b3df4ed62273d0b76844db81061272_,long (unsigned short *,unsigned __int64,unsigned __int64 *)>::`vector deleting destructor'(
        _QWORD *a1,
        char a2)
{
  *a1 = &wistd::__function::__base<void (enum Windows::Internal::Shell::Holographic::UserDisplayContext const &)>::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
