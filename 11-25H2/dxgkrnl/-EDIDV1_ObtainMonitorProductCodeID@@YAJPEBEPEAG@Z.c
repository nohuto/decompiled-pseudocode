/*
 * XREFs of ?EDIDV1_ObtainMonitorProductCodeID@@YAJPEBEPEAG@Z @ 0x14003C03C
 * Callers:
 *     ?AppendProductCodeId@EdidMonitorDescriptor@DxgMonitor@@UEBAJAEAU_UNICODE_STRING@@@Z @ 0x1403EE480 (-AppendProductCodeId@EdidMonitorDescriptor@DxgMonitor@@UEBAJAEAU_UNICODE_STRING@@@Z.c)
 * Callees:
 *     ?Validate@EDID_PARSER@MonDescParser@@QEBAJ_N@Z @ 0x14003CE10 (-Validate@EDID_PARSER@MonDescParser@@QEBAJ_N@Z.c)
 */

__int64 __fastcall EDIDV1_ObtainMonitorProductCodeID(const unsigned __int8 *a1, unsigned __int16 *a2)
{
  __int64 v4; // r8
  int v5; // r9d
  int v6; // ecx
  __int64 result; // rax
  _WORD *v8; // r10
  __int16 v9; // r11
  __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  _QWORD v12[10]; // [rsp+20h] [rbp-68h] BYREF
  __int64 v13; // [rsp+70h] [rbp-18h]

  if ( !a1 || !a2 )
    return 3221225485LL;
  v4 = 0LL;
  v13 = 0LL;
  v5 = 0;
  do
  {
    v6 = v5++;
    v12[v4] = &a1[v6 << 7];
    v4 = ++v13;
  }
  while ( !v5 );
  result = MonDescParser::EDID_PARSER::Validate((MonDescParser::EDID_PARSER *)v12, (bool)a1);
  if ( (int)result >= 0 )
  {
    v10 = *(_BYTE *)(v12[0] + 11LL) & 0xF;
    v11 = *(unsigned __int16 *)(v12[0] + 10LL);
    v8[4] = v9;
    *v8 = a0123456789abcd[v11 >> 12];
    v8[1] = a0123456789abcd[v10];
    v8[2] = a0123456789abcd[(unsigned __int8)v11 >> 4];
    v8[3] = a0123456789abcd[v11 & 0xF];
    return 0LL;
  }
  return result;
}
