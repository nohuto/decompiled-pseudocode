/*
 * XREFs of ?cTotalPts@PATH_CORE@@QEBAKXZ @ 0x140120D80
 * Callers:
 *     ?cTotalPts@EPATHOBJ@@QEAAKXZ @ 0x140120D60 (-cTotalPts@EPATHOBJ@@QEAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PATH_CORE::cTotalPts(PATH_CORE *this)
{
  __int64 *v1; // rdx
  __int64 result; // rax

  v1 = (__int64 *)*((_QWORD *)this + 1);
  result = 0LL;
  while ( v1 )
  {
    result = (unsigned int)(*((_DWORD *)v1 + 5) + result);
    v1 = (__int64 *)*v1;
  }
  return result;
}
