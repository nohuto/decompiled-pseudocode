/*
 * XREFs of sub_1400287E4 @ 0x1400287E4
 * Callers:
 *     sub_14002D368 @ 0x14002D368 (sub_14002D368.c)
 * Callees:
 *     sub_140004388 @ 0x140004388 (sub_140004388.c)
 *     sub_1400050F8 @ 0x1400050F8 (sub_1400050F8.c)
 *     sub_14000C22C @ 0x14000C22C (sub_14000C22C.c)
 *     _guard_dispatch_icall @ 0x1400102D0 (_guard_dispatch_icall.c)
 *     sub_1400289AC @ 0x1400289AC (sub_1400289AC.c)
 */

__int64 __fastcall sub_1400287E4(__int64 a1, unsigned int a2, _QWORD *a3)
{
  _DWORD *v6; // rbx
  __int64 Pool2; // rax
  int v8; // edi
  __int64 v9; // rax
  __int64 v11; // [rsp+28h] [rbp-20h]
  __int64 v12; // [rsp+30h] [rbp-18h]

  v6 = (_DWORD *)sub_1400289AC(a2);
  if ( v6 )
    goto LABEL_14;
  Pool2 = ExAllocatePool2(64LL, 184LL, 1919119952LL);
  v6 = (_DWORD *)Pool2;
  if ( Pool2 )
  {
    *(_DWORD *)(Pool2 + 48) = a2;
    v9 = (*(__int64 (__fastcall **)(__int64, __int64))(qword_140019120 + 1632))(qword_140019128, a1);
    v8 = (*(__int64 (__fastcall **)(__int64, __int64, void *, _DWORD *, __int16, __int16, _QWORD))(qword_140019120 + 1048))(
           qword_140019128,
           v9,
           &unk_140013F00,
           v6 + 4,
           128,
           1,
           0LL);
    if ( v8 < 0 )
    {
LABEL_9:
      ExFreePoolWithTag(v6, 0x72637250u);
      return (unsigned int)v8;
    }
    if ( (unsigned int)(v6[21] - 1) <= 0x26 )
    {
      if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
      {
        LODWORD(v12) = 40;
        LODWORD(v11) = v6[21];
        sub_140004388((__int64)off_140018050->DeviceExtension, 3u, 1u, 0xAu, (__int64)&unk_140014608, v11, v12);
      }
      v8 = -1073741823;
      goto LABEL_9;
    }
    v8 = (*(__int64 (__fastcall **)(__int64, _QWORD, _DWORD *))(qword_140019120 + 2520))(qword_140019128, 0LL, v6 + 38);
    if ( v8 < 0 )
    {
      if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
      {
        LODWORD(v11) = v8;
        sub_1400050F8((__int64)off_140018050->DeviceExtension, 2u, 4u, 0xBu, (__int64)&unk_140014608, v11);
      }
      goto LABEL_9;
    }
    sub_14000C22C(v6);
LABEL_14:
    v8 = 0;
    *a3 = v6;
    return (unsigned int)v8;
  }
  return (unsigned int)-1073741670;
}
