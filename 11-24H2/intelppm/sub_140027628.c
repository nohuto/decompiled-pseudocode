/*
 * XREFs of sub_140027628 @ 0x140027628
 * Callers:
 *     sub_140041578 @ 0x140041578 (sub_140041578.c)
 * Callees:
 *     sub_140003D28 @ 0x140003D28 (sub_140003D28.c)
 *     sub_1400050F8 @ 0x1400050F8 (sub_1400050F8.c)
 *     _guard_dispatch_icall @ 0x1400102D0 (_guard_dispatch_icall.c)
 *     sub_1400279B4 @ 0x1400279B4 (sub_1400279B4.c)
 *     sub_14002DC40 @ 0x14002DC40 (sub_14002DC40.c)
 *     sub_14002FE6C @ 0x14002FE6C (sub_14002FE6C.c)
 *     sub_140031D38 @ 0x140031D38 (sub_140031D38.c)
 *     ?get_DynamicTerminalClasses@CMSPAddress@@UEAAJPEAUtagVARIANT@@@Z @ 0x1400323EC (-get_DynamicTerminalClasses@CMSPAddress@@UEAAJPEAUtagVARIANT@@@Z.c)
 *     sub_1400347CC @ 0x1400347CC (sub_1400347CC.c)
 *     sub_140034938 @ 0x140034938 (sub_140034938.c)
 */

__int64 __fastcall sub_140027628(CMSPAddress *this)
{
  __int64 v1; // rdx
  int v3; // esi
  int v4; // eax
  int v5; // edx
  int v6; // edi
  int DynamicTerminalClasses; // eax
  int v8; // edx
  int v9; // eax
  int v10; // edx
  __int64 v11; // r8
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rdi
  __int64 v18; // [rsp+28h] [rbp-30h]
  unsigned int v19; // [rsp+60h] [rbp+8h] BYREF

  v1 = *((_QWORD *)this + 26);
  v19 = 0;
  (*(void (__fastcall **)(__int64, __int64, _QWORD))(qword_140019120 + 2504))(qword_140019128, v1, 0LL);
  v3 = 0;
  v4 = sub_1400279B4(this, 1413697631LL, (char *)this + 424);
  v6 = v4;
  if ( v4 < 0 )
  {
    if ( v4 == -1073741772 )
    {
      if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
      {
        LOBYTE(v5) = 4;
        sub_140003D28(off_140018050->DeviceExtension, v5, 2, 10, (__int64)&unk_140013160);
      }
    }
    else if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
    {
      sub_1400050F8((__int64)off_140018050->DeviceExtension, 3u, 3u, 0xBu, (__int64)&unk_140013160, v4);
    }
    v3 = v6;
  }
  if ( (*((_DWORD *)this + 70) & 0x40000000) != 0 )
  {
    DynamicTerminalClasses = CMSPAddress::get_DynamicTerminalClasses(this, (CMSPAddress *)((char *)this + 456));
    v6 = DynamicTerminalClasses;
    if ( DynamicTerminalClasses < 0 )
    {
      if ( DynamicTerminalClasses == -1073741772 )
      {
        if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
        {
          LOBYTE(v8) = 4;
          sub_140003D28(off_140018050->DeviceExtension, v8, 2, 12, (__int64)&unk_140013160);
        }
      }
      else if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
      {
        LODWORD(v18) = DynamicTerminalClasses;
        sub_1400050F8((__int64)off_140018050->DeviceExtension, 3u, 3u, 0xDu, (__int64)&unk_140013160, v18);
      }
      *((_QWORD *)this + 35) &= ~0x40000000uLL;
    }
  }
  if ( (*((_DWORD *)this + 70) & 0x30000000) != 0 )
  {
    v9 = sub_140031D38(this, (char *)this + 448);
    v6 = v9;
    if ( v9 < 0 )
    {
      if ( v9 == -1073741772 )
      {
        if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
        {
          LOBYTE(v10) = 4;
          sub_140003D28(off_140018050->DeviceExtension, v10, 2, 14, (__int64)&unk_140013160);
        }
      }
      else if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
      {
        LODWORD(v18) = v9;
        sub_1400050F8((__int64)off_140018050->DeviceExtension, 3u, 3u, 0xFu, (__int64)&unk_140013160, v18);
      }
      *((_QWORD *)this + 35) &= 0xFFFFFFFFCFFFFFFFuLL;
      if ( (*((_QWORD *)this + 35) & 0x40000000LL) != 0 )
        v6 = 0;
    }
  }
  if ( v3 >= 0 )
  {
    if ( v6 >= 0 )
    {
      if ( (*((_DWORD *)this + 70) & 0x40000000) != 0 )
      {
        v11 = *((_QWORD *)this + 8);
        v12 = *((_QWORD *)this + 57);
        v19 = 0;
        v6 = sub_14002FE6C((char *)this + 424, v12, v11, &v19);
        if ( v6 < 0 )
        {
          _InterlockedOr((volatile signed __int32 *)this + 278, v19);
          *((_QWORD *)this + 35) &= ~0x40000000uLL;
          if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
          {
            LODWORD(v18) = v6;
            sub_1400050F8((__int64)off_140018050->DeviceExtension, 3u, 3u, 0x10u, (__int64)&unk_140013160, v18);
          }
        }
      }
      if ( (*((_DWORD *)this + 70) & 0x30000000) != 0 )
      {
        v13 = *((_QWORD *)this + 8);
        v14 = *((_QWORD *)this + 56);
        v19 = 0;
        v6 = sub_14002DC40((char *)this + 424, v14, v13, &v19);
        if ( v6 < 0 )
        {
          _InterlockedOr((volatile signed __int32 *)this + 278, v19);
          *((_QWORD *)this + 35) &= 0xFFFFFFFFCFFFFFFFuLL;
          if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
          {
            LODWORD(v18) = v6;
            sub_1400050F8((__int64)off_140018050->DeviceExtension, 3u, 3u, 0x11u, (__int64)&unk_140013160, v18);
          }
        }
      }
      v15 = *((_QWORD *)this + 35);
      if ( (v15 & 0x40000000) != 0 )
      {
        v16 = *((_QWORD *)this + 57);
LABEL_39:
        sub_1400347CC((char *)this + 424, "_PCT");
        sub_140034938(v16);
        goto LABEL_41;
      }
      if ( (v15 & 0x30000000) != 0 )
      {
        v16 = *((_QWORD *)this + 56);
        goto LABEL_39;
      }
    }
    v3 = v6;
  }
LABEL_41:
  (*(void (__fastcall **)(__int64, _QWORD))(qword_140019120 + 2512))(qword_140019128, *((_QWORD *)this + 26));
  return (unsigned int)v3;
}
