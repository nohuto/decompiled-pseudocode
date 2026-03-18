/*
 * XREFs of ?GetStats@CRemoteRenderTarget@@UEAA_N_KPEAUtagCOMPOSITION_TARGET_STATS_2@@@Z @ 0x18028AF00
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     memset_0 @ 0x18025D108 (memset_0.c)
 *     ?GetPresentTime@CRemoteRenderTarget@@IEBA_KXZ @ 0x18028AED0 (-GetPresentTime@CRemoteRenderTarget@@IEBA_KXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall CRemoteRenderTarget::GetStats(
        CRemoteRenderTarget *this,
        __int64 a2,
        struct tagCOMPOSITION_TARGET_STATS_2 *a3)
{
  __int64 v5; // rcx
  int v6; // esi
  int v7; // edx
  unsigned __int64 PresentTime; // rax
  unsigned int v9; // edx
  int v10; // ecx
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rax
  int v14; // r8d
  int v16; // [rsp+20h] [rbp-78h] BYREF
  int v17; // [rsp+24h] [rbp-74h]
  __int64 v18; // [rsp+28h] [rbp-70h]
  int v19; // [rsp+30h] [rbp-68h]
  __int64 v20; // [rsp+38h] [rbp-60h]
  __int64 v21; // [rsp+58h] [rbp-40h]

  v5 = *((_QWORD *)this + 4);
  if ( !v5 )
    return 0;
  v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 96LL))(v5);
  *((_QWORD *)a3 + 1) = CRemoteRenderTarget::GetPresentTime((CRemoteRenderTarget *)((char *)this - 160));
  *((_QWORD *)a3 + 2) = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 4) + 160LL))(*((_QWORD *)this + 4));
  memset_0(&v16, 0, 0x50uLL);
  if ( v6 && (*(int (__fastcall **)(_QWORD, int *))(**((_QWORD **)this + 4) + 168LL))(*((_QWORD *)this + 4), &v16) >= 0 )
  {
    v7 = 8;
    if ( (unsigned int)(v6 - v16) < 8 )
      v7 = v6 - v16;
    *(_DWORD *)a3 = v7;
    PresentTime = CRemoteRenderTarget::GetPresentTime((CRemoteRenderTarget *)((char *)this - 160));
    v10 = v9 + v19;
    *((_QWORD *)a3 + 1) = PresentTime;
    *((_DWORD *)a3 + 7) = v10;
    *((_DWORD *)a3 + 8) = v10;
    *((_DWORD *)a3 + 6) = v9 + v6;
    LODWORD(PresentTime) = v17;
    *((_DWORD *)a3 + 15) = v17;
    *((_DWORD *)a3 + 16) = PresentTime;
    v11 = *((_QWORD *)a3 + 2) * v9;
    *((_QWORD *)a3 + 9) = v18;
    v12 = v20 + v11;
    v13 = v21;
    *((_QWORD *)a3 + 5) = v12;
    *((_QWORD *)a3 + 6) = v12;
    *((_DWORD *)a3 + 14) = v14;
    *((_QWORD *)a3 + 10) = v13;
  }
  else
  {
    *(_DWORD *)a3 = 0;
    *((_DWORD *)a3 + 6) = 0;
    *((_DWORD *)a3 + 7) = 0;
    *((_DWORD *)a3 + 8) = 0;
    *((_QWORD *)a3 + 5) = 0LL;
    *((_DWORD *)a3 + 14) = 0;
    *((_DWORD *)a3 + 15) = 0;
    *((_DWORD *)a3 + 16) = 0;
    *((_QWORD *)a3 + 9) = 0LL;
  }
  return 1;
}
