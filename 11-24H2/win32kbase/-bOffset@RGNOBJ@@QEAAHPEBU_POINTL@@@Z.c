/*
 * XREFs of ?bOffset@RGNOBJ@@QEAAHPEBU_POINTL@@@Z @ 0x14002D8C0
 * Callers:
 *     ?vOffset@EPATHOBJ@@QEAAXAEBVEPOINTL@@@Z @ 0x1400EE340 (-vOffset@EPATHOBJ@@QEAAXAEBVEPOINTL@@@Z.c)
 *     EngUpdateDeviceSurface @ 0x140174F70 (EngUpdateDeviceSurface.c)
 * Callees:
 *     ?RegionCore_get_pScan_mut@Win32kRS@@YAPEAVSCAN@@PEAVREGION_CORE@@@Z @ 0x140029144 (-RegionCore_get_pScan_mut@Win32kRS@@YAPEAVSCAN@@PEAVREGION_CORE@@@Z.c)
 *     EngSetLastError @ 0x14002DB90 (EngSetLastError.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall RGNOBJ::bOffset(int **this, const struct _POINTL *a2)
{
  __int64 *SystemArgument1; // rdi
  char *v5; // rbx
  __int64 v6; // rbp
  __int64 v7; // rdi
  unsigned int v8; // esi
  int *v10; // r10
  __int64 x; // rbx
  __int64 y; // rbp
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // r15
  __int64 v16; // rdx
  int v17; // esi
  __int64 v18; // rcx
  unsigned int *v19; // rax
  unsigned int *i; // rdx
  __int128 v21; // [rsp+50h] [rbp-38h]

  SystemArgument1 = (__int64 *)WPP_MAIN_CB.Dpc.SystemArgument1;
  if ( WPP_MAIN_CB.Dpc.SystemArgument1 )
  {
    v5 = (char *)WPP_MAIN_CB.Dpc.SystemArgument1 + 8;
    v6 = (__int64)(*this + 6);
    if ( !*this )
      v6 = 0LL;
    KeEnterCriticalRegion();
    ExAcquirePushLockSharedEx(SystemArgument1 + 1, 2LL);
    v7 = *SystemArgument1;
    v8 = (*(__int64 (__fastcall **)(__int64, const struct _POINTL *))(v7 + 136))(v6, a2);
    if ( !(*(unsigned int (__fastcall **)(__int64))(v7 + 216))(v6) )
      DbgkWerCaptureLiveKernelDump(L"GreLKD", 400LL, 64LL, v6, 0LL, 0LL, 0LL, 0LL, 0);
    ExReleasePushLockSharedEx(v5, 2LL);
    KeLeaveCriticalRegion();
    return v8;
  }
  else
  {
    v10 = *this;
    x = a2->x;
    y = a2->y;
    if ( (*this)[12] == 1 )
      return 1LL;
    v13 = v10[13];
    v14 = v10[15];
    v15 = v10[14];
    v16 = v10[16];
    if ( (int)v13 >= (int)v14 || (int)v15 >= (int)v16 )
    {
      return 1LL;
    }
    else if ( (unsigned __int64)(x + v13 + 0x80000000LL) > 0xFFFFFFFF
           || (unsigned __int64)(v16 + y + 0x80000000LL) > 0xFFFFFFFF
           || (unsigned __int64)(x + v14 + 0x80000000LL) > 0xFFFFFFFF
           || (unsigned __int64)(v15 + y + 0x80000000LL) > 0xFFFFFFFF
           || (((_DWORD)x + (_DWORD)v13) & 0xF8000000) != 0 && (((_DWORD)x + (_DWORD)v13) & 0xF8000000) != -134217728
           || (((((_DWORD)v16 + (_DWORD)y) & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) != 0
           || (((((_DWORD)x + (_DWORD)v14) & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) != 0
           || (((((_DWORD)v15 + (_DWORD)y) & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) != 0 )
    {
      EngSetLastError(0x216u);
      return 0LL;
    }
    else
    {
      LODWORD(v21) = x + v13;
      DWORD1(v21) = v15 + y;
      DWORD2(v21) = x + v14;
      HIDWORD(v21) = v16 + y;
      *(_OWORD *)(v10 + 13) = v21;
      v17 = (*this)[12];
      for ( i = (unsigned int *)*((_QWORD *)*this + 3); v17; i += *i + 4 )
      {
        i[1] += y;
        --v17;
        i[2] += y;
        v18 = *i;
        if ( (_DWORD)v18 )
        {
          v19 = &i[v18 + 3];
          do
          {
            *--v19 += x;
            LODWORD(v18) = v18 - 1;
          }
          while ( (_DWORD)v18 );
        }
      }
      i[-*(i - 1) - 2] = 0x7FFFFFFF;
      *(_DWORD *)(*((_QWORD *)*this + 3) + 4LL) = 0x80000000;
      return 1LL;
    }
  }
}
