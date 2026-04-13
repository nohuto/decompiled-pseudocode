/*
 * XREFs of _Stoullx @ 0x1800057F8
 * Callers:
 *     _Stollx @ 0x1800048B0 (_Stollx.c)
 *     ?do_get@?$num_get@DV?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@MEBA?AV?$istreambuf_iterator@DU?$char_traits@D@std@@@2@V32@0AEAVios_base@2@AEAHAEAPEAX@Z @ 0x18000A940 (-do_get@-$num_get@DV-$istreambuf_iterator@DU-$char_traits@D@std@@@std@@@std@@MEBA-A_ea_18000A940.c)
 *     ?do_get@?$num_get@DV?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@MEBA?AV?$istreambuf_iterator@DU?$char_traits@D@std@@@2@V32@0AEAVios_base@2@AEAHAEA_K@Z @ 0x18000ABA0 (-do_get@-$num_get@DV-$istreambuf_iterator@DU-$char_traits@D@std@@@std@@@std@@MEBA-A_ea_18000ABA0.c)
 *     ?do_get@?$num_get@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@MEBA?AV?$istreambuf_iterator@GU?$char_traits@G@std@@@2@V32@0AEAVios_base@2@AEAHAEAPEAX@Z @ 0x18005CC00 (-do_get@-$num_get@GV-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@@std@@MEBA-A_ea_18005CC00.c)
 *     ?do_get@?$num_get@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@MEBA?AV?$istreambuf_iterator@GU?$char_traits@G@std@@@2@V32@0AEAVios_base@2@AEAHAEA_K@Z @ 0x18005CDE0 (-do_get@-$num_get@GV-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@@std@@MEBA-A_ea_18005CDE0.c)
 *     ?do_get@?$num_get@_WV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@MEBA?AV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@2@V32@0AEAVios_base@2@AEAHAEAPEAX@Z @ 0x18009FCE0 (-do_get@-$num_get@_WV-$istreambuf_iterator@_WU-$char_traits@_W@std@@@std@@@std@@MEB_ea_18009FCE0.c)
 *     ?do_get@?$num_get@_WV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@MEBA?AV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@2@V32@0AEAVios_base@2@AEAHAEA_K@Z @ 0x18009FEC0 (-do_get@-$num_get@_WV-$istreambuf_iterator@_WU-$char_traits@_W@std@@@std@@@std@@MEB_ea_18009FEC0.c)
 * Callees:
 *     memchr_0 @ 0x180022885 (memchr_0.c)
 */

unsigned __int64 __fastcall Stoullx(char *a1, char **a2, unsigned int a3, _DWORD *a4)
{
  size_t v4; // rdi
  char **v6; // rsi
  char *v7; // r14
  int v8; // ecx
  char *v9; // rbx
  char v10; // r12
  char v11; // al
  char *v12; // r13
  unsigned __int64 v13; // rbp
  int v14; // eax
  void *v15; // rax
  int v16; // eax
  unsigned __int64 result; // rax
  __int64 v18; // rcx
  char *v19; // [rsp+20h] [rbp-58h]
  char v22; // [rsp+90h] [rbp+18h]
  unsigned __int64 v23; // [rsp+98h] [rbp+20h]

  v4 = a3;
  v6 = a2;
  v7 = a1;
  if ( a4 )
    *a4 = 0;
  v8 = (unsigned __int8)*a1;
  v9 = v7;
  while ( isspace(v8) )
    v8 = (unsigned __int8)*++v9;
  v10 = *v9;
  if ( ((*v9 - 43) & 0xFD) != 0 )
    v10 = 43;
  else
    ++v9;
  if ( !(_DWORD)v4 )
    goto LABEL_16;
  if ( (unsigned int)(v4 - 2) > 0x22 )
  {
LABEL_26:
    if ( v6 )
      *v6 = v7;
    return 0LL;
  }
  if ( (int)v4 <= 0 )
  {
LABEL_16:
    v11 = *v9;
    if ( *v9 != 48 )
    {
      v4 = 10LL;
      v12 = v9;
      goto LABEL_22;
    }
    if ( ((v9[1] - 88) & 0xDF) != 0 )
    {
      v4 = 8LL;
      v12 = v9;
      goto LABEL_20;
    }
    v4 = 16LL;
    goto LABEL_30;
  }
  if ( (_DWORD)v4 == 16 && *v9 == 48 && ((v9[1] - 88) & 0xDF) == 0 )
LABEL_30:
    v9 += 2;
  v12 = v9;
  while ( 1 )
  {
    v11 = *v9;
    if ( *v9 != 48 )
      break;
LABEL_20:
    ++v9;
  }
LABEL_22:
  v13 = 0LL;
  v23 = 0LL;
  v22 = 0;
  v19 = v9;
  v14 = tolower(v11);
  v15 = memchr_0("0123456789abcdefghijklmnopqrstuvwxyz", v14, v4);
  if ( v15 )
  {
    do
    {
      v23 = v13;
      ++v9;
      v13 = v13 * v4 + (char)((_BYTE)v15 - (unsigned __int8)"0123456789abcdefghijklmnopqrstuvwxyz");
      v22 = (_BYTE)v15 - (unsigned __int8)"0123456789abcdefghijklmnopqrstuvwxyz";
      v16 = tolower(*v9);
      v15 = memchr_0("0123456789abcdefghijklmnopqrstuvwxyz", v16, v4);
    }
    while ( v15 );
    v6 = a2;
    v7 = a1;
  }
  if ( v12 == v9 )
    goto LABEL_26;
  v18 = &v9[-byte_1800E1100[v4]] - v19;
  if ( v18 >= 0 && (v18 > 0 || v13 < v22 || (v13 - v22) / v4 != v23) )
  {
    *_errno() = 34;
    if ( a4 )
      *a4 = 1;
    v13 = -1LL;
    v10 = 43;
  }
  result = -(__int64)v13;
  if ( v10 != 45 )
    result = v13;
  if ( v6 )
    *v6 = v9;
  return result;
}
