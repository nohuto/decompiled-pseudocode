/*
 * XREFs of ??1?$unique_ptr@MU?$function_deleter@P6AXPEAX@Z$1?_freea@@YAX0@Z@wil@@@wistd@@QEAA@XZ @ 0x180063C18
 * Callers:
 *     _CAudioStream::GetPeakValue_::_1_::dtor$1 @ 0x18016B19A (_CAudioStream--GetPeakValue_--_1_--dtor$1.c)
 *     __lambda_9219152d4e141db21e4330029f5108f8_::operator()_::_1_::dtor$0 @ 0x18016DC68 (__lambda_9219152d4e141db21e4330029f5108f8_--operator()_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall wistd::unique_ptr<float,wil::function_deleter<void (*)(void *),&void _freea(void *)>>::~unique_ptr<float,wil::function_deleter<void (*)(void *),&void _freea(void *)>>(
        __int64 *a1)
{
  __int64 v1; // rax

  v1 = *a1;
  *a1 = 0LL;
  if ( v1 )
  {
    if ( *(_DWORD *)(v1 - 16) == 56797 )
      free((void *)(v1 - 16));
  }
}
