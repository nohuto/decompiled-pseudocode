/*
 * XREFs of ?bSaveRegion@@YAHAEAVXDCOBJ@@J@Z @ 0x1C011C144
 * Callers:
 *     GreSaveDCInternal @ 0x1C006DAB0 (GreSaveDCInternal.c)
 * Callees:
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C00C2C24 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C00C2C70 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C011C700 (--1DCOBJ@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C01381F0 (__security_check_cookie.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ @ 0x1C013DB9C (--0-$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ.c)
 *     ??1?$lambda_call@V_lambda_d4ac050843a32da14874304f2689d2a8_@@@details@wil@@QEAA@XZ @ 0x1C013E290 (--1-$lambda_call@V_lambda_d4ac050843a32da14874304f2689d2a8_@@@details@wil@@QEAA@XZ.c)
 *     ?AcquireDcVisRgnExclusive@DC@@QEAA@XZ @ 0x1C01403A4 (-AcquireDcVisRgnExclusive@DC@@QEAA@XZ.c)
 *     ??YERECTL@@QEAAXAEBU_POINTL@@@Z @ 0x1C0264E94 (--YERECTL@@QEAAXAEBU_POINTL@@@Z.c)
 *     ?vMarkTransformDirty@DC@@QEAAXXZ @ 0x1C026632C (-vMarkTransformDirty@DC@@QEAAXXZ.c)
 *     ?prgnVis@DC@@QEAAPEAVREGION@@PEAV2@@Z @ 0x1C0302BE8 (-prgnVis@DC@@QEAAPEAVREGION@@PEAV2@@Z.c)
 */

__int64 __fastcall bSaveRegion(DC **a1, int a2)
{
  DC *v2; // rbx
  unsigned int v3; // esi
  __int64 v5; // rax
  __int64 v7; // rbx
  __int64 v8; // rbx
  __int64 v9; // rdx
  __int64 *ThreadWin32Thread; // rax
  __int64 v11; // rax
  _QWORD *v12; // rax
  bool v13; // zf
  struct UMPDOBJ *v14; // rax
  DC *v15; // rdx
  int v16; // ebx
  struct _DC_ATTR *UserAttr; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  _BYTE v20[8]; // [rsp+20h] [rbp-29h] BYREF
  DC *v21; // [rsp+28h] [rbp-21h] BYREF
  __int64 v22; // [rsp+30h] [rbp-19h]
  _BYTE v23[32]; // [rsp+38h] [rbp-11h] BYREF
  struct REGION *v24; // [rsp+58h] [rbp+Fh] BYREF
  struct _RECTL v25; // [rsp+60h] [rbp+17h] BYREF
  struct _RECTL v26; // [rsp+70h] [rbp+27h] BYREF

  v2 = *a1;
  v3 = 1;
  if ( a2 != 1 )
  {
    v8 = *((_QWORD *)v2 + 14);
    v22 = 0LL;
    UnexpectedThreadTerminationHandler<DCOBJ>::UnexpectedThreadTerminationHandler<DCOBJ>(v23);
    LOBYTE(v9) = 1;
    v21 = (DC *)HmgLockEx(v8, v9, 0LL);
    if ( v21 )
    {
      ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
      if ( !ThreadWin32Thread
        || (v11 = *ThreadWin32Thread) == 0
        || (v12 = (_QWORD *)(v11 + 40), v13 = *v12 == (_QWORD)v12, v14 = (struct UMPDOBJ *)(*v12 - 40LL), v13) )
      {
        v14 = 0LL;
      }
      v15 = v21;
      if ( *((_WORD *)v21 + 6) == 1 )
      {
        *((_QWORD *)v21 + 271) = v14;
        *((_DWORD *)v21 + 544) = 0xFFFF;
        v15 = v21;
      }
      else if ( *((struct UMPDOBJ **)v21 + 271) != v14 )
      {
        XDCOBJ::LogUmpdCallbackStatus((XDCOBJ *)&v21, v14);
        goto LABEL_24;
      }
      if ( HIDWORD(v22) )
      {
        if ( (*(_DWORD *)(*((_QWORD *)v15 + 6) + 40LL) & 0x8000) == 0 )
        {
LABEL_21:
          _InterlockedDecrement((volatile signed __int32 *)v15 + 3);
LABEL_25:
          v21 = 0LL;
          goto LABEL_26;
        }
        v16 = *((_DWORD *)v15 + 528);
        if ( v16 != ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) )
        {
          v15 = v21;
          goto LABEL_21;
        }
      }
      else
      {
        if ( !*((_DWORD *)v15 + 528) )
        {
LABEL_35:
          if ( !v15 )
            goto LABEL_26;
          if ( (*((_DWORD *)v15 + 11) & 2) != 0 )
            goto LABEL_42;
          if ( HIDWORD(v22) )
          {
LABEL_41:
            *((_DWORD *)v15 + 11) |= 2u;
            v15 = v21;
            LODWORD(v22) = 1;
LABEL_42:
            if ( (*((_DWORD *)v15 + 130) & 4) != 0 )
            {
              DC::vMarkTransformDirty(v15);
              v15 = v21;
            }
            if ( v15 )
            {
              v18 = *((_QWORD *)v15 + 21);
              if ( v18 )
              {
                ++*(_DWORD *)(v18 + 76);
                v15 = v21;
              }
              v19 = *((_QWORD *)v15 + 20);
              if ( v19 )
                ++*(_DWORD *)(v19 + 76);
              goto LABEL_27;
            }
LABEL_26:
            v3 = 0;
LABEL_27:
            DCOBJ::~DCOBJ((DCOBJ *)&v21);
            return v3;
          }
          UserAttr = XDCOBJ::GetUserAttr((XDCOBJ *)&v21);
          if ( !UserAttr || DC::SaveAttributes(v21, UserAttr) )
          {
            v15 = v21;
            goto LABEL_41;
          }
LABEL_24:
          _InterlockedDecrement((volatile signed __int32 *)v21 + 3);
          goto LABEL_25;
        }
        *((_DWORD *)v15 + 528) = 0;
      }
    }
    else if ( (unsigned __int8)PsIsWin32KFilterAuditEnabled() || (unsigned __int8)PsIsWin32KFilterEnabled() )
    {
      PsGetWin32KFilterSet();
    }
    v15 = v21;
    goto LABEL_35;
  }
  v5 = *((_QWORD *)v2 + 64);
  *(_QWORD *)&v25.right = (unsigned int)v5;
  v25.top = HIDWORD(v5);
  v25.left = 0;
  RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v24);
  if ( !v24 )
    return 0LL;
  v7 = *((_QWORD *)*a1 + 6);
  if ( *((_QWORD *)*a1 + 62) )
  {
    DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)v20);
    if ( (*(_DWORD *)(v7 + 40) & 0x20000) != 0 && *(int *)(*((_QWORD *)*a1 + 62) + 112LL) < 0 )
    {
      v26 = v25;
      ERECTL::operator+=(&v26, v7 + 2560);
    }
    DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)v20);
  }
  RGNOBJ::vSet((RGNOBJ *)&v24, &v25);
  DC::AcquireDcVisRgnExclusive(*a1);
  DC::prgnVis(*a1, v24);
  wil::details::lambda_call<_lambda_d4ac050843a32da14874304f2689d2a8_>::~lambda_call<_lambda_d4ac050843a32da14874304f2689d2a8_>(&v26);
  return v3;
}
