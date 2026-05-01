/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_88c52b909d46191f2a7b9cf853665f36__&_::_scalar_deleting_destructor_ @ 0x180642C00
 * Callers:
 *     <none>
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800C43CC (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180168F3C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 */

void *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_88c52b909d46191f2a7b9cf853665f36____::_scalar_deleting_destructor_(
        void *a1,
        char a2)
{
  _QWORD **v2; // r8
  _QWORD *v5; // rsi
  _QWORD *v6; // rbx

  v2 = (_QWORD **)*((_QWORD *)a1 + 3);
  *v2[1] = 0LL;
  v5 = *v2;
  if ( *v2 )
  {
    do
    {
      v6 = (_QWORD *)*v5;
      std::wstring::_Tidy_deallocate((__int64)(v5 + 2));
      std::_Deallocate<16,0>(v5, 0x30uLL);
      v5 = v6;
    }
    while ( v6 );
  }
  std::_Deallocate<16,0>(*((void **)a1 + 3), 0x30uLL);
  *((_DWORD *)a1 + 3) = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
