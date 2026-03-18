/*
 * XREFs of UserSetDCVisRgn @ 0x14000F460
 * Callers:
 *     <none>
 * Callees:
 *     IsGetStyleWindowSupported @ 0x14000F1C4 (IsGetStyleWindowSupported.c)
 *     GetStyleWindow @ 0x14000F1FC (GetStyleWindow.c)
 *     ?ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z @ 0x14000F604 (-ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z.c)
 *     GreDeleteObject @ 0x140010390 (GreDeleteObject.c)
 *     CreateEmptyRgnPublic @ 0x140010E60 (CreateEmptyRgnPublic.c)
 *     GreCombineRgn @ 0x140025D30 (GreCombineRgn.c)
 *     GreOffsetRgn @ 0x14002C0D0 (GreOffsetRgn.c)
 *     GreSetRectRgn @ 0x14002C480 (GreSetRectRgn.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

void __fastcall UserSetDCVisRgn(struct tagDCE *a1)
{
  int (*v2)(void); // rax
  __int64 v3; // r14
  _DWORD *v4; // rbx
  unsigned int v5; // ebp
  __int64 *v6; // rsi
  __int64 v7; // r15
  unsigned int (__fastcall *v8)(HRGN *, __int64, __int64, _QWORD); // rax
  HRGN EmptyRgnPublic; // rsi
  int v10; // ebp
  HRGN v11; // rcx
  struct REGION_CORE *v12; // [rsp+20h] [rbp-28h]
  HRGN v13; // [rsp+50h] [rbp+8h] BYREF

  v13 = 0LL;
  v2 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable() + 48) + 2592LL);
  if ( v2 && v2() >= 0 )
  {
    v3 = *((_QWORD *)a1 + 11);
    v4 = (_DWORD *)((char *)a1 + 48);
    v5 = *((_DWORD *)a1 + 12);
    v6 = (__int64 *)((char *)a1 + 80);
    v7 = *((_QWORD *)a1 + 10);
    v8 = *(unsigned int (__fastcall **)(HRGN *, __int64, __int64, _QWORD))(*(_QWORD *)(W32GetWin32kBaseApiSetTable() + 48)
                                                                         + 2600LL);
    if ( v8 && v8(&v13, v7, v3, v5) )
    {
      *v4 &= ~0x10000000u;
      v4 = (_DWORD *)((char *)a1 + 48);
      goto LABEL_6;
    }
  }
  else
  {
    v4 = (_DWORD *)((char *)a1 + 48);
    v6 = (__int64 *)((char *)a1 + 80);
  }
  *v4 |= 0x10000000u;
LABEL_6:
  if ( *((_QWORD *)a1 + 4) > 2uLL && (int)IsGetStyleWindowSupported() >= 0 && GetStyleWindow(*v6) )
  {
    EmptyRgnPublic = (HRGN)CreateEmptyRgnPublic();
    GreCombineRgn(EmptyRgnPublic, *((HRGN *)a1 + 4), 0LL);
    GreOffsetRgn(EmptyRgnPublic);
    v10 = 1;
  }
  else
  {
    EmptyRgnPublic = (HRGN)*((_QWORD *)a1 + 4);
    v10 = 0;
  }
  if ( (*v4 & 0x80u) != 0 )
  {
    v11 = v13;
    if ( EmptyRgnPublic )
    {
LABEL_15:
      GreCombineRgn(v11, v11, EmptyRgnPublic);
      goto LABEL_10;
    }
  }
  else
  {
    if ( (*v4 & 0x40) == 0 )
      goto LABEL_10;
    v11 = v13;
    if ( EmptyRgnPublic != (HRGN)1 )
      goto LABEL_15;
  }
  LODWORD(v12) = 0;
  GreSetRectRgn(v11, v12);
LABEL_10:
  ResetOrg(v13, a1, 1);
  if ( v10 )
    GreDeleteObject(EmptyRgnPublic);
}
