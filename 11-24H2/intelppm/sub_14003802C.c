/*
 * XREFs of sub_14003802C @ 0x14003802C
 * Callers:
 *     sub_140037C28 @ 0x140037C28 (sub_140037C28.c)
 * Callees:
 *     sub_1400050F8 @ 0x1400050F8 (sub_1400050F8.c)
 *     _guard_dispatch_icall @ 0x1400102D0 (_guard_dispatch_icall.c)
 *     sub_140039A78 @ 0x140039A78 (sub_140039A78.c)
 *     sub_140044858 @ 0x140044858 (sub_140044858.c)
 */

__int64 __fastcall sub_14003802C(__int64 a1)
{
  int v1; // edi
  int v2; // eax
  _QWORD *v3; // rbx
  PVOID v4; // rcx
  PVOID P; // [rsp+48h] [rbp+10h] BYREF

  P = 0LL;
  if ( dword_1400197EC )
  {
    v2 = sub_140039A78(a1, &P);
    v3 = P;
    v1 = v2;
    if ( v2 >= 0 )
    {
      v4 = P;
      *(_DWORD *)P = dword_1400197EC;
      v3[4] = sub_140003E70;
      v3[2] = sub_14000E750;
      v3[3] = sub_14000E6D0;
      v1 = ((__int64 (__fastcall *)(PVOID))qword_1400194A0)(v4);
      if ( v1 >= 0 )
      {
        qword_140019800 = (__int64)v3;
        v3 = 0LL;
        P = 0LL;
        byte_1400197F0 = 1;
        sub_140044858(0LL);
        v1 = 0;
      }
      else if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
      {
        sub_1400050F8((__int64)off_140018050->DeviceExtension, 2u, 3u, 0x14u, (__int64)&unk_140014AD0, v1);
      }
    }
    if ( v3 )
      ExFreePoolWithTag(v3, 0x72637250u);
  }
  else
  {
    return 0;
  }
  return (unsigned int)v1;
}
