/*
 * XREFs of ?_IsEmpty@CProcessAsPid@@AEBA_NXZ @ 0x14028F238
 * Callers:
 *     ?IsValid@CProcessAsPid@@QEBA_NXZ @ 0x14021ACC4 (-IsValid@CProcessAsPid@@QEBA_NXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CProcessAsPid::_IsEmpty(CProcessAsPid *this)
{
  return *(_QWORD *)this == 0LL;
}
