/*
 * XREFs of sub_140030280 @ 0x140030280
 * Callers:
 *     <none>
 * Callees:
 *     sub_140003834 @ 0x140003834 (sub_140003834.c)
 *     sub_1400060F4 @ 0x1400060F4 (sub_1400060F4.c)
 *     sub_140008CE0 @ 0x140008CE0 (sub_140008CE0.c)
 *     _guard_dispatch_icall @ 0x1400102D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall sub_140030280(__int64 a1)
{
  unsigned int v2; // edi
  int LpIndexFromApicId; // esi
  _QWORD *v4; // rcx
  _QWORD *v5; // rax
  __int64 v7; // [rsp+28h] [rbp-20h]
  int v8; // [rsp+28h] [rbp-20h]
  __int64 v9; // [rsp+30h] [rbp-18h]
  int v10; // [rsp+30h] [rbp-18h]

  v2 = 0;
  LpIndexFromApicId = HvlGetLpIndexFromApicId(*(unsigned int *)(a1 + 48));
  if ( LpIndexFromApicId != -1 )
  {
    (*(void (__fastcall **)(__int64, __int64, _QWORD))(qword_140019120 + 2504))(qword_140019128, qword_140019158, 0LL);
    if ( sub_140008CE0(LpIndexFromApicId) )
    {
      if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
      {
        v10 = *(_DWORD *)(a1 + 48);
        v8 = *(_DWORD *)(a1 + 52);
        sub_140003834((__int64)off_140018050->DeviceExtension, 2u, 1u, 0xFu, (__int64)&unk_1400145F8, v8, v10);
      }
    }
    else
    {
      *(_DWORD *)(a1 + 72) = LpIndexFromApicId;
      v4 = (_QWORD *)qword_1400191A0;
      v5 = (_QWORD *)(a1 + 32);
      if ( *(__int64 **)qword_1400191A0 != &qword_140019198 )
        __fastfail(3u);
      *v5 = &qword_140019198;
      *(_QWORD *)(a1 + 40) = v4;
      *v4 = v5;
      qword_1400191A0 = a1 + 32;
    }
    (*(void (__fastcall **)(__int64, __int64))(qword_140019120 + 2512))(qword_140019128, qword_140019158);
  }
  if ( *(_DWORD *)(a1 + 72) == -1 )
  {
    if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
    {
      LODWORD(v9) = *(_DWORD *)(a1 + 48);
      LODWORD(v7) = *(_DWORD *)(a1 + 52);
      sub_140003834((__int64)off_140018050->DeviceExtension, 3u, 1u, 0x10u, (__int64)&unk_1400145F8, v7, v9);
    }
    return (unsigned int)-1073741823;
  }
  else if ( (int)sub_1400060F4((_DWORD *)a1) >= 0 && *(_DWORD *)(a1 + 56) != -1 )
  {
    (*(void (__fastcall **)(__int64, __int64, _QWORD))(qword_140019120 + 2504))(qword_140019128, qword_140019158, 0LL);
    *((_QWORD *)&DeviceObject.Queue.ListEntry.Flink->Flink + *(unsigned int *)(a1 + 56)) = a1;
    (*(void (__fastcall **)(__int64, __int64))(qword_140019120 + 2512))(qword_140019128, qword_140019158);
  }
  return v2;
}
