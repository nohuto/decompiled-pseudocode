/*
 * XREFs of sub_140035700 @ 0x140035700
 * Callers:
 *     <none>
 * Callees:
 *     sub_1400050F8 @ 0x1400050F8 (sub_1400050F8.c)
 *     sub_1400060F4 @ 0x1400060F4 (sub_1400060F4.c)
 *     _guard_dispatch_icall @ 0x1400102D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall sub_140035700(_DWORD *a1)
{
  int v2; // edi
  _QWORD *v3; // rbx
  _QWORD *v4; // rax
  int v6; // [rsp+28h] [rbp-10h]

  v2 = sub_1400060F4(a1);
  if ( v2 < 0 )
  {
    if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
    {
      v6 = a1[12];
      sub_1400050F8((__int64)off_140018050->DeviceExtension, 3u, 1u, 0x32u, (__int64)&unk_140014AD0, v6);
    }
  }
  else if ( a1[14] != -1 )
  {
    (*(void (__fastcall **)(__int64, __int64, _QWORD))(qword_140019120 + 2504))(qword_140019128, qword_140019158, 0LL);
    *((_QWORD *)&DeviceObject.Queue.ListEntry.Flink->Flink + (unsigned int)a1[14]) = a1;
    v3 = a1 + 8;
    v4 = (_QWORD *)qword_1400191A0;
    if ( *(__int64 **)qword_1400191A0 != &qword_140019198 )
      __fastfail(3u);
    *v3 = &qword_140019198;
    v3[1] = v4;
    *v4 = v3;
    qword_1400191A0 = (__int64)v3;
    (*(void (__fastcall **)(__int64, __int64))(qword_140019120 + 2512))(qword_140019128, qword_140019158);
  }
  return (unsigned int)v2;
}
