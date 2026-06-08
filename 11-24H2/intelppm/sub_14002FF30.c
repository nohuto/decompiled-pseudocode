/*
 * XREFs of sub_14002FF30 @ 0x14002FF30
 * Callers:
 *     sub_14002DC40 @ 0x14002DC40 (sub_14002DC40.c)
 *     sub_14002E0DC @ 0x14002E0DC (sub_14002E0DC.c)
 * Callees:
 *     sub_140003834 @ 0x140003834 (sub_140003834.c)
 *     sub_1400050F8 @ 0x1400050F8 (sub_1400050F8.c)
 */

__int64 __fastcall sub_14002FF30(unsigned __int8 *a1)
{
  unsigned int v1; // ebx
  int v2; // edx

  v1 = -1073741637;
  if ( !*((_QWORD *)a1 + 2) || *a1 == a1[12] )
  {
    v2 = *a1;
    if ( v2 && (v2 == 1 || v2 == 127) )
    {
      return 0;
    }
    else if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
    {
      sub_1400050F8((__int64)off_140018050->DeviceExtension, 2u, 1u, 0xBu, (__int64)&unk_1400145E8, v2);
    }
  }
  else if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
  {
    sub_140003834((__int64)off_140018050->DeviceExtension, 2u, 1u, 0xAu, (__int64)&unk_1400145E8, *a1, a1[12]);
  }
  return v1;
}
