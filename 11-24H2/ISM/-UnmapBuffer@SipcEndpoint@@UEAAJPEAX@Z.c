/*
 * XREFs of ?UnmapBuffer@SipcEndpoint@@UEAAJPEAX@Z @ 0x180110890
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall SipcEndpoint::UnmapBuffer(SipcEndpoint *this, void *a2)
{
  SipcPort *v2; // rcx

  v2 = (SipcPort *)*((_QWORD *)this + 2);
  if ( v2 )
    return SipcPort::FreeSection(v2, a2);
  else
    return 2147549183LL;
}
