/*
 * XREFs of sub_14002CA34 @ 0x14002CA34
 * Callers:
 *     sub_1400495E4 @ 0x1400495E4 (sub_1400495E4.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400102D0 (_guard_dispatch_icall.c)
 */

void __fastcall sub_14002CA34(__int64 a1)
{
  PDEVICE_OBJECT v1; // rbx

  v1 = off_140018050;
  if ( off_140018050 != (PDEVICE_OBJECT)&off_140018050 )
  {
    if ( dword_140018EF0 == 4 )
    {
      while ( v1 )
      {
        if ( v1->Vpb )
        {
          ((void (*)(void))qword_140018F00)();
          v1->Vpb = 0LL;
        }
        v1 = v1->NextDevice;
      }
    }
    else if ( dword_140018EF0 == 2 )
    {
      IoWMIRegistrationControl(off_140018050, 0x80000002);
    }
    WppAutoLogStop(off_140018050, a1);
    off_140018050 = (PDEVICE_OBJECT)&off_140018050;
    off_140018058 = &off_140018058;
  }
}
