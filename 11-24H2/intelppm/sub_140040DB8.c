/*
 * XREFs of sub_140040DB8 @ 0x140040DB8
 * Callers:
 *     sub_140027424 @ 0x140027424 (sub_140027424.c)
 *     sub_1400279B4 @ 0x1400279B4 (sub_1400279B4.c)
 *     sub_140027BB0 @ 0x140027BB0 (sub_140027BB0.c)
 *     sub_140031188 @ 0x140031188 (sub_140031188.c)
 *     sub_1400318EC @ 0x1400318EC (sub_1400318EC.c)
 *     sub_1400319F0 @ 0x1400319F0 (sub_1400319F0.c)
 *     sub_140031D38 @ 0x140031D38 (sub_140031D38.c)
 *     sub_1400320E0 @ 0x1400320E0 (sub_1400320E0.c)
 *     ?get_DynamicTerminalClasses@CMSPAddress@@UEAAJPEAUtagVARIANT@@@Z @ 0x1400323EC (-get_DynamicTerminalClasses@CMSPAddress@@UEAAJPEAUtagVARIANT@@@Z.c)
 *     sub_140040530 @ 0x140040530 (sub_140040530.c)
 *     sub_140040970 @ 0x140040970 (sub_140040970.c)
 *     sub_140040C38 @ 0x140040C38 (sub_140040C38.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400102D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall sub_140040DB8(__int64 a1, int a2, __int64 *a3, _QWORD *a4, _DWORD *a5)
{
  __int64 *v6; // r14
  int v8; // ebx
  unsigned int v9; // edi
  __int64 Pool2; // rax
  _DWORD *v11; // rsi
  __int64 v12; // rdx
  int v13; // eax
  unsigned int v14; // edi
  int v15; // eax
  int v17; // eax
  __int64 v18; // [rsp+50h] [rbp-11h] BYREF
  __int128 v19; // [rsp+58h] [rbp-9h] BYREF
  unsigned int v20; // [rsp+68h] [rbp+7h]
  int v21; // [rsp+6Ch] [rbp+Bh]
  __int128 v22; // [rsp+70h] [rbp+Fh] BYREF
  int v23; // [rsp+80h] [rbp+1Fh]
  int v24; // [rsp+84h] [rbp+23h]
  __int64 v25; // [rsp+D0h] [rbp+6Fh] BYREF

  v25 = 0LL;
  v18 = 0LL;
  v23 = 0;
  v20 = 0;
  v6 = a3;
  v22 = 0LL;
  v19 = 0LL;
  if ( a3 )
  {
    v17 = *(_DWORD *)a3;
    if ( *(_DWORD *)a3 != 1114203457 )
    {
      switch ( v17 )
      {
        case 1130980673:
          v8 = *((_DWORD *)a3 + 2);
          break;
        case 1231643969:
          v8 = 12;
          break;
        case 1399416129:
          v8 = *((_DWORD *)a3 + 2) + 15;
          break;
        default:
          return (unsigned int)-1073741584;
      }
      goto LABEL_5;
    }
  }
  else
  {
    if ( !a2 )
      return (unsigned int)-1073741585;
    LODWORD(v25) = 1114203457;
    v6 = &v25;
    HIDWORD(v25) = a2;
  }
  v8 = 8;
LABEL_5:
  v9 = 1024;
  while ( 1 )
  {
    Pool2 = ExAllocatePool2(256LL, v9, 1919119952LL);
    v11 = (_DWORD *)Pool2;
    if ( !Pool2 )
      return (unsigned int)-1073741670;
    v24 = 0;
    v21 = 0;
    v12 = *(_QWORD *)(a1 + 16);
    *(_QWORD *)&v22 = 1LL;
    *(_QWORD *)&v19 = 1LL;
    *((_QWORD *)&v22 + 1) = v6;
    v23 = v8;
    *((_QWORD *)&v19 + 1) = Pool2;
    v20 = v9;
    v13 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64, __int128 *, __int128 *, _QWORD, __int64 *))(qword_140019120 + 1488))(
            qword_140019128,
            v12,
            0LL,
            3325956LL,
            &v22,
            &v19,
            0LL,
            &v18);
    v14 = v13;
    if ( v13 != -2147483643 )
      break;
    v9 = v11[1];
    ExFreePoolWithTag(v11, 0);
  }
  if ( v13 >= 0 && (v15 = v18, v18) )
  {
    *a4 = v11;
  }
  else
  {
    *a4 = 0LL;
    ExFreePoolWithTag(v11, 0);
    v15 = v18;
  }
  if ( a5 )
    *a5 = v15;
  return v14;
}
