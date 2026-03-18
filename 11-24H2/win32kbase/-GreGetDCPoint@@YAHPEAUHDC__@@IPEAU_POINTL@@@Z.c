/*
 * XREFs of ?GreGetDCPoint@@YAHPEAUHDC__@@IPEAU_POINTL@@@Z @ 0x140010910
 * Callers:
 *     GreGetDCOrgEx @ 0x14000F3C0 (GreGetDCOrgEx.c)
 *     GreGetDCOrg @ 0x140010E40 (GreGetDCOrg.c)
 *     xxxEnumDisplayMonitors @ 0x140042F90 (xxxEnumDisplayMonitors.c)
 * Callees:
 *     EnterSharedCrit @ 0x140010CB0 (EnterSharedCrit.c)
 *     ?vMakeIso@DC@@QEAAXXZ @ 0x1400114EC (-vMakeIso@DC@@QEAAXXZ.c)
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x14001D9D8 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x14001E1AC (--1APIDCOBJ@@QEAA@XZ.c)
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140023070 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     ?IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ @ 0x140042D80 (-IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall GreGetDCPoint(HDC a1, int a2, struct _POINTL *a3)
{
  int v3; // r14d
  unsigned int v4; // esi
  unsigned int v5; // edi
  unsigned int v8; // ebp
  DC *v9; // rdx
  unsigned int v10; // esi
  unsigned int v11; // esi
  unsigned int v12; // esi
  unsigned int v13; // esi
  int (*v15)(void); // rax
  unsigned int (__fastcall *v16)(HDC, struct _POINTL *); // rax
  char v17; // si
  unsigned int (__fastcall *v18)(HDC, __int64 *); // rax
  __int64 v19; // rcx
  struct _POINTL v20; // rcx
  DC *v21[14]; // [rsp+20h] [rbp-88h] BYREF
  __int64 v22; // [rsp+C8h] [rbp+20h] BYREF

  v3 = a2 & 0x40;
  v4 = a2 & 0xFFFFFFBF;
  v5 = 0;
  v8 = 1;
  if ( (a2 & 0xFFFFFFBF) != 0x10
    || (v15 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable() + 24) + 832LL)) == 0LL
    || v15() < 0 )
  {
    APIDCOBJ::APIDCOBJ((APIDCOBJ *)v21, a1);
    v9 = v21[0];
    if ( !v21[0] )
      goto LABEL_11;
    v10 = v4 - 1;
    if ( !v10 )
    {
      v19 = *((_QWORD *)v21[0] + 122);
      if ( (*(_DWORD *)(v19 + 340) & 0x4000) != 0 && *(_DWORD *)(v19 + 104) == 7 )
      {
        DC::vMakeIso(v21[0]);
        v9 = v21[0];
      }
      *a3 = *(struct _POINTL *)(*((_QWORD *)v9 + 122) + 332LL);
      goto LABEL_10;
    }
    v11 = v10 - 1;
    if ( v11 )
    {
      v12 = v11 - 2;
      if ( v12 )
      {
        v13 = v12 - 4;
        if ( !v13 )
        {
          *a3 = *(struct _POINTL *)(*((_QWORD *)v21[0] + 122) + 308LL);
          a3->x = *(_DWORD *)(*((_QWORD *)v9 + 122) + 304LL);
          goto LABEL_10;
        }
        if ( v13 == 24 )
        {
          *a3 = *(struct _POINTL *)((char *)v21[0] + 8 * (*((_DWORD *)v21[0] + 10) & 1LL) + 1016);
          if ( v3 && (*((_DWORD *)v9 + 9) & 0x4000) != 0 )
          {
            v22 = 0LL;
            if ( IS_USERCRIT_OWNED_AT_ALL() )
            {
              v17 = 0;
            }
            else
            {
              v17 = 1;
              EnterSharedCrit(1LL, 1LL);
            }
            v18 = *(unsigned int (__fastcall **)(HDC, __int64 *))(*(_QWORD *)(W32GetWin32kBaseApiSetTable() + 24) + 456LL);
            if ( v18 && v18(a1, &v22) )
            {
              a3->x += v22;
              a3->y += HIDWORD(v22);
            }
            if ( v17 )
              UserSessionSwitchLeaveCritWithNonPaged();
          }
          goto LABEL_10;
        }
LABEL_11:
        v8 = 0;
LABEL_10:
        APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v21);
        return v8;
      }
      v20 = *(struct _POINTL *)(*((_QWORD *)v21[0] + 122) + 324LL);
    }
    else
    {
      v20 = *(struct _POINTL *)(*((_QWORD *)v21[0] + 122) + 316LL);
    }
    *a3 = v20;
    if ( (*(_DWORD *)(*((_QWORD *)v9 + 122) + 108LL) & 1) != 0 )
      a3->x = -a3->x;
    goto LABEL_10;
  }
  v16 = *(unsigned int (__fastcall **)(HDC, struct _POINTL *))(*(_QWORD *)(W32GetWin32kBaseApiSetTable() + 24) + 840LL);
  if ( v16 )
    return v16(a1, a3);
  return v5;
}
