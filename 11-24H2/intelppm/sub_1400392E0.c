/*
 * XREFs of sub_1400392E0 @ 0x1400392E0
 * Callers:
 *     sub_140041578 @ 0x140041578 (sub_140041578.c)
 * Callees:
 *     sub_1400050F8 @ 0x1400050F8 (sub_1400050F8.c)
 *     _guard_dispatch_icall @ 0x1400102D0 (_guard_dispatch_icall.c)
 *     sub_14002E0DC @ 0x14002E0DC (sub_14002E0DC.c)
 *     sub_1400347CC @ 0x1400347CC (sub_1400347CC.c)
 *     sub_140039008 @ 0x140039008 (sub_140039008.c)
 *     sub_14003919C @ 0x14003919C (sub_14003919C.c)
 *     sub_140045EF0 @ 0x140045EF0 (sub_140045EF0.c)
 */

__int64 __fastcall sub_1400392E0(__int64 a1)
{
  __int64 v2; // rax
  int v3; // edi
  const wchar_t *v4; // r8
  unsigned int *v5; // rdx
  struct _DEVICE_OBJECT *v6; // r8
  __int64 v7; // r9
  unsigned int v9; // [rsp+40h] [rbp+8h] BYREF

  (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(qword_140019120 + 2504))(
    qword_140019128,
    *(_QWORD *)(a1 + 208),
    0LL);
  v2 = *(_QWORD *)(a1 + 280);
  v3 = -1073741823;
  if ( (v2 & 0x3000000) != 0 )
  {
    v3 = sub_14003919C(a1);
    if ( v3 >= 0 )
      goto LABEL_7;
    *(_QWORD *)(a1 + 280) &= 0xFFFFFFFFFCFFFFFFuLL;
    v2 = *(_QWORD *)(a1 + 280);
  }
  if ( (v2 & 0x300000) == 0 )
    goto LABEL_11;
  v3 = sub_140039008(a1);
  if ( v3 < 0 )
  {
    *(_QWORD *)(a1 + 280) &= 0xFFFFFFFFFFCFFFFFuLL;
    goto LABEL_11;
  }
LABEL_7:
  v4 = *(const wchar_t **)(a1 + 64);
  v5 = *(unsigned int **)(a1 + 504);
  v9 = 0;
  v3 = sub_14002E0DC(a1 + 480, v5, v4, &v9);
  if ( v3 >= 0 )
  {
    v3 = 0;
    sub_140045EF0(*(_QWORD *)(a1 + 504));
    sub_1400347CC((unsigned __int8 *)(a1 + 480), "_PTC", v6, v7);
  }
  else
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 1112), v9);
    if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
      sub_1400050F8((__int64)off_140018050->DeviceExtension, 3u, 3u, 0x12u, (__int64)&unk_140013160, v3);
  }
LABEL_11:
  (*(void (__fastcall **)(__int64, _QWORD))(qword_140019120 + 2512))(qword_140019128, *(_QWORD *)(a1 + 208));
  return (unsigned int)v3;
}
