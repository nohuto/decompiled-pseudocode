/*
 * XREFs of ?CleanupCursorObject@@YAXPEAUtagCURSOR@@@Z @ 0x1C0049E6C
 * Callers:
 *     ?_DestroyCursor@@YA_NPEAUtagCURSOR@@K@Z @ 0x1C004829C (-_DestroyCursor@@YA_NPEAUtagCURSOR@@K@Z.c)
 * Callees:
 *     GreDereferenceObject @ 0x1C0049FA8 (GreDereferenceObject.c)
 *     ?vUnlock@SPRITERANGELOCK@@QEAAXXZ @ 0x1C006ADEC (-vUnlock@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ?DestroyAniIcon@@YAHPEAUtagACON@@@Z @ 0x1C008D128 (-DestroyAniIcon@@YAHPEAUtagACON@@@Z.c)
 *     ??0SEMOBJSHARED@@QEAA@PEAUHSEMAPHORE__@@@Z @ 0x1C00C4108 (--0SEMOBJSHARED@@QEAA@PEAUHSEMAPHORE__@@@Z.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00FB6CC (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     _lambda_a958981e61cb814173376795bd306db4_::operator() @ 0x1C026B168 (_lambda_a958981e61cb814173376795bd306db4_--operator().c)
 */

void __fastcall CleanupCursorObject(struct tagCURSOR *a1)
{
  __int64 v2; // rcx
  Gre::Base *v3; // rcx
  __int64 v4; // rsi
  HSURF v5; // rcx
  HSURF v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx
  struct Gre::Base::SESSION_GLOBALS *v9; // r14
  __int64 HDEV; // rax
  __int64 v11; // rbp
  __int64 v12; // [rsp+60h] [rbp+8h] BYREF
  __int64 v13; // [rsp+68h] [rbp+10h] BYREF
  __int64 v14; // [rsp+70h] [rbp+18h] BYREF
  char v15; // [rsp+78h] [rbp+20h] BYREF

  if ( *((_WORD *)a1 + 28) )
  {
    Win32FreePool(*((void **)a1 + 8));
    *((_DWORD *)a1 + 14) = 0;
    *((_QWORD *)a1 + 8) = 0LL;
  }
  v2 = *((unsigned __int16 *)a1 + 36);
  if ( (_WORD)v2 )
  {
    UserDeleteAtom(v2);
    *((_WORD *)a1 + 36) = 0;
  }
  if ( (*((_DWORD *)a1 + 20) & 8) != 0 )
  {
    DestroyAniIcon(a1);
  }
  else
  {
    v4 = *(_QWORD *)(SGDGetSessionState(v2) + 32);
    if ( *(struct tagCURSOR **)(v4 + 8624) == (struct tagCURSOR *)((char *)a1 + 80) )
    {
      v9 = Gre::Base::Globals(v3);
      SEMOBJSHARED::SEMOBJSHARED((SEMOBJSHARED *)&v15, *((HSEMAPHORE *)v9 + 10));
      HDEV = UserGetHDEV();
      if ( HDEV )
      {
        v13 = HDEV;
        v11 = *(_QWORD *)(HDEV + 56);
        v12 = v4;
        if ( PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v13) )
        {
          lambda_a958981e61cb814173376795bd306db4_::operator()(&v12, v11, (char *)a1 + 80);
        }
        else
        {
          v14 = *((_QWORD *)v9 + 15);
          GreAcquireSemaphore(v14);
          lambda_a958981e61cb814173376795bd306db4_::operator()(&v12, v11, (char *)a1 + 80);
          SEMOBJ::vUnlock((SEMOBJ *)&v14);
        }
      }
      SPRITERANGELOCK::vUnlock((SPRITERANGELOCK *)&v15);
    }
    v5 = (HSURF)*((_QWORD *)a1 + 11);
    if ( v5 )
    {
      GreDereferenceObject(v5);
      GreDecQuotaCount(*((_QWORD *)a1 + 3));
      *((_QWORD *)a1 + 11) = 0LL;
    }
    v6 = (HSURF)*((_QWORD *)a1 + 12);
    if ( v6 )
    {
      GreDereferenceObject(v6);
      GreDecQuotaCount(*((_QWORD *)a1 + 3));
      *((_QWORD *)a1 + 12) = 0LL;
    }
    v7 = *((_QWORD *)a1 + 16);
    if ( v7 )
    {
      GreDeleteObject(v7);
      GreDecQuotaCount(*((_QWORD *)a1 + 3));
      *((_QWORD *)a1 + 16) = 0LL;
    }
    v8 = *((_QWORD *)a1 + 13);
    if ( v8 )
    {
      GreDeleteObject(v8);
      *((_QWORD *)a1 + 13) = 0LL;
    }
  }
}
