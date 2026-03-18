/*
 * XREFs of ?SetLastPointerTarget@CManipulationContext@@UEAAJIPEAUTargetingInfo@@@Z @ 0x1801944D0
 * Callers:
 *     <none>
 * Callees:
 *     ?RemoveRange@?$CMap@IUTargetingInfo@@V?$CMapEqualHelper@IUTargetingInfo@@@@@@QEAAHHH@Z @ 0x180193008 (-RemoveRange@-$CMap@IUTargetingInfo@@V-$CMapEqualHelper@IUTargetingInfo@@@@@@QEAAHHH@Z.c)
 *     ?SetAtIndex@?$CMap@IUTargetingInfo@@V?$CMapEqualHelper@IUTargetingInfo@@@@@@QEAAHHAEBIAEBUTargetingInfo@@@Z @ 0x180194548 (-SetAtIndex@-$CMap@IUTargetingInfo@@V-$CMapEqualHelper@IUTargetingInfo@@@@@@QEAAHHAEBIAEBUTarget.c)
 *     ?Add@?$CMap@IUTargetingInfo@@V?$CMapEqualHelper@IUTargetingInfo@@@@@@QEAAHAEBIAEBUTargetingInfo@@@Z @ 0x180194DA8 (-Add@-$CMap@IUTargetingInfo@@V-$CMapEqualHelper@IUTargetingInfo@@@@@@QEAAHAEBIAEBUTargetingInfo@.c)
 */

__int64 __fastcall CManipulationContext::SetLastPointerTarget(
        CManipulationContext *this,
        int a2,
        struct TargetingInfo *a3)
{
  __int64 v3; // r11
  unsigned int v4; // ebx
  _QWORD *v5; // rcx
  __int64 v7; // rdx
  __int64 i; // r9
  int v10; // [rsp+38h] [rbp+10h] BYREF

  v10 = a2;
  v3 = *((int *)this + 24);
  v4 = 0;
  v5 = (_QWORD *)((char *)this + 80);
  v7 = 0LL;
  for ( i = 0LL; i < v3; ++i )
  {
    if ( *(_DWORD *)(*v5 + 4 * i) == a2 )
    {
      if ( (_DWORD)v7 != -1 )
      {
        if ( a3 )
          CMap<unsigned int,TargetingInfo,CMapEqualHelper<unsigned int,TargetingInfo>>::SetAtIndex(v5, v7, &v10, a3);
        else
          CMap<unsigned int,TargetingInfo,CMapEqualHelper<unsigned int,TargetingInfo>>::RemoveRange((__int64)v5, v7);
        return v4;
      }
      break;
    }
    v7 = (unsigned int)(v7 + 1);
  }
  if ( a3 && !(unsigned int)CMap<unsigned int,TargetingInfo,CMapEqualHelper<unsigned int,TargetingInfo>>::Add(v5, &v10) )
    return (unsigned int)-2147024882;
  return v4;
}
