/*
 * XREFs of sub_14003F9A0 @ 0x14003F9A0
 * Callers:
 *     sub_140027424 @ 0x140027424 (sub_140027424.c)
 *     sub_1400279B4 @ 0x1400279B4 (sub_1400279B4.c)
 *     sub_140031188 @ 0x140031188 (sub_140031188.c)
 *     sub_1400319F0 @ 0x1400319F0 (sub_1400319F0.c)
 *     sub_140031D38 @ 0x140031D38 (sub_140031D38.c)
 *     sub_1400320E0 @ 0x1400320E0 (sub_1400320E0.c)
 *     ?get_DynamicTerminalClasses@CMSPAddress@@UEAAJPEAUtagVARIANT@@@Z @ 0x1400323EC (-get_DynamicTerminalClasses@CMSPAddress@@UEAAJPEAUtagVARIANT@@@Z.c)
 *     sub_140032CB4 @ 0x140032CB4 (sub_140032CB4.c)
 *     sub_140032E50 @ 0x140032E50 (sub_140032E50.c)
 *     sub_14003EFEC @ 0x14003EFEC (sub_14003EFEC.c)
 *     ?get_DynamicTerminalClasses@CMSPAddress@@UEAAJPEAUtagVARIANT@@@Z_0 @ 0x14003F3EC (-get_DynamicTerminalClasses@CMSPAddress@@UEAAJPEAUtagVARIANT@@@Z_0.c)
 * Callees:
 *     sub_140003D28 @ 0x140003D28 (sub_140003D28.c)
 *     sub_14000D03C @ 0x14000D03C (sub_14000D03C.c)
 *     sub_14000D2C8 @ 0x14000D2C8 (sub_14000D2C8.c)
 *     sub_14000D450 @ 0x14000D450 (sub_14000D450.c)
 *     _guard_dispatch_icall @ 0x1400102D0 (_guard_dispatch_icall.c)
 *     sub_140034FD0 @ 0x140034FD0 (sub_140034FD0.c)
 */

__int64 sub_14003F9A0(
        unsigned __int8 *a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5,
        int a6,
        const char *a7,
        char a8,
        ...)
{
  __int64 v8; // r15
  __int64 v9; // r13
  unsigned int v10; // r12d
  unsigned __int16 *v11; // rbx
  unsigned __int8 *v12; // r14
  unsigned int v13; // esi
  unsigned __int64 v14; // rax
  unsigned __int16 v15; // r8
  unsigned __int8 *v16; // rbp
  int v17; // edi
  __int64 v18; // r9
  __int64 v19; // rax
  unsigned int v21; // r9d
  unsigned __int8 *v22; // rdx
  const char *v23; // rax
  __int64 v24; // rdx
  __int64 v25; // r9
  __int64 v26; // rdi
  int v27; // r9d
  unsigned __int16 v28; // r9
  int v29; // [rsp+20h] [rbp-48h]
  unsigned __int64 i; // [rsp+70h] [rbp+8h]

  v8 = (unsigned int)a2;
  v9 = 0LL;
  v10 = 0;
  v11 = (unsigned __int16 *)a3;
  v12 = a1;
  v13 = a1[24 * (unsigned int)(a2 - 1)] + 1;
  v14 = a3 + a4;
  for ( i = v14; ; v14 = i )
  {
    if ( (unsigned __int64)v11 >= v14 )
    {
      if ( v10 == v13 )
        return 0;
      if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
      {
        v28 = 77;
        goto LABEL_49;
      }
      return (unsigned int)-1072431093;
    }
    if ( v10 >= v13 )
    {
      if ( (a8 & 1) != 0 )
        return 261;
      if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
      {
        v28 = 70;
LABEL_49:
        sub_14000D03C((__int64)off_140018050->DeviceExtension, a2, a3, v28, v29, a7);
        return (unsigned int)-1072431093;
      }
      return (unsigned int)-1072431093;
    }
    v15 = *v11;
    while ( 1 )
    {
      if ( (unsigned int)v9 >= (unsigned int)v8 )
        goto LABEL_19;
      v16 = &v12[24 * v9];
      if ( *v16 == v10 && *((_WORD *)v16 + 1) == v15 )
        break;
      v9 = (unsigned int)(v9 + 1);
    }
    if ( !v16 )
    {
LABEL_19:
      v21 = 0;
      if ( !(_DWORD)v8 )
        return (unsigned int)-1072431096;
      v22 = v12;
      do
      {
        if ( *v22 == v10 )
          break;
        ++v21;
        v22 += 24;
      }
      while ( v21 < (unsigned int)v8 );
      if ( v21 >= (unsigned int)v8 )
        return (unsigned int)-1072431096;
      if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
      {
        v23 = sub_140034FD0(v15);
        sub_14000D450(
          (__int64)off_140018050->DeviceExtension,
          v24,
          (__int64)v23,
          v25,
          v29,
          a7,
          *(const char **)&v12[24 * v25 + 8],
          (__int64)v23);
      }
      v26 = v8;
      while ( 2 )
      {
        if ( *v12 != v10 )
          goto LABEL_41;
        if ( *((_WORD *)v12 + 1) )
        {
          if ( *((_WORD *)v12 + 1) == 1 )
          {
            if ( off_140018058 == (_UNKNOWN *)&off_140018058 )
              goto LABEL_41;
            v27 = 73;
          }
          else
          {
            if ( *((_WORD *)v12 + 1) != 2 )
            {
              if ( *((_WORD *)v12 + 1) == 3 && off_140018058 != (_UNKNOWN *)&off_140018058 )
              {
                v27 = 75;
                break;
              }
LABEL_41:
              v12 += 24;
              if ( !--v26 )
                return (unsigned int)-1072431096;
              continue;
            }
            if ( off_140018058 == (_UNKNOWN *)&off_140018058 )
              goto LABEL_41;
            v27 = 74;
          }
        }
        else
        {
          if ( off_140018058 == (_UNKNOWN *)&off_140018058 )
            goto LABEL_41;
          v27 = 72;
        }
        break;
      }
      LOBYTE(v22) = 2;
      sub_140003D28(off_140018050->DeviceExtension, (_DWORD)v22, 1, v27, (__int64)&unk_140012FE8);
      goto LABEL_41;
    }
    v17 = (*((__int64 (__fastcall **)(unsigned __int16 *, __int64, _QWORD))v16 + 2))(
            v11,
            a5 + *((unsigned __int16 *)v16 + 2),
            a6 - (unsigned int)*((unsigned __int16 *)v16 + 2));
    if ( v17 < 0 )
      break;
    v19 = v11[1];
    ++v10;
    if ( (unsigned __int16)v19 < 4u )
      v19 = 4LL;
    v11 = (unsigned __int16 *)((char *)v11 + v19 + 4);
  }
  if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
    sub_14000D2C8((__int64)off_140018050->DeviceExtension, a2, a3, v18, v29, a7, *((const char **)v16 + 1));
  return (unsigned int)v17;
}
