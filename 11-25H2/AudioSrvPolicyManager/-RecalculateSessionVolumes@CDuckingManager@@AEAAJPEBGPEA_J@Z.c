/*
 * XREFs of ?RecalculateSessionVolumes@CDuckingManager@@AEAAJPEBGPEA_J@Z @ 0x180030E98
 * Callers:
 *     _lambda_1e03ffd0b3816784b19a9acf2aab20e8_::operator() @ 0x18002EF7C (_lambda_1e03ffd0b3816784b19a9acf2aab20e8_--operator().c)
 *     _lambda_aa732a8a991b7eb0f1632fe44cffa677_::operator() @ 0x18002F478 (_lambda_aa732a8a991b7eb0f1632fe44cffa677_--operator().c)
 * Callees:
 *     __security_check_cookie @ 0x180020100 (__security_check_cookie.c)
 *     ?ForEachDuckableSession@CDuckingManager@@AEAAJPEBG$$QEAV?$function@$$A6AJPEAUIAudioSessionInfo@@@Z@std@@@Z @ 0x18002FD60 (-ForEachDuckableSession@CDuckingManager@@AEAAJPEBG$$QEAV-$function@$$A6AJPEAUIAudioSessionInfo@@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18004F010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDuckingManager::RecalculateSessionVolumes(
        CDuckingManager *this,
        const unsigned __int16 *a2,
        __int64 *a3)
{
  _QWORD *v3; // rdx
  _QWORD v5[7]; // [rsp+20h] [rbp-58h] BYREF
  _QWORD *v6; // [rsp+58h] [rbp-20h]
  __int64 *v7; // [rsp+90h] [rbp+18h] BYREF

  v7 = a3;
  v5[0] = off_180053938;
  v5[1] = &v7;
  v6 = v5;
  CDuckingManager::ForEachDuckableSession((__int64)this, (__int64)a2, (__int64)v5);
  if ( v6 )
  {
    v3 = v5;
    LOBYTE(v3) = v6 != v5;
    (*(void (__fastcall **)(_QWORD *, _QWORD *))(*v6 + 32LL))(v6, v3);
  }
  return 0LL;
}
