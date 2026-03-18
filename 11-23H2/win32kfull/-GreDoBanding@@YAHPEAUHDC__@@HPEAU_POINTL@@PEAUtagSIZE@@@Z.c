/*
 * XREFs of ?GreDoBanding@@YAHPEAUHDC__@@HPEAU_POINTL@@PEAUtagSIZE@@@Z @ 0x1C0274AA8
 * Callers:
 *     NtGdiDoBanding @ 0x1C02779D0 (NtGdiDoBanding.c)
 * Callees:
 *     ?bValidSurf@XDCOBJ@@QEAAHXZ @ 0x1C007A418 (-bValidSurf@XDCOBJ@@QEAAHXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C011C090 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C011C700 (--1DCOBJ@@QEAA@XZ.c)
 *     ?vUnlockFast@XDCOBJ@@IEAAXXZ @ 0x1C011C72C (-vUnlockFast@XDCOBJ@@IEAAXXZ.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C013D7D0 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C01409C0 (_guard_dispatch_icall_nop.c)
 *     ?UmpdSecurityGateNoUmpdObj@@YA_NXZ @ 0x1C0275DA8 (-UmpdSecurityGateNoUmpdObj@@YA_NXZ.c)
 *     GreDeleteWnd @ 0x1C0287890 (GreDeleteWnd.c)
 */

__int64 __fastcall GreDoBanding(HDC a1, int a2, struct _POINTL *a3, struct tagSIZE *a4)
{
  __int64 v7; // rsi
  __int64 v8; // rbx
  __int64 (__fastcall *v9)(__int64, struct _POINTL *); // rbx
  unsigned int v10; // edi
  __int64 (__fastcall *v11)(__int64, struct _POINTL *); // rdi
  unsigned int v12; // ecx
  EWNDOBJ *v13; // rcx
  _QWORD v15[2]; // [rsp+20h] [rbp-48h] BYREF
  _BYTE v16[32]; // [rsp+30h] [rbp-38h] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v15, a1);
  if ( (unsigned int)XDCOBJ::bValidSurf((XDCOBJ *)v15)
    && (v7 = *(_QWORD *)(v15[0] + 496LL)) != 0
    && (v8 = *(_QWORD *)(v15[0] + 48LL), *(_QWORD *)(v8 + 2536))
    && (*(_DWORD *)(v7 + 112) & 0x2000000) != 0 )
  {
    if ( a2 )
    {
      v9 = *(__int64 (__fastcall **)(__int64, struct _POINTL *))(v8 + 3120);
      if ( !UmpdSecurityGateNoUmpdObj() || v9 )
        v10 = v9(v7 + 24, a3);
      else
        v10 = 0;
      a4->cx = *(_DWORD *)(v7 + 56);
      a4->cy = *(_DWORD *)(v7 + 60);
      *(struct _POINTL *)(v15[0] + 2104LL) = *a3;
    }
    else
    {
      v11 = *(__int64 (__fastcall **)(__int64, struct _POINTL *))(v8 + 3128);
      if ( !UmpdSecurityGateNoUmpdObj() || v11 )
      {
        v10 = v11(v7 + 24, a3);
        v12 = v10;
        if ( v10 )
        {
          if ( a3->x == -1 )
          {
            v10 &= -((*(_DWORD *)(v8 + 40) & 0x8000) != 0);
            if ( ((*(_DWORD *)(v8 + 40) & 0x8000) != 0 ? v12 : 0) != 0 )
            {
              *(_DWORD *)(v15[0] + 36LL) &= ~0x100u;
              v13 = *(EWNDOBJ **)(v7 + 136);
              if ( v13 )
              {
                GreDeleteWnd(v13);
                *(_QWORD *)(v7 + 136) = 0LL;
              }
              *(_WORD *)(v15[0] + 2088LL) = 0;
            }
          }
          else
          {
            *(struct _POINTL *)(v15[0] + 2104LL) = *a3;
          }
        }
      }
      else
      {
        v10 = 0;
      }
    }
    DCOBJ::~DCOBJ((DCOBJ *)v15);
    return v10;
  }
  else
  {
    if ( v15[0] )
      XDCOBJ::vUnlockFast((XDCOBJ *)v15);
    UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((__int64)v16);
    return 0LL;
  }
}
