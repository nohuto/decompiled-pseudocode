/*
 * XREFs of ??$_Eqrange@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@?$_Tree@V?$_Tmap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@KU?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@K@std@@@2@$0A@@std@@@std@@IEBA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@K@std@@PEAX@std@@PEAU12@@1@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@@Z @ 0x1800C7CA8
 * Callers:
 *     ?OnMouseRemoval@HapticProcessor@@QEAAJPEBUDeviceInfo@@@Z @ 0x1800C9A24 (-OnMouseRemoval@HapticProcessor@@QEAAJPEBUDeviceInfo@@@Z.c)
 * Callees:
 *     ??$?MGU?$char_traits@G@std@@V?$allocator@G@1@@std@@YA_NAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@0@Z @ 0x1800677B8 (--$-MGU-$char_traits@G@std@@V-$allocator@G@1@@std@@YA_NAEBV-$basic_string@GU-$char_traits@G@std@.c)
 */

_QWORD *__fastcall std::_Tree<std::_Tmap_traits<std::wstring,unsigned long,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,unsigned long>>,0>>::_Eqrange<std::wstring>(
        __int64 *a1,
        _QWORD *a2,
        char *a3)
{
  __int64 *v3; // rbp
  __int64 *v6; // rsi
  char *v7; // rbx
  char *v8; // rdi
  _QWORD *result; // rax

  v3 = (__int64 *)*a1;
  v6 = (__int64 *)*a1;
  v7 = *(char **)(*a1 + 8);
  v8 = v7;
  while ( !v8[25] )
  {
    if ( (unsigned __int8)std::operator<<unsigned short>(v8 + 32, a3) )
    {
      v8 = (char *)*((_QWORD *)v8 + 2);
    }
    else
    {
      if ( *((_BYTE *)v6 + 25) && (unsigned __int8)std::operator<<unsigned short>(a3, (_QWORD *)v8 + 4) )
        v6 = (__int64 *)v8;
      v3 = (__int64 *)v8;
      v8 = *(char **)v8;
    }
  }
  if ( !*((_BYTE *)v6 + 25) )
    v7 = (char *)*v6;
  while ( !v7[25] )
  {
    if ( (unsigned __int8)std::operator<<unsigned short>(a3, (_QWORD *)v7 + 4) )
    {
      v6 = (__int64 *)v7;
      v7 = *(char **)v7;
    }
    else
    {
      v7 = (char *)*((_QWORD *)v7 + 2);
    }
  }
  result = a2;
  *a2 = v3;
  a2[1] = v6;
  return result;
}
