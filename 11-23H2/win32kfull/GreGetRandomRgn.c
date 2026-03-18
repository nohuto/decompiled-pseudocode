/*
 * XREFs of GreGetRandomRgn @ 0x1C0131120
 * Callers:
 *     _ExcludeUpdateRgn @ 0x1C000674C (_ExcludeUpdateRgn.c)
 *     NtGdiGetRandomRgn @ 0x1C011C600 (NtGdiGetRandomRgn.c)
 *     ?GetTrueClipRgn@@YAHPEAUHDC__@@PEAUHRGN__@@@Z @ 0x1C022D6EC (-GetTrueClipRgn@@YAHPEAUHDC__@@PEAUHRGN__@@@Z.c)
 *     DrawTextExWorker @ 0x1C024C94C (DrawTextExWorker.c)
 * Callees:
 *     ??0DEVLOCKOBJ@@QEAA@XZ @ 0x1C00C32AC (--0DEVLOCKOBJ@@QEAA@XZ.c)
 *     UserGetRedirectedWindowOrigin @ 0x1C01198D0 (UserGetRedirectedWindowOrigin.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C011C090 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1RGNOBJAPI@@QEAA@XZ @ 0x1C011C44C (--1RGNOBJAPI@@QEAA@XZ.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C011C700 (--1DCOBJ@@QEAA@XZ.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x1C011C834 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ??1?$lambda_call@V_lambda_d4ac050843a32da14874304f2689d2a8_@@@details@wil@@QEAA@XZ @ 0x1C013E290 (--1-$lambda_call@V_lambda_d4ac050843a32da14874304f2689d2a8_@@@details@wil@@QEAA@XZ.c)
 *     ?AcquireDcVisRgnShared@DC@@QEAA@XZ @ 0x1C013E308 (-AcquireDcVisRgnShared@DC@@QEAA@XZ.c)
 *     _lambda_27add1e8d57a913bfbcc33c9b5f13734_::operator() @ 0x1C013F674 (_lambda_27add1e8d57a913bfbcc33c9b5f13734_--operator().c)
 *     ?TraceLoggingWriteUnsupportedGdiUsage@@YAXW4UnsupportedReason@@_K111@Z @ 0x1C0264948 (-TraceLoggingWriteUnsupportedGdiUsage@@YAXW4UnsupportedReason@@_K111@Z.c)
 */

__int64 __fastcall GreGetRandomRgn(HDC a1, HRGN a2, int a3)
{
  DC *v7; // rcx
  __int64 v8; // rcx
  unsigned int v9; // ebx
  int v10; // ebx
  int v11; // ebx
  int v12; // ebx
  __int64 v13; // rcx
  __int64 v14; // r8
  bool v15; // zf
  _QWORD v16[2]; // [rsp+30h] [rbp-D0h] BYREF
  DC *v17[6]; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v18; // [rsp+70h] [rbp-90h] BYREF
  _QWORD v19[7]; // [rsp+78h] [rbp-88h] BYREF
  _BYTE v20[112]; // [rsp+B0h] [rbp-50h] BYREF
  struct _POINTL v21; // [rsp+158h] [rbp+58h] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v17, a1);
  if ( !v17[0] )
    goto LABEL_2;
  if ( *((_WORD *)v17[0] + 6) != 1 )
  {
    TraceLoggingWriteUnsupportedGdiUsage(21LL, 0LL, *((unsigned __int16 *)v17[0] + 6));
LABEL_2:
    EngSetLastError(6u);
LABEL_3:
    DCOBJ::~DCOBJ((DCOBJ *)v17);
    return 0xFFFFFFFFLL;
  }
  DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v20);
  if ( !DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v20, (struct XDCOBJ *)v17, 1) )
  {
    DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v20);
    goto LABEL_3;
  }
  RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v19, a2, 0, 0);
  if ( !v19[0] )
    goto LABEL_16;
  v7 = v17[0];
  if ( a3 != 4 )
  {
    v10 = a3 - 1;
    if ( v10 )
    {
      v11 = v10 - 1;
      if ( v11 )
      {
        v12 = v11 - 1;
        if ( v12 )
        {
          if ( (unsigned int)(v12 - 1) >= 2 )
          {
            v9 = 0;
            goto LABEL_33;
          }
          goto LABEL_22;
        }
        v14 = *((_QWORD *)v17[0] + 21);
        v7 = (DC *)*((_QWORD *)v17[0] + 20);
        if ( v14 )
        {
          v15 = v7 == 0LL;
          if ( v7 )
          {
            v16[0] = *((_QWORD *)v17[0] + 20);
            v18 = v14;
            v9 = RGNOBJAPI::iCombine((RGNOBJAPI *)v19, (struct RGNOBJ *)v16, (struct RGNOBJ *)&v18, 1) != 0 ? 1 : -1;
            goto LABEL_33;
          }
        }
        else
        {
          v15 = v7 == 0LL;
        }
        if ( !v15 )
          v14 = *((_QWORD *)v17[0] + 20);
      }
      else
      {
        v14 = *((_QWORD *)v17[0] + 21);
      }
    }
    else
    {
      v14 = *((_QWORD *)v17[0] + 20);
    }
    v9 = lambda_27add1e8d57a913bfbcc33c9b5f13734_::operator()(v7, v19, v14);
    goto LABEL_33;
  }
  if ( (*((_DWORD *)v17[0] + 9) & 0x4000) == 0 )
  {
LABEL_22:
    DC::AcquireDcVisRgnShared(v17[0]);
    v9 = lambda_27add1e8d57a913bfbcc33c9b5f13734_::operator()(v13, v19, *((_QWORD *)v17[0] + 142));
    goto LABEL_12;
  }
  DC::AcquireDcVisRgnShared(v17[0]);
  v9 = lambda_27add1e8d57a913bfbcc33c9b5f13734_::operator()(v8, v19, *((_QWORD *)v17[0] + 142));
  if ( v9 == 1 )
  {
    wil::details::lambda_call<_lambda_d4ac050843a32da14874304f2689d2a8_>::~lambda_call<_lambda_d4ac050843a32da14874304f2689d2a8_>(v16);
    v21 = 0LL;
    if ( (unsigned int)UserGetRedirectedWindowOrigin((__int64)a1, (__int64)&v21) && RGNOBJ::bOffset((RGNOBJ *)v19, &v21) )
    {
      v9 = 1;
      goto LABEL_33;
    }
LABEL_16:
    v9 = -1;
    goto LABEL_33;
  }
LABEL_12:
  wil::details::lambda_call<_lambda_d4ac050843a32da14874304f2689d2a8_>::~lambda_call<_lambda_d4ac050843a32da14874304f2689d2a8_>(v16);
LABEL_33:
  RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v19);
  DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v20);
  DCOBJ::~DCOBJ((DCOBJ *)v17);
  return v9;
}
