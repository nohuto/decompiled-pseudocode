/*
 * XREFs of ?GetNCUpdateRgn@@YAPEAUHRGN__@@PEAUtagWND@@H@Z @ 0x1400363D4
 * Callers:
 *     xxxBeginPaint @ 0x140034CB0 (xxxBeginPaint.c)
 *     xxxSimpleDoSyncPaint @ 0x1400477B0 (xxxSimpleDoSyncPaint.c)
 * Callees:
 *     DecPaintCount @ 0x140035D9C (DecPaintCount.c)
 *     CalcWindowRgn @ 0x1400367C4 (CalcWindowRgn.c)
 *     SetOrClrWF @ 0x140049160 (SetOrClrWF.c)
 */

unsigned __int64 __fastcall GetNCUpdateRgn(struct tagWND *a1, int a2)
{
  unsigned __int64 EmptyRgnPublic; // rdi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 UserSessionState; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rax
  int v12; // eax

  EmptyRgnPublic = *(_QWORD *)(*((_QWORD *)a1 + 5) + 136LL);
  if ( EmptyRgnPublic <= 1 )
    return EmptyRgnPublic;
  EmptyRgnPublic = CreateEmptyRgnPublic();
  if ( EmptyRgnPublic )
  {
    if ( (unsigned int)GreCombineRgn(EmptyRgnPublic, *(_QWORD *)(*((_QWORD *)a1 + 5) + 136LL), 0LL, 5LL) )
      goto LABEL_5;
    GreDeleteObject(EmptyRgnPublic);
  }
  EmptyRgnPublic = 1LL;
LABEL_5:
  if ( a2 )
  {
    UserSessionState = W32GetUserSessionState(v7, v6);
    CalcWindowRgn(a1, *(_QWORD *)(UserSessionState + 63416), 1LL);
    v11 = W32GetUserSessionState(v10, v9);
    v12 = GreCombineRgn(
            *(_QWORD *)(*((_QWORD *)a1 + 5) + 136LL),
            *(_QWORD *)(*((_QWORD *)a1 + 5) + 136LL),
            *(_QWORD *)(v11 + 63416),
            1LL);
    if ( v12 )
    {
      if ( v12 == 1 )
      {
        GreDeleteObject(*(_QWORD *)(*((_QWORD *)a1 + 5) + 136LL));
        *(_QWORD *)(*((_QWORD *)a1 + 5) + 136LL) = 0LL;
        SetOrClrWF(0LL, a1, 288LL, 1LL);
        if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 17LL) & 0x10) == 0 )
          DecPaintCount((__int64)a1);
      }
    }
    else
    {
      GreDeleteObject(*(_QWORD *)(*((_QWORD *)a1 + 5) + 136LL));
      *(_QWORD *)(*((_QWORD *)a1 + 5) + 136LL) = 1LL;
    }
  }
  return EmptyRgnPublic;
}
