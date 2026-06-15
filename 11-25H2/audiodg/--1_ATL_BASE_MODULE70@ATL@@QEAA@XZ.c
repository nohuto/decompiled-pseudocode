/*
 * XREFs of ??1_ATL_BASE_MODULE70@ATL@@QEAA@XZ @ 0x140057B4C
 * Callers:
 *     ??1CAtlBaseModule@ATL@@QEAA@XZ @ 0x1400582CC (--1CAtlBaseModule@ATL@@QEAA@XZ.c)
 * Callees:
 *     free @ 0x14005A15C (free.c)
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
