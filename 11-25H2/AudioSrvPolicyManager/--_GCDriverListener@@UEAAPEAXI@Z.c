/*
 * XREFs of ??_GCDriverListener@@UEAAPEAXI@Z @ 0x180043F70
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800205CC (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

CDriverListener *__fastcall CDriverListener::`scalar deleting destructor'(CDriverListener *this, char a2)
{
  int v4; // eax

  *(_QWORD *)this = &CDriverListener::`vftable';
  v4 = 0;
  if ( *((_QWORD *)this + 63) )
  {
    v4 = RtlUnsubscribeWnfStateChangeNotification() | 0x10000000;
    if ( v4 >= 0 )
      *((_QWORD *)this + 63) = 0LL;
  }
  if ( *((_QWORD *)this + 64) && v4 >= 0 && (int)RtlUnsubscribeWnfStateChangeNotification() >= 0 )
    *((_QWORD *)this + 64) = 0LL;
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x208);
  return this;
}
