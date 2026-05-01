/*
 * XREFs of _dynamic_initializer_for__idle__ @ 0x180004280
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$vector@V?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@V?$allocator@V?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@@2@@std@@QEAA@V?$initializer_list@V?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@@1@AEBV?$allocator@V?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@@1@@Z @ 0x1800BE7E0 (--0-$vector@V-$vector@UColor@UI@Windows@@V-$allocator@UColor@UI@Windows@@@std@@@std@@V-$allocato.c)
 *     ??0?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@QEAA@V?$initializer_list@UColor@UI@Windows@@@1@AEBV?$allocator@UColor@UI@Windows@@@1@@Z @ 0x18013FBE0 (--0-$vector@UColor@UI@Windows@@V-$allocator@UColor@UI@Windows@@@std@@@std@@QEAA@V-$initializer_l.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     atexit @ 0x1801C6CEC (atexit.c)
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x1801C8E9C (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 */

// Hidden C++ exception states: #wind=1
int dynamic_initializer_for__idle__()
{
  _BYTE *v1; // [rsp+20h] [rbp-60h] BYREF
  __int64 *v2; // [rsp+28h] [rbp-58h]
  _BYTE v3[24]; // [rsp+30h] [rbp-50h] BYREF
  _DWORD v4[12]; // [rsp+48h] [rbp-38h] BYREF
  __int64 v5; // [rsp+78h] [rbp-8h] BYREF

  v4[0] = 255;
  v4[1] = 255;
  v4[2] = 255;
  v4[3] = 255;
  v4[4] = 255;
  v4[5] = 255;
  v4[6] = 255;
  v4[7] = 255;
  v4[8] = 255;
  v4[9] = 255;
  v4[10] = 255;
  v4[11] = 255;
  v1 = v4;
  v2 = &v5;
  std::vector<Windows::UI::Color>::vector<Windows::UI::Color>(v3, &v1);
  v1 = v3;
  v2 = (__int64 *)v4;
  std::vector<std::vector<Windows::UI::Color>>::vector<std::vector<Windows::UI::Color>>(&idle, &v1);
  `eh vector destructor iterator'(v3, 0x18uLL, 1uLL, std::vector<Windows::UI::Color>::~vector<Windows::UI::Color>);
  return atexit(dynamic_atexit_destructor_for__idle__);
}
