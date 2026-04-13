/*
 * XREFs of ??$_Getvals@D@?$time_get@DV?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@IEAAXDAEBV_Locinfo@1@@Z @ 0x18001BF4C
 * Callers:
 *     ?_Init@?$time_get@DV?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@IEAAXAEBV_Locinfo@2@@Z @ 0x18001E90C (-_Init@-$time_get@DV-$istreambuf_iterator@DU-$char_traits@D@std@@@std@@@std@@IEAAXAEBV_Locinfo@2.c)
 * Callees:
 *     _Getcvt @ 0x180005F08 (_Getcvt.c)
 *     ??_U@YAPEAX_K@Z @ 0x1800062C4 (--_U@YAPEAX_K@Z.c)
 *     ??4?$_Yarn@D@std@@QEAAAEAV01@PEBD@Z @ 0x180067300 (--4-$_Yarn@D@std@@QEAAAEAV01@PEBD@Z.c)
 */

_BYTE *__fastcall std::time_get<char,std::istreambuf_iterator<char>>::_Getvals<char>(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  _Cvtvec *v5; // rax
  char *v6; // rax
  const char **v7; // rbx
  char *v8; // rdi
  const char *v9; // rsi
  __int64 v10; // rbx
  __int64 v11; // rdi
  size_t v12; // rdi
  _BYTE *v13; // rax
  signed __int64 v14; // rdx
  char *v15; // rax
  const char **v16; // rsi
  char *v17; // rdi
  const char *v18; // rdi
  size_t v19; // rbx
  _BYTE *v20; // rax
  signed __int64 v21; // rdx
  __int64 v22; // rdi
  const char *v23; // rbx
  _BYTE *result; // rax
  _Cvtvec v25; // [rsp+20h] [rbp-38h] BYREF

  v5 = Getcvt(&v25);
  *(_OWORD *)(a1 + 44) = *(_OWORD *)&v5->_Page;
  *(_OWORD *)(a1 + 60) = *(_OWORD *)&v5->_Isleadbyte[4];
  *(_OWORD *)(a1 + 76) = *(_OWORD *)&v5->_Isleadbyte[20];
  v6 = _Getdays();
  v7 = (const char **)(a3 + 8);
  v8 = v6;
  if ( v6 )
  {
    std::_Yarn<char>::operator=(a3 + 8, v6);
    free(v8);
  }
  v9 = ":Sun:Sunday:Mon:Monday:Tue:Tuesday:Wed:Wednesday:Thu:Thursday:Fri:Friday:Sat:Saturday";
  if ( *v7 )
    v9 = *v7;
  v10 = -1LL;
  v11 = -1LL;
  do
    ++v11;
  while ( v9[v11] );
  v12 = v11 + 1;
  v13 = operator new[](v12);
  if ( v12 )
  {
    v14 = v13 - v9;
    do
    {
      v9[v14] = *v9;
      ++v9;
      --v12;
    }
    while ( v12 );
  }
  *(_QWORD *)(a1 + 16) = v13;
  v15 = _Getmonths();
  v16 = (const char **)(a3 + 24);
  v17 = v15;
  if ( v15 )
  {
    std::_Yarn<char>::operator=(a3 + 24, v15);
    free(v17);
  }
  v18 = ":Jan:January:Feb:February:Mar:March:Apr:April:May:May:Jun:June:Jul:July:Aug:August:Sep:September:Oct:October:Nov"
        ":November:Dec:December";
  if ( *v16 )
    v18 = *v16;
  do
    ++v10;
  while ( v18[v10] );
  v19 = v10 + 1;
  v20 = operator new[](v19);
  if ( v19 )
  {
    v21 = v20 - v18;
    do
    {
      v18[v21] = *v18;
      ++v18;
      --v19;
    }
    while ( v19 );
  }
  v22 = 13LL;
  *(_QWORD *)(a1 + 24) = v20;
  v23 = ":AM:am:PM:pm";
  result = operator new[](0xDuLL);
  do
  {
    v23[result - ":AM:am:PM:pm"] = *v23;
    ++v23;
    --v22;
  }
  while ( v22 );
  *(_QWORD *)(a1 + 32) = result;
  return result;
}
