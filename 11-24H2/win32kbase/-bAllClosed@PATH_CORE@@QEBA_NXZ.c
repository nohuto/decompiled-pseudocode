/*
 * XREFs of ?bAllClosed@PATH_CORE@@QEBA_NXZ @ 0x1401C0B40
 * Callers:
 *     ?bAllClosed@EPATHOBJ@@QEAA_NXZ @ 0x1401C0A50 (-bAllClosed@EPATHOBJ@@QEAA_NXZ.c)
 * Callees:
 *     <none>
 */

char __fastcall PATH_CORE::bAllClosed(PATH_CORE *this)
{
  __int64 **i; // rdx

  for ( i = (__int64 **)*((_QWORD *)this + 1); i; i = (__int64 **)*i )
  {
    if ( ((_DWORD)i[2] & 0xA) == 2 )
      return 0;
  }
  return 1;
}
