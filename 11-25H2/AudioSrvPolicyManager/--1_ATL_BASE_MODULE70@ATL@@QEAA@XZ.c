/*
 * XREFs of ??1_ATL_BASE_MODULE70@ATL@@QEAA@XZ @ 0x18001F7AC
 * Callers:
 *     ATL::_dynamic_atexit_destructor_for___AtlBaseModule__ @ 0x18004E1D0 (ATL--_dynamic_atexit_destructor_for___AtlBaseModule__.c)
 * Callees:
 *     free @ 0x18002118C (free.c)
 */

void __fastcall ATL::_ATL_BASE_MODULE70::~_ATL_BASE_MODULE70(ATL::_ATL_BASE_MODULE70 *this)
{
  void *v2; // rcx

  v2 = (void *)*((_QWORD *)this + 10);
  if ( v2 )
  {
    free(v2);
    *((_QWORD *)this + 10) = 0LL;
  }
  *((_DWORD *)this + 22) = 0;
  *((_DWORD *)this + 23) = 0;
}
