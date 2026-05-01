/*
 * XREFs of ?SHRegSetFILETIME@@YAJPEAUHKEY__@@PEBG1PEBU_FILETIME@@@Z @ 0x1802BB380
 * Callers:
 *     ?CanApplyGroupPolicyLayout@TaskbarLayoutPolicyManager@@AEAAJPEAH0@Z @ 0x180167450 (-CanApplyGroupPolicyLayout@TaskbarLayoutPolicyManager@@AEAAJPEAH0@Z.c)
 *     ?GetPolicyLayoutXML@TaskbarLayoutPolicyManager@@AEAAJPEAPEAUIXMLDOMDocument2@@@Z @ 0x18031EB64 (-GetPolicyLayoutXML@TaskbarLayoutPolicyManager@@AEAAJPEAPEAUIXMLDOMDocument2@@@Z.c)
 * Callees:
 *     ?_RegSetKeyValueWithSDDL@@YAKPEAUHKEY__@@PEBG1KPEBXKPEAU_SECURITY_ATTRIBUTES@@@Z @ 0x18010A870 (-_RegSetKeyValueWithSDDL@@YAKPEAUHKEY__@@PEBG1KPEBXKPEAU_SECURITY_ATTRIBUTES@@@Z.c)
 */

__int64 __fastcall SHRegSetFILETIME(HKEY a1, const unsigned __int16 *a2, const unsigned __int16 *a3, BYTE *a4)
{
  __int64 result; // rax

  result = _RegSetKeyValueWithSDDL(HKEY_CURRENT_USER, a2, a3, 3u, a4, 8u);
  if ( (int)result > 0 )
    return (unsigned __int16)result | 0x80070000;
  return result;
}
