/*
 * XREFs of ?erase@?$_Tree@V?$_Tset_traits@IU?$less@I@std@@V?$allocator@I@2@$0A@@std@@@std@@QEAA_KAEBI@Z @ 0x18029C538
 * Callers:
 *     ?ProcessUpEvent@PointerEventsDetector@TouchGestureProcessor@@QEAAXAEBUPointerPoint@Input@UI@Windows@winrt@@@Z @ 0x18029C448 (-ProcessUpEvent@PointerEventsDetector@TouchGestureProcessor@@QEAAXAEBUPointerPoint@Input@UI@Wind.c)
 * Callees:
 *     ?_Erase@?$_Tree@V?$_Tset_traits@IU?$less@I@std@@V?$allocator@I@2@$0A@@std@@@std@@AEAA_KU?$pair@PEAU?$_Tree_node@IPEAX@std@@PEAU12@@2@@Z @ 0x18029C5D8 (-_Erase@-$_Tree@V-$_Tset_traits@IU-$less@I@std@@V-$allocator@I@2@$0A@@std@@@std@@AEAA_KU-$pair@P.c)
 */

__int64 __fastcall std::_Tree<std::_Tset_traits<unsigned int,std::less<unsigned int>,std::allocator<unsigned int>,0>>::erase(
        __int64 *a1,
        unsigned int *a2)
{
  __int64 *v2; // r10
  __int64 *v3; // r9
  __int64 *v4; // rax
  __int64 *v5; // r8
  unsigned int v6; // r11d
  _QWORD v8[3]; // [rsp+20h] [rbp-18h] BYREF

  v2 = (__int64 *)*a1;
  v3 = (__int64 *)*a1;
  v4 = *(__int64 **)(*a1 + 8);
  v5 = v4;
  if ( !*((_BYTE *)v4 + 25) )
  {
    v6 = *a2;
    do
    {
      if ( *((_DWORD *)v5 + 7) >= v6 )
      {
        if ( *((_BYTE *)v3 + 25) && v6 < *((_DWORD *)v5 + 7) )
          v3 = v5;
        v2 = v5;
        v5 = (__int64 *)*v5;
      }
      else
      {
        v5 = (__int64 *)v5[2];
      }
    }
    while ( !*((_BYTE *)v5 + 25) );
  }
  if ( !*((_BYTE *)v3 + 25) )
    v4 = (__int64 *)*v3;
  while ( !*((_BYTE *)v4 + 25) )
  {
    if ( *a2 >= *((_DWORD *)v4 + 7) )
    {
      v4 = (__int64 *)v4[2];
    }
    else
    {
      v3 = v4;
      v4 = (__int64 *)*v4;
    }
  }
  v8[0] = v2;
  v8[1] = v3;
  return std::_Tree<std::_Tset_traits<unsigned int,std::less<unsigned int>,std::allocator<unsigned int>,0>>::_Erase(
           a1,
           v8,
           v5);
}
