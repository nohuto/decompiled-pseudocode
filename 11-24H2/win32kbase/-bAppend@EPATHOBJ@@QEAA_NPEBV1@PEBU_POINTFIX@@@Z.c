/*
 * XREFs of ?bAppend@EPATHOBJ@@QEAA_NPEBV1@PEBU_POINTFIX@@@Z @ 0x14006AA00
 * Callers:
 *     <none>
 * Callees:
 *     ?bAppend@PATH_CORE@@QEAA_NAEBV1@PEBU_POINTFIX@@@Z @ 0x140069A50 (-bAppend@PATH_CORE@@QEAA_NAEBV1@PEBU_POINTFIX@@@Z.c)
 */

bool __fastcall EPATHOBJ::bAppend(EPATHOBJ *this, const struct EPATHOBJ *a2, const struct _POINTFIX *a3)
{
  unsigned int v5; // edx
  bool result; // al

  if ( !PATH_CORE::bAppend(
          (PATH_CORE *)(*((_QWORD *)this + 1) + 24LL),
          (const struct PATH_CORE *)(*((_QWORD *)a2 + 1) + 24LL),
          a3) )
    return 0;
  v5 = *(_DWORD *)this & 0xFFFFFFFD;
  *(_DWORD *)this = v5;
  if ( (*(_DWORD *)a2 & 1) != 0 )
    *(_DWORD *)this = v5 | 1;
  result = 1;
  *((_DWORD *)this + 1) += *((_DWORD *)a2 + 1);
  return result;
}
