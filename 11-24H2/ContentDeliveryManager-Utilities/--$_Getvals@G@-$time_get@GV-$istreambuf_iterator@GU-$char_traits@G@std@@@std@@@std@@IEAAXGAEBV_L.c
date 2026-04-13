/*
 * XREFs of ??$_Getvals@G@?$time_get@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@IEAAXGAEBV_Locinfo@1@@Z @ 0x18000ED5C
 * Callers:
 *     ?_Init@?$time_get@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@IEAAXAEBV_Locinfo@2@@Z @ 0x180014A88 (-_Init@-$time_get@GV-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@@std@@IEAAXAEBV_Locinfo@2.c)
 * Callees:
 *     _Getcvt @ 0x180005F08 (_Getcvt.c)
 *     ??$_Maklocstr@G@std@@YAPEAGPEBDPEAGAEBU_Cvtvec@@@Z @ 0x180049214 (--$_Maklocstr@G@std@@YAPEAGPEBDPEAGAEBU_Cvtvec@@@Z.c)
 *     ??4?$_Yarn@D@std@@QEAAAEAV01@PEBD@Z @ 0x180067300 (--4-$_Yarn@D@std@@QEAAAEAV01@PEBD@Z.c)
 */

__int64 __fastcall std::time_get<unsigned short,std::istreambuf_iterator<unsigned short>>::_Getvals<unsigned short>(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  _Cvtvec *v5; // rax
  char *v6; // rax
  char **v7; // rbx
  char *v8; // rdi
  char *v9; // rcx
  char *v10; // rax
  char **v11; // rbx
  char *v12; // rdi
  char *v13; // rcx
  __int64 result; // rax
  _Cvtvec v15; // [rsp+20h] [rbp-38h] BYREF

  v5 = Getcvt(&v15);
  *(_OWORD *)(a1 + 44) = *(_OWORD *)&v5->_Page;
  *(_OWORD *)(a1 + 60) = *(_OWORD *)&v5->_Isleadbyte[4];
  *(_OWORD *)(a1 + 76) = *(_OWORD *)&v5->_Isleadbyte[20];
  v6 = _Getdays();
  v7 = (char **)(a3 + 8);
  v8 = v6;
  if ( v6 )
  {
    std::_Yarn<char>::operator=(a3 + 8, v6);
    free(v8);
  }
  v9 = ":Sun:Sunday:Mon:Monday:Tue:Tuesday:Wed:Wednesday:Thu:Thursday:Fri:Friday:Sat:Saturday";
  if ( *v7 )
    v9 = *v7;
  *(_QWORD *)(a1 + 16) = std::_Maklocstr<unsigned short>(v9);
  v10 = _Getmonths();
  v11 = (char **)(a3 + 24);
  v12 = v10;
  if ( v10 )
  {
    std::_Yarn<char>::operator=(a3 + 24, v10);
    free(v12);
  }
  v13 = ":Jan:January:Feb:February:Mar:March:Apr:April:May:May:Jun:June:Jul:July:Aug:August:Sep:September:Oct:October:Nov"
        ":November:Dec:December";
  if ( *v11 )
    v13 = *v11;
  *(_QWORD *)(a1 + 24) = std::_Maklocstr<unsigned short>(v13);
  result = std::_Maklocstr<unsigned short>(":AM:am:PM:pm");
  *(_QWORD *)(a1 + 32) = result;
  return result;
}
