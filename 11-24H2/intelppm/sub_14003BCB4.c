/*
 * XREFs of sub_14003BCB4 @ 0x14003BCB4
 * Callers:
 *     sub_14003B4B4 @ 0x14003B4B4 (sub_14003B4B4.c)
 * Callees:
 *     sub_1400050F8 @ 0x1400050F8 (sub_1400050F8.c)
 *     sub_140010380 @ 0x140010380 (sub_140010380.c)
 */

__int64 __fastcall sub_14003BCB4(__int64 a1, unsigned int a2, char *a3)
{
  __int64 v3; // rsi
  char *Pool2; // rax
  char *v7; // rdi
  int v8; // ebx

  v3 = a2;
  Pool2 = (char *)ExAllocatePool2(64LL, 8 * a2 + 4, 1919119952LL);
  v7 = Pool2;
  if ( Pool2 )
  {
    *(_DWORD *)Pool2 = v3;
    v8 = PoFxProcessorNotification(*(_QWORD *)(a1 + 1120), 9LL, Pool2);
    if ( v8 >= 0 )
    {
      sub_140010380(a3, v7 + 4, 8 * v3);
    }
    else if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
    {
      sub_1400050F8((__int64)off_140018050->DeviceExtension, 2u, 2u, 0x1Fu, (__int64)&unk_140014CB8, v8);
    }
  }
  else
  {
    v8 = -1073741670;
  }
  ExFreePoolWithTag(v7, 0x72637250u);
  return (unsigned int)v8;
}
