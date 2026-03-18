/*
 * XREFs of ?vDeleteDriverRealization@SURFACE@@QEAAXXZ @ 0x1400382C0
 * Callers:
 *     ?bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x140037010 (-bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 * Callees:
 *     ?bAllowDDICall@PDEVOBJ@@QEBAHXZ @ 0x14003DCC4 (-bAllowDDICall@PDEVOBJ@@QEBAHXZ.c)
 *     ?assertDhpdev@SURFACE@@QEAA_NXZ @ 0x140125A08 (-assertDhpdev@SURFACE@@QEAA_NXZ.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

void __fastcall SURFACE::vDeleteDriverRealization(SURFACE *this)
{
  bool v1; // zf
  _QWORD *v2; // r15
  _QWORD *v3; // rbx
  unsigned __int64 v4; // r14
  __int64 v5; // rsi
  void (__fastcall *v7)(__int64); // rax
  __int64 v8; // rcx
  int (*v9)(void); // rax
  __int64 v10; // rbx
  void (__fastcall *v11)(__int64, __int64); // rax
  _QWORD *v12; // [rsp+40h] [rbp+8h] BYREF

  v1 = (*((_DWORD *)this + 28) & 0x400000) == 0;
  v2 = (_QWORD *)((char *)this + 48);
  v3 = (_QWORD *)*((_QWORD *)this + 6);
  v4 = (unsigned __int64)this + 24;
  v5 = *((_QWORD *)this + 3);
  v12 = v3;
  if ( !v1 && v5 && v3 && SURFACE::assertDhpdev(this) )
  {
    if ( (*((_DWORD *)this + 29) & 9) != 0 )
    {
      v7 = (void (__fastcall *)(__int64))v3[332];
      if ( v7 )
      {
        v8 = v4 & -(__int64)(this != 0LL);
        goto LABEL_10;
      }
      v7 = (void (__fastcall *)(__int64))v3[430];
      if ( v7 )
      {
LABEL_9:
        v8 = v5;
LABEL_10:
        v7(v8);
      }
    }
    else
    {
      if ( !v3[346] )
        goto LABEL_2;
      if ( (*((_DWORD *)this + 28) & 0x40000) == 0 )
      {
        v7 = (void (__fastcall *)(__int64))v3[346];
        goto LABEL_9;
      }
      if ( (unsigned int)PDEVOBJ::bAllowDDICall((PDEVOBJ *)&v12) )
      {
        v9 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable() + 24) + 2088LL);
        if ( v9 )
        {
          if ( v9() >= 0 )
          {
            v10 = v3[223];
            v11 = *(void (__fastcall **)(__int64, __int64))(*(_QWORD *)(W32GetWin32kBaseApiSetTable() + 24) + 2096LL);
            if ( v11 )
              v11(v10, v5);
          }
        }
      }
    }
  }
LABEL_2:
  *v2 = 0LL;
  *(_QWORD *)v4 = 0LL;
}
